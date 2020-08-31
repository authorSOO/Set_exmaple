#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	set<string> s;
	int n,m;
	while(n--){
		string name;
		cin>>name;
		s.insert(name);
	}
	vector<string> ans;
	while(m--){
		string name;
		cin>>name;
		if(s.count(name))ans.push_back(name);
	}
	sort(ans.begin(),ans.end());
	cout<<ans.size()<<endl;
	for(auto &name:ans)cout<<name<<endl;
	return 0;
}
