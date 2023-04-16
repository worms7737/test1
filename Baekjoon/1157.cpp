#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    string input;
    int count;
    int maxcount[25];
   
    cin>>input;

    for(int i=0; i<input.length(); i++){
        int n= input[i];

        if(n < 97)
            maxcount[n-65]++;
        else
            maxcount[n-97]++;

    }

    
}