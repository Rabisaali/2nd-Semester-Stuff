#include<iostream>
#include<fstream>
using namespace std;

class Test {
    public:
        static int genID;
        int id;
        string name;
        Test () {
            id = ++genID;
            name = "000"+to_string(genID);
        }
        void operator+(string file) {
            ofstream f(file, ios::app);
            f << id << " " << name << endl;
        }
};

int Test::genID=0;

int main () {
    Test t1, t2;

    t1+"outfile.txt";
    t2+"outfile.txt";
}