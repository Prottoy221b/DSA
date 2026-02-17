#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int maxSum = nums[0];
    int currentSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int size;
    cout << "Enter Array size: ";
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> nums[i];
    }
    cout << "Output: " << maxSubArray(nums);
    return 0;
}
