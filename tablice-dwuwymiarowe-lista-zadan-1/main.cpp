#include <iostream>
#include <cstdio>
#include <cstdlib>
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
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << k << "]" << endl;
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
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << k << "]" << endl;
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
                    if (k+h<4&&tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << k << "]" << endl;
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
                    if (k+h>4&&tab[h][k]==0) {
                        cout << "Zero znajduje sie na indexach: [" <<h << "][" << k << "]" << endl;
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
                    if (k+h==4&&tab[h][h]==0)
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


//
void zadanieczwarte()
{
    //ZASRANE MENU
    int wybor=0;
    cout << "1. Wypisanie ocen" << endl;
    cout << "2. srednia uczniow, nawieksza, najmniejsza srednia" << endl;
    cout << "3. srednia przedmiotow, nawieksza, najmniejsza srednia" << endl;
    cout << "4. srednia klasy" << endl;
    cout << "wybierz opcje: ";
    cin >> wybor;
    //ZASRANE MENU
    
    
    //stworzenie tablicy z randomowymi ocenami od 0 do 6
    int tab[7][5]={0};
    srand(time(NULL));
    
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<5; j++)
        {
            tab[i][j]=rand()%(6+1);
        }
    }
    //stworzenie tablicy z randomowymi ocenami od 0 do 6
    
    
    switch (wybor) {
        case 1:
        {
            //wypisanie tej tablicy jako tabeli
            cout<<"    j.p      mat      ang      hist     biol"<<endl;
            for(int i=0; i<7; i++)
            {
                cout << "u" <<i+1 << "    ";
                for(int j=0; j<5; j++)
                {
                    cout << tab[i][j] << "        ";
                }
                cout <<endl;
            }
            //wypisanie tej tablicy jako tabeli
            break;
        }
            
        case 2:
        {
            //liczenie sredniej i znajdowanie najwyzszej i najnizszej sredniej
            float max=0;
            float min=99999;
            int id_max=0;
            int id_min=0;
            for(int i=0; i<7; i++)
            {
                float srednia=0;
                for(int j=0; j<5; j++)
                {
                    srednia+=tab[i][j];
                }
                srednia/=5;
                cout << "Uczen " << i+1 << " ma srednia: " <<srednia << endl;
                if(srednia<min)
                {
                    min=srednia;
                    id_min=i+1;
                }
                if (srednia>max) {
                    max=srednia;
                    id_max=i+1;
                }
            }
            cout<<"Najnizsza srednia ma Uczen " <<id_min<< " (" << min<<")"<<endl;
            cout<<"Najwyzsza srednia ma Uczen " <<id_max<< " (" << max<<")"<<endl;
            //liczenie sredniej i znajdowanie najwyzszej i najnizszej sredniej
            break;
        }
    
        case 3:
        {
            //liczenie sredniej przedmiotu, najwyzsza i najnizsza srednia
            float maxprz=0;
            float minprz=99999;
            int id_maxprz=0;
            int id_minprz=0;
            for(int i=0; i<5; i++)
            {
                float srednia=0;
                for(int j=0; j<7; j++)
                {
                    srednia+=tab[j][i];
                }
                srednia/=7;
                cout << "przedmiot " << i+1 << " ma srednia: " <<srednia << endl;
                if(srednia<minprz)
                {
                    minprz=srednia;
                    id_minprz=i+1;
                }
                if (srednia>maxprz) {
                    maxprz=srednia;
                    id_maxprz=i+1;
                }
            }
            cout<<"Najnizsza srednia ma przedmiot " <<id_minprz<< " (" << minprz<<")"<<endl;
            cout<<"Najwyzsza srednia ma przedmiot " <<id_maxprz<< " (" << maxprz<<")"<<endl;
            //liczenie sredniej przedmiotu, najwyzsza i najnizsza srednia
            break;
        }
    
    
        case 4:
        {
            //srednia klasy
            float sredniaklasy=0;
            for(int i=0; i<7; i++)
            {
                for(int j=0; j<5; j++)
                {
                    sredniaklasy+=tab[i][j];
                }
            }
            sredniaklasy/=35;
            cout << "srednia klasy to: " << sredniaklasy << " (hyhy ale dzbany)"<<endl;
            //srednia klasy
            break;
        }
            
        default:
            cout<<"zla opcja, sadge" << endl;
            break;
    }
}


