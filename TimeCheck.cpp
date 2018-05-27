//
// Created by 123 on 2018-05-15.
//
#include "vector.h"
#include <chrono>
#include <vector>
void TimeCheck(size_t amount)
{
    Vector<int> myVector;
    using namespace std::chrono;
    std::vector<int> vector;
    duration<double, std::milli> mySumTime;
    duration<double, std::milli> vectorSumTime;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for(auto j = 0; j < amount; j++)
    {
        myVector.push_back(j);
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    mySumTime = (t2 - t1);

    high_resolution_clock::time_point t3 = high_resolution_clock::now();
    for(auto m = 0; m < amount; m++)
    {
        vector.push_back(m);
    }
    high_resolution_clock::time_point t4 = high_resolution_clock::now();

    vectorSumTime = (t4 - t3);
    mySumTime;
    vectorSumTime;
    std::cout << "Used " << amount << " numbers" << std::endl;
    std::cout << "My vector took: " << mySumTime.count()/1000     << " seconds" << std::endl;
    std::cout << "vector took: "    << vectorSumTime.count()/1000 << " seconds" << std::endl;
}
