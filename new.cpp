#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
#endif
	int t;
	cin>>t;
	int numOfSol = 0;
	while(t){
		int a,b,c;
		cin>>a>>b>>c;
		if((a+b)>=2 || (c+b)>=2 ||(a+c)>=2 ){
			numOfSol++;
		}
		t--;
	}
	cout<<numOfSol;
	
	return 0;

}