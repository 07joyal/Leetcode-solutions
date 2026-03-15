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
