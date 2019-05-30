#include <iostream>

int sayac = 0;
char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';

bool table(int input) {
        sayac++;
        switch (input) {
            case 1:
                sayac % 2 == 0 ? a = 'X' : a = 'O';
                break;
            case 2:
                sayac % 2 == 0 ? b = 'X' : b = 'O';
                break;
            case 3:
                sayac % 2 == 0 ? c = 'X' : c = 'O';
                break;
            case 4:
                sayac % 2 == 0 ? d = 'X' : d = 'O';
                break;
            case 5:
                sayac % 2 == 0 ? e = 'X' : e = 'O';
                break;
            case 6:
                sayac % 2 == 0 ? f = 'X' : f = 'O';
                break;
            case 7:
                sayac % 2 == 0 ? g = 'X' : g = 'O';
                break;
            case 8:
                sayac % 2 == 0 ? h = 'X' : h = 'O';
                break;
            case 9:
                sayac % 2 == 0 ? i = 'X' : i = 'O';
                break;
        }

        std::cout << "-------------------------------" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "|    " << a << "    |    " << b << "    |    " << c << "    |" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "|    " << d << "    |    " << e << "    |    " << f << "    |" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "|    " << g << "    |    " << h << "    |    " << i << "    |" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "-------------------------------" << std::endl;

          if ((a == b && b == c) || (a == e && e == i) || (a == d && d == g) || (b == e && e == h) || (c == e && e == g) ||(c == f && f == i) || (d == e && e == f) || g == h && h == i) {
            sayac % 2 == 0 ? std::cout<<"Player 1 won"<<std::endl : std::cout<<"Player 2 won"<<std::endl;
        return true;
        }
        return false;
}


int main() {
    int a;
    while(table(a)!= true){
        std::cout<<"Please chose your place : ";
        std::cin>>a;
    }
    // To prove i can add 1-9 limit to while loop
    // I can add != X && != O in switch case
}
