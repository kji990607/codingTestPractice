#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    
    //������ ���� �ּҰ��� ã�� �� �ִ� 
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++) {
        if(answer[i]==arr[0]) {
            answer.erase(answer.begin()+i);
            break;
        }
    }
    
    if(answer.size()==0) {
        answer.push_back(-1);
    }
    
    return answer;
}
