#include<iostream>
#include<vector>

using namespace std;

int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int count = 0;

        // BRUTE FORCE
        // for(int i = 0; i<m; i++){
        //     int n = grid[i].size();
        //     for (int j = 0; j<n; j++){
        //         if (grid[i][j] < 0 ) count++;
        //     }
        // } 

        int n = grid[0].size();
        int row = 0;
        int col = n - 1;

        while (row < m && col >= 0) {
            if (grid[row][col] < 0) {
                count += (m - row);
                col--;
            } else {
                row++;
            }
        }
        return count;
}

int main(){
    vector<vector<int>> grid = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout << "No. of negatives: " << countNegatives(grid);
    
    return 0;
}
