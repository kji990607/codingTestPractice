#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int start;
    int end;
    
    if(a<b) {
        start = a;
        end = b;
    } else {
        start = b;
        end = a;
    }
    
    for(int i=start;i<=end;i++) {
        answer += i;
    }
    
    return answer;
}
