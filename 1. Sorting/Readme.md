# 🔄 Sorting Algorithms

This folder contains implementations of fundamental sorting algorithms in **C++**. Sorting is one of the most important concepts in Data Structures and Algorithms and serves as the foundation for many advanced techniques.

---

## 📚 Algorithms Included

### 1. Selection Sort
**File:** `1.1 Selection_Sorting.cpp`

- Finds the minimum element from the unsorted portion.
- Places it at the beginning of the array.
- Simple but inefficient for large datasets.

**Time Complexity:** O(n²)

---

### 2. Bubble Sort
**File:** `1.2 Bubble_Sorting.cpp`

- Repeatedly compares adjacent elements.
- Swaps them if they are in the wrong order.
- Largest element "bubbles" to the end in each pass.

**Time Complexity:** O(n²)

---

### 3. Insertion Sort
**File:** `1.3 Insertion_Sorting.cpp`

- Builds the sorted array one element at a time.
- Efficient for small or nearly sorted datasets.

**Time Complexity:** O(n²)

---

### 4. Merge Sort
**File:** `1.4 Merge_Sorting.cpp`

- Uses the Divide and Conquer approach.
- Recursively divides the array and merges sorted halves.

**Time Complexity:** O(n log n)

---

### 5. Quick Sort
**File:** `1.5 Quick_Sorting.cpp`

- Uses a pivot element to partition the array.
- One of the fastest sorting algorithms in practice.

**Average Time Complexity:** O(n log n)

---

### 6. Shell Sort
**File:** `1.6 Shell_Sorting.cpp`

- Improved version of Insertion Sort.
- Compares elements at specific gaps and gradually reduces the gap.

**Time Complexity:** Depends on gap sequence

---

## 📂 Folder Structure

```text
1. Sorting/
│
├── 1.1 Selection_Sorting.cpp
├── 1.2 Bubble_Sorting.cpp
├── 1.3 Insertion_Sorting.cpp
├── 1.4 Merge_Sorting.cpp
├── 1.5 Quick_Sorting.cpp
└── 1.6 Shell_Sorting.cpp
```

---

## 🎯 Learning Objectives

- Understand how sorting algorithms work.
- Compare their time and space complexities.
- Learn iterative and recursive approaches.
- Build a strong foundation for advanced DSA topics.

---

## 🛠️ Language Used

- C++
- STL (Standard Template Library)

---

## 🚀 How to Run

Compile and execute any file:

```bash
g++ filename.cpp -o output
./output
```

Example:

```bash
g++ 1.1_Selection_Sorting.cpp -o selection
./selection
```

---

## 📈 Complexity Comparison

| Algorithm | Best | Average | Worst |
|------------|--------|---------|--------|
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Bubble Sort | O(n) | O(n²) | O(n²) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |
| Shell Sort | Depends on gap sequence | Depends on gap sequence | Depends on gap sequence |

---

> "Sorting is not just arranging data; it is the gateway to efficient searching, optimization, and problem-solving."