#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include "lab_2.h"
using namespace std;

// �뢮� ࠧ��஢ �᭮���� ⨯�� ������
void print_size(){
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    // �뢮� �� ࠧ�� ����䨪��� ����� � ࠧ���
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "signed int:\t" << sizeof(signed int) << " bytes" << endl;
    cout << "unsigned int:\t" << sizeof(unsigned int) << " bytes" << endl;
    cout << "signed long:\t" << sizeof(signed long) << " bytes" << endl;
    cout << "unsigned long:\t" << sizeof(unsigned long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;
}

void print_diapazon(){
  //�뢮� �������襣� � �������襣� �ᥫ ���������
  cout << "�������襥 �᫮ char : \n" <<
  static_cast<int>(numeric_limits<char>::min()) << '\n';
  cout << "�������襥 �᫮ char : \n" <<
  static_cast<int>(numeric_limits<char>::max()) << '\n';
  cout << "�������襥 �᫮ short : \n" <<
  numeric_limits <short>::min()<< '\n';
  cout << "�������襥 �᫮ short : \n" <<
  numeric_limits <short>::max() << '\n';
  cout << "�������襥 �᫮ signed int : \n" <<
  numeric_limits<signed>::min() << '\n';
  cout << "�������襥 �᫮ signed int : \n" <<
  numeric_limits<signed>::max() << '\n';
  cout << "�������襥 �᫮ unsigned int : \n" <<
  numeric_limits<unsigned>::min() << '\n';
  cout << "�������襥 �᫮ unsigned int : \n" <<
  numeric_limits<unsigned>::max() << '\n';
  cout << "�������襥 �᫮ long long int : \n" <<
  numeric_limits<long long>::min() << '\n';
  cout << "�������襥 �᫮ long long int : \n" <<
  numeric_limits<long long>::max() << '\n';
  cout<<"�������襥 �᫮ float \n: "<<
  numeric_limits<float>::lowest()<<'\n';
  cout <<"�������襥 �᫮ float \n: "<<
  numeric_limits<float>::max()<<'\n';
  cout<<"�������襥 �᫮ double \n: "<<
  numeric_limits<double>::lowest()<<'\n';
  cout<<"�������襥 �᫮ double \n: "<<
  numeric_limits<double>::max()<<'\n';
  }
//�࣠����� �뢮� �᫮���� ��������� ⨯�� ������ � hex, dec, bin (��� �� ���� ⨯��):

void print_diapazon_bin(){
  bitset<8> bits_1(static_cast<int>(numeric_limits<char>::min()));
  cout << "�������쭮� �᫮ char: \n" << bits_1 << '\n';
  bitset<8> bits_2(static_cast<int>(numeric_limits<char>::max()));
  cout << "���ᨬ��쭮� �᫮ char: \n" << bits_2 << "\n\n";
  bitset<16> morebits_16_3(numeric_limits <short>::min());
  cout << "�������쭮� �᫮ short: \n" << morebits_16_3 << '\n';
  bitset<16> morebits_16_4(numeric_limits <short>::max());
  cout << "���ᨬ��쭮� �᫮ short: \n" << morebits_16_4 << "\n\n";
  bitset<32> morebits_32_5(numeric_limits<signed>::min());
  cout << "�������쭮� �᫮ signed: \n" << morebits_32_5 << '\n';
  bitset<32> morebits_32_6(numeric_limits<signed>::max());
  cout << "���ᨬ��쭮� �᫮ signed: \n" << morebits_32_6 << "\n\n";
  bitset<32> morebits_32_7(numeric_limits<unsigned>::min());
  cout << "�������쭮� �᫮ unsigned: \n" << morebits_32_7 << '\n';
  bitset<32> morebits_32_8(numeric_limits<unsigned>::max());
  cout << "���ᨬ��쭮� �᫮ unsigned: \n" << morebits_32_8 << "\n\n";
  bitset<64> morebits_64_9(numeric_limits<long long>::min());
  cout << "�������쭮� �᫮ long long: \n" << morebits_64_9 << '\n';
  bitset<64> morebits_64_10(numeric_limits<long long>::max());
  cout << "���ᨬ��쭮� �᫮ long long: \n" << morebits_64_10 << '\n';
  }

void vyvod_printf(){
char c[]= "�뢮� �।���� ��������� � printf";
printf ("%s\n", c);
char h[]= "��᫮��� �������� � 8-� �ଠ�";
printf ("%s\n", h);
char k1[] = "��᫮��� �������� short: ��";
short t1 = numeric_limits<short>::min();
char k2[] = " �� ";
short t2 = numeric_limits<short>::max();
printf ("%s\n%od%s%od\n\n",k1,t1,k2,t2);
char u[] = "��᫮��� �������� � 16-� �ଠ�";
printf ("%s\n", u);
char s1[] = "��᫮��� �������� short: �� ";
short d1 = numeric_limits<short>::min();
char s2[] = " �� ";
short d2 = numeric_limits<short>::max();
printf ("%s\nxd%s%xd\n",s1,d1,s2,d2);
char s3[] = "��᫮��� �������� float: �� ";
float d3 = numeric_limits<float>::min();
char s4[] = " �� ";
float d4 = numeric_limits<float>::max();
printf ("%s\n%fd%s%%fd\n",s3,d3,s4,d4);
}

void task2(){
  cout << "�뢮� ࠧ��஢ ⨯��"  << '\n';
  print_size();
  cout << "��᫮��� �������� � 10-� �ଠ� "  << '\n';
  print_diapazon();
  cout.unsetf(ios::dec);//8-naya
  cout.setf(ios::oct);
  cout << "��᫮��� �������� � 8-� �ଠ� "  << '\n';
  print_diapazon();
  cout.unsetf(ios::oct);// 16-naya
  cout.setf(ios::hex);
  cout << "��᫮��� �������� � 16-� �ଠ� "  << '\n';
  print_diapazon();
  cout << "��᫮��� �������� � 2-� �ଠ�" << "\n";
  cout.unsetf(ios::hex);
  print_diapazon_bin();
  cout << "��᫮��� �������� � printf" << "\n";
  vyvod_printf();
  }
