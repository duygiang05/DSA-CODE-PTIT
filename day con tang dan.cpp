#include<bits/stdc++.h>
using namespace std;
int n, a[100], x[100];
vector<string> v;

void Try(int i,int index){
	for(int j=index;j<=n;j++){
		if(a[j]>x[i-1]){
			x[i]=a[j];
			if(i>=2){
				string s="";
				for(int k=1;k<=i;k++) s+=to_string(x[k])+' ';
				v.push_back(s);
			}
			Try(i+1,j+1);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	x[0]=0;
	Try(1,1);
	sort(begin(v),end(v));
	for(string x:v) cout<<x<<endl;
}