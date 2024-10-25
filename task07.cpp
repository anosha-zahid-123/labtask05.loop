#include<iostream>
using namespace std;
int main (){
    int n,i,marks;
    int sum=0;
    cout<<"enter numnber of subject ";
    cin>>n;
    for (i=1;i<n;i++){
        cout<<"enter the number";
        cin>>marks;
        sum = sum+marks;
    }
    float average=sum/n;
    cout<<"average:"<<average<<endl;
    if(average>=90 && average<=100){
        cout<<"grade A+";
    }
    else if (average>=80 && average <=99){
        cout<<"gradeA";
    }
    else if (average>=70 && average<=80){
        cout<<"grade B";
    }
    else if (average>=60 && average <=70){
        cout<<"grade C";
    }
    else {
        cout<<"gradeF";
    }
    return 0;

}