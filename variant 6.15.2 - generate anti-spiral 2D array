/* 
*********************************************************************************
    OBJECTIVE: Given a input array (I) compute a 2D array (A) which when printed
	in spiral order yields I. (Assume |I| = n*n for some integer n.)
*********************************************************************************
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<int>> Spiralize(vector<int> input){
    //d x d is the array dimension
    auto d = sqrt(input.size());
    vector<vector<int>> ret(d, vector<int>(d, 0));

    int offset = 0;
    int index = 0;

    while(index < d * d){
        if (offset == ret.size() - offset - 1)
            ret[offset][offset] = input[index++];

        for(int j = offset; j <= d-offset-2; j++)
            ret[offset][j] = input[index++];

        for(int i = offset; i <= d-offset-2; i++)
            ret[i][d-offset-1] = input[index++];

        for(int j = d-offset-1; j >= offset+1; j--)
            ret[d-offset-1][j] = input[index++];

        for(int i = d-offset-1; i >= offset+1; i--)
            ret[i][offset] = input[index++];

        offset++;
    }
    return ret;
}

//TEST
int main()
{
    vector<int> input = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    auto ret = Spiralize(input);
    for(auto i : ret){
        for(auto j : i)
            cout << j << " ";
        cout << '\n';
    }

    return 0;
}



