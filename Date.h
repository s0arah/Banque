#pragma once
#include<iostream>
class Date
{
private:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int jour, int mois, int annee);
	int maxdays()const;
	bool isbis()const;
	void showdate()const;
};

