#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> p1 = {1, 2, 3, 4, 5};
    vector<int> p2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int rNum1 = 0;
    int rNum2 = 0;
    int rNum3 = 0;
    vector<int> answer;
    
    for(int i=0;i<answers.size();i++) {
        if(answers[i] == p1[i%p1.size()]) {
            rNum1++;
        }
        if(answers[i] == p2[i%p2.size()]) {
            rNum2++;
        }
        if(answers[i] == p3[i%p3.size()]) {
            rNum3++;
        }
    }
    
    if(rNum1 == max({rNum1, rNum2, rNum3})) {
        answer.push_back(1);
    }
    
    if(rNum2 == max({rNum1, rNum2, rNum3})) {
        answer.push_back(2);
    }
    
    if(rNum3 == max({rNum1, rNum2, rNum3})) {
        answer.push_back(3);
    }
    
    return answer;
}
