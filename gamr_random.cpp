#include <iostream>
#include <time.h>
using namespace std;
int checkNum();
int num , rand01,i=1;
int main()
{
	cout<<"###Welcome to guessing number game### \n";
	cout<<"Secret number has been chosen \n";
	srand(time(NULL));
	rand01 = 1 + rand()%10;

	
	do {
	cout<<"  Guess the number (1 to 10) : ";
	cin>>num;
	checkNum();
	i++;
	}while( num != rand01);
	
	


}
int checkNum()
{
	if (num > rand01){
	cout<<"  The secret number is higher"<<endl;
	}
	if (num < rand01){
	cout<<"  The secret number is lower"<<endl;
	}
	if (num == rand01){
		cout<<"#####################################\n";
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<< rand01 <<endl;
	cout<<"You made "<<i<<" guesses"<<endl;
	cout<<"#####################################\n";
	}

	return(0);
}