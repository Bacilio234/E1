//pedrobacilio 
//modificado 29-09-2022 
#include<iostream>
using namespace std;
int main()
{
  float p,b;
  cout<<"Ingrese p  : "; cin>>p;
  cout<<"Ingrese b  : "; cin>>b;
  if(p==b){
     cout<<"Son iguales"<<endl;
  }else{
     if(p<b){
       cout<<p<<" es el menor que "<<b<<"\n";
     }else{
       cout<<b<<" es el menor que "<<p<<"\n";
     }
  }

return (0);;

}

