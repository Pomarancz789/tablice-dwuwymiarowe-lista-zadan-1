#include <iostream>
using namespace std;


//zadeklarowanie tablicy ze stałymi wartościami i wypisanie jej
void zadaniepierwsze()
{
    int tab[2][4]={{0,3,7,1},{8,4,2,9}};
    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
}


//menu wyboru co ma sie stać, potem wybrana opcja sie dzieje
void zadaniedrugie()
{
    //zadeklarowanie i wypełnienie tablicy
    int tab[5][5]={0};
    srand(time(NULL));
    for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                tab[i][j]=rand()%(10+1);
            }
        }
    //zadeklarowanie i wypełnienie tablicy
    
    
    //zapytanie o opcje ktora ma sie wykonac
    int wybor=0;
    cout << "1. Wypisanie tablicy" << endl;
    cout << "2. Liczba zer nad przekatna" << endl;
    cout << "3. Liczba zer pod przekatna" << endl;
    cout << "4. Liczba zer na przekatnej" << endl;
    cout << "wybierz opcje: ";
    cin >> wybor;
    //zapytanie o opcje ktora ma sie wykonac
    
    
    //switch rozgraniczajacy co sie wykona dla odpowiednich odpowiedzi
    switch (wybor) {
        //wypisanie tablicy
        case 1:
            for (int i=0; i<5; i++) {
                    for (int j=0; j<5; j++) {
                        cout << tab[i][j] << " ";
                    }
                    cout << endl;
                }
            break;
        //wypisanie tablicy
        
            
        //liczba zer nad przekatna
        case 2:
            for(int h=0; h<5; h++)
            {
                for (int k=h+1; k<5; k++)
                {
                    if (tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            }
            break;
        //liczba zer nad przekatna
            
            
        //liczba zer pod przekatna
        case 3:
            for(int h=0; h<5; h++)
            {
                for (int k=h-1; k>-1; k--)
                {
                    if (tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            }
            break;
        //liczba zer pod przekatna
            
            
        //liczba zer na przekatnej
        case 4:
            for(int h=0; h<5; h++){
                    if (tab[h][h]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            break;
        //liczba zer na przekatnej
            
        default:
            cout << "Wybrales nieprawidlowa opcje :(" << endl;
            break;
    }
    //switch rozgraniczajacy co sie wykona dla odpowiednich odpowiedzi
}

//menu wyboru co ma sie stać, potem wybrana opcja sie dzieje, tylko inna przekatna
void zadanietrzecie()
{
    //zadeklarowanie i wypełnienie tablicy
    int tab[5][5]={0};
    srand(time(NULL));
    for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                tab[i][j]=rand()%(10+1);
            }
        }
    //zadeklarowanie i wypełnienie tablicy
    
    
    //zapytanie o opcje ktora ma sie wykonac
    int wybor=0;
    cout << "1. Wypisanie tablicy" << endl;
    cout << "2. Liczba zer nad przekatna" << endl;
    cout << "3. Liczba zer pod przekatna" << endl;
    cout << "4. Liczba zer na przekatnej" << endl;
    cout << "wybierz opcje: ";
    cin >> wybor;
    //zapytanie o opcje ktora ma sie wykonac
    
    
    //switch rozgraniczajacy co sie wykona dla odpowiednich odpowiedzi
    switch (wybor) {
        //wypisanie tablicy
        case 1:
            for (int i=0; i<5; i++) {
                    for (int j=0; j<5; j++) {
                        cout << tab[i][j] << " ";
                    }
                    cout << endl;
                }
            break;
        //wypisanie tablicy
        
            
        //liczba zer nad przekatna
        case 2:
            for(int h=0; h<5; h++)
            {
                for (int k=0; k<5; k++)
                {
                    if (k+h<6&&tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            }
            break;
        //liczba zer nad przekatna
            
            
        //liczba zer pod przekatna
        case 3:
            for(int h=0; h<5; h++)
            {
                for (int k=h-1; k>-1; k--)
                {
                    if (k+h>6&&tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            }
            break;
        //liczba zer pod przekatna
            
            
        //liczba zer na przekatnej
        case 4:
            for(int h=0; h<5; h++)
            {
                for (int k=0; k<5; k++)
                {
                    if (k+h==6&&tab[h][h]==0)
                    {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << h << "]" << endl;
                    }
                }
            }
            break;
        //liczba zer na przekatnej
            
        default:
            cout << "Wybrales nieprawidlowa opcje :(" << endl;
            break;
    }
    //switch rozgraniczajacy co sie wykona dla odpowiednich odpowiedzi
}




int main() {
    
    zadaniepierwsze();
    zadaniedrugie();
    zadanietrzecie();
    
    return 0;
}
