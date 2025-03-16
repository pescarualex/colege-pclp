#include <iostream>
using namespace std;







int main() {

 //declarare sir caractere:
    //char a[11] = "student"; //se folosesc doar 8 caractere
    //char b[] = "student"; //se aloca automat 8 octeti pentru sirul b => cele 7 litere + caracterul null \0


//initializarea sirurilor de caractere este asemanatoare cu initializarea unui tablou
    //char c[8] = {'s', 't', 'u', 'd', 'e', 'n', 't', '\0'};
    //char d[] = {'s', 't', 'u', 'd', 'e', 'n', 't', '\0'}; // se aloca automat 8 octeti + \0


    //citirea si afisarea unui sir de caractere:
    //cu instructiunea CIN

    //char sir_de_caractere[];
    //cin >> sir_de_caractere;

    //IMPORTANT
    //trebuie adaugat manual caracterul null la finalul sirului in cazul in care
    // sirul este citit cu instructiunea CIN



    //Primul exemplu
    char sir[11];
    cout << "Introduceti un sir de caractere: ";
    for (int i = 0; i < 11; i++) {
        cin >> sir[i];
    }
    sir[10] = 0; //caracterul null trebuie adaugat manual
    cout << "\nSirul de caractere este: " << sir;




    //Al doilea exemplu
    //introducerea unui sir de caractere folosind functia cin.get
    //sintaxa este urmatoatea: cin.get(sir, lungime_sir, sfarsit);
    //sir => sirul de caractere
    //lungime => lungimea sirului de caractere
    //sfarsit => reprezinta untimul caracter
    char sir2[100];
    cout << "Introduceti sirul: ";
    cin.get(sir2, 99, 'x');
    cout << "sirul este: " << sir2;



    //al treilea exemplu
    // cin.get(sir, n + 1) -> doar 2 parametri
    //  sir => sirul de caractere
    //  n + 1 => lungimea sirului de caractere care include si caracterul null \0
     char sir3 [100];
     cout << "introdu un sir: \n";
     cin.get(sir3, 20); //lungimea sirului de caractere este de 20
     cout << "Sirul este: " << sir3;
    // s-au adaugat caractere pana la indexul 18, indexul 19 este folosit pentru caracterul nul \0






    //Daca lungimea sirului intodus est mai mare decat cea declarata, atunci sirul ca fi trunchiat
    // sirul va memora toate caracterele introduse, inclusiv cele speciale
    // spatiu, tab, enter
    //dimensiunea sirului include si caracterul NULL \0
    // functia getline() => are aceeasi sintaxa ca si functia get
    //este utila in special atunci cand este citit un sir de caractere care contine spatii

    char nume[31], adresa[31];
    cout << "Numele si prenumele: ";
    cin.getline(nume, 30);
    cout << "Adresa: ";
    cin.getline(adresa, 30);
    cout << "\nStudentul se numeste: " << nume << "\n";
    cout << "Adresa este: " << adresa;





    //functii care lucreaza cu siruri de caractere
    //aceste functii utilizeaza biblioteca string.h
    //functia strcpy => are rolul de a copia sirul de la adresa sursa la adresa sentinatie
    //sintaxa: strcpy_s(destinatie, sursa)

    //primul exemplu
    char sir1[100], sir2[100];
    cout << "introdu primul sir: ";
    cin.get(sir1, 99);
    cin.get(); //pentru a putea citi al doilea sir de caractere
    cout << "introdu sir 2: ";
    cin.get(sir2, 99);
    strcpy(sir1, sir2);
    cout << "primul sir de caractere: " << sir1;
    cout << "\nal doilea sir de caractere: " << sir2;

    //al doilea exemplu
    //strncpy(sir1, sir2, n) => copiaza primele n caractere sin sirul 2 in sirul 1
    // primul sir va fi suprascris in cazul in care acesta este initializat anterior
    char sir1[100], sir2[100]; int n;
    cout << "intro sir1: ";
    cin.get(sir1, 99);
    cin.get();
    cout << "introdu sir2: ";
    cin.get(sir2,99);
    cout << "n= ";
    cin >> n;
    strncpy(sir1, sir2, n);
    cout << "Sir1: " << sir1;
    cout << "\nDir2: " << sir2;



    //verificarea timpului de executia a unui program care sorteaza un tablou folosind BubbleSort
    clock_t start, stop;
    int a1[100], lungimeTablou, i, j, aux;
    cout << "Cate elemente va avea vectorul?"<< endl;
    cin >> lungimeTablou;
    cout << "Introdu elementele: " << endl;
    for (i = 0; i < lungimeTablou; i++) {
        cout << "a1[" << i << "] = ";
        cin >> a1[i];
    }
    start = clock();
    for (i = 0; i < lungimeTablou; i++) {
        for ( j = lungimeTablou - 1; j >= i + 1; j--) {
            if (a1[j - 1] > a1[j]) {
                aux = a1[j - 1];
                a1[j-1] = a1[j];
                a1[j] = aux;
            }
        }
    }
    cout << "Elementele sortate sunt: ";
    for (i = 0; i < lungimeTablou; i++) {
        cout << a1[i] << endl;
    }
    stop = clock();

    cout << "Pentru lungimeTablou=" << lungimeTablou << " dureaza: " <<
        ((float) (stop - start )) / CLOCKS_PER_SEC * 1000 << "ms" << endl;









    return 0;
}