#include <iostream>
using namespace std;
int main(){

    int n, temp, left, right;

    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: "<< endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    left = 0;
    right = n - 1;

    while (left < right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right--;
    }
    
    cout << "Reversed Array: ";
    for ( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}