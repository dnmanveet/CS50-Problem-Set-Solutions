/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm

    int s = 0;
    int e = n - 1;
    
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (values[m] == value)
        {
            return true;
        }
        else if (values[m] > value)
        {
            e = m - 1;
        }
        else 
        {
            s = m + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // sort the array
    for (int i = 0; i < (n - 1); i++)
    {
        int a = values[i];
        for (int j = 0; j < n; j++)
        {
            if (a > values[j])
            {   
                a = values[j];
                values[j] = values[i];
                values[i] = a;
                
            }   
        }
    }
    return ;
}
sir i have written a programm like this and i am etting a output like this
