#include <iostream>
using namespace std;
int main(){

    int n, target, j;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target: " << endl;
    cin >> target;
    
    j = 0;

    for(int i = 0; i < n; i++){
        if ( arr[i] == target){
            j++;
        }
    }

    cout << target << " appears " << j << " times." << endl;


    return 0;
}