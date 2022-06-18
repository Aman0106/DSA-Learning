#include<iostream>
#include<vector>

using namespace std;

int first;
int last;

void search(vector<int> v, int target){
    int mid = v.size()/2;
    int l=0, u=v.size()-1;

    while(l<=u){
        cout<<".";
        if(v[mid] == target){
            if(mid == 0 || v[mid-1] != target){
                first = mid;
                break;
            }
            
            u = mid-1;
        }   
        else if(target>v[mid]){
            l = mid+1;
        }
        else
            u = mid-1;

        mid = l + ((u-l)/2);
    }

    mid = v.size() / 2;
    l = 0; u = v.size() - 1;

    while(l<=u){
        if(v[mid] == target){
            if(mid == v.size()-1 || v[mid+1] != target){
                last = mid;
                break;
            }
            
            l = mid+1;
        }   
        else if(target>v[mid]){
            l = mid+1;
        }
        else
            u = mid-1;

        mid = l + ((u-l)/2);
    }

}

int main(){
    vector<int> v = {0,0,0,0};
    // vector<int> v = {-3,-2,4,6,7,88,9};
    int target = 0;
    search(v,target);

    cout<<first<<"||"<<last<<endl;
}