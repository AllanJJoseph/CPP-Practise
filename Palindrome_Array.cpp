#include <iostream>
using namespace std;
int main(){
   
    int n, left, right;
    bool is_Palindrome = true;
    
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    left = 0;
    right = n - 1;

    while (left < right){
        if (arr[left] == arr[right]){
            left++;
            right--;
        }else {
            is_Palindrome = false;
            break;
        }
    }

    if (is_Palindrome == true){
        cout << "Given array is a palindrome." << endl;
    }else {
        cout << "Given array is not a palindrome." << endl;
    }

    return 0;
}