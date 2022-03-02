#include "Date.h"
using namespace std;




Date::Date()
{
	this->jour = 0;
	this->mois = 0;
	this->annee = 0;
}

Date::Date(int jour, int mois, int annee)
{
	this->annee = (annee > 1900) ? annee : 1900;
	this->mois = (mois > 1 && mois < 13) ? mois : 1;
	this->jour = (jour > 0 && jour <= this->maxdays()) ? jour : 1;

}

int Date::maxdays() const
{
		int maxjour;
		if (this->mois == 2) {
			if (this->isbis()) {
				maxjour = 29;
			}
			maxjour = 28;
		}
		else if ((this->mois > 7 && this->mois % 2 == 1)
			|| (this->mois < 7 && this->mois % 2 == 0)) {
			maxjour = 30;
		}
		maxjour = 31;
		return maxjour;
	}
bool Date::isbis() const
{
		return (this->annee % 4 == 0);
	}


void Date::showdate() const
{
	cout << "la date est ", this->jour, this->mois, this->annee;
}
