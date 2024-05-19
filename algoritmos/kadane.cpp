#include <bits/stdc++.h>
using namespace std;
int k(vector<int> &L){
	int curr=L[0], ans=L[0];
	for(int t:L){
		curr=max(t,t+curr);
		ans=max(ans,curr);
	}

	return ans;
}
int main() {
	int n;
	cin>>n;
	vector <int> L(n);
	for(int &t:L)cin>>t;

	cout<<"\n\n"<<k(L);
	return 0;
}