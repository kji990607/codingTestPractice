#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map <char, int> m;
    
    for(int i=0;i<skill.size();i++) {
        m.insert(make_pair(skill[i],i+1));
    }
    
    for(auto s: skill_trees) {
        bool flag = true;
        int stage = 1;
        for(int j=0;j<s.length();j++) {
            if(stage<m[s[j]]) {
                flag = false;
                break;
            } else if(m[s[j]]==stage) {
                stage++;
            }
        }   
        if(flag==true) {
            answer++;
        }
     }
    return answer;
}
