#include<iostream>
using namespace std;

int add(int x,int y)
{

    int z;
    z=x+y;
    return z;
}
int sub(int x,int y)
{

    int z;
    z=x+y;
    return z;
}
int mult(int x,int y)
{

    int z;
    z=x*y;
    return z;
}

int main(){
	int a,b;
	cout<<"\n\tEnter A : ";
	cin>>a;
	cout<<"\tEnter B : ";
	cin>>b;
	cout<<"Addition : " << add(a,b)<<"\n";
	cout<<"Sub : "<<sub(a,b)<<"\n";
	cout<<"Mul : "<<mult(a,b)<<"\n";
	return 0;
}
//bugs fixed
