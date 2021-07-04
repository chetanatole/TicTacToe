//============================================================================
// Name        : tictactoe.cpp
// Author      : Chetan Atole
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
using namespace std;
char block[]="0123456789";
int tied=0;
void board();
class tictactoe
{
	char mark;
	string name;
public:
	int win;
	tictactoe()
	{
		win=0;
	}
	void putdata(string name,char mark)
	{
		this->name=name;
		this->mark=mark;
	}
	string getname()
	{
		return name;
	}
	int getwin()
	{
		return win;
	}
	char getmark()
	{
		return mark;
	}
	void selectblock()
	{
		int choice;
		cin>>choice;
		if(choice==1&&block[1]=='1')
			block[1]=mark;
		else if(choice==2&&block[2]=='2')
			block[2]=mark;
		else if(choice==3&&block[3]=='3')
			block[3]=mark;
		else if(choice==4&&block[4]=='4')
			block[4]=mark;
		else if(choice==5&&block[5]=='5')
			block[5]=mark;
		else if(choice==6&&block[6]=='6')
			block[6]=mark;
		else if(choice==7&&block[7]=='7')
			block[7]=mark;
		else if(choice==8&&block[8]=='8')
			block[8]=mark;
		else if(choice==9&&block[9]=='9')
			block[9]=mark;
		else
		{
			cout<<"  Invalid Move"<<endl;
			cout <<"  Enter The Choice Again"<<endl;
			selectblock();
		}
	}
int checkwin()
{
	if (block[1] == block[2] && block[2] == block[3])

			return 1;
		else if (block[4] == block[5] && block[5] == block[6])

			return 1;
		else if (block[7] == block[8] && block[8] == block[9])

			return 1;
		else if (block[1] == block[4] && block[4] == block[7])

			return 1;
		else if (block[2] == block[5] && block[5] == block[8])

			return 1;
		else if (block[3] == block[6] && block[6] == block[9])

			return 1;
		else if (block[1] == block[5] && block[5] == block[9])

			return 1;
		else if (block[3] == block[5] && block[5] == block[7])

			return 1;
		else if (block[1] != '1' && block[2] != '2' && block[3] != '3' && block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7] != '7' && block[8] != '8' && block[9] != '9')
			return 0;
		else
			return -1;
	}

