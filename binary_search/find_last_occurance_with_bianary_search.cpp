#include <iostream>
#include <vector>

using namespace std;

int lastOccurenceIndex(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
};

int main()
{
    vector<int> v{ 3, 4, 4, 5, 6, 7};
    int target = 4;
    int indexOfLastOccurrence = lastOccurenceIndex(v, target);

    indexOfLastOccurrence != -1 ? cout << "first occurence for " << target << " is found at index no. " << indexOfLastOccurrence << endl : cout << "element not found";
    return 0;
}