/*
Author: Ravibhushan Kumar
Occupation: Software Developer
Skilled: Java, Big Data, Linux, Machine Learning
Email id: ravibhushankumarsonu@gmail.com
Linkdin: https://www.linkedin.com/in/ravibhushan-kumar-6ab881b0/
github : https://github.com/ravibhushankumarsonu 
*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<string>

#define MOD 1000000007
#define ll long long int
using namespace std;


int main() {
	// your code goes here
	//freopen("input.in","r",stdin);
    //freopen("output.out","w",stdout);
	ll t,a,b,c,d,e,f,g,n,j,r,i,x,p[200009];
	cin >>t;
	while(t--) {
		memset(p,0,200009);
		cin >> n;
		j =n%4;
		r = n- (4+j);
		i = 1;
		while(i<=r) {
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+2<<endl;
			cin>>a;
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+3<<endl;
			cin>>b;
			cout<<1<<" "<<i<<" "<<i+2<<" "<<i+3<<endl;
			cin>>c;
			cout<<1<<" "<<i+1<<" "<<i+3<<" "<<i+2<<endl;
			cin>>d;
			p[i] = a^b^c;
			p[i+1] = a^b^d;
			p[i+2] = p[i]^p[i+1]^a;
			p[i+3] = p[i]^p[i+1]^b;
			i = i+4;
		}

		if(j==0) {
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+2<<endl;
			cin>>a;
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+3<<endl;
			cin>>b;
			cout<<1<<" "<<i<<" "<<i+2<<" "<<i+3<<endl;
			cin>>c;
			cout<<1<<" "<<i+1<<" "<<i+3<<" "<<i+2<<endl;
			cin>>d;
			p[i] = a^b^c;
			p[i+1] = a^b^d;
			p[i+2] = p[i]^p[i+1]^a;
			p[i+3] = p[i]^p[i+1]^b;
		}
		if(j==1) {
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+2<<endl;
			cin>>a;
			cout<<1<<" "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
			cin>>b;
			cout<<1<<" "<<i+2<<" "<<i+3<<" "<<i+4<<endl;
			cin>>c;
			cout<<1<<" "<<i+3<<" "<<i+4<<" "<<i<<endl;
			cin>>d;
			cout<<1<<" "<<i+4<<" "<<i<<" "<<i+1<<endl;
			cin>>e;
			p[i] = b^c^e;
			p[i+1] = a^c^d;
			p[i+2] = b^d^e;
			p[i+3] = c^e^a;
			p[i+4] = a^b^d;
		}
		if(j==2) {
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+2<<endl;
			cin>>a;
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+3<<endl;	
			cin>>b;
			cout<<1<<" "<<i+2<<" "<<i+3<<" "<<i+4<<endl;
			cin>>c;
			cout<<1<<" "<<i+2<<" "<<i+3<<" "<<i+5<<endl;
			cin>>d;
			cout<<1<<" "<<i+4<<" "<<i+5<<" "<<i<<endl;
			cin>>e;
			cout<<1<<" "<<i+4<<" "<<i+5<<" "<<i+1<<endl;
			cin>>f;
			p[i+4]=a^b^c;
			p[i+5]=a^b^d;
			p[i]=p[i+4]^p[i+5]^e;
			p[i+1]=p[i+4]^p[i+5]^f;
			p[i+2]=p[i]^p[i+1]^a;
			p[i+3]=p[i]^p[i+1]^b;
		}
		if(j==3) {
			cout<<1<<" "<<i<<" "<<i+1<<" "<<i+2<<endl;
			cin>>a;
			cout<<1<<" "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
			cin>>b;
			cout<<1<<" "<<i+2<<" "<<i+3<<" "<<i+4<<endl;
			cin>>c;
			cout<<1<<" "<<i+3<<" "<<i+4<<" "<<i+5<<endl;
			cin>>d;
			cout<<1<<" "<<i+4<<" "<<i+5<<" "<<i+6<<endl;
			cin>>e;
			cout<<1<<" "<<i+5<<" "<<i+6<<" "<<i<<endl;
			cin>>f;
			cout<<1<<" "<<i+6<<" "<<i<<" "<<i+1<<endl;
			cin>>g;
			p[i+2]=a^b^e^f^c;
			p[i+5]=a^b^e^f^d;
			p[i+3]=b^c^f^g^d;
			p[i+6]=b^c^f^g^e;
			p[i+4]=p[i+2]^p[i+3]^c;
			p[i+1]=p[i+2]^p[i+3]^b;
			p[i]=p[i+5]^p[i+6]^f;
		}
		cout<<2<<" ";
		for(i=1;i<=n;i++) {
			cout<<p[i]<<" ";
		}
		cout<<endl;
		cin>>x;
		if(x==1){
			continue;
		}else{
			break;
		}
	}    
	return 0;
}