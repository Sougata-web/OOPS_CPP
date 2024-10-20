//Write a C++ Program To Find Sum of Even Positive / Even Negative / Odd Positive / Odd Negative 
// of An Array

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int even_positive_sum = 0;
    int even_negative_sum = 0;
    int odd_positive_sum = 0;
    int odd_negative_sum = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {  
            if(arr[i] > 0) {
                even_positive_sum += arr[i];
            } else if(arr[i] < 0) {
                even_negative_sum += arr[i];
            }
        } else {  
            if(arr[i] > 0) {
                odd_positive_sum += arr[i];
            } else if(arr[i] < 0) {
                odd_negative_sum += arr[i];
            }
        }
    }

    cout << "Sum of Even Positive Numbers: " << even_positive_sum << endl;
    cout << "Sum of Even Negative Numbers: " << even_negative_sum << endl;
    cout << "Sum of Odd Positive Numbers: " << odd_positive_sum << endl;
    cout << "Sum of Odd Negative Numbers: " << odd_negative_sum << endl;
    return 0;
}