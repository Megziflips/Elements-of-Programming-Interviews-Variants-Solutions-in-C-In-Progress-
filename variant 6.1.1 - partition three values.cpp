/* 
*************************************************************************************
    OBJECTIVE: Given an array A of objects with keys that takes one of three values,
    reorder the array so that all objects that have the same key appear in the same 
    subarray. The order of subarrays is not important.
    Use O(1) additional space and O(|A|) time.
*************************************************************************************
*/

#include <iostream>
#include <vector>

using namespace std;

enum Letters {A, B, C};

void partition_three_values(vector<Letters>& word){
    int trail = 0; 
    int lead = 0; 
    int endpoint = word.size() - 1;
    while (lead <= endpoint){
        if(word[lead] == A)
            swap(word[trail++], word[lead++]);
        else if (word[lead] == B)
            lead++;
        else
            swap(word[lead], word[endpoint--]);
    }
}

//TEST
int main()
{
    vector<Letters> test1 {A,B,C,A,B,C,A,B,C};
    partition_three_values(test1);
    for(auto i : test1)
        cout << i << " ";
}
