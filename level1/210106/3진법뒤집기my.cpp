#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector <int> temp;
    int digit = 1;
    
    while(n>0) { 
        temp.push_back(n%3);
        n/=3;
    }
    
    for(int i=temp.size()-1;i>=0;i--) {
        answer += temp.at(i)*digit;
        digit *= 3;
    }
    
    return answer;
}
