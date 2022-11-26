#include<bits/stdc++.h>
using namespace std;

main(){
	int n,wei,day,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>day>>wei;
		if(day<=400 and 150<=wei and wei<=200){
			sum++;
		}
	}
	cout<<sum;
}
