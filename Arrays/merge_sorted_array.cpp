class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int  k = 0;
    int x = m;

    
    for (int i = 0; i < n + m; i++)
    {   
         if(n==0){
            for(int d: nums1){
                cout<<d<<" ";
            }
            break;
        }
        if(k>=n){
            break;
        }
       
         if (nums1[i] > nums2[k])
        {

            for (int q = x; q >= i+1; q--)
            {
                nums1[q] = nums1[q - 1];
            }
             nums1[i] = nums2[k];
            
             k++;
             x++;
        }
        else if (nums1[i] <= nums2[k]&& i<x)
        {
            
        }
       
       else if (nums1[i] == 0)
        {
            
            nums1[i] = nums2[k];
           
           
            k++;
        }
     }

    for (int p : nums1)
    {
        cout << p << " ";
    }
}
};
