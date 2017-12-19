#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
using namespace std;
void read(string login, string passwd);
void odch(int ab, int ac, int bc, int l, int sboc, int sosn, int s,int p, int pi);
struct Users{
    string login;
    string passwd;
}users[100];
struct dani{
    int ab;
    int ac;
    int bc;
    int l;

}dani[20];
void read(string login, string passwd){
    ifstream fin("users.txt");
    for(int i=0;i<100;i++){
        fin >> users[i].login>>users[i].passwd;
    }
}
void odch(int ab, int ac, int bc, int l, int sboc, int sosn, int s,int p, int pi){
    fstream find("dani.txt");
    find >>ab>>ac>>bc>>l;
    p=ab+ac+bc;
    sboc=1/2*p*l;
    pi=ab+ac+bc/2;
    sosn=pow(pi*(pi-ab)*(pi-ac)*(pi-bc),1.0/2.0);
    s=sboc+sosn;
    cout <<"Плoща піраміди="<< s << endl;

}
