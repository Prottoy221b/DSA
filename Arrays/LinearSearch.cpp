#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout<<"Enter elements: ";
        cin>>arr[i];

    }
    int target;
    cout<<"Enter search value: ";
    cin>>target;

    int flag=-1;
    for (int i = 0; i < size; i++) {
        if(arr[i]==target){
            flag=i;
            break;

        }
    }
    if(flag!=-1){
        cout<<"Value found in index: "<<flag;
    }
    else{
        cout<<"Value not found!!";

    }
    return 0;
}
