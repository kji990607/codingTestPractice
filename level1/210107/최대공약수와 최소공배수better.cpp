//유클리드 호제법
#include <string>
#include <vector>
using namespace std;
vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n, b = m, r = 0;
    int GCD = 0, LCM = 0;
    while(b > 0){
        r = a % b;
        a = b;
        b = r;
    }
    GCD = a;
    LCM = n * m / GCD;
    answer.push_back(GCD);
    answer.push_back(LCM);
    return answer;
}
