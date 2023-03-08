#include <stdio.h>
#include <stdlib.h>

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

int main() 
{
    int n,a[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted elements\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
