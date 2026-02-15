#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector <int> &nums){
    if(nums.empty()) return 0;
    int write=1;
    for (int read = 1; read < nums.size(); read++) {
        if(nums[read]!=nums[write-1]){
            nums[write]=nums[read];
            write++;
        }
    }
    return write;
}


int main(){
    int size;
    cout<<"Enter array size:";
    cin>>size;

    vector <int> nums(size);
    for (int i = 0; i < size; i++) {
        cout<<"Enter array elements: ";
        cin>>nums[i];
    }
    int k= removeDuplicates(nums);
    for (int i = 0; i < k; i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}
