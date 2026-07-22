# 3. Longest Substring Without Repeating Characters

* **Difficulty:** Medium
* **Topics:** Sliding Window, Hash Table, String
* **Language:** C++

---

## 💡 Intuition & Approach (Sliding Window)

Instead of checking every single combination (which takes too long), we use a **Sliding Window** technique with two pointers:
1. **`right` pointer:** Expands the window one character at a time to the right.
2. **`left` pointer:** Jumps forward whenever a duplicate character is found so the window always contains unique characters.
3. **`charIndex` array:** A tracking array of size 256 (for all ASCII characters) initialized to `-1` to remember the last seen position of each character.

---

## 🔍 Step-by-Step Dry Run (`s = "abba"`)

1. **`right = 0` ('a'):** Not seen. Window is `"a"`, length = `1`. `charIndex['a'] = 0`, `max_len = 1`.
2. **`right = 1` ('b'):** Not seen. Window is `"ab"`, length = `2`. `charIndex['b'] = 1`, `max_len = 2`.
3. **`right = 2` ('b'):** Duplicate found! `'b'` was last seen at index `1`. We jump `left` to `1 + 1 = 2`. Window is now `"ba"`, length = `1`. `max_len` stays `2`.
4. **`right = 3` ('a'):** Old `'a'` at index `0` is outside our `left` boundary (`2`), so we ignore it. Window is `"ba"`, length = `2`. `max_len` stays `2`.

**Final Output:** `2`

---

## 📊 Complexity Analysis
* **Time Complexity:** $O(n)$ — We iterate through the string of length $n$ once with the `right` pointer.
* **Space Complexity:** $O(1)$ — The tracking array size is fixed at 256 regardless of the input string size.