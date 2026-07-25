# 3536. Maximum Product of Two Digits

* **Difficulty:** Easy
* **Topics:** Math, Array
* **Language:** C++

---

## 💡 Intuition & Approach
* **Digit Extraction:** We extract each individual digit of the given integer $n$ by repeatedly taking the modulo (`n % 10`) and dividing by $10$ (`n /= 10`), storing them in a vector.
* **Pairwise Multiplication:** We use a nested loop to check the product of every possible pair of digits and keep track of the maximum product encountered.

---

## 🔍 Line-by-Line Explanation

* **`vector<int> digits;`**: Creates a dynamic array to hold the individual digits extracted from $n$.
* **`while(n > 0) { ... }`**: Loops until all digits of $n$ have been extracted.
* **`digits.push_back(n % 10);`**: Extracts the last digit and adds it to the vector.
* **`n /= 10;`**: Removes the last digit from $n$.
* **`int MAX_PRODUCT = 0;`**: Initializes a variable to track the highest product found.
* **`for(int i = 0; i < size; ++i)`**: Outer loop to pick the first digit in the pair.
* **`for(int j = i + 1; j < size; ++j)`**: Inner loop to pick the second distinct digit position.
* **`int prod = digits[i] * digits[j];`**: Computes the product of the chosen pair.
* **`MAX_PRODUCT = max(MAX_PRODUCT, prod);`**: Updates the maximum product value if the current product is greater.
* **`return MAX_PRODUCT;`**: Returns the final maximum product.

---

## 📋 Example Walkthrough

**Input:** `n = 31`

1. **Extract Digits:** 
   * `digits = [1, 3]` (or `[3, 1]` depending on order).
2. **Pairwise Product Check:**
   * Multiplying `3 * 1 = 3`.
3. **Output:** `3`

---

## 📊 Complexity Analysis
* **Time Complexity:** $O(\log_{10} n)$ to extract the digits plus $O(d^2)$ for checking pairs (where $d$ is the number of digits, which is very small, typically $\le 10$).
* **Space Complexity:** $O(\log_{10} n)$ to store the digits in the vector.