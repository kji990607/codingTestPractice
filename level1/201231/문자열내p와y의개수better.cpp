#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int numP = 0;
    int numY = 0;
    
    for (int i=0; i<s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') {
            numP++;
        } else if(s[i] == 'y' || s[i] == 'Y') {
            numY++;
        }
    }
    
    return numP == numY
    //바로 리턴해도 됨 
}
