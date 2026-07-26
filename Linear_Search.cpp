#include <iostream>
using namespace std;

int main(){

    int n;
    int target;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    cout << "Enter the target: " << endl;
    cin >> target;

    for(int i = 0; i < size; i++){
        if( arr[i] == target){
            index = i;
            break;
        }
    }

    if ( index != -1){
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}