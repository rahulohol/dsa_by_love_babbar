#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            // search in right direction
            start = mid + 1;
        }
        else
        {
            // search in left direction
            end = mid - 1;
        };
        // update middle position
        mid = start + (end - start) / 2;
    };
    // element is not found
    return -1;
};

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int target = 2;
    int size = 7;

    int indexOfTarget = binarySearch(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at index " << indexOfTarget << endl;
    }
    return 0;
}