// Searching
// Linear searchig
#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> arr, int n, int key)
{
    for(int  i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    cin >> arr[i];

    int key;
    cin>> key;
    cout << linearSearch(arr, n, key);

    return 0;
}