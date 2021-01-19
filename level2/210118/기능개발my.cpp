#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> days;
    vector<int> answer;
    int max;
    int temp = 0;
    
    for(int i=0;i<progresses.size();i++) {
        int temp;
        temp = ceil((double)(100-progresses[i])/(double)speeds[i]);
        days.push_back(temp);
    }
    
    max = days[0];
    
    for(int i=0;i<days.size();i++) {   
        if(days[i]>max) {
            answer.push_back(temp);
            max = days[i];
            temp = 0;
        } 
        
        if (i==days.size()-1) {
            temp++;
            answer.push_back(temp);
            return answer;
        }

        temp++;
    }
}
