#include <iostream>
#include <vector>
using namespace std;
vector<int> waveprint(vector<vector<int>> arr, int nrow, int ncol) {
    vector<int> ans;
    // Iterate through each COLUMN first
    for(int i = 0; i < ncol; i++) {
        // If column index is ODD: Bottom to Top
        if(i & 1) {
            for(int j = nrow - 1; j >= 0; j--) {
                ans.push_back(arr[j][i]); // Fixed access: arr[row][col]
            }
        }// If column index is EVEN: Top to Bottom
        else {
            for(int j = 0; j < nrow; j++) { // Fixed limit: j < nrow
                ans.push_back(arr[j][i]); // Fixed access: arr[row][col]
            }
        }
    }return ans;
}
int main() {
    vector<vector<int>> arr{
         {1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}
    };
    int nrow = 3;
    int ncol = 3;
    cout << "Original Matrix:" << endl;
    for(int i = 0; i < nrow; i++) {
        for(int j = 0; j < ncol; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    // 2. Call the function
    vector<int> result = waveprint(arr, nrow, ncol);
    // 3. Print the Result
    cout << "Wave Print Output: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
