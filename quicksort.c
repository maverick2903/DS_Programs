#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15

// Partition using Hoare's Partitioning scheme
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low - 1;
    int j = high + 1;
    while (1)
    {
        do {
            i++;
        } while (a[i] < pivot);
 
        do {
            j--;
        } while (a[j] > pivot);
 
        if (i >= j) {
            return j;
        }
 
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
 
// Quicksort routine
void quicksort(int a[], int low, int high)
{
    // base condition
    if (low < high) {
        // rearrange elements across pivot
    int pivot = partition(a, low, high);
 
    // recur on subarray containing elements that are less than the pivot
    quicksort(a, low, pivot);
 
    // recur on subarray containing elements that are more than the pivot
    quicksort(a, pivot + 1, high);
    }
 
    
}