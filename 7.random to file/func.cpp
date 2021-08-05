#include <iostream>
#include "func.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;
void randomise(int n, int* arr)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    
}

