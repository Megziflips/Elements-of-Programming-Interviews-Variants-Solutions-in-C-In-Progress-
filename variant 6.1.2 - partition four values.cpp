/* 
************************************************************************************
    OBJECTIVE: Given an array A of objects with keys that takes one of four values,
    reorder the array so that all objects that have the same key appear in the same 
    subarray.
    Use O(1) additional space and O(|A|) time.
************************************************************************************
*/

#include <iostream>
#include <vector>

using namespace std;

enum Letters {A, B, C, D};

void partition_four_values(vector<Letters>& word){
    int trail = 0; 
    int lead = 0; 
    int endpoint = word.size() - 1;
    
    //tracking the last A and first D to use that as boundaries for sorting B and C
    int lastA = 0; 
    int firstD = word.size() - 1;
    
    while (lead <= endpoint){
        if(word[lead] == A){
            lastA = trail;
            swap(word[trail++], word[lead++]);
        }
        else if (word[lead] == B || word[lead] == C)
            lead++;
        else{
            firstD = endpoint;
            swap(word[lead], word[endpoint--]);
        }
    }
    
    lead = trail = ++lastA;
    endpoint = --firstD;
    
    while(lead <= endpoint){
        if(word[lead] == B)
            swap(word[trail++], word[lead++]);
        else 
           swap(word[lead], word[endpoint--]); 
    }
}

//TEST
int main()
{
    vector<Letters> test1 {A,B,C,A,B,C,A,B,C,D,D,A,B,D,B,C,A,B,C,A,B,C,D,D,D};
    partition_four_values(test1);
    for(auto i : test1){
        if( i == A)
            cout << "A" << " ";
        else if( i == B)
            cout << "B" << " ";
        else if( i == C)
            cout << "C" << " ";
        else
            cout << "D" << " ";
    }
        
}

