#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int intputsize = 101; 
    char input[intputsize];
    int count = 0 ;
    int lastCharAccii = int('a');
    cin >> input;

    for (int i = 0; i < intputsize  && input[i] != '\0'; i++)
    {
        int currentCharAccii = int(input[i]);
        int diff =  abs(currentCharAccii-lastCharAccii);
        if( diff >13 ){
            diff = 26-diff;
        }
        count += diff;
        lastCharAccii = currentCharAccii;
    }
    cout << count;
    
    return 0;
}