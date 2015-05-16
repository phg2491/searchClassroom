#pragma once
#include"classroom.h"
class building
{
public:
	building(void);
	building(string buildingName, int buildingNumber, int classroomNumber); 
	~building(void);

	// getter setter
	void setBuildingName(string name);
	string getBuildingName();
	void setBuildingNumber(int number);
	int  getBuildingNumber();
	

private:
	string buildingName;
	int buildingNumber;
	classroom *room;
};

