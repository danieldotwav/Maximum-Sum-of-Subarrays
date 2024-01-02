# Maximum Sum of Subarrays

## Description
This repository contains the C++ implementation of an efficient algorithm to find the maximum sum of subarrays within a given integer array. The core algorithm used is a variant of the well-known Kadane's Algorithm, which is particularly effective for this kind of problem.

## Problem Statement
Given an integer array, the goal is to find the subarray (contiguous elements) that has the maximum sum among all possible subarrays.

## Algorithm
The implementation uses a variant of Kadane's Algorithm with the following steps:
1. Iterate through each element of the array.
2. Add the current element to the running sum (`current_sum`).
3. Update the maximum sum found so far (`current_max`) if `current_sum` is greater.
4. Reset `current_sum` to 0 if it becomes negative (indicating that starting a new subarray might be more beneficial).
5. Return the maximum sum after iterating through the entire array.

## Code Structure
The code consists of the following primary function:

- `int maxSubArray(int arr[], int size)`: This function takes an array `arr` and its size `size` as input and returns the maximum subarray sum.

The `main` function demonstrates the use of `maxSubArray` with various test cases.

## Time and Space Complexity
- **Time Complexity:** O(n), where n is the number of elements in the array. This is because the algorithm goes through the array elements only once.
- **Space Complexity:** O(1), as it uses a fixed amount of extra space regardless of the input array size.

## Example Usage
```cpp
int array[] = { -1, 2, 3, -2, 5, -3, 2 };
int size = sizeof(array) / sizeof(int);
cout << "Max Sum: " << maxSubArray(array, size) << '\n';
```

## Testing
The main function contains several test cases that demonstrate the effectiveness of the algorithm across different scenarios, including arrays with all negative numbers, all positive numbers, mixed numbers, and single elements, and empty arrays.
