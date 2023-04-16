//Make Array Consecutive 2
#include <iostream>
#include <vector>
int solution(vector<int> statues) {
    for (int i =0;i<statues.size();i++)
    {
        for (int j =0;j<statues.size();j++)
        {
            if(statues[i]<statues[j])
            {
                int a = statues[i];
                statues[i] = statues[j];
                statues[j]= a;
            }
        }
    }
    int count = 0;
    for (int j =0;j<statues.size()-1;j++)
    {
            count=count+statues[j+1]-statues[j]-1;
                
    }
    return count;
}
