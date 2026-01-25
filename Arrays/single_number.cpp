#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int single=0;
        for(int val: nums){
            single^=val;
        }
        return single;
    }
int main() {
    vector <int> nums={2,3,4,5,2,6,3,5,4};
    cout<<singleNumber(nums);


    
}
