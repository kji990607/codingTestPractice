#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    int letter = 0;
    
    for(int i=0;i<s.size();i++) {
        if(s[i] == ' ') {
            letter = 1;
        }
        if(letter%2==0) {
            answer += toupper(s[i]);
            letter++;
        } else {
            answer += tolower(s[i]);
            letter++;
        }
    }
    
    return answer;
}
