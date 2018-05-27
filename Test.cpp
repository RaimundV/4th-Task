//
// Created by 123 on 2018-04-24.
//
#include "vector.h"
#include "functions.h"
int main()
{
    /*std::cout << "push_back time check:" << std::endl;
    TimeCheck(10000);
    TimeCheck(100000);
    TimeCheck(1000000);
    TimeCheck(10000000);
    TimeCheck(100000000);*/

    std::cout << "\nVector Container PCheck 1:\n" << std::endl;

    ContainerV(10, "wow1.txt", "ContainerV1.txt");

    ContainerV(100, "wow2.txt", "ContainerV2.txt");

    ContainerV(1000, "wow3.txt", "ContainerV3.txt");

    ContainerV(10000, "wow4.txt", "ContainerV4.txt");

    ContainerV(100000, "wow5.txt", "ContainerV5.txt");

    std::cout << "\nMy Vector Container PCheck 1:\n" << std::endl;

    MyVectorTest(10, "wow1.txt", "MyVectorC1.txt");

    MyVectorTest(100, "wow2.txt", "MyVectorC2.txt");

    MyVectorTest(1000, "wow3.txt", "MyVectorC3.txt");

    MyVectorTest(10000, "wow4.txt", "MyVectorC4.txt");

    MyVectorTest(100000, "wow5.txt", "MyVectorC5.txt");

    std::cout << "\nVector Container PCheck 2:\n" << std::endl;

    ContainerV2(10, "wow1.txt", "Container2V1.txt");

    ContainerV2(100, "wow2.txt", "Container2V2.txt");

    ContainerV2(1000, "wow3.txt", "Container2V3.txt");

    ContainerV2(10000, "wow4.txt", "Container2V4.txt");

    ContainerV2(100000, "wow5.txt", "Container2V5.txt");

    std::cout << "\nMy Vector Container PCheck 2:\n" << std::endl;

    MyVectorTest2(10, "wow1.txt", "MyVector2C1.txt");

    MyVectorTest2(100, "wow2.txt", "MyVector2C2.txt");

    MyVectorTest2(1000, "wow3.txt", "MyVector2C3.txt");

    MyVectorTest2(10000, "wow4.txt", "MyVector2C4.txt");

    MyVectorTest2(100000, "wow5.txt", "MyVector2C5.txt");

    std::cout << "\nVector Container PCheck 2 Unoptimized:\n" << std::endl;

    ContainerV2Unoptimized(10, "wow1.txt", "Container2V1nb.txt");

    ContainerV2Unoptimized(100, "wow2.txt", "Container2V2nb.txt");

    ContainerV2Unoptimized(1000, "wow3.txt", "Container2V3nb.txt");

    ContainerV2Unoptimized(10000, "wow4.txt", "Container2V4nb.txt");

    ContainerV2Unoptimized(100000, "wow5.txt", "Container2V5nb.txt");

    std::cout << "\nMy Vector Container PCheck 2 Unoptimized:\n" << std::endl;

    MyVectorTestUnoptimiazed(10, "wow1.txt", "MyVector2C1U.txt");

    MyVectorTestUnoptimiazed(100, "wow2.txt", "MyVector2C2U.txt");

    MyVectorTestUnoptimiazed(1000, "wow3.txt", "MyVector2C3U.txt");

    MyVectorTestUnoptimiazed(10000, "wow4.txt", "MyVector2C4U.txt");

    MyVectorTestUnoptimiazed(100000, "wow5.txt", "MyVector2C5U.txt");

    return 0;
}
