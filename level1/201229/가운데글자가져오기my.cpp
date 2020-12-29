#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int center = 0;
    string answer = "";
    int slength = s.length();
    
    if(slength%2 == 1) {
        center = s.length()/2;
        answer = s.at(center);
    } else {
        center = s.length()/2-1;
        answer = s.at(center);
        answer.push_back(s.at(center+1));
    }
    
    return answer;
}
