#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"cls_inh.h"

int main(char argc, char** argv)
{
	tableTennisPlayer player1("tara", "boommaster", false);
	Ratedplayer rplayer(1140, "malloy", "duck", true);
	rplayer.name();//派生类使用基类方法
	//tableTennisPlayer* p = new tableTennisPlayer[100];
	if (rplayer.HasTable())
		cout << ":has table.\n";
	else
	{
		cout << "has no table.\n";
	}
	cout << "name:";
	rplayer.name();//基类使用基类方法
	if (player1.HasTable())
	{
		cout << ": has a table.\n";
	}
	else
	{
		cout << "has'n table.\n";
	}
	cout << "name: ";
	player1.name();
	cout << ";rating :" << rplayer.Rating() << endl;
	//使用派生类初始化基类
	Ratedplayer rplayer2(11233, player1);
	cout << "name: ";
	rplayer2.name();
	cout << "; rating: " << rplayer2.Rating() << endl;
	return 0;
}