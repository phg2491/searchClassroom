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
	cout <<"�� ���ǽ� ã�� Ver 1.0 " << endl; 
}

void setupData(){

}

void dialog(){
	int state = 1;
	while(state != 0){
		cout <<"/*********** ��� ***********/" << endl;
		cout <<"1. �� ���ǽ� ã��" << endl; 
		cout <<"2. ���ǽ� ���� �˻�" << endl;
		cout <<"0. ���α׷� ����" << endl; 
		cout <<"�Է� : ";
		cin >> state;

		switch (state)
		{
		case 0 :
			cout <<"���α׷��� �����մϴ�." << endl;
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

