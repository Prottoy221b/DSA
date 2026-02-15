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


Problem:RSingle Number
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
