//chrono and ctime for random ints and getting the elapsed time
#include <iostream>
#include <chrono>
#include <ctime>

#include <map>
#include <unordered_map>

using namespace std;
using namespace std::chrono;



int main()
{
    //used for random integers
    srand(time(NULL));

    // m1 is the map that will have 10,000, m2 is the map that will have 100,000
    map<int,int> m1;
    map<int,int> m2;

    //all maps and the three operations insert, find, and erase
    for(int i = 1; i < 7; i++)
    {
        if(i == 1)
        {
            cout << "Testing for Maps" << endl;
            cout << "Testing for 10,000" << endl;
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                m1[rand()%10001] = rand()%10001;
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Map Insert 10,000 (s): " << elapsed_time /1e9 << endl;
        }
        else if (i == 2)
        {
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                m1.find(rand()%10001);
            }
            auto end = steady_clock::now();
            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());
            cout << "Elapsed Time for Map Find 10,000 (s): " << elapsed_time /1e9 << endl;

        }
        else if (i == 3)
        {
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                m1.erase(rand()%10001);
            }
            auto end = steady_clock::now();
            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());
            cout << "Elapsed Time for Map Erase 10,000 (s): " << elapsed_time /1e9 << endl;  
        }
        else if(i == 4)
        {
            cout << "Testing for 100,000" << endl;
            auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                m2[rand()%100001] = rand()%100001;
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Map Insert 100,000 (s): " << elapsed_time /1e9 << endl;
        }
        else if (i == 5)
        {
           auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                //cout << "made it to the insert at: " << j << endl;
                //m1.insert(pair<int,int>(rand()%10001, rand()%10001));
                m2.find(rand()%100001);
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Map Find 100,000 (s): " << elapsed_time /1e9 << endl;

        }
        else if (i == 6)
        {
           auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                m2.erase(rand()%100001);
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Map Erase 100,000 (s): " << elapsed_time /1e9 << endl;
        }
            
        else
            cout << "Reached the end for maps!" << endl;
    }

    cout << endl;

    unordered_map<int, int> um1;
    unordered_map<int, int> um2;

    for(int i = 1; i < 7; i++)
    {
        if(i == 1)
        {
            cout << "Testing for Unordered Maps" << endl;
            cout << "Testing for 10,000" << endl;
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                um1[rand()%10001] = rand()%10001;
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Unordered Map Insert 10,000 (s): " << elapsed_time /1e9 << endl;
        }
        else if (i == 2)
        {
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                um1.find(rand()%10001);
            }
            auto end = steady_clock::now();
            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());
            cout << "Elapsed Time for Unordered Map Find 10,000 (s): " << elapsed_time /1e9 << endl;

        }
        else if (i == 3)
        {
            auto start = steady_clock::now();
            for (int j = 0; j < 10000; j++)
            {
                um1.erase(rand()%10001);
            }
            auto end = steady_clock::now();
            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());
            cout << "Elapsed Time for Unordered Map Erase 10,000 (s): " << elapsed_time /1e9 << endl;  
        }
        else if(i == 4)
        {
            cout << "Testing for 100,000" << endl;
            auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                um2[rand()%100001] = rand()%100001;
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Unordered Map Insert 100,000 (s): " << elapsed_time /1e9 << endl;
        }
        else if (i == 5)
        {
           auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                um2.find(rand()%100001);
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Unordered Map Find 100,000 (s): " << elapsed_time /1e9 << endl;

        }
        else if (i == 6)
        {
           auto start = steady_clock::now();
            for (int j = 0; j < 100000; j++)
            {
                um2.erase(rand()%100001);
            }
            auto end = steady_clock::now();

            double elapsed_time = double(duration_cast <nanoseconds> (end - start).count());

            cout << "Elapsed Time for Unordered Map Erase 100,000 (s): " << elapsed_time /1e9 << endl;
        }
            
        else
            cout << "Reached the end for Unordered maps!" << endl;
    }


    system("pause;");


    
    
    return 0;
}