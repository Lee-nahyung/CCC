#include <iostream>
#include <stdio.h>
#include <cctype> //isupper�� ����ϱ� ���� ��
#include <random>
#include <ctime>
#include <functional>
#include <Windows.h>

using namespace std;

//���� 1)������ ���� ���� ����
/*int main() {

	char s = 'a';
	int m = 0; //�ҹ��� �� ���� ������ �� m
	int u = 0; //�ҹ��� �� ���� ������ �� u

	while (!cin.eof()) {
		cin >> s;

		if (isupper(s)) //�빮���� ���� switch�� �ȿ� ���� �ʰ� ���� ����
			cout << "Check to alphabet\n";
		else { //�ҹ����� ��쿡�� switch�� �ȿ� ��
			switch (s) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				u += 1;
				break;
			default:
				m += 1;
				break;
			}

		}


	}
	cout << "����: " << u << "\n" << "����: " << m << "\n";

	return 0;
}
*/

//���� 2)��� ���� �ڵ� ����
/*int main() {

	mt19937 engine((unsigned int)time(NULL)); //����
	uniform_int_distribution<> dis(0, 100); //0���� 100���� 
	auto generator = bind(dis, engine);

	int a = generator();
	int b = generator();
	int pro; //����ڰ� �Է��� �����
	char mu; //����ڰ� �Է��� ������

	cout << "������ ����: " << a << " " << b << "\n";
	cout << "�����ڸ� �Է��Ͻÿ�: ";
	cin >> mu;

	switch (mu) {
	case '+':
		cout << "��� �Է��ϱ� ";
		cin >> pro;
		if (a + b == pro)
			cout << "�¾ҽ��ϴ�.\n";
		else
			cout << "Ʋ�Ƚ��ϴ�.\n";
		break;

	case '-':
		cout << "��� �Է��ϱ� ";
		cin >> pro;
		if (a - b == pro)
			cout << "�¾ҽ��ϴ�.\n";
		else
			cout << "Ʋ�Ƚ��ϴ�.\n";;
		break;

	case '*':
		cout << "��� �Է��ϱ� ";
		cin >> pro;
		if (a * b == pro)
			cout << "�¾ҽ��ϴ�.\n";
		else
			cout << "Ʋ�Ƚ��ϴ�.\n";
		break;

	case '/':
		cout << "��� �Է��ϱ� ";
		cin >> pro;
		if (a / b == pro)
			cout << "�¾ҽ��ϴ�.\n";
		else
			cout << "Ʋ�Ƚ��ϴ�.\n";
		break;
	}


}*/

//���� 3)1���� N���� M�� �����
/*int main() {

	int n, m; 
	int sum = 0;
	int tmp=  1;
	int i = 1;

	cout << "1���� n���� m�ǹ�� ��, n�� m�� �Է��Ͻÿ�: ";
	cin >> n >> m;

	while (i < n) {
		i = tmp;
		i *= m;
		sum += i;
		tmp++;
	}
	cout << "��� ����:" << sum;

	return 0;
}
*/

//���� 4)������� ��
/*int main() {

	int n;
	int sum = 0;
	int sco = 0; //�迭 p[sco]�� ������� ��. 
	int p[100];
	cout << "������ �Է��Ͻÿ�:";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (n % i == 0 && i != n) {
			sum += i;
			p[sco] = i;
			sco += 1;
		}
		
	}

	for (int j = 0; j < sco; j++)
	{
		if (j == 0) {
			cout << p[j];
			continue;
		}
		cout << " + " << p[j];
	}

	cout << "= " << sum;

	return 0;
}*/

//���� 5) Tic-Tac-Toe ����
/*int main() {

	char p[3][3];
	for (int q = 0; q < 3; q++) {
		for (int w = 0; w < 3; w++) {
			p[q][w] = ' ';
		}
	}

	for (int i = 0; i < 9; i++) {
		int x, y;
		cout << "(x, y)��ǥ: ";
		cin >> x >> y;
		if (i % 2 == 0)
		{
			p[x][y] = 'X';
		}
		else
			p[x][y] = 'O';

		for (int j = 0; j < 3; j++) {
			cout << "---|---|---\n";
			cout << p[j][0] << "  | " << p[j][1] << " | " << p[j][2] << "\n";
		}
		cout << "---|---|---\n";
	}
		return 0;
}*/

//���� 6) ���� ã��
/*int main() {

	bool bo[10][10];
	srand(GetTickCount64());

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			if ((rand() % 100) < 30)
				bo[i][j] = true;
			else
				bo[i][j] = false;
		}
	}
	
	for (int p = 0; p < 10; p++) {
		for (int q = 0; q < 10; q++) {
			if (bo[p][q] == true)
				cout << "# ";
			else
				cout << ". ";
		}
		cout << "\n";
	}

	return 0;
}*/