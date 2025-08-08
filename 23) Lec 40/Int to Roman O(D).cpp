#include <iostream>
#include <string>
using namespace std;

// Define Roman numeral strings
string s1000 = "M", s2000 = "MM", s3000 = "MMM";
string s100 = "C", s200 = "CC", s300 = "CCC", s400 = "CD", s500 = "D", s600 = "DC", s700 = "DCC", s800 = "DCCC", s900 = "CM";
string s10 = "X", s20 = "XX", s30 = "XXX", s40 = "XL", s50 = "L", s60 = "LX", s70 = "LXX", s80 = "LXXX", s90 = "XC";
string s1 = "I", s2 = "II", s3 = "III", s4 = "IV", s5 = "V", s6 = "VI", s7 = "VII", s8 = "VIII", s9 = "IX";

string four_digit(int n) {
    if (n == 1000) return s1000;
    else if (n == 2000) return s2000;
    else return s3000;
}
string three_digit(int n) {
    if (n == 100) return s100;
    else if (n == 200) return s200;
    else if (n == 300) return s300;
    else if (n == 400) return s400;
    else if (n == 500) return s500;
    else if (n == 600) return s600;
    else if (n == 700) return s700;
    else if (n == 800) return s800;
    else return s900;
}
string two_digit(int n) {
    if (n == 10) return s10;
    else if (n == 20) return s20;
    else if (n == 30) return s30;
    else if (n == 40) return s40;
    else if (n == 50) return s50;
    else if (n == 60) return s60;
    else if (n == 70) return s70;
    else if (n == 80) return s80;
    else return s90;
}
string single_digit(int n) {
    if (n == 1) return s1;
    else if (n == 2) return s2;
    else if (n == 3) return s3;
    else if (n == 4) return s4;
    else if (n == 5) return s5;
    else if (n == 6) return s6;
    else if (n == 7) return s7;
    else if (n == 8) return s8;
    else return s9;
}

// Integer to Roman numeral converter
int main() {
    int num;
    cout << "Enter number between (1-3999): ";
    cin >> num;

    if (num < 1 || num > 3999) { // Handle invalid input
        cout << "Enter a valid value between 1 and 3999." << endl;
        return 0;
    }

    string ans = ""; // Final Roman numeral result
    int original_num = num;

    if (num >= 1000) {
        int thousands = (num / 1000) * 1000;
        ans += four_digit(thousands);
        num %= 1000;
    }
    if (num >= 100) {
        int hundreds = (num / 100) * 100;
        ans += three_digit(hundreds);
        num %= 100;
    }
    if (num >= 10) {
        int tens = (num / 10) * 10;
        ans += two_digit(tens);
        num %= 10;
    }
    if (num > 0) {
        ans += single_digit(num);
    }

    cout << "Roman numeral: " << ans << endl;

    return 0;
}
