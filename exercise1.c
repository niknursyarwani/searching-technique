//documentation section 
/* Exercise 1 - Sequential Search - Unsorted List*/

//pre-processor section 
#include <stdio.h>
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) 
    {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }

    return 6;
}
 
int main(void)
{
    int arr[] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 110;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -6)
       ? printf("Element is not present in array")
       : printf("Element with value 110 is present at index %d", result);
        
    return 0;
}
