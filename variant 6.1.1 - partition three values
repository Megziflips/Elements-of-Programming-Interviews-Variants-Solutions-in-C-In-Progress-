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
