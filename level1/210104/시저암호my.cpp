#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i=0;i<s.length();i++) {
        //int ��������� ���ϸ� 1, 4, 10, 12 �׽�Ʈ ���̽� ����... ��?
        int a = int(s[i]);
        
        if(a>=65 && a<=90) {
            s[i] += n;
            if(a+n>90) {
                s[i] -= 26;
            }
        } else if(a>=97 && a<=122) {
            s[i] += n;
            if(a+n>122) {
            s[i] -= 26;
        } 
        }
    }
    return s;
}
