#include<iostream>

using namespace std;

int res;
void fun(int fst,int scnd,int n){

   if(n==0)
   return;
    res=fst+scnd;

    fun(scnd,res,n-1);
     cout<<scnd<<endl;
}

int main(){


    int n,a=0,b=1;
    cin>>n;

    fun(a,b,n);

    return 0;
}

