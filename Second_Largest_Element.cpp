#include <iostream>
using namespace std;

int main(){

    int largest, second_largest, n;

    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    largest = arr[0];
    second_largest = arr[0];

    for(int i = 0; i < n; i++){
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest && second_largest != largest){
                second_largest = arr[i];
        }

    }

    if (largest == second_largest){
        cout << "No Second Largest found" << endl;
    }else{
        cout <<"Largest number in the array is: " << largest << endl;
        cout << "Second largest number in the array is: " << second_largest << endl;
    }

    return 0;
}