#include <iostream>
using namespace std;
void yard4(int yrd4, int yr4);
void enter1(int ent1, int con1);
void floor3(int fl3, int fr3);
void cyep1(int cy1);
void cyep2(int cy2);
void cyep3(int cy3);
void cyep4(int cy4);
void cyep5(int cy5);
int main();
void attic1(int att1) {
	int x, y;
	cout << "___________________________________________\n�� ��������� ��������� �� ������...��� ����� ������� �����...\n������� 1; ���� 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\n�� ������� �� ������ � ������� �� ����� ���...�� ��� ������ ������ ������� ����...\n��� �������� ��� ������ ������ � ������ ������...\n�� �������" << endl;
		cout << "___________________________________________\n������ ������: ";
		cin >> x;
		if (x > 0)
			main();
	}
	if (y == 2)
		cyep1(1);
}
void attic2(int att2) {
	int x, y;
	cout << "___________________________________________\n�� ��������� ��������� �� ������...��� ����� ������� �����...\n������� 1; ���� 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\n�� ������� �� ������ � ������� �� ����� ���...�� ��� ������ ������ ������� ����...\n��� �������� ��� ������ ������ � ������ ������...\n�� �������" << endl;
		cout << "___________________________________________\n������ ������: ";
		cin >> x;
		if (x > 0)
			main();
	}
	if (y == 2)
		cyep2(1);
}
void attic3(int att3) {
	int x, y;
	cout << "___________________________________________\n�� ��������� ��������� �� ������...��� ����� ������� �����...\n������� 1; ���� 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\n�� ������� �� ������ � ������� �� ����� ���...�� ��� ������ ������ ������� ����...\n��� �������� ��� ������ ������ � ������ ������...\n�� �������" << endl;
		cout << "___________________________________________\n������ ������: ";
		cin >> x;
		if (x > 0)
			main();
	}
	if (y == 2)
		cyep3(1);
}
void attic4(int att4) {
	int x, y;
	cout << "___________________________________________\n�� ��������� ��������� �� ������...��� ����� ������� �����...\n������� 1; ���� 2" << endl;
	cin >> y;
	if (y == 1) {
		cout << "___________________________________________\n�� ������� �� ������ � ������� �� ����� ���...�� ��� ������ ������ ������� ����...\n��� �������� ��� ������ ������ � ������ ������...\n�� �������" << endl;
		cout << "___________________________________________\n������ ������: ";
		cin >> x;
		if (x > 0)
			main();
	}
	if (y == 2)
		cyep4(1);
}
void attic5(int att5) {
	int x, y;
	cout << "___________________________________________\n�� ��������� ���������� ���...\n������ ������� 1; ���� 2" << endl;
	cin >> x;
	if (x == 1) {
		cout << "___________________________________________\n�� �������� � ������� ������� �� ������, ������� ���...\n��������� �����, � ����� ������ ������� ����������� �������...����� �� ������ �� ������� �� ������\n� ������ ������� ����� ������� ����...������ ���� ���� ������� ����������\n��������� �� ���� 1" << endl;
		cin >> y;
		if (y == 1) {
			cout << "___________________________________________\n�� ������� ����� ���������� �� ������ ���� � ����� �� �����..." << endl;
			yard4(1, 0);
		}
	}	
	if(x==2)
	cyep5(1);
}