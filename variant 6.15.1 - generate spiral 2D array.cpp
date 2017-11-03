#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Create_SpiralVector(int n){
    vector<vector<int>> spiralVector(n, vector<int>(n, 0));
    int offset = 0;
    //lastSpiralInt keeps track of the last int added to the spiralVector
    int lastSpiralInt = 1;
    while(lastSpiralInt <= n * n){
        if (offset == spiralVector.size() - offset - 1)
            spiralVector[offset][offset] = lastSpiralInt++;
    
        for(int j = offset; j <= n-offset-2; j++)
            spiralVector[offset][j] = lastSpiralInt++;

        for(int i = offset; i <= n-offset-2; i++)
            spiralVector[i][n-offset-1] = lastSpiralInt++;

        for(int j = n-offset-1; j >= offset+1; j--)
            spiralVector[n-offset-1][j] = lastSpiralInt++;

        for(int i = n-offset-1; i >= offset+1; i--)
            spiralVector[i][offset] = lastSpiralInt++;

        offset++;
    }
    return spiralVector;
}

//TEST
int main()
{
    auto ret = Create_SpiralVector(4);
    for(auto i : ret){
        for(auto j : i)
            cout << j << " ";
        cout << '\n';
    }

    return 0;
}



