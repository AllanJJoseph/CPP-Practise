#include <iostream>
using namespace std;
int main(){

    int n, target, count;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target: " << endl;
    cin >> target;
    
    count = 0;

    for(int i = 0; i < n; i++){
        if ( arr[i] == target){
            count++;
        }
    }

    cout << target << " appears " << j << " times." << endl;


    return 0;
}