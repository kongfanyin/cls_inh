#include "cls_inh.h"
using std::cout;
#define _CRT_SECURE_NO_WARNINGS 1
tableTennisPlayer::tableTennisPlayer(const string & fn, const string & ln, bool ht):firstName(fn),lastName(ln),hasTable(ht)
{

}

void tableTennisPlayer::name() const
{
	cout << "last name:" << lastName << ", firstname :" << firstName << endl;
}

Ratedplayer::Ratedplayer(unsigned int r, const string & ln, const string & fn, bool ht):tableTennisPlayer(fn,ln,ht)
{
	rating = r;
}

Ratedplayer::Ratedplayer(unsigned int r, tableTennisPlayer & tp):rating(r),tableTennisPlayer(tp)
{
}
