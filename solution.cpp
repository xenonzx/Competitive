#include <iostream>
#include <map>

using namespace std;

int main(){
    char str1[20];
    int n;
    int * dynamicArray;
    map <int, int> hash;

    cin>> n;
    dynamicArray = new int[n] ;

   printf("Enter name: ");
   scanf("%s", str1);
   printf("Entered Name: %s\n", str1);
   
    return 0;
}