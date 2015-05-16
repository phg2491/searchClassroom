#include "building.h"


building::building(void)
{
}

building::building(string buildingName, int buildingNumber, int classroomNumber)
{
	this->buildingName = buildingName;
	this->buildingNumber = buildingNumber;
	room = new classroom[classroomNumber];
}


building::~building(void)
{
}
