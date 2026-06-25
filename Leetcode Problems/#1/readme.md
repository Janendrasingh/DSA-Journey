# LeetCode #1 - Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, return whether there exists a pair of elements whose sum is equal to the target.

### Example

Input:

```text
nums = [2, 7, 11, 15]
target = 9
```

Output:

```text
YES
```

Explanation:

```text
2 + 7 = 9
```

---

## Approaches Used

### 1. Brute Force Approach

#### Idea

Check every possible pair in the array and see if their sum equals the target.

#### Algorithm

1. Traverse the array using two nested loops.
2. For each element, check all remaining elements.
3. If the sum equals the target, return the answer.

#### Time Complexity

```text
O(n²)
```

#### Space Complexity

```text
O(1)
```

#### Code Snippet

```cpp
for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(a[i]+a[j]==k){
            cout<<"Possible element will be "
                <<a[i]<<" and "<<a[j];
        }
    }
}
```

---

### 2. Better Approach (Hashing)

#### Idea

Instead of checking every pair, store visited elements in a map.

For every element:

```text
required = target - current_element
```

If the required value already exists in the map, a valid pair is found.

#### Algorithm

1. Create a map.
2. Traverse the array.
3. Calculate:

```text
required = target - current_element
```

4. Check if required value exists in the map.
5. If yes, return the indices.
6. Otherwise store the current element in the map.

#### Time Complexity

```text
O(n log n)
```

(using map)

#### Space Complexity

```text
O(n)
```

---

### 3. Optimal Approach (Two Pointer)

#### Idea

Sort the array and use two pointers.

- One pointer starts from the beginning.
- One pointer starts from the end.

Move pointers based on the current sum.

#### Algorithm

1. Sort the array.
2. Initialize:

```text
left = 0
right = n - 1
```

3. Calculate:

```text
sum = a[left] + a[right]
```

4. If:

```text
sum == target
```

Return YES.

5. If:

```text
sum < target
```

Move left pointer forward.

6. If:

```text
sum > target
```

Move right pointer backward.

7. Continue until left < right.

#### Dry Run

Array:

```text
[2, 6, 5, 8, 11]
```

Target:

```text
14
```

After Sorting:

```text
[2, 5, 6, 8, 11]
```

| Left | Right | Sum | Action |
|--------|--------|--------|--------|
| 2 | 11 | 13 | Move Left |
| 5 | 11 | 16 | Move Right |
| 5 | 8 | 13 | Move Left |
| 6 | 8 | 14 | Found |

Output:

```text
YES
```

#### Time Complexity

```text
O(n log n)
```

- Sorting: O(n log n)
- Two Pointer Traversal: O(n)

#### Space Complexity

```text
O(1)
```

---

## Key Learning

While solving this problem, I learned:

- How to approach a problem from Brute Force to Optimal.
- Usage of Hashing (`map`) for fast lookups.
- Two Pointer Technique for reducing unnecessary comparisons.
- Importance of analyzing Time and Space Complexity.
- How sorting can help optimize search-related problems.

---

## Files

```text
2.13_Two_Sum.cpp
```

---

## Complexity Comparison

| Approach | Time Complexity | Space Complexity |
|-----------|----------------|------------------|
| Brute Force | O(n²) | O(1) |
| Hashing (Map) | O(n log n) | O(n) |
| Two Pointer | O(n log n) | O(1) |

---

## Author

**Janendra Singh**

Learning Data Structures and Algorithms through consistent practice and implementing multiple approaches to every problem.