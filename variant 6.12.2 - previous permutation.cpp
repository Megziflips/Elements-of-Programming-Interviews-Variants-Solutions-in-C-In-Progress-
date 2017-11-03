/* 
*********************************************************************************
    OBJECTIVE: Given a permutation p represented as a vector, return the vector 
    corresponding to the previous permutation of p under lexicographic ordering.
*********************************************************************************
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> previous_permutation(vector<int>myVec){
    int breakpoint = myVec.size() - 2;
    while (breakpoint >= 0 && myVec[breakpoint] <  myVec[breakpoint + 1])
        breakpoint--;
        
    if (breakpoint == -1)
        return {};
    
    int swappoint;
    for (int i = breakpoint + 1; i < myVec.size(); i++){
        if (myVec[i] < myVec[breakpoint])
            swappoint = i;
        else break;
    }
    
    swap(myVec[breakpoint], myVec[swappoint]);
    reverse(myVec.begin() + breakpoint + 1, myVec.end());
    
    return myVec;
}
 //TEST
int main() {
	vector<int> myVec {1,2,3,4,5,7,6};
	myVec = previous_permutation(myVec);
    
    for (auto i : myVec)
        cout << i << ", " ;
    return 0;
}
