# Тестовые задания Lab_2

# 1. Найдите в программе ошибки, представите ниже рабочий вариант программы.
## a) 
### X С ошибками
```cpp
nt main() {//надо писать int
short a;
a(65599);  //выход за предел диапазона short
int 5 = 4; //цифру нельзя в имя переменной
int л = 4; //кириллицу нельзя в имя переменной
char ch;   /*можно сразу
ch{5};     * присвоить значения,
float f;   * чтобы не писать
f = 3,2;   * лишние строки*/
}}         //вторая скобка лишняя
```
### V Исправленый
```cpp
int main{
int a (65599);
int a = 4; //цифру нельзя в имя переменной
int b = 4;
char ch{5};
float f = 3,2;
}
```

# 2. Какие значения выводит эта программа?
## а) Почему z выводит неожиданные значения?
```cpp
#include <iostream>
int main() {
int x = 5;
x = x - 2;                       
//a
std::cout << x << std::endl; // #a     будет 3
int y = x;
//b
std::cout << y << std::endl; // #b     будет 3
//c
std::cout << x + y << std::endl; // #c будет 6
//d
std::cout << x << std::endl; // #d     будет 3
int z;
//e
std::cout << z << std::endl; // #e     будет неизвестно что,
} 
```
## b)
```cpp
#include <iostream>
int main() {
int x = 1;
x = x++;
std::cout << x << "\n";                //будет 1
}
```

## c)
```cpp
#include <iostream>
int main(){
int x = 1;
std::cout << ++x << "\n";              //будет 2
}
```

# 3. Найдите в программе ошибки, можно только что-то добавлять убирать нельзя, и выведите
результат.
## a)
### X С ошибками
```cpp
const int option_1 = 0;                                    
const int option_2 = 1;                                   
const int option_3 = 2;                                   
const int option_4 = 3;                                   
const int option_5 = 4;
const int option_6 = 5;
const int option_7 = 6;
const int option_8{7};
int main( { 
//не хватает скобки )                                     
bitset<8> bits(0x4);   /* не подключен
bits.set(option_1);    *using namespace std,
bits.flip(option_3);   * а std:: в коде
bits.reset(option_7);  * отсутствует */
// надо писать cout вместо cin
// надо \ вместо /
cin << "Bit 1 has value: " << bits.test(option_1) << '/n';
// "" надо по обе стороны выражения Bit...value:
//не указан номер бита в (), 
//надо писать cout вместо cin
cin << Bit 3 has value: " << bits.test() << '\n';         
// надо 2 знака << перед '\n';  
//не указан номер бита в (), 
//надо писать cout вместо cin
cin << "Bit 7 has value: " << bits.test() < '\n';         
//надо ' после '\n
cin << "All the bits: " << bits << '\n;
}
```
### V Исправленый
```cpp
int main(){
using namespace std;
std::bitset<8> bits(0x4);  
bits.set(option_1);    
bits.flip(option_3);   
bits.reset(option_7); 
std::cout << "Bit 1 has value: " << bits.test(option_1) << '\n';
std::cout << "Bit 3 has value: " << bits.test(option_3) << '\n';
std::cout << "Bit 7 has value: " << bits.test(option_7) << '\n';
// надо 2 знака << перед '\n';
//не указан номер бита в (),
//надо писать std::cout вместо cin
std::cout << "All the bits: " << bits << '\n';
//надо ' после '\n
//надо писать std::cout вместо cin
```

## b)
### X С ошибками
```cpp
int main()//нет {
// нет ) после 3 и ;
// 2 раза написано uint8_t
uint8_t a(1), uint8_t b(1), c(3
a = a < 1;
// нет ;
// с uint8_t нужен std::cout
рrintf("a: \n", a)
b <<= 1;
// нужен %d после "b:
printf("b: \n", b);
c |= 1;
// нужен %d после "c:
// нет с после \n",
// нужен f в конце printf
print("c: \n", );
//нужна } в конце блока стетментов
```
### V Исправленый
```cpp
int main(){
uint8_t a(1), b(1), c(3);
    a = a << 1;
    std::cout << "a: " << a << '\n';
    b <<= 1;
    printf("b: %d\n", b);
    c |= 1;
    printf("c: %d\n", c);
)
```

## c)
### X С ошибками
```cpp
int main() {
//в десятичном виде значение переменной 
//должно быть без 0
int x (08);
// надо <<  вместо < и std:: перед endl
std::cout << "x: " << x < endl;
int y = 0x5;
// надо <<  вместо < и :: перед endl
std::cout << "y: " < y << stdendl;
int bin(0);
//надо ; 
bin = 0b101
//надо ;
// надо std::c перед out
out << "bin 0b101: " << bin << std::endl
}
```

### V Исправленый
```cpp
int main()
int x (8);
std::cout << "x: " << x << std::endl;
int y = 0x5;
std::cout << "y: " << y << std::endl;
int bin(0);
bin = 0b101;
std::cout << "bin 0b101: " << bin << std::endl;
}
```

## d)
### X С ошибками
```cpp
int x{8};
// надо hex вместо h
// надо std::e  перед ndl
std::cout << "hex: " << h << x << ndl;
// надо oct вместо o
std::cout << "oct: " << o<< x << std::endl;
//надо std::c перед out
out << "dec: " << dec << x << std::endl;
}
```
### V Исправленый
```cpp
int x {8};
    cout.unsetf(ios::dec);
    std::cout << "hex: " << hex << x << std::endl;
    std::cout << "oct: " << oct << x << std::endl;
    std::cout << "dec: " << dec << x << std::endl;
}
```

# 4 Вычислите следующие выражения:
## a) (true или false):
```cpp
(true && true) || false
(false && true) || true
(false && true) || false || true
(5 > 6 || 4 > 3) && (7 > 8)
!(7 > 6 || 3 > 4)
cout.setf(ios::boolalpha);
    cout << "((true && true) || false): " <<
    ((true && true) || false) << endl;
    cout << "((false && true) || true): " <<
    ((false && true) || true) << endl;
    cout << "((false && true) || false || true): " <<
    ((false && true) || false || true) << endl;
    cout << "((5 > 6 || 4 > 3) && (7 > 8)): " <<
    ((5 > 6 || 4 > 3) && (7 > 8)) << endl;
    cout << "(!(7 > 6 || 3 > 4)): " <<
    (!(7 > 6 || 3 > 4)) << endl;
```
## b)
```cpp
 Какой результат 0110 >> 2 в двоичной системе счисления?
    Получится 0001, одна из 1 будет за пределами битов и не сосчитается
```

## c) Какой результат 5 & 12 в десятичной системе счисления?
```cpp
 int main() {
uint8_t a(5), b(12);
    char c = a&b;
    std::cout << (a&b)<<'\n';
    printf("d: %d \n", c);
}
```

## d) Какой результат 0110 >> 2 в двоичной системе счисления?
```cpp
 int main() {
    uint8_t e(5), f(12);
    char d = a^b;
    std::cout << (e^f)<<'\n';
    printf("d: %d \n", d);
}
```

# 5 Конвертируйте двоичное число 0100 1101 в десятичную систему счисления.
```cpp
 int main() {
 cout << (128*0)+(64*1)+(32*0)+(16*0)+(8*1)+(4*1)+(2*0)+(1*1) << endl;
}
```
