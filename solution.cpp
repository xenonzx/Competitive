#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    int * awayArray;
    map <int, int> homeCount;

    cin>> n;
    awayArray = new int[n] ;
    for (int i = 0; i < n; i++)
    {   int home;
        int away;
        cin >> home >> away;
        homeCount[home]++;
        awayArray[i] = away; 
    }

    int conflictingGames = 0;
    for (int i = 0; i < n; i++){
       conflictingGames += homeCount[awayArray[i]] ;
    }
    cout<<conflictingGames;
    
    return 0;
}