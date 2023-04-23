/*Given matrix, a rectangular matrix of integers, where each value represents the cost of the room, 
your task is to return the total sum of all rooms that are suitable for the CodeBots 
(ie: add up all the values that don't appear below a 0).

Example
For
matrix = [[0, 1, 1, 2], 
          [0, 5, 0, 0], 
          [2, 0, 3, 3]]
the output should be
solution(matrix) = 9.
*/
#include <vector>

int solution(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int sum=0;
    for (int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(matrix[j][i]==0)
                break;
            sum+=matrix[j][i];
        }
    }
    return sum;
}
