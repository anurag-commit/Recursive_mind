#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int>arr , int n ,int key)
{
    int l =0;
    int r =n-1;

    while(l <= r)
    {
        int mid = l+ (r -l)/2;

        if( arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            l =mid+1;
        }else{
            r= mid-1;
        }
    }
    return -1;
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

    cout <<  binarySearch(arr ,n ,key);


}