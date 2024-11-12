Here is the algorithm for both 1D and 2D prefix sum calculations:

---

### 1D Array Prefix Sum Algorithm
1. **Initialize:** Set `sum` to 0 and create a `prefix` array of the same size as the input array.
2. **Build Prefix Sum Array:**
   - For each element `i` in the array:
     - Add the current element to `sum`.
     - Set `prefix[i] = sum`.
3. **Answer Queries Efficiently:**
   - For each range query `[left, right]`:
     - If `left` is 0, return `prefix[right]`.
     - Otherwise, return `prefix[right] - prefix[left - 1]`.

---

### 2D Array Prefix Sum Algorithm
1. **Initialize:** Create a 2D `prefix` array with an extra row and column (all elements initialized to 0).
2. **Build Prefix Sum Matrix:**
   - For each element at position `(i, j)` in the input matrix:
     - Compute the prefix sum at `(i, j)` as:
       \[
       \text{prefix}[i][j] = \text{input}[i][j] + \text{prefix}[i-1][j] + \text{prefix}[i][j-1] - \text{prefix}[i-1][j-1]
       \]
3. **Answer Queries Efficiently:**
   - For each query `(x1, y1)` to `(x2, y2)`, calculate the submatrix sum as:
     \[
     \text{result} = \text{prefix}[x2][y2] - \text{prefix}[x1-1][y2] - \text{prefix}[x2][y1-1] + \text{prefix}[x1-1][y1-1]
     \]

--------------------------------
--------------------------------
1D Prefix Sums - Querying:
Given a sequence of integers a0, a1, ..., aN−1, you will be given Q queries of the form [L, R).
For each query, compute S(L, R) = aL + aL+1 + ... + aR−1.
---
1D Prefix Sums - Warm-up:
- https://leetcode.com/problems/running-sum-of-1d-array/
- https://leetcode.com/problems/find-the-highest-altitude/
- https://leetcode.com/problems/find-the-middle-index-in-array/
- https://codeforces.com/contest/327/problem/A

Practice Questions:
- https://leetcode.com/problems/range-sum-query-immutable/
- https://leetcode.com/problems/number-of-ways-to-split-array/
- https://leetcode.com/problems/corporate-flight-bookings/
- https://leetcode.com/problems/product-of-array-except-self/
- https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/
- https://leetcode.com/problems/contiguous-array/

Extra Practice Questions (Not mandatory):
- https://judge.yosupo.jp/problem/static_range_sum
- http://www.usaco.org/index.php?page=viewproblem2&cpid=572
- http://usaco.org/index.php?page=viewproblem2&cpid=595
- https://www.spoj.com/problems/RANGESUM/en/

Prefix Sum + Hashmap Practice:
- https://cses.fi/problemset/task/1660/
- https://cses.fi/problemset/task/1661/
- https://codeforces.com/contest/1398/problem/C
- https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/


2D Prefix Sums - Warm-up:
Given a 2D grid of integers, you will be given Q queries. Each query asks for the sum of elements within a rectangular submatrix defined by its top-left corner 
(𝑥1,𝑦1)
(x1,y1) and bottom-right corner 
(𝑥2,𝑦2)
(x2,y2) (inclusive).
----
For each query, compute the sum of the elements in the specified submatrix efficiently.
- https://cses.fi/problemset/task/1652
- https://leetcode.com/problems/range-sum-query-2d-immutable/

2D Prefix Sums - Practice Questions:
- https://leetcode.com/problems/matrix-block-sum/