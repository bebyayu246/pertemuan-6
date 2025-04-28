#include<iostream>
using namespace std;

class PersegiPanjang
{
    public :
    float panjang;
    float luas;
    float lebar;

    void displaydata() {
        cout << " input panjang : ";
        cin >> panjang;
        cout << "input luas : ";
        cin >> luas;
        
    }
    void menghitungLuas(){
        luas = panjang*lebar;
        cout << " luas persegi panjang = " << luas << endl;
    }
};

int main(){
    PersegiPanjang per ;
}