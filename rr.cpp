#include<iostream>
#include<string>
using namespace std;
int check(int a[],int n){
for(int i=0;i<n;i++){
if(a[i]>0){
return 1;
}

}
return 0;
}
struct rr{
int at[100];
int bt[100];
int tat[100];
int wt[100];

string pname[100];
int tq;
}obj;
main(){
int n,temp,bt1[100],x=0,sum=0,k=0;
string s;
cout<<"enter how many process you want..";
cin>>n;
for(int i=0;i<n;i++){
cout<<"enter process name: ";
cin>>obj.pname[i];
cout<<"\nenter arrival time of the process "<<obj.pname[i]<<": ";
cin>>obj.at[i];
cout<<"\nenter burst time of the process "<<obj.pname[i];
cin>>obj.bt[i];

}
cout<<"\nenter time quantum ";
cin>>obj.tq;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(obj.at[j]<obj.at[i]){
     temp=obj.at[j];
     obj.at[j]=obj.at[i];
     obj.at[i]=temp;
     
     temp=obj.bt[i];
     obj.bt[i]=obj.bt[j];
     obj.bt[j]=temp;
     
     s=obj.pname[i];
     obj.pname[i]=obj.pname[j];
     obj.pname[j]=s;
     
     }
   }
}

for(int i=0;i<n;i++){
bt1[i]=obj.bt[i];
cout<<bt1[i]<<" ";
sum=sum+bt1[i];

}
sum=sum/obj.tq;
cout<<"\n";
while(k<=sum){
for(int i=0;i<n;i++){
if(bt1[i]>obj.tq){
bt1[i]=bt1[i]-obj.tq;
x=x+obj.tq;
cout<<obj.pname[i]<<" "<<x<<" ";
}
else if(bt1[i]>0 && bt1[i]<=obj.tq){
x=x+bt1[i];
bt1[i]=0;

}

}
k++;
}

}
