#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int s[3] = {0, 0, 0};
    int sIdx = 0;
    char prevOp;

    for(int i=0;i<dartResult.length();i++) {
        int temp;
        if(isdigit(dartResult[i])) {
            if(dartResult[i]=='1'&&dartResult[i+1]=='0') {
                temp = 10;
                i++; 
            } else {
                temp = dartResult[i] - '0';
            }
            if(dartResult[i+1]=='S') {
                temp = temp;
                s[sIdx] = temp;
                i++;   
                sIdx++;         
            } else if(dartResult[i+1]=='D') {
                temp = pow(temp,2);
                s[sIdx]=temp;
                i++;
                sIdx++;
            } else {
                temp = pow(temp,3);
                s[sIdx]=temp;
                i++;
                sIdx++;
            }
        } else if(dartResult[i]=='*') {
            if(sIdx=='*') {
                s[sIdx-2] *= 4;
            } else if(prevOp=='#') {
                s[sIdx-2] *= -1;
            } else if (sIdx>1) {
                s[sIdx-2] *= 2;      
            }
            s[sIdx-1] *= 2;
            prevOp = '*';
        } else if(dartResult[i]=='#') {
            s[sIdx-1] *= -1;
        }
    }

    for(int i=0;i<3;i++) {
        answer += s[i];
    }

    return answer;
}
