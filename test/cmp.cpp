#include<bits/stdc++.h>
#define cuts printf("\n--------------\n");
//#define debug


using namespace std;

int a[50];
char s[5500][1500],s1[5500][1500];
int len,len1;
int pd(int lab){
	for(int i=0;s[lab][i]!=0;i++){
		if(s[lab][i]!=s1[lab][i]) return 1;
	}
	return 0;
}
int main(){
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	while(gets(s[++len])!=0);
	freopen("in1.txt","r",stdin);
	while(gets(s1[++len1])!=0);
	for(int i=1;i<=len1;i++){
		if(pd(i)){
			printf("%d\n%s\n%s",i,s[i],s1[i]);
			cuts
		}
	}
	
} 
