//--------------------------------------------------------------------
//CODECHEF :-vALID triangles
//code :- FLOW013
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
		if(a+b+c==180)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
//-----------------------------------------------------------------------------------------------
//------CODECHEF 
//-------------CODE:-CATSDOGS
#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	 long long int tc;
	cin>>tc;
	while(tc--)
	{
		long long int c,d,l,min,max;
		cin>>c>>d>>l;
		max=(c+d)*4;
		if(c==d || c<2*d)
		min=d*4;
		else if(c>2*d)
		min=(c-d)*4;
		
		if(l>=min && l<=max && l%4==0)
		cout<<"yes\n";
		else
		cout<<"no\n";
			
	}
	return 0;
}
//-----------------------------------------------------------------------------------
//CODECHEF
//CODE:- HOWMANY
#include <iostream>
using namespace std;

int main() {
    long n;
    int c=0;
    cin>>n;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    if(c<=3)
    cout<<c<<"\n";
    else
    cout<<"More than 3 digits";
	return 0;
}
//--------------------------------------------------------------------------------------------------
//CODECHEF
//CODE:-FLY007
from math import ceil
for _ in range(int(input())):
    n,k,s=map(int,input().split())
    bd=s-s//7
    if(bd*n>=k*s):
        print(ceil((k*s)/n))
    else:
        print('-1')
                
