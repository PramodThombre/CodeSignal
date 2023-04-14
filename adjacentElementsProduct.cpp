
/*Given an array of integers, find the pair of adjacent elements that has the largest product and return that product.
Example
For inputArray = [3, 6, -2, -5, 7, 3], the output should be
solution(inputArray) = 21.
7 and 3 produce the largest product.*/

int solution(vector<int> inputArray) {
    int max;
    for(int i=0;i<inputArray.size()-1;i++)
    {
        int product=inputArray[i]*inputArray[i+1];
        if(i==0) max=product;
        if (max<product)
            max=product;
    }
    return max;
}
