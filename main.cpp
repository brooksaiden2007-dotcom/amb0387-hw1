#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	//player objects
	Starter_Object Player1;
	Starter_Object Player2;
	Starter_Object Player3;
	//scores of players
	Player1.val1(67);
	Player1.val2(32);
	Player2.val1(27);
	Player2.val2(39);
	Player3.val1(43);
	Player3.val2(54);
	//First Game
	cout<<"First Game:"<<endl;
	cout<<" Player 1 - "<<Player1.val1()<<" points"<<endl;
	cout<<" Player 2 - "<<Player2.val1()<<" points"<<endl;
	cout<<" Player 3 - "<<Player3.val1()<<" points"<<endl;
	//Second Game
	cout<<"Second Game:"<<endl;
	cout<<" Player 1 - "<<Player1.val2()<<" points"<<endl;
	cout<<" Player 2 - "<<Player2.val2()<<" points"<<endl;
	cout<<" Player 3 - "<<Player3.val2()<<" points"<<endl;
}
