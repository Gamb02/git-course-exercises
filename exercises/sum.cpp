/*
  Write a program that takes as input two numbers and print the sum.

  Output:
  Insert the first number: 1
  Insert the second number: 2
  Sum: 3
*/

#include  <iostream>

using namespace std;

void input(int *v){
	cin>>v[0];
	cin>>v[1];
}

int main(){
	int v[2];

	input(v);
	cout<<"Somma tra a e b:\t"<<v[0]+v[1]<<endl;
	return 0;
}
