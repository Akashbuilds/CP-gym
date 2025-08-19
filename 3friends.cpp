#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
#endif

	long long n;
	cin>>n;
	vector<long long> arr;
	arr.push_back(n);
	while(n!=1){
		if(n%2==0){
			n = n/2;
		}
		else {
			n = (n*3) + 1; 
		}
		arr.push_back(n);

	}
	for (long long x : arr){
		cout<<x<<" ";
	}
	cout << "\n";
	return 0;

}