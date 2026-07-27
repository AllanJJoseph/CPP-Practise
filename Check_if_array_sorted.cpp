#include <iostream>
using namespace std;
int main(){

    int n;

    cout << "Enter the no of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool is_sorted = true;

    for( int i = 0; i < n - 1; i++){
        if( arr[i] > arr[i + 1]){
            is_sorted = false;
            break;
        }
    }

    if( is_sorted == true){
        cout << "The array is sorted in ascending order";
    }else{
        cout << "The array is not sorted in ascending order";
    }

    return 0; 
}