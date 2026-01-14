#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> ans ;
    int row = matrix.size();
    int col = matrix[0].size();

    int startingrow = 0;
    int startingcol = 0;
    int endingrow=row-1;
    int endingcol=col-1;

    int count=0;
    int total=row*col;

    while(count  <  total){

        for(int index=startingcol;index<=endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }startingrow++;
        for(int index=startingrow;index<=endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;
        }endingcol--;
        for(int index=endingcol;index>=startingcol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }endingrow--;
        for(int index=endingrow;index>=startingrow;index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }startingcol++;
    }return ans ;
}
int main(){
    vector<vector<int>> matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    vector<int> ok=spiralOrder(matrix);
    
    cout << "Spiral Order Output: ";
    for(int i = 0; i < ok.size(); i++) {
        cout << ok[i] << " ";
    }
    cout << endl;

    return 0;
}
