# Pair Sum Problem

## Problem Statement
Given a **sorted array** of integers and a **target value**, find **two numbers** in the array whose sum equals the target.  
Return the **indices** of these numbers or indicate if no such pair exists.

**Example:**  
Input: `arr = [2, 2, 3, 5, 7, 9], target = 8`  
Output: `Pair found at indices 2 and 3 (3 + 5 = 8)`

---

## Brute-Force Solution

**Explanation:**  
Check all possible pairs using **nested loops**. For each element, loop through all subsequent elements and check if their sum equals the target.

**Time Complexity:** O(n²) – because we check all pairs  
**Space Complexity:** O(1) – no extra space used

**C++ Implementation:** (see `brute.cpp`)

---

## Optimized Solution (Two Pointers)

**Explanation:**  
Since the array is **sorted**, we can use **two pointers**:

1. Initialize `left = 0` and `right = arr.size() - 1`.
2. While `left < right`:
    - Calculate `sum = arr[left] + arr[right]`.
    - If `sum == target`, return indices.
    - If `sum < target`, move `left` forward.
    - If `sum > target`, move `right` backward.
3. If no pair is found, return an empty vector.

**Time Complexity:** O(n) – each element is visited at most once  
**Space Complexity:** O(1) – no extra space used

**C++ Implementation:** (see `optimized.cpp`)

---

## References / Links

- [LeetCode: Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)
- [NeetCode: Two Integer Sum II](https://neetcode.io/problems/two-integer-sum-ii?list=neetcode150)
