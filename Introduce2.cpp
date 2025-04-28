#include<iostream>
using namespace std;

class PersegiPanjang
{
    public :
    float panjang;
    float luas;
    float lebar;
    
    void inputdata(){
        cout << " input panjang : ";
        cin >> panjang;
        cout << "input luas : ";
        cin >> luas;
    }

    void menghitungLuas(){
        luas = panjang*lebar;
        
    }
    void output(){
        cout << " luas persegi panjang = " << luas << endl;
    }
};

int main(){
    PersegiPanjang per ;
    per.inputdata();
    per.menghitungLuas();
    per.output();
    return 0;
}