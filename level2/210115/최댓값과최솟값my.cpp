#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> arr;
    string current;
    string answer = "";
    
    for(int i=0;i<s.size();i++) {
        if (s[i]==' ') {
            arr.push_back(atoi(current.c_str()));
            current.clear();
        } else {
            current += s[i];
        }
    }
    arr.push_back(atoi(current.c_str()));
    
    sort(arr.begin(),arr.end());
    
    answer = answer + to_string(arr.front()) + " " + to_string(arr.back());
    
    return answer;
}
