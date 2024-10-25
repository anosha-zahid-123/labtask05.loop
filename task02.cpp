#include<iostream>
using namespace std;
int main(){
int sum;
cout<<"enetr a number"<<endl;
cin>>sum;
for(int i=1;i<15;i++){
    sum=sum+i;
}
cout<<sum;
return 0;
}