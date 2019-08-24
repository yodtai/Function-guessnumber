#include<iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;
void checkNum(int,int);

int main(){
	srand(time(NULL));
	int n1;
	int n2;
	int guess = 0;
	n1 =1+(rand()%10);
	cout<<"###Welcome to guessing number game###\n";
    cout<<"Secret number has been chosen\n";
	do {
		cout<<"Guess the number (1 to 10) : ";
		cin>>n2;
        checkNum(n1,n2);
		guess++;

	}while(n2!=n1);

	cout<<"The secret number is "<<n1<<endl;
	cout<<"You made "<<guess<<" guesses"<<endl;

return 0;
}

void checkNum(int n1,int n2) {

if(n2>n1){
	cout<<"The secret number is lower"<<endl;
	}
	else if(n2<n1){
	cout<<"The secret number is higher"<<endl;
	}
	else if(n2==n1){
        cout<<"Congratulations! "<<endl;
	}

}

