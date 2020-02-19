#include <iostream>
#include <map>

using namespace std;

int main(){
    char s[51];
    char t[51];
    
    scanf("%s", s);
    scanf("%s", t);

    int sPos = 0;
    int tPos = 0;

    while( sPos < strlen(s) &&tPos<strlen(t)){
        if (s[sPos]== t[tPos]){
            sPos++;
        }
        tPos++;
    }
    cout<<sPos+1;
    return 0;
}