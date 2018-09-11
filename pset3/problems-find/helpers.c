/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include<stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // checking for the n (-ve or +ve )
      if (value < 0)
        return false;

    int left = 0, right = n - 1;
    while (n > 0)
    {
        int middle = (right - left) / 2 + left;
        if (values[middle] == value)
            return true;
        else if (values[middle] > value)
            right = middle - 1;
        else if (values[middle] < value)
            left = middle + 1;
        n = right - left + 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
     int i;
    for (i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i; j < n; j++)
        {
            if (values[minimum] > values[j])
                minimum = j;
        }
        if (minimum != i)
        {
            int temp = values[minimum];
            values[minimum] = values[i];
            values[i] = temp;
        }
    }
}