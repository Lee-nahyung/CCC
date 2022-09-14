#include <iostream>
#include <stdio.h>
#include <cctype> //isupper을 사용하기 위한 것
#include <random>
#include <ctime>
#include <functional>
#include <Windows.h>

using namespace std;

//문제 1)자음과 모음 개수 세기
/*int main() {

	char s = 'a';
	int m = 0; //소문자 중 자음 개수를 셀 m
	int u = 0; //소문자 중 모음 개수를 셀 u

	while (!cin.eof()) {
		cin >> s;

		if (isupper(s)) //대문자일 경우는 switch문 안에 들어가지 않고 문구 실행
			cout << "Check to alphabet\n";
		else { //소문자일 경우에만 switch문 안에 들어감
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
	cout << "모음: " << u << "\n" << "자음: " << m << "\n";

	return 0;
}
*/

//문제 2)산수 문제 자동 출제
/*int main() {

	mt19937 engine((unsigned int)time(NULL)); //난수
	uniform_int_distribution<> dis(0, 100); //0에서 100까지 
	auto generator = bind(dis, engine);

	int a = generator();
	int b = generator();
	int pro; //사용자가 입력할 결과값
	char mu; //사용자가 입력할 연산자

	cout << "숫자의 값은: " << a << " " << b << "\n";
	cout << "연산자를 입력하시오: ";
	cin >> mu;

	switch (mu) {
	case '+':
		cout << "결과 입력하기 ";
		cin >> pro;
		if (a + b == pro)
			cout << "맞았습니다.\n";
		else
			cout << "틀렸습니다.\n";
		break;

	case '-':
		cout << "결과 입력하기 ";
		cin >> pro;
		if (a - b == pro)
			cout << "맞았습니다.\n";
		else
			cout << "틀렸습니다.\n";;
		break;

	case '*':
		cout << "결과 입력하기 ";
		cin >> pro;
		if (a * b == pro)
			cout << "맞았습니다.\n";
		else
			cout << "틀렸습니다.\n";
		break;

	case '/':
		cout << "결과 입력하기 ";
		cin >> pro;
		if (a / b == pro)
			cout << "맞았습니다.\n";
		else
			cout << "틀렸습니다.\n";
		break;
	}


}*/

//문제 3)1부터 N까지 M의 배수합
/*int main() {

	int n, m; 
	int sum = 0;
	int tmp=  1;
	int i = 1;

	cout << "1부터 n까지 m의배수 합, n과 m을 입력하시오: ";
	cin >> n >> m;

	while (i < n) {
		i = tmp;
		i *= m;
		sum += i;
		tmp++;
	}
	cout << "결과 값은:" << sum;

	return 0;
}
*/

//문제 4)진약수의 합
/*int main() {

	int n;
	int sum = 0;
	int sco = 0; //배열 p[sco]로 출력해줄 것. 
	int p[100];
	cout << "정수를 입력하시오:";
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

//문제 5) Tic-Tac-Toe 게임
/*int main() {

	char p[3][3];
	for (int q = 0; q < 3; q++) {
		for (int w = 0; w < 3; w++) {
			p[q][w] = ' ';
		}
	}

	for (int i = 0; i < 9; i++) {
		int x, y;
		cout << "(x, y)좌표: ";
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

//문제 6) 지뢰 찾기
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