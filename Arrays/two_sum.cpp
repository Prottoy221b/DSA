#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int second = target - first;
        if (mp.find(second) != mp.end())
        {
           result.push_back(i);
           result.push_back(mp[second]);
           break;
        }
        mp[first] = i;
    }
    return result;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;
    vector<int> answer = twoSum(arr, target);
    if (answer.size() == 2)
    {
        cout << "[" << answer[0] << " , " << answer[1]<<"]";
    }
    else
    {
        cout << "No pair found";
    }

    return 0;
}
