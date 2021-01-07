#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int bigger = (n>=m) ? n : m;
    int smaller = (n>=m) ? m : n;
    int temp1, temp2;
    
    for(int i=1;i<=bigger;i++) {
        if(n%i==0 && m%i==0) {
            temp1 = i;
        }
    }
    answer.push_back(temp1);
    
    
    for(int i=1;i<=smaller;i++) {
        temp2 = bigger * i;
        if(temp2%smaller==0) {
            answer.push_back(temp2);
            break;
        }
    }

    return answer;
}
