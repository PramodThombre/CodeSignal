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
