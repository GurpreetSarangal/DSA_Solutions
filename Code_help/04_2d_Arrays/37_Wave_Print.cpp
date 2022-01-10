#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr){
    for(int i:arr){
        cout<<i<<"  ";
    }cout<<endl;
}

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){
    vector<int> ans;

    for(int col = 0; col<mCols; col++){
        if(col&1){
            // odd Index -> Bottom to top
            for(int row=nRows - 1;  row>=0; row--){
                // cout<<arr[row][col]<<"  ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int row=0; row<nRows; row++){
                // cout<<arr[row][col]<<"  ";
                ans.push_back(arr[row][col]);
            }
        }

    }
    return ans;
}

int main()
{
    vector<vector<int>> mat= {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = wavePrint(mat,3,3);
    printArray(ans);
    return 0;

}