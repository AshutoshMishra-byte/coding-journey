# 628. Maximum Product of Three Numbers

* **Difficulty:** Easy
* **Topics:** Array, Math, Sorting
* **Language:** C++

---

## 💡 Intuition & Approach
* **Sorting Approach:** The maximum product of three numbers in an array can come from either the three largest positive numbers or two very small negative numbers (which yield a positive product when multiplied) combined with the largest positive number.
* **Calculation:** After sorting the array in ascending order, we check two potential maximum products:
  1. Product of the last three elements (`nums[n-1] * nums[n-2] * nums[n-3]`).
  2. Product of the first two elements and the last element (`nums[0] * nums[1] * nums[n-1]`).

---

## 🔍 Line-by-Line Explanation

* **`int n = nums.size();`**: Stores the total number of elements in the array.
* **`sort(nums.begin(), nums.end());`**: Sorts the array in ascending order so smallest elements are at the front and largest at the back.
* **`int options1 = nums[n-1] * nums[n-2] * nums[n-3];`**: Computes the product of the three largest numbers.
* **`int options2 = nums[0] * nums[1] * nums[n-1];`**: Computes the product of the two smallest (potentially negative) numbers and the largest positive number.
* **`return max(options1, options2);`**: Returns the maximum of the two possible products.

---

## 📋 Example Walkthrough

**Input:** `nums = [-1, -2, -3]`

1. **Sort Array:** `[-3, -2, -1]`
2. **Calculate Options:**
   * `options1 = (-1) * (-2) * (-3) = -6`
   * `options2 = (-3) * (-2) * (-1) = -6`
3. **Output:** `-6`

---

## 📊 Complexity Analysis
* **Time Complexity:** $O(n \log n)$ due to sorting the array.
* **Space Complexity:** $O(1)$ auxiliary space (excluding sorting stack space).