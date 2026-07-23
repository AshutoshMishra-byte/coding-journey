# 3513. Number of Unique XOR Triplets I

* **Difficulty:** Medium
* **Topics:** Bit Manipulation, Math, Array
* **Language:** C++

---

## 💡 Intuition & Approach
* **Constraint Check:** If the array length $n$ is less than 3, the number of unique XOR triplet values simply returns $n$.
* **Bit Manipulation:** For $n \ge 3$, we find the most significant bit position using `std::__lg(n)` to determine the bit-length bounds, returning $2^{\text{bit\_length}}$ unique combinations.

## 📊 Complexity Analysis
* **Time Complexity:** $O(\log n)$ due to the bit length calculation.
* **Space Complexity:** $O(1)$ as it uses constant extra space.