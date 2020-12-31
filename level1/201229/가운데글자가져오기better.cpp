#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int size = s.size();
    string answer = s.substr((size - 1)/2, (size-1)%2 + 1);
    return answer;
}
