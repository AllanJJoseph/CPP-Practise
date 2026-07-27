#include <iostream>
using namespace std;

int main(){

    int n;
    int max;

    cout << "Enter n: " << endl;
    cin >> n;
    
    int arr1[n];

    cout << "Enter the numbers: " << endl;
    for(int i = 0; i <= n-1; i++){
        cin >> arr1[i];
    }
    max = arr1[0];

    for(int i = 0; i <= n-1; i++){
        if ( max < arr1[i]){
            max = arr1[i];
        }
    }

    cout << "Largest number in the given array is " << max << endl;

    return 0;
}