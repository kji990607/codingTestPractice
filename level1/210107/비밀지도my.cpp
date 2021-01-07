#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> bitOr;
    string result;
    
    for(int i=0;i<n;i++) {
        bitOr.push_back(arr1[i]|arr2[i]);
    }
    
    for(int i=0;i<n;i++) {
        string result = "";
        while(result.size()<n) {
            if(bitOr[i]%2==1) {
                result.push_back('#');
            } else {
                result.push_back(' ');
            }
            bitOr[i]/=2;
        }
        //push_front 안되는 이유는? 
        reverse(result.begin(), result.end());
        answer.push_back(result);
    }
    
    return answer;
}
