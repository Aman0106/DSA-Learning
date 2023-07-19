#include <iostream>
#include <vector>

using namespace std;

/*
 * This function finds the maximum subarray sum in the array `v`.
 *
 * The maximum subarray sum is the sum of the elements in a subarray of `v`
 * that has the largest sum.
 */
void maxSubArraySum(vector<int> &v, int n)
{

    /*
     * Initialize the maximum sum and the current sum.
     *
     * The maximum sum is initialized to INT_MIN, which is the minimum value of an integer.
     * The current sum is initialized to 0.
     */
    int maxSum = INT_MIN;
    int sum = 0;

    /*
     * Initialize the start and end indices of the maximum subarray.
     *
     * The start index is initialized to -1, which indicates that the maximum subarray has not yet been found.
     * The end index is initialized to -1, which indicates that the maximum subarray has not yet been found.
     */
    int ansStart = -1, end = -1;
    int start = -1;
    /*
     * Iterate over the array.
     *
     * For each element in the array, we update the current sum and the maximum sum as needed.
     */
    for (int i = 0; i < n; i++)
    {

        /*
         * If the current sum is 0, then reset it to the current element.
         *
         * This is because we only care about the maximum sum of a subarray, and a subarray with a sum of 0 does not contribute to the maximum sum.
         */

        if (sum == 0)
        {
            start = i;
        }

        /*
         * Add the current element to the current sum.
         */
        sum += v[i];

        /*
         * If the current sum is greater than the maximum sum, then update the maximum sum and the start and end indices.
         */
        if (sum > maxSum)
        {
            maxSum = sum;
            ansStart = start;
            end = i;
        }

        /*
         * If the current sum is negative, then reset it to 0.
         *
         * This is because we only care about the maximum sum of a subarray, and a negative sum cannot contribute to the maximum sum.
         */
        if (sum < 0)
        {
            sum = 0;
        }
    }

    /*
     * Print the start and end indices of the maximum subarray.
     */
    cout << "Start: " << ansStart << " End: " << end << endl;

    /*
     * Print the maximum sum.
     */
    cout << endl
         << maxSum << endl;
}

// The main function.
int main()
{

    // Create a vector of integers.
    vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // Find the maximum subarray sum in the vector.
    maxSubArraySum(v, v.size());

    // Return 0.
    return 0;
}