void comppick(tictactoe p)
{
if(block[1]==mark && block[2]==mark && block[3]=='3')//123
{
block[3]=mark;
}
else if(block[1]==mark && block[3]==mark  && block[2]=='2')//123
{
block[2]=mark;
}
else if(block[2]==mark && block[3]==mark && block[1]=='1')//123
{
block[1]=mark;
}
else if(block[4]==mark && block[5]==mark && block[6]=='6')//456
{
block[6]=mark;
}else if(block[4]==mark && block[6]==mark && block[5]=='5')//456
{
block[5]=mark;
}else if(block[5]==mark && block[6]==mark && block[4]=='4')//456
{
block[4]=mark;
}
else if(block[7]==mark && block[8]==mark && block[9]=='9')//789
{
block[9]=mark;
}else if(block[7]==mark && block[9]==mark && block[8]=='8')//789
{
block[8]=mark;
}else if(block[8]==mark && block[9]==mark && block[7]=='7')//789
{
block[7]=mark;
}
else if(block[1]==mark && block[5]==mark && block[9]=='9')//159
{
block[9]=mark;
}else if(block[1]==mark && block[9]==mark && block[5]=='5')//159
{
block[5]=mark;
}else if(block[5]==mark && block[9]==mark && block[1]=='1')//159
{
block[1]=mark;
}
else if(block[3]==mark && block[5]==mark && block[7]=='7')//357
{
block[7]=mark;
}else if(block[3]==mark && block[7]==mark && block[5]=='5')//357
{
block[5]=mark;
}else if(block[5]==mark && block[7]==mark && block[3]=='3')//357
{
block[3]=mark;
}
else if(block[1]==mark && block[4]==mark && block[7]=='7')//147
{
block[7]=mark;
}
else if(block[1]==mark && block[7]==mark && block[4]=='4')//147
{
block[4]=mark;
}else if(block[4]==mark && block[7]==mark && block[1]=='1')//147
{
block[1]=mark;
}
else if(block[2]==mark && block[5]==mark && block[8]=='8')//258
{
block[8]=mark;
}
else if(block[2]==mark && block[8]==mark && block[5]=='5')//258
{
block[5]=mark;
}else if(block[8]==mark && block[5]==mark && block[8]=='2')//258
{
block[2]=mark;
}
else if(block[3]==mark && block[6]==mark && block[9]=='9')//369
{
block[9]=mark;
}else if(block[3]==mark && block[9]==mark && block[6]=='6')//369
{
block[6]=mark;
}else if(block[6]==mark && block[9]==mark && block[3]=='3')//369
{
block[3]=mark;
}
else if(block[1]==p.mark && block[2]==p.mark  && block[3]=='3')//123
{
block[3]=mark;
}
else if(block[1]==p.mark && block[3]==p.mark && block[2]=='2')//123
{
block[2]=mark;
}
else if(block[2]==p.mark && block[3]==p.mark && block[1]=='1')//123
{
block[1]=mark;
}
else if(block[4]==p.mark && block[5]==p.mark && block[6]=='6')//456
{
block[6]=mark;
}else if(block[4]==p.mark && block[6]==p.mark && block[5]=='5')//456
{
block[5]=mark;
}else if(block[5]==p.mark && block[6]==p.mark && block[4]=='4')//456
{
block[4]=mark;
}
else if(block[7]==p.mark && block[8]==p.mark && block[9]=='9')//789
{
block[9]=mark;
}else if(block[7]==p.mark && block[9]==p.mark && block[8]=='8')//789
{
block[8]=mark;
}else if(block[8]==p.mark && block[9]==p.mark && block[7]=='7')//789
{
block[7]=mark;
}
else if(block[1]==p.mark && block[5]==p.mark && block[9]=='9')//159
{
block[9]=mark;
}else if(block[1]==p.mark && block[9]==p.mark && block[5]=='5')//159
{
block[5]=mark;
}else if(block[5]==p.mark && block[9]==p.mark && block[1]=='1')//159
{
block[1]=mark;
}
else if(block[3]==p.mark && block[5]==p.mark && block[7]=='7')//357
{
block[7]=mark;
}else if(block[3]==p.mark && block[7]==p.mark && block[5]=='5')//357
{
block[5]=mark;
}else if(block[5]==p.mark && block[7]==p.mark && block[3]=='3')//357
{
block[3]=mark;
}
else if(block[1]==p.mark && block[4]==p.mark && block[7]=='7')//147
{
block[7]=mark;
}
else if(block[1]==p.mark && block[7]==p.mark && block[4]=='4')//147
{
block[4]=mark;
}else if(block[4]==p.mark && block[7]==p.mark && block[1]=='1')//147
{
block[1]=mark;
}
else if(block[2]==p.mark && block[5]==p.mark && block[8]=='8')//258
{
block[8]=mark;
}
else if(block[2]==p.mark && block[8]==p.mark && block[5]=='5')//258
{
block[5]=mark;
}else if(block[8]==p.mark && block[5]==p.mark && block[8]=='2')//258
{
block[2]=mark;
}
else if(block[3]==p.mark && block[6]==p.mark && block[9]=='9')//369
{
block[9]=mark;
}else if(block[3]==p.mark && block[9]==p.mark && block[6]=='6')//369
{
block[6]=mark;
}else if(block[6]==p.mark && block[9]==p.mark && block[3]=='3')//369
{
block[3]=mark;
}
else if(block[1]==p.mark)//1   NOT NECESSARY  USED TO REDUCE LOSING PROBABILITY
{
if(block[2]=='2')
{
block[2]=mark;
}
else if(block[4]=='4')
{
block[4]=mark;
}
else
{
block[5]=mark;
}
}
else if(block[2]==p.mark)//2
{
if(block[1]=='1')
{
block[1]=mark;
}
else if(block[4]=='4')
{
block[4]='4';
}
else if(block[5]=='5')
{
block[5]=mark;
}else if(block[6]=='6')
{
block[6]=mark;
}
else
{
block[3]=mark;
}
}
else if(block[3]==p.mark)//3
{
if(block[2]=='2')
{
block[2]=mark;
}
else if(block[5]=='5')
{
block[5]=mark;
}
else
{
block[6]=mark;
}
}
else if(block[4]==p.mark)//4
{
if(block[1]=='1')
{
block[1]=mark;
}
else if(block[2]=='2')
{
block[2]=mark;
}else if(block[5]=='5')
{
block[5]=mark;
}else if(block[8]=='8')
{
block[8]=mark;
}
else
{
block[7]=mark;
}
}
else if(block[5]==p.mark)//5
{
if(block[1]=='1')
{
block[1]=mark;
}
else if(block[2]=='2')
{
block[2]=mark;
}else if(block[3]=='3')
{
block[3]=mark;
}else if(block[4]=='4')
{
block[4]=mark;
}else if(block[6]=='6')
{
block[6]=mark;
}else if(block[7]=='7')
{
block[7]=mark;
}else if(block[8]=='8')
{
block[8]=mark;
}
else
{
block[9]=mark;
}
}
else if(block[6]==p.mark)//6
{
if(block[3]=='3')
{
block[3]=mark;
}
else if(block[2]=='2')
{
block[2]=mark;
}else if(block[5]=='5')
{
block[5]=mark;
}else if(block[8]=='8')
{
block[8]=mark;
}
else
{
block[9]=mark;
}
}
else if(block[7]==p.mark)//7
{
if(block[4]=='4')
{
block[4]=mark;
}
else if(block[5]=='5')
{
block[5]=mark;
}
else
{
block[8]=mark;
}
}
else if(block[8]=='8')//8
{
if(block[7]=='7')
{
block[7]=mark;
}
else if(block[4]=='4')
{
block[4]=mark;
}else if(block[5]=='5')
{
block[5]=mark;
}else if(block[6]=='6')
{
block[6]=mark;
}
else
{
block[9]=mark;
}
}
else if(block[9]==p.mark)//9
{
if(block[6]=='6')
{
block[6]=mark;
}
else if(block[5]=='5')
{
block[5]=mark;
}
else
{
block[8]=mark;
}
}
}
};
tictactoe p[2];
void board()
{
	system("clear");
		cout << "\n\n\t   Tic Tac Toe\n\n";
		cout <<"      " <<p[0].getname() <<" "<<"("<<p[0].getmark()<<")"<<" vs "<<p[1].getname()<<" "<<"("<<p[1].getmark()<<")"<< endl << endl;
		cout <<" \t    Win Status  "<<endl;
		cout<<"  "<<p[0].getname() <<" : "<<p[0].getwin()<<" "<<p[1].getname() <<" : "<<p[1].getwin()<< " " <<"Ties : "<<tied;
		cout << endl<<endl;

		cout << "\t     |     |     " << endl;
		cout << "\t  " << block[1] << "  |  " << block[2] << "  |  " << block[3] << endl;

		cout << "\t_____|_____|_____" << endl;
		cout << "\t     |     |     " << endl;

		cout << "\t  " << block[4] << "  |  " << block[5] << "  |  " << block[6] << endl;

		cout << "\t_____|_____|_____" << endl;
		cout << "\t     |     |     " << endl;

		cout << "\t  " << block[7] << "  |  " << block[8] << "  |  " << block[9] << endl;

		cout << "\t     |     |     " << endl << endl;
}

