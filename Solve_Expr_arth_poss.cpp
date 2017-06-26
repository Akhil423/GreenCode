#include<iostream>
using namespace std;

char symbol[9]={'0'};
 int a[5]={7,8,6,7,0};

void print(){

    for(int i=0;i<9;i++){

    if(symbol[i]=='\0'){

        cout<<"=0"<<endl;
        break;
    }

        cout<<symbol[i];
        cout<<a[i];

    }

}
void result(int a[],int k,int n,int r){

    int temp=r;
    if(k==n){
        if(r==a[n]){print();}
        else
        return ;
    }
    else{

        r=r+a[k];
        symbol[k]='+';result(a,k+1,n,r);

            temp=temp-a[k];
            symbol[k]='-';
            result(a,k+1,n,temp);
        }
    }


int main(){

    result(a,0,4,0);
return 0;
}
