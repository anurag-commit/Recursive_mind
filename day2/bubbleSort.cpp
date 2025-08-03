#include<iostream>
#include<vector>

using namespace std;

vector<int> bubbleSort(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-(i+1); j++){
            if(arr[j] > arr[j+1]){
                //swap ascending
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }

    return arr;
}

int main(){
    vector <int> arr;
    int arrInput = 0;

    while(arrInput != -1){

        cout << "Enter the array element: (enter -1 for termination):";
        cin >> arrInput;
        if(arrInput != -1)
            arr.push_back(arrInput);
    }

    int arrSize = arr.size();

    cout << "unsorted array" << endl;
    for(int i=0; i<arrSize; i++){
        cout << arr[i] << endl;
    }

    bubbleSort(arr);

    cout << "sorted array" << endl;
    for(int i=0; i<arrSize; i++){
        cout << arr[i] << endl;
    }
}