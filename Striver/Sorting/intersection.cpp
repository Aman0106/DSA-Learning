#include <iostream>
#include <vector>

using namespace std;

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

int main() {
    
    vector < int > a {1,2,3,3,4,5,6,7};
    vector < int > b {3,3,4,4,5,8};

    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i < n1 && j < n2){
        if(a[i] > b[j]){
            j++;
            continue;
        }
        if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
            continue;
        }


        i++;
    }

    printArr(ans, ans.size());
}