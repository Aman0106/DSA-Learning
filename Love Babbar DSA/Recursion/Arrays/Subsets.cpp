// LC 78 https://leetcode.com/problems/subsets/
#include <iostream>
#include <vector>
using namespace std;
void printVect(vector<int> vect);

void subsets(vector<int> input, vector<int> ans, int index)
{

    if (index >= input.size()){
        printVect(ans);
        return;
    }
    vector<int> output = ans;
    output.push_back(input[index]);

    // Include
    subsets(input, output, index + 1);
    // Exclude
    subsets(input, ans, index + 1);

}

void printVect(vector<int> vect)
{
    cout << "[";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << ",";
    }
    cout << "]" << endl;
}

int main()
{
    vector<int> nums{1, 2, 3};
    vector<int> ans;
    subsets(nums, ans, 0);

    return 0;
}