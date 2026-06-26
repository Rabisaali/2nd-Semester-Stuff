#include<iostream>
#include<fstream>
using namespace std;

int main () {
    //ofstream f("file.txt");
    
    // ofstream f;
    // f.open("file.txt");

    //fstream f("file.txt", ios::out);
    fstream f;
    f.open("file.txt", ios::out);
    string s = "I am rabisa1";
    f << s;
}
