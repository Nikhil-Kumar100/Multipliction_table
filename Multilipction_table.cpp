#include<iostream>
using namespace std;
int num,table=1;
int main(){
    cout<<"Enter Number :-  ";
    cin>>num;
    for(int i=1;i<=10;i++){
        table=num*i;
        cout<<num<<"*"<<i<<"\t= "<<table<<endl;
    }
    return 0;
}
