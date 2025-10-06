#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

float BrokaForMan(float rost) {
    float ideal_ves = (((rost*100)-100)*0.9);
    cout << "��⨬���� ��� - ��㫠 �ப�, ��: " <<
    ideal_ves << endl;
    return 0;
  }

float BrokaForWoman(float rost) {
    float ideal_ves = (((rost*100)-100)*0.85);
    cout << "��⨬���� ��� - ��㫠 �ப�, ��: " <<
    ideal_ves << endl;
    return 0;
  }

float IMT(float ves, float rost) {
float index = ves/pow(rost, 2);
if (index <16.0) {
  cout << "��ࠦ���� ����� �����, \n"
  "��� �뭥譨� ���: " << index << endl;
} else if (index>16.0 && index<18.5) {
cout << "�������筠� (�����) ���� ⥫�, \n"
"��� �뭥譨� ���: " << index << endl;
} else if (index>18.5 && index<25.0) {
cout << "��ଠ. ��� �뭥譨� ���: " << index << endl;
} else if (index>25 && index<30) {
cout << "�����筠� ���� ⥫� (�।���७��) \n"
"��� �뭥譨� ���: " << index << endl;
} else if (index>30 && index<35) {
cout << "���७�� ��ࢮ� �⥯��� \n"
"��� �뭥譨� ���: " << index << endl;
} else if (index>35 && index<40) {
cout << "���७�� ��ன �⥯��� \n"
"��� �뭥譨� ���: " << index << endl;
} else if (index>40) {
cout << "���७�� ���쥩 �⥯��� (��ࡨ����) \n"
"��� �뭥譨� ���: " << index << endl;
  }
return 0;
}

float IMTAgeMan (float age, float index){
if (age >19 && age<=25) {
  cout << "��ଠ ��� = 21,4 \n"
  "��� �뭥譨� ���: " << index << endl;
} else if (age >25 && age<=35) {
cout << "��ଠ ��� = 21,6 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >35 && age<=45) {
cout << "��ଠ ��� = 22,9 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >45 && age<=55) {
cout << "��ଠ ��� = 25,8 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >55) {
cout << "��ଠ ��� = 26,6 \n"
"��� �뭥譨� ���: " << index << endl;
 }
return 0;
}

float IMTAgeWoman (float age, float index){
if (age >19 && age<=25) {
cout << "��ଠ ��� = 19,5 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >25 && age<=35) {
cout << "��ଠ ��� = 23,2 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >35 && age<=45) {
cout << "��ଠ ��� = 23,4 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >45 && age<=55) {
cout << "��ଠ ��� = 25,2 \n"
"��� �뭥譨� ���: " << index << endl;
} else if (age >55) {
cout << "��ଠ ��� = 27,3 \n"
"��� �뭥譨� ���: " << index << endl;
    }
  return 0;
  }

  void calc_vesa() {
  cout << "�������� ��� \n";
  cout << "������ ������, ������ ���, 楫�� �᫮: \n";
  float age;
  cin >> age;
  cout << "������ ���, ��: \n";
  float ves;
  cin >> ves;
  cout << "������ ��� � ����� (�,�): \n";
  float rost ;
  cin >> rost;
  cout << "�᫨ ��稭�, ������ 1, ���騭� - 0 \n";
  float pol;
  cin >> pol;
  cout << "�롥�� ��⮤ � ������ ��� ���:\n\
  ��㫠 �ப� - ������ 2, \n\
  ������ ����� ⥫� (���) ��� � � � - ������ 3, \n\
  ��� ��� � � � � ���⮬ ������ - ������ 4, \n\
  �᫨ ��� 㢨���� १����� ��� ��⮤�� - ������ 5\n";
  float kod;
  cin >> kod;
  if (kod==2){
    if (pol==1){
    BrokaForMan(rost);
    } else if (pol==0) {
    BrokaForWoman(rost);
    /*float ideal_ves = (((rost*100)-100)*0.85);
    cout << "��⨬���� ��� - ��㫠 �ப�, ��: " <<
    ideal_ves << endl;*/
    }
  } else if (kod==3) {
    if ((pol==1) || (pol==0)){
      IMT(ves,rost);
      }
    } else if (kod==4) {
    if (pol==1) {
      IMTAgeMan (age, ves/pow(rost, 2));
  }
  if (pol==0){
    IMTAgeWoman (age, ves/pow(rost, 2));
    }
  } else if (kod==5){
      IMT(ves, rost);
    if (pol==1){
      BrokaForMan(rost);
    IMTAgeMan (age, ves/pow(rost, 2));
    } else if (pol==0){
      BrokaForWoman(rost);
    IMTAgeWoman (age, ves/pow(rost, 2));
      }
    }
  if (cin.fail()) { // �᫨ �।��饥 �����祭�� ��������� ��㤠��,
    cin.clear(); // � �����頥� cin � '�����' ०�� ࠡ���
    cin.ignore(32767,'\n'); // � 㤠�塞 ���祭�� �।��饣� ����� �� �室���� ����
    }
  }
