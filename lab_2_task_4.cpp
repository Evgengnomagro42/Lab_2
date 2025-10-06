#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;
void v_exponent(){
    double d1(34.50);   // 3 ������ �᫠
    double d2(0.004000);// 2 ������ �᫠
    double d3(123.005); /* 6 ������ �ᥫ,
    * �᫨ �㦭� �筮��� �� �������.
    * 3 ������ �᫠, �᫨ � ������
    * �����筮 ⮫쪮 楫�� �ᥫ*/
    double d4(146000);  // 3 ������ �᫠
    cout << "d1(34.50):" << scientific << setprecision(2) << d1 << endl;
    cout << "d2(0.004000):" << scientific << setprecision(1) << d2 << endl;
    cout << "d3(123.005):" << scientific << setprecision(5) << d3 << endl;
    cout << "d4(146000):" << scientific << setprecision(2) << d4 << endl;
    cout << endl;
    /* �뢮� ��㣨� ᯮᮡ��, �१ 䫠�. �᪮���
    * ����ᠭ�� ����, �� ����뢠�� � ������ ������, ��� � �.
    * �����⨬�, �᫨ �� ���筮 ��� �筮�� ����⮢. */
    cout.setf(ios::scientific);
    cout << "d1(34.50):" << d1 << endl;
    cout << "d2(0.004000):" << d2 << endl;
    cout << "d3(123.005):" << d3 << endl;
    cout << "d4(146000):" << d4 << endl;
}
