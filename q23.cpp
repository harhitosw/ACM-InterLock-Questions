#include<bits/stdc++.h>
using namespace std;
string ans;
char foofoofoo(int n){
	return (char)n;
}
void foofoofoofoo(int n){
	char ch=(char)n;
	ans.push_back(ch);
}
 int foofoo( int n,  int r)
{
if(n>0) return (int)foofoofoo((n%r)+foofoo(n/r,r));
else return (int)foofoofoo(0);
}

void foo(){
	vector<pair<int,int>>vp;
	vp.push_back(make_pair(2251,100));
	vp.push_back(make_pair(1860,100));
	vp.push_back(make_pair(1965,100));
	vp.push_back(make_pair(960,100));
	vp.push_back(make_pair(280,100));
	vp.push_back(make_pair(1759,100));
	vp.push_back(make_pair(970,100));
	vp.push_back(make_pair(1651,100));
	vp.push_back(make_pair(2550,100));
	for(int i=0;i<vp.size();i++){
		int a = vp[i].first,b=vp[i].second;
		int tmp=foofoo(a,b);
		foofoofoofoo(tmp);
	}
	cout<<ans<<endl;
}

int main(){
	int T;
	cin>>T;
	while(T!=0){
		foo();
		T--;
	}
	
	
}  // answer will be the content in ans , use this with the other question to get the final key , and you are done :)