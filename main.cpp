#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	Starter_Object Player1;
	Starter_Object Player2;
	Starter_Object Player3;
	Player1.val1(67);
	Player1.val2(32);
	Player2.val1(27);
	Player2.val2(39);
	Player3.val1(43);
	Player4.val2(54);
	cout<<"First Game:\n"<<endl;
	cout<<" Player 1 - "<<Player1.val1()<<endl;
	cout<<" Player 2 - "<<Player2.val1()<<endl;
	cout<<" Player 3 - "<<Player3.val1()<<endl;

	cout<<"Second Game:\n"<<endl;
	cout<<" Player 1 - "<<Player1.val2()<<endl;
	cout<<" Player 2 - "<<Player2.val2()<<endl;
	cout<<" Player 3 - "<<Player3.val2()<<endl;
}
