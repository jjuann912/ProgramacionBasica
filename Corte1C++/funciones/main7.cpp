#include <iostream>
using namespace std;
int sumar(int a, int b){
	int r = a+b;
	return r;
	
}

int multi(int a, int b){
	int r = a*b;
	return r;
}

int restar(int a, int b){
	int r = a-b;
	return r;
}

int main(){
	
	int x= 3;
	int y= 2;
	
	int h= sumar(x,y);

	int j= restar(x,y);
	
	int k= multi(x,y);
	
	cout <<h<<"\n"<<j<<"\n"<<k<<"\n"<<endl;
	
	return 0;
}
