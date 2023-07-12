// This code implements the merge sort algorithm for a vector of integers.

#include <iostream>
#include <vector>

using namespace std;

// This function merges two sorted subarrays of a vector.
//
// Parameters:
//   v - The vector to merge.
//   low - The index of the first element in the first subarray.
//   mid - The index of the last element in the first subarray.
//   high - The index of the last element in the second subarray.
void merge(vector<int>& v, int low, int mid, int high) {
  // Create a temporary vector to store the merged subarrays.
  vector<int> tempV;

  // Iterate through the two subarrays, adding the smaller element to the temporary vector.
  //
  // The `while` loop will terminate when one of the subarrays is exhausted.
  int indexLow = low;
  int indexHigh = mid + 1;
  while (indexLow <= mid && indexHigh <= high) {
    if (v[indexLow] < v[indexHigh]) {
      // Add the element from the left subarray to the temporary vector.
      tempV.push_back(v[indexLow++]);
    } else {
      // Add the element from the right subarray to the temporary vector.
      tempV.push_back(v[indexHigh++]);
    }
  }

  // If the left subarray is not yet complete, add the remaining elements to the temporary vector.
  //
  // This is done because the left subarray must be sorted before the right subarray.
  while (indexLow <= mid) {
    tempV.push_back(v[indexLow++]);
  }

  // If the right subarray is not yet complete, add the remaining elements to the temporary vector.
  while (indexHigh <= high) {
    tempV.push_back(v[indexHigh++]);
  }

  // Copy the elements from the temporary vector back to the original vector.
  //
  // The `for` loop will terminate when the temporary vector is exhausted.
  for (int i = 0; i < tempV.size(); i++) {
    v[high - i] = tempV[i];
  }
}

// This function recursively sorts a vector using the merge sort algorithm.
//
// Parameters:
//   v - The vector to sort.
//   low - The index of the first element in the vector.
//   high - The index of the last element in the vector.
void mergeSort(vector<int>& v, int low, int high) {
  // If the vector is empty or has only one element, return.
  if (low >= high) {
    return;
  }

  // Divide the vector into two halves.
  int mid = (low + high) / 2;

  // Recursively sort the two halves.
  mergeSort(v, low, mid);
  mergeSort(v, mid + 1, high);

  // Merge the two sorted halves.
  merge(v, low, mid, high);
}

// This function prints the contents of a vector.
//
// Parameters:
//   v - The vector to print.
//   size - The size of the vector.
void printArr(vector<int>& v, int size) {
  // Print a newline character.
  cout << endl;

  // Iterate through the vector and print each element.
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
  }

  // Print another newline character.
  cout << endl;
}

// This is the main function.
int main() {
  // Create a vector of integers.
  vector<int> v {3, 2, 4, 1, 8, 9, 10, 5, 6, 4};

  // Sort the vector using the merge sort algorithm.
  mergeSort(v, 0, v.size() - 1);

  // Print the sorted vector.
  printArr(v, v.size());

  // Return 0.
  return 0;
}