int main() {
system("clear");
	int j,i,choice,compmark;
	char mark,s;
	string name;
	cout<<"      *** WELCOME TO TICTACTOE ***"<<endl<<endl;
	cout<<"\t        Enter"<<endl<<"\t   1.Single Player"<<endl<<"\t   2.Two Players"<<endl;
	cin>>j;
	system("clear");
	srand(time(NULL));
	switch(j)
	{
		case 1:

			i=0;
			cout<<endl<<"  Enter Player "<<i+1<<" Information : "<<endl;
			cout<<"  Enter Name:";
			cin>>name;
			system("clear");
			cout<<endl<<"  Enter Player "<<i+1<<" Information :"<<endl;
			cout<<"  Enter Mark Choice X or O :";
			cin>>mark;
			system("clear");
			p[0].putdata(name,mark);
			if(p[0].getmark()=='X')
			{
				p[1].putdata("CompAI",'O');
			}
			else
			{
				p[1].putdata("CompAI",'X');
			}
			do
	{
	block[1]='1';
	block[2]='2';
	block[3]='3';
	block[4]='4';
	block[5]='5';
	block[6]='6';
	block[7]='7';
	block[8]='8';
	block[9]='9';


			choice=((rand()%2)+1);
			if(choice==2)
			{
				compmark=((rand()%9)+1);
				block[compmark]=p[1].getmark();
				choice--;
			}
			else
			{
				board();
				cout<<"  "<<p[0].getname()<<" Enter the choice :";
				p[0].selectblock();
				choice++;
			}
			do
	{
	if(choice==1)
	{
		board();
		cout<<"  "<<p[0].getname()<<" Enter the choice :";
		p[0].selectblock();
		choice++;
		if(p[0].checkwin()==1)
		{
			board();
			cout<<"  "<<p[0].getname()<<" Won The Game "<<endl;
			cout<<endl;
			p[0].win++;
			break;
		}
		if(p[0].checkwin()==0)
		break;
	}
	else
	{
		board();
		p[1].comppick(p[0]);
		choice--;
				if(p[1].checkwin()==1)
				{
					board();
					cout<<"  "<<p[1].getname()<<" Won The Game "<<endl<<endl;
					p[1].win++;
					break;
				}
	}
	}
	while(p[0].checkwin()==-1&&p[1].checkwin()==-1);
	if(p[0].checkwin()==0)
	{
		cout<<"  Game Tied"<<endl<<endl;
		tied++;
	}
	cout <<"  Want To Play Again (y/n)"<<endl;
	cin>>s;
	}
	while(s=='y');
			break;
		case 2:
			for(i=0;i<2;i++)
		{
			cout<<"  Enter Player "<<i+1<<" Information : "<<endl;
			cout<<"  Enter Name:";
			cin>>name;
			system("clear");
			cout<<"  Enter Player "<<i+1<<" Information :"<<endl;
			cout<<"  Enter Mark Choice X or O :";
			cin>>mark;
			system("clear");
			p[i].putdata(name,mark);
		}
	do
	{
	block[1]='1';
	block[2]='2';
	block[3]='3';
	block[4]='4';
	block[5]='5';
	block[6]='6';
	block[7]='7';
	block[8]='8';
	block[9]='9';


	do
	{
		board();
		cout<<p[0].getname()<<" Enter the choice :";
		p[0].selectblock();
		if(p[0].checkwin()==1)
		{
			board();
			cout<<"  "<<p[0].getname()<<" Won The Game "<<endl;
			cout<<endl;
			p[0].win++;
			break;
		}
		if(p[0].checkwin()==0)
		break;
		board();
		cout<<"  "<<p[1].getname()<<" Enter the choice :";
				p[1].selectblock();
				if(p[1].checkwin()==1)
				{
					board();
					cout<<"  "<<p[1].getname()<<" Won The Game "<<endl<<endl;
					p[1].win++;
					break;
				}

	}
	while(p[0].checkwin()==-1&&p[1].checkwin()==-1);
	if(p[0].checkwin()==0)
	{
		cout<<"  Game Tied"<<endl<<endl;
		tied++;
	}
	cout <<"  Want To Play Again (y/n)"<<endl;
	cin>>s;
	}
	while(s=='y');
			break;
	}

	system("clear");
	cout<<endl<<endl<<endl<<"\t       **** RESULT ****"<<endl;
	cout<<"\t           "<<p[0].getname()<<" : "<<p[0].getwin()<<endl;
	cout<<"\t           "<<p[1].getname()<<" : "<<p[1].getwin()<<endl;
	cout<<"\t**** Thank You For Playing ****"<<endl<<endl<<endl<<endl;

	return 0;
}
