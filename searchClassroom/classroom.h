#pragma once
#include<iostream>
#include<string>
using namespace std;


class classroom
{
public:
	classroom(void);
	classroom(int roomNumber, string txt);
	~classroom(void);

	void setRoomNumber(int number);
	int getRoomNumber ();
private :
	int roomNumber;
	bool timeTable[10][6]; 
};

