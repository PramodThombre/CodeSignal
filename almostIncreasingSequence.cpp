/*
Given a sequence of integers as an array, determine whether it is possible to obtain a strictly increasing sequence by removing no more than one element from the array.

Note: sequence a0, a1, ..., an is considered to be a strictly increasing if a0 < a1 < ... < an. Sequence containing only one element is also considered to be strictly increasing.
Example
For sequence = [1, 3, 2, 1], the output should be
solution(sequence) = false.

There is no one element in this array that can be removed in order to get a strictly increasing sequence.

For sequence = [1, 3, 2], the output should be
solution(sequence) = true.

You can remove 3 from the array to get the strictly increasing sequence [1, 2]. Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].
*/

#include <vector>

bool solution(vector<int> sequence) {
    vector<int> orgsequence1;
    vector<int> orgsequence2;
    int counter = 0;
    bool flag=true;
    std::vector<int>::iterator indx;
    int n=sequence.size();
    for (auto i = sequence.begin(); i != sequence.end()-1; i++)
    {
        if(*(i+1) < *i)
        {
            orgsequence1.push_back(*i);
            orgsequence2.push_back(*(i+1));
            i++;
            i++;
            for (auto j = i; j != sequence.end(); j++)
            {
                orgsequence1.push_back(*j);
                orgsequence2.push_back(*j);
            }
            break;
        }
        else
        {
            orgsequence1.push_back(*i);
            orgsequence2.push_back(*i);
        }
    }
    for (auto i = orgsequence1.begin(); i != orgsequence1.end()-1; i++)
    {
        if(*(i+1) <= *i)
        {
            counter++;
        }
    }
    if(counter>0)
    {
        counter=0;
        for (auto i = orgsequence2.begin(); i != orgsequence2.end()-1; i++)
        {
            if(*(i+1) <= *i)
            {
                counter++;
            }
        }
        if(counter>0)
        return false;
    }
    return true;
}
