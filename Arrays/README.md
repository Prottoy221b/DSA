# Array

Array-based problems for competitive programming.   

Focus on common CP patterns, constraints handling, and efficient implementation.   

------------------------------------------------  
Problem:Roman to Integer    
Link:https://leetcode.com/problems/roman-to-integer/description/    
Approach:   
Traverse from left to right.    
If a symbol is smaller than the next, subtract it; otherwise add it.    
This handles the subtraction rule in Roman numerals.    

Time Complexity:O(n)   
Space Complexity:O(1)   


------------------------------------------------   


Problem:Single Number    
Link:https://leetcode.com/problems/single-number/description/    
Approach:
Use XOR properties.   
a ^ a = 0 and a ^ 0 = a.    
All duplicate values cancel out, leaving the unique element.    

Time Complexity:O(n)    
Space Complexity:O(1)    


------------------------------------------------   

Problem:Remove Duplicates from Sorted Array      
Link:https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/      
Approach:
Because the array is sorted, duplicates are adjacent.   
Maintain a write index for the next unique value while scanning with a read index.    

Time Complexity:O(n)   
Space Complexity:O(1)   

-------------------------------------------------

Problem:Best Time to Buy and Sell Stock      
Link:https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=array       
Approach:
Traverse the prices once while tracking:   

the minimum price so far (best day to buy),   

the maximum profit achievable if selling today.
    
For each price, compute   
profit = current price − min so far,   
update the answer, then refresh the minimum.    


This ensures the buy always happens before the sell and every selling day is considered.   

Time Complexity:O(n)   
Space Complexity:O(1)   


------------------------------------------------    

Problem:Maximum Subarray     
Link:https://leetcode.com/problems/maximum-subarray/description/?envType=problem-list-v2&envId=array              
Approach:   
Traverse the array once, at each index choose the maximum between starting fresh from the current element or extending the previous subarray (Kadane’s idea).    
Keep updating the global maximum during traversal and return it.      

Time Complexity:O(n)    
Space Complexity:O(1)   