void zadaniepiate()
{
    //tworzymy i wypelniamy tabele
    srand(time(NULL));
    int tab[6][6]={0};
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            tab[i][j]=-1+rand()%(10+1+1);
        }
    }
    //tworzymy i wypelniamy tabele
    
    
    //wypisywanie sum liczb na indexach parzystych, nieparzystych i mieszanych
    int sumaparzystych=0;
    int sumanieparzystych=0;
    int sumamieszanych=0;
    for (int i=0; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            if (j%2==0&&i%2==0) {
                sumaparzystych+=tab[i][j];
            }
            else
            {
                if (j%2!=0&&i%2!=0) {
                    sumanieparzystych+=tab[i][j];
                }
                else
                {
                    sumamieszanych+=tab[i][j];
                }
            }
        }
    }
    cout << "suma liczb na indexach parzystych wynosi: " << sumaparzystych<<endl;
    cout << "suma liczb na indexach nieparzystych wynosi: " << sumanieparzystych<<endl;
    cout << "suma liczb na indexach mieszanych wynosi: " << sumamieszanych<<endl;
    //wypisywanie sum liczb na indexach parzystych, nieparzystych i mieszanych
}




void zadanieszoste()
{
    //tworzymy i wypelniamy tabele
    srand(time(NULL));
    int tab[5][5]={0};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            tab[i][j]=1+rand()%(30-1+1);
        }
    }
    //tworzymy i wypelniamy tabele
    
    
    //liczymy ile liczb jest podzielne przed ponizsze cyfry
    int podzielneprzez_dwa=0;
    int podzielneprzez_trzy=0;
    int podzielneprzez_cztery=0;
    int podzielneprzez_piec=0;
    int podzielneprzez_szesc=0;
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(tab[i][j]%2==0)
                podzielneprzez_dwa++;
            if(tab[i][j]%3==0)
                podzielneprzez_trzy++;
            if(tab[i][j]%4==0)
                podzielneprzez_cztery++;
            if(tab[i][j]%5==0)
                podzielneprzez_piec++;
            if(tab[i][j]%6==0)
                podzielneprzez_szesc++;
        }
    }
    cout << "Liczb dzielacych sie przez 2 jest: " << podzielneprzez_dwa << endl;
    cout << "Liczb dzielacych sie przez 3 jest: " << podzielneprzez_trzy << endl;
    cout << "Liczb dzielacych sie przez 4 jest: " << podzielneprzez_cztery << endl;
    cout << "Liczb dzielacych sie przez 5 jest: " << podzielneprzez_piec << endl;
    cout << "Liczb dzielacych sie przez 6 jest: " << podzielneprzez_szesc << endl;
    //liczymy ile liczb jest podzielne przed ponizsze cyfry
}


void zadaniesiodme()
{
    //tworzymy i wypelniamy tabele
    srand(time(NULL));
    int tab1[5][12]={0};
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<12; j++)
        {
            tab1[i][j]=1+rand()%(6-1+1);
            cout <<" "<< tab1[i][j]<<"  ";
        }
        cout << endl;
    }
    //tworzymy i wypelniamy tabele
    
    
    
    //przepisujemy liczby do drugiej tabeli jako rzeczywiste i dodajemy sumy
    float tab2[6][13]={0};
    for(int i=0; i<6; i++)
    {
        int suma=0;
        for(int j=0; j<13; j++)
        {
            if (j==12)
            {
                tab2[i][j]=suma;
            }
            else
            {
                tab2[i][j]=tab1[i][j];
                suma+=tab2[i][j];
            }
        }
        suma=0;
    }
    
    for(int i=0; i<13; i++)
    {
        int suma=0;
        for (int j=0; j<6; j++)
        {
            if (j==5)
            {
                tab2[j][i]=suma;
            }
            else
            {
                suma+=tab2[j][i];
            }
        }
        suma=0;
    }
    //przepisujemy liczby do drugiej tabeli jako rzeczywiste i dodajemy sumy
    
    cout<<endl;
    
    //wypisujemy tabele 2
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<13; j++)
        {
            if (i<5)
            {
                cout <<" " << tab2[i][j]<<"  ";
            }
            else
            {
                cout <<" "<< tab2[i][j]<<" ";
            }
                
        }
        cout << endl;
    }
    //wypisujemy tabele 2
}



int main() {
    
    //zadaniepierwsze();
    //zadaniedrugie();
    //zadanietrzecie();
    //zadanieczwarte();
    //zadaniepiate();
    //zadanieszoste();
    //zadaniesiodme();
    
    return 0;
}
