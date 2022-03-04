"""
problem link = https://leetcode.com/problems/champagne-tower/
We stack glasses in a pyramid, where the first row has 1 glass, the second row has 2 glasses, and so on until the 100th row.  Each glass holds one cup of champagne.
Example 1:

Input: poured = 1, query_row = 1, query_glass = 1
Output: 0.00000
Explanation: We poured 1 cup of champange to the top glass of the tower (which is indexed as (0, 0)). 
  There will be no excess liquid so all the glasses under the top glass will remain empty
"""
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
       double result[101][101] = {0.0};
        result[0][0] = poured;
      
        for (int i = 0; i < 100; i++) {
          
            for (int j = 0; j <= i; j++) {
              
                if (result[i][j] >= 1) {
                  
                    result[i + 1][j] += (result[i][j] - 1) / 2.0;
                    result[i + 1][j + 1] += (result[i][j] - 1) / 2.0;
                    result[i][j] = 1;
                }
            }
        }
        return result[query_row][query_glass];
    }
};
