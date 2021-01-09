#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    int num = phone_number.length()-4;
    
    for(int i=0; i<num; i++) {
        answer.append("*");
    }
    for(int i=num;i<phone_number.size();i++) {
        answer.append(phone_number[i]);
    }
    
    return answer;
}
