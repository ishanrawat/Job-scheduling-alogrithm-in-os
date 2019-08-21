#include<iostream>
#include<cstring>
using namespace std;
struct fcfs{
int at[100];
int bt[100];
int tat[100];
int wt[100];
string pname[100]={"P1","P2","P3","P4","p5","p6","p7","p8","p9"};

}obj;
main(){
int n,j=0,i,temp;
string s;
cout<<"enter total number of process you want";
cin>>n;
for(i=0;i<n;i++){
cout<<"enter the arrival time of process"<<obj.pname[i]<<": ";
cin>>obj.at[i];
cout<<"\n enter burst time of process "<<obj.pname[i]<<": ";
cin>>obj.bt[i];
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(obj.at[i]>obj.at[j]){
temp=obj.at[i];
obj.at[i]=obj.at[j];
obj.at[j]=temp;

temp=obj.bt[i];
obj.bt[i]=obj.bt[j];
obj.bt[j]=temp;

s=obj.pname[i];
obj.pname[i]=obj.pname[j];
obj.pname[j]=s;


}
}
}
cout<<"gantt chart ....\n";
int k=0;
for(i=0;i<n;i++){
cout<<obj.pname[i]<<" ";

}
cout<<"\n";
cout<<obj.at[0]<<" ";
k=k+obj.bt[0];
for(i=1;i<n;i++){
cout<<k<<" ";
k=k+obj.bt[i];
}

}
