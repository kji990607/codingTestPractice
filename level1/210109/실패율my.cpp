#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<double> temp;

bool comp (int a, int b) {
    if(temp[a-1]==temp[b-1]) {
        return a<b;
    } else {
        return temp[a-1]>temp[b-1];
    }
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    for(int i=0;i<N;i++) {
        double trial = 0;
        double fail = 0;
        for(int j=0;j<stages.size();j++) {
            if(stages[j]>=i+1) {
                trial++;
                if(stages[j]==i+1) {
                    fail++;
                }
            }
        }
        if(trial==0) {
            temp.push_back(0);
        } else{
            temp.push_back(fail/trial);
        }
    }
    
    for(int i=1;i<=N;i++) {
        answer.push_back(i);
    }
    
    sort(answer.begin(),answer.end(),comp);
      
    return answer;
}
