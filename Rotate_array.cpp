#include <iostream>
using namespace std;
int main(){

    int n, i;

    cout << "Enter the no of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int last = arr[n - 1];
    for (int i = n-1; i >= 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    for ( int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    // 1  2  3  4  *5  

    return 0;
}