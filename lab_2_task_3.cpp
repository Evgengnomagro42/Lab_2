#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

void sredn_arifm(){
float a, b, c, d, e, f, g ,h, k, l;
cout << "������ �஡�� �᫠, � �窮� (���ਬ��, 1.2)" << '\n';
cin >> a;
cout << "�� ����� 1-� �᫮, ��⠫��� ��� 9, " << a << '\n';
cin >> b;
cout << "�� ����� 2-� �᫮, ��⠫��� ��� 8, " << b << '\n';
cin >> c;
cout << "�� ����� 3-� �᫮, ��⠫��� ��� 7, " << c << '\n';
cin >> d;
cout << "�� ����� 4-� �᫮, ��⠫��� ��� 6, " << d << '\n';
cin >> e;
cout << "�� ����� 5-� �᫮, ��⠫��� ��� 5, " << e << '\n';
cin >> f;
cout << "�� ����� 6-� �᫮, ��⠫��� ��� 4, " << f << '\n';
cin >> g;
cout << "�� ����� 7-� �᫮, ��⠫��� ��� 3, " << g << '\n';
cin >> h;
cout << "�� ����� 8-� �᫮, ��⠫��� ��� 2, " << h << '\n';
cin >> k;
cout << "�� ����� 9-� �᫮, ��⠫��� ��� 1, " << k << '\n';
cin >> l;
cout << "�� ����� 10-� �᫮, " << l << '\n';
cout << "�।��� ��䬥��᪮� ������� �ᥫ ࠢ��: " <<
(a+b+c+d+e+f+g+h+k+l)/10 << '\n';
  if (cin.fail()) {  /*�� ��⠥� �८�ࠧ������
      ��㤠�� �� ����� char*/
    cin.clear();
    cout << "�訡�� �����, ������ �᫠ ᭮��"
    " ��᫥ ������ �室� � �ணࠬ�� \n";
    cin.ignore(32767, '\n');
    }
  }
