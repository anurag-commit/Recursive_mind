#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int>arr , int n ,int key)
{
    int l =0;
    int r =n-1;
    int lastKey = -1;
    int firstKey = -1;

    while(l <= r)//searching for the last
    {
        int mid = l+ (r -l)/2;

        if( arr[mid] == key){
            //go ahead and save the key
            lastKey = mid;
            l =mid+1;
        }
        else if(arr[mid] < key){
            l =mid+1;
        }else{
            r= mid-1;
        }
        
    }
    cout << "last key" << lastKey << endl;

    int l1 =0;
    int r1 =n-1;

    while(l1 <= r1)//searching for the first
    {
        int mid = l1+ (r1 -l1)/2;

        if( arr[mid] == key){
            //go behind and save the key
            firstKey = mid;
            r1= mid-1;
        }
        else if(arr[mid] < key){
            l1 =mid+1;
        }else{
            r1= mid-1;
        }
        
    }
    cout << "first key" << firstKey << endl;
    return 0;
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

    binarySearch(arr ,n ,key);

    return 0;
}