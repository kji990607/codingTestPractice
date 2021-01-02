#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int numP = 0;
    int numY = 0;
    
    for (int i=0; i<s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') {
            numP++;
        } else if(s[i] == 'y' || s[i] == 'Y') {
            numY++;
        }
    }
    
    answer = (numP == numY) ? true : false;

    return answer;
}
