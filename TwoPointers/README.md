# Two Pointers Technique

The **Two Pointers Technique** is a common algorithmic pattern used to solve problems involving **arrays, strings, or linked lists** efficiently.  
It uses **two indices** (pointers) that traverse the data structure either:

- From **opposite ends** (left and right)
- In the **same direction** (slow and fast)

This technique is often used to optimize solutions from **O(n²) → O(n)** time complexity.

---

## ✅ When to Use Two Pointers

- The input array or string is **sorted**.
- You need to find **pairs or triplets** with specific properties (sum, difference, etc.).
- You need to maintain a **sliding window** for subarrays or substrings.
- You are working with **linked lists** and need fast/slow traversal.

---

## 🔹 Common Patterns

### 1. Opposite Ends (Left & Right Pointers)
- Example: Find two numbers in a sorted array with a given sum.
- Move pointers inward depending on the sum.

### 2. Same Direction (Sliding Window)
- Example: Find maximum sum subarray of size `k`.
- Expand window with right pointer and shrink with left pointer.

### 3. Fast & Slow Pointers
- Example: Detect cycle in a linked list or find the middle node.
- Fast pointer moves 2 steps, slow moves 1 step.

---

## ⚡ Advantages

| Approach | Time Complexity | Space Complexity |
|----------|----------------|----------------|
| Brute Force | O(n²) | O(1) |
| Two Pointers | O(n) | O(1) |
