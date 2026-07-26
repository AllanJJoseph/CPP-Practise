#include <iostream>
using namespace std;

int main(){

    int n;
    int smallest;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    smallest = arr[0];

    for(int i = 0; i < n; i++){
        if( arr[i] < smallest){
            smallest = arr[i];        }
    }

    cout << "The smallest element is: " << smallest << endl;

    return 0;
}