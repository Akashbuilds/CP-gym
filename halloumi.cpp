#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
#endif
	
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long> a(n);
		for (int i=0;i<n;i++)
			cin>>a[i];
		
		vector<long long> copy_a = a;
		sort(copy_a.begin(), copy_a.end());

		if(copy_a == a || k > 1)
			cout<< "YES" << endl;

		else
			cout<< "NO" << endl;

			
		
	}
	
	
	return 0;

}