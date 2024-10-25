#include<iostream>
 using namespace std;
int main(){
    int num;
    cout<<"enetr a number";
    cin>>num;
    for(int i=1 ; i<=num ; i++){
        cout<<"cube of" <<i <<"=" << (i*i*i) <<endl;
    }
return 0;
}