// Question: Given an integer array, return the maximum sum of the subarrays

#include <iostream>
using namespace std;

int maxSubArray(int arr[], int size);

int main() {
	// Mixture of Positive and Negative Numbers
	int array_1[] = { 10, -2, 5 };
	int size_1 = sizeof(array_1) / sizeof(int);

	cout << "Array: { -1, 5, -6, 7, 1, 3 }\nMax Sum: " << maxSubArray(array_1, size_1) << '\n';

	// All Negative Numbers
	int array_2[] = { -4, -2, -7, -5 };
	int size_2 = sizeof(array_2) / sizeof(int);

	cout << "\nArray: { -4, -2, -7, -5 }\nMax Sum: " << maxSubArray(array_2, size_2) << '\n';

	// All Positive Numbers
	int array_3[] = { 2, 4, 6, 8 };
	int size_3 = sizeof(array_3) / sizeof(int);

	cout << "\nArray: { 2, 4, 6, 8 }\nMax Sum: " << maxSubArray(array_3, size_3) << '\n';

	// Mixture of Positive and Negative Numbers
	int array_4[] = { -1, 2, 3, -2, 5, -3, 2 };
	int size_4 = sizeof(array_4) / sizeof(int);

	cout << "\nArray: { -1, 2, 3, -2, 5, -3, 2 }\nMax Sum: " << maxSubArray(array_4, size_4) << '\n';

	// Single Element (Positive)
	int array_5[] = { 5 };
	int size_5 = sizeof(array_5) / sizeof(int);

	cout << "\nArray: { 5 }\nMax Sum: " << maxSubArray(array_5, size_5) << '\n';

	// Single Element (Negative)
	int array_6[] = { -5 };
	int size_6 = sizeof(array_6) / sizeof(int);

	cout << "\nArray: { -5 }\nMax Sum: " << maxSubArray(array_6, size_6) << '\n';

	// Long Array with Mixed Values
	int array_8[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int size_8 = sizeof(array_8) / sizeof(int);

	cout << "\nArray: { 1, -2, 3, 10, -4, 7, 2, -5 }\nMax Sum: " << maxSubArray(array_8, size_8) << '\n';

	return 0;
}

// Here, we use a variation of Kadane's algorithm for finding the maximum subarray sum:
// 1. Iterate through each element of the array
// 2. Add the current element to the running sum ('current_sum')
// 3. Update the maximum sum found so far ('current_max') if the 'current_sum' is greater
// 4. Reset 'current_sum' to 0 if it becomes negative
// 5. Return the maximum sum after iterating through the entire array

int maxSubArray(int arr[], int size) {
	// Handle empty array case
	if (size == 0) {
		return 0;
	}

	int current_sum = 0; 
	int current_max = INT_MIN; // Initialize to smallest possible integer

	for (int i = 0; i < size; ++i) {
		current_sum += arr[i];
		current_max = max(current_max, current_sum);

		// If the current sum becomes negative, reset it to 0
		if (current_sum < 0) {
			current_sum = 0;
		}
	}

	return current_max;
}
