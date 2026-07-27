# 1464. Maximum Product of Two Elements in an Array

* **Difficulty:** Easy
* **Topics:** Array, Sorting, Heap
* **Language:** C++

---

## 💡 Intuition & Approach
* **Sorting Approach:** To maximize the product `(nums[i] - 1) * (nums[j] - 1)`, we need to pick the two largest numbers in the array.
* **Calculation:** By sorting the array in ascending order, the two largest elements will always be located at the last two indices (`nums[n-1]` and `nums[n-2]`). We subtract 1 from each and multiply them together.

---

## 🔍 Line-by-Line Explanation

* **`sort(nums.begin(), nums.end());`**: Sorts the array in ascending order so that the largest elements move to the end.
* **`int n = nums.size();`**: Stores the total number of elements in the array.
* **`int result = (nums[n-1]-1) * (nums[n-2]-1);`**: Multiplies 1 less than the two largest elements.
* **`return result;`**: Returns the final maximum product.

---

## 📋 Example Walkthrough

**Input:** `nums = [3, 4, 5, 2]`

1. **Sort Array:** `[2, 3, 4, 5]`
2. **Identify Two Largest:** `nums[3] = 5`, `nums[2] = 4`
3. **Calculate Product:** `(5 - 1) * (4 - 1) = 4 * 3 = 12`
4. **Output:** `12`

---

## 📊 Complexity Analysis
* **Time Complexity:** $O(n \log n)$ due to sorting the array.
* **Space Complexity:** $O(1)$ auxiliary space.