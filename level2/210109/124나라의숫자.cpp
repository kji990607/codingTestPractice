#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    char num[3] = {'4','1','2'};
    
    while(n>0) {
        if(n%3==0) {
            answer.push_back(num[n%3]);
            n = n/3 -1 ;
        } else {
            answer.push_back(num[n%3]);
            n /= 3;
        } 
    }
    
    reverse(answer.begin(),answer.end());
    
    return answer;
}
