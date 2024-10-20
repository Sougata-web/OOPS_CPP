//  Write a C++ Program to implement Linear Search

#include<iostream>
using namespace std;

int main(){
    int size,element;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the element to search: "<<endl;
    cin>>element;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"That element is at index "<<i<<endl;
            break;
        }else{
            cout<<"Element not found. "<<endl;
        }
    }
    return 0;
}