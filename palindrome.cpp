#include<iostream>

using namespace std;

int main(){
    string palin;
    cin >> palin;

    int size = palin.size();

    int left = 0;
    int right = size - 1;

    while(left < right){
        if(palin[left] == palin[right]){
            left ++;
            right --;
        } else{
            cout << "Not a palindrome";
            return 0;
        }
    }
    cout << "palindrome";
    return 0;
}