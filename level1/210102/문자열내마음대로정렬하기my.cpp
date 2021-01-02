#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int comN;

bool compare(string a, string b) {
    if(a[comN] == b[comN]) {
        return a < b;
    } else {
        return a[comN] < b[comN];
    }
}

vector<string> solution(vector<string> strings, int n) {  
    comN = n;
    
    sort(strings.begin(), strings.end(), compare);
    
    return strings;
}
