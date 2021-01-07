#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	map <string, int> m;
	
	for(auto c: completion){
		m[c] += 1;
	}
	
	for(auto p: participant){
		m[p] -= 1;
		//map에서 value가 int형일 때 기본적으로 0의 값을 가짐 
		if(m[p]<0) {
			return p;
		}
	}
}
