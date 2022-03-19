// CalcPI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0.0, 1.0);

    double square = 100000000;
    double circle = 0;

    for (int i = 0; i < square; ++i)
    {
        double x = dist(mt);
        double y = dist(mt);

        if ((x * x + y * y) <= 1.0)
        {
            circle += 1.0;
        }
    }

    double pi = 4 * (circle / square);

    std::cout << pi;
}