#include <iostream>
using namespace std;
int main(){

    int n, i, temp, pointer;

    cout << "Enter the no of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements including zeros: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];                                                          //    1  2  0  0  3  9  5  
    }

    pointer = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] != 0){
            temp = arr[i];
            arr[i] = arr[pointer];
            arr[pointer] = temp;
            pointer++;
        }
    }

    for ( int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}