# Leetcode-solutions
A collection of my LeetCode problem solutions written in C++. This repository documents my journey of learning data structures and algorithms.
# Leetcode 11- container with most water
---
* Approach- two pointer optimised solution
* Time complexity-O(n)\
 Space complexity-O(1)
* My approach is that the amount of water between two lines is determined by two things-
-The height of the shorter line\
-The distance between the lines\
-so i used min( ) to find the shorter line and difference between their index is the distance between them\
-Time complexity O(n) , as i used the two pointer optimized approach.\

# Leetcode 643- Maximum Average Subarray I
---
* Approach- Sliding window
* Time complexity-O(n)\
 Space complexity-O(1)
* My approach is to compute the sum of the first window of size k.
 - Store it as the initial sum in max_sum variable.
 - Slide the window one by one to the right:\
   Subtract the element leaving the window.\
   Add the new element entering the window.
 - Update max_sum whenever a larger sum is found.
 - At the end, divide max_sum by k to get the maximum average.

# Leetcode 53- Maximum Subarray 
---
* Approach- Kadane's algorithm
* Time complexity-O(n)\
 Space complexity-O(1)
* I approached the core idea of kadane's theorm during problem solving myself-
-  i maintained a running sum while iterating through the array.
- Updated the maximum subarray sum whenever the running sum  was greater than the maximum sum
- Reset the running sum to 0 whenever it becomes negative, because a negative prefix cannot contribute to a larger sum.

# Leetcode 724- Find Pivot index
---
* Approach- Running sum
* Time complexity-O(n)\
 Space complexity-O(1)
* Approach:
- i first computed the total sum of the array.
- Iterated through the array while updating a left sum.
- At each index:
- Subtract the current element from total sum to get the right sum.
- Compare left  and right sum.
- If they are equal, return the current index as the pivot index.
- Otherwise, update the left sum by adding the current element.
