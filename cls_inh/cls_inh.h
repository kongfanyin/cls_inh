#pragma once
#ifndef CLASS_INHERIT
#define class_inherit
#include <string>
#include<iostream>
using std::string;
using std::cout;
using std::endl;
class tableTennisPlayer
{
public:
	tableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false) ;
	void name()const;
	bool HasTable()const { return hasTable; }
	void resetTable(bool v){ hasTable = v; }
private:
	string firstName;
	string lastName; 
	bool hasTable;
};

class Ratedplayer: public tableTennisPlayer 
{
public:
	Ratedplayer(unsigned int r = 0, const string &ln = "none", const string &fn = "none", bool ht = false);
	Ratedplayer(unsigned int r, tableTennisPlayer &tp);
	unsigned int Rating()const { return rating; }
	void Resting(unsigned int r) { rating = r; }
private:
	unsigned int rating;

};

#endif // !CLASS_INHERIT
