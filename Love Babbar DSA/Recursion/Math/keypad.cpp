// LC 18 https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

#include <iostream>
#include <vector>
using namespace std;
void printVect(vector<int> vect);

void helper(vector<string>& map, string digits, int index, string output, vector<string>& result){
     if(index >= digits.length()){
        result.push_back(output);
        return;
    }

    int ind = digits[index] - '0';
    ind -= 2;

    for(int i=0; i<map[ind].length(); i++){
        output.push_back(map[ind][i]);
        
        helper(map, digits, index+1, output, result);
        output.pop_back();
    }
}

void printVect(vector<string> vect)
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

    string digits = "23";

    vector<string> map{
           "abc",
           "def",
           "ghi",
           "jkl",
           "mno",
           "pqrs",
           "tuv",
           "wxyz",
       };
    vector<string> ans;
    helper(map, digits, 0, "", ans);

    printVect(ans);

    return 0;
}