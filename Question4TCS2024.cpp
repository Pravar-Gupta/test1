#include<iostream>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    int arr[n] = {};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;
    int subcount = 0;
    for(int i = 0; i < n;i++){    
        if(arr[i] != arr[i+1]){
            count++;
            subcount++;
        } else {
            subcount++;
            continue;
        }
        if(count == k-1){
            break;
        } 
    }

    cout << subcount << endl;

    return 0;
}