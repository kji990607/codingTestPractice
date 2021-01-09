#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    int currentL = 10;
    int currentR = 12;
    int reachL = 0;
    int reachR = 0;
    
    for(int i=0;i<numbers.size();i++) {
        if(numbers[i]==1|numbers[i]==4|numbers[i]==7) {
            currentL = numbers[i];
            answer.push_back('L');
        } else if(numbers[i]==3|numbers[i]==6|numbers[i]==9) {
            currentR = numbers[i];
            answer.push_back('R');
        } else {
            int tempL = currentL;
            if(tempL==0) {
                tempL=11;
            }
            int tempR = currentR;
            if(tempR==0) {
                tempR=11;
            }
            int currentRowL = (tempL-1)/3;
            int currentColL = (tempL-1)%3;
            int currentRowR = (tempR-1)/3;
            int currentColR = (tempR-1)%3;
            int tempN = numbers[i];
            if(tempN==0) {
                tempN=11;
            }
            int numRow = (tempN-1)/3;
            int numCol = (tempN-1)%3;
            
            reachL = abs(currentRowL-numRow)+abs(currentColL-numCol);

            reachR = abs(currentRowR-numRow)+abs(currentColR-numCol);
 
            if(reachL<reachR) {
                currentL = numbers[i];
                answer.push_back('L');
            } else if(reachL>reachR) {
                currentR = numbers[i];
                answer.push_back('R');
            } else {
                if(hand=="left") {
                    currentL = numbers[i];
                    answer.push_back('L');
                } else {
                    currentR = numbers[i];
                    answer.push_back('R');
                }
            }
        }
    }
    
    return answer;
}
