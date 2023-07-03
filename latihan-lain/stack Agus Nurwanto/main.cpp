#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
using namespace std;

int top=-1, Stack[MAX];

void push () {

    if (top == MAX-1){
        cout << ">> Stack sudah Penuh I" << endl;
    }else{
        top++;
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "n\Pada Index ke '" << top << "'";
        cout << "Data [" << Stack[top] << "] Telah Ditambah ! "<<endl;
    }
}
void pop () {
    if (top == -1){
        cout << ">> Stack Kosong !" << endl;
    }else{
        cout << "n\Data [" << Stack[top] << "] pada index ke '"<<top<<"' dalam Stack Diambil !"<<endl;
        Stack[top--];
    }
}
int clearr() {
    return top = -1;
}

void Print () {
    if (top == -1) {
        cout << "          Stack : ";
        cout << "\n======================"<< endl;
        cout << " Empty ! \n===================="<<endl;
    }
    else {
        cout << "           Stack : ";
        cout << "\n======================" << endl;
        for (int i = top; i >= 0; i--){
            cout << "        XXXXX[ " << Stack[i] << " ]XXXXX"<< endl;
        }
        cout << "=======================" << endl;
    }
}

int main ()
{
    int choose;
    do {
        Print();
        cout << "\nl. Push"
            << "\n2. Pop"
            << "\n3. Clear"
            << "\n4. Exit"
            << "\nCodeProgram SiberMu"
            << "\nPergerakan ( TOP ) : " << top
            << "\n\n>> Choose : "; cin >> choose;
        switch (choose) {
            case 1:
                push () ;getch() ;
                break;
            case 2:
                pop () ;getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Succes" << endl;
                getch();
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                getch() ;
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                getch() ;
                break;
        }
        system ("cls");

    }while (choose !=4);
}
