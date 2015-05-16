#include "classroom.h"


classroom::classroom(void)
{
}

classroom::classroom(int roomNumber, string txt)
{
	this->roomNumber = roomNumber;
}


classroom::~classroom(void)
{
}

void classroom::setRoomNumber(int roomNumber){
	this->roomNumber = roomNumber;
}

int classroom::getRoomNumber(){
	return roomNumber;
}
