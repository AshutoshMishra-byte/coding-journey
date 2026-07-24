# 3514. Number of Unique XOR Triplets II

* **Difficulty:** Medium
* **Topics:** Bit Manipulation, Math, Array
* **Language:** C++

---

## 💡 Intuition & Approach
* **Problem Scope:** Unlike Part I where `nums` is a strict permutation from $1$ to $n$, Part II accepts any arbitrary integer array up to length $1500$.
* **Pairwise Precomputation:** We first find the maximum value in the array to determine the bit-bound size. Then, we use a nested loop to precompute and store all unique pairwise XOR combinations (`nums[i] ^ nums[j]`) using a boolean vector.
* **Triplet Evaluation:** We iterate through all precomputed pair XOR values and combine them with every element in `nums` via XOR (`p ^ nums[k]`). Using a second boolean tracker (`tripletSeen`), we count all unique resulting triplet values.

---

