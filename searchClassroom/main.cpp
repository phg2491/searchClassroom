#include"building.h"
void init();
void setupData();
void dialog();
int main(){

	init();
	setupData();
	dialog();

	return 0;
}

void init(){
	// init
	cout <<"빈 강의실 찾기 Ver 1.0 " << endl; 
}

void setupData(){

}

void dialog(){
	int state = 1;
	while(state != 0){
		cout <<"/*********** 목록 ***********/" << endl;
		cout <<"1. 빈 강의실 찾기" << endl; 
		cout <<"2. 강의실 정보 검색" << endl;
		cout <<"0. 프로그램 종료" << endl; 
		cout <<"입력 : ";
		cin >> state;

		switch (state)
		{
		case 0 :
			cout <<"프로그램을 종료합니다." << endl;
			break;
		case 1 : 
			break;
		case 2 :
			break;
		default:
			break;
		}
	}
}

