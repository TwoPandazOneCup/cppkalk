#include<iostream>
#include"std_lib_facilities.h"
#include"definisjonar.h"

using namespace std;


int main(){
    cout<<"velkommen til KalK™ \n";
    start:
    char op;
    char op2;
    float pi=3.14;
    float r, eining;
    int sida,sidb,sidc,hogd,fib(0),inn;
    vector<int>vekt;
    string sikk; // for aa sjekke om du har skreve in e eller ikkje
    string maaleeining;



    cin>>op;

    if (op == 'h'||op == 'k'||op == 'e'||op == 'f'||op == 'a'||op == 'v'||op == 'i'){ // sjekkar om op er gyldig og sendar til switchen

    switch (op){

    case ('h'):{
        hjelp();
        goto start;
    }

    case ('k'):{//konvertering av mål
        cin >>maaleeining >>eining;


            }
        
    case ('e'):{ // for aa avslutte
        cout<<"du har valgt aa avslutte skrivi in e om du vil avslutte og ANY for aa returnere til byrjan\n";
        string sikk;
        cin >>sikk;
        if(sikk=="e"){goto slutt;}
        else {goto start;}
        }

    case ('f'):{ //n'te gibonacci nummer
        if (fib==0){cout<<"skriv in ka slags fibonacci nummer du vil ha \n";}
        cin>>fib;
        cout<<fibbonacci(fib)   <<endl;
    goto start;
    }

    case ('a'):{ //arealrekning
    cout<<"du har valgt aa rekne ut areal, skriv in s for sirkel,f for firkant, k for kvadrat og t for trekant og b for aa gaa tilbake \n";
    areal:
    cin>>op2;
        if (op2=='f'){//arealet for ein firkant
            cout<<"skriv in arealet til begge sidene i cm\n";
            cin>>sida;
            cin>>sidb;
            cout<<"arealet til firkanten er "<<sida*sidb<<"cm2 \n";
            goto start;
            }

        else if(op2=='k'){//arealet til eit kvadrat
            cout<<"skriv in lengda til ein av sidene i cm\n";
            cin>>sida;
            cout<<"arealet til kvadratet er "<< kvad(sida) <<"cm2\n";
            goto start;
            }

        else if(op2=='s'){//reknar ut arealet til ein sirkel
            cout<<"skriv in radiusen til sirkelen\n";
            cin>>r;
            cout<<"arealet til sirkelen er "<<sirka(r)<<"cm2\n";
            goto start;
            }

        else if(op2=='b')
            goto start;
        else
            goto areal;

        }

    case ('v'):{ //for aa rekne ut volum
        cout<<"du har valgt aa rekne ut volum valga dine er \n";
        vol:
        cin>>op2;
        switch(op2){

            case 'e':{ // for aa avslutte
                cout<<"du har valgt aa avslutte skrivi in e om du vil avslutte og ANY for aa returnere til byrjan\n";
                cin >>sikk;
                if  (sikk=="e") {goto slutt;}
                else            {goto vol;}
            }

            case 'h':{//skrive ut hjelpemenyen og returnerar til volumseleksjonen
                vHjelp();
                goto vol;
            }

            case 'b':{// tilbake til start
                goto start;
            }

            case 's':{// volumet av ein sylinder
                cout<<"du har valgt aa rekne ut volumet paa ein sylinder skriv in radiusen og hoegda \n";
                cin>>r;
                cin>>hogd;
                cout<<"volumet av sylinderen er "<<sirka(r)*hogd<<"cm3\n";
                goto vol;
            }

            case 'p':{//pyramidevolum
                cout<<"du har valgt aa rekne ut volumet til ei pyramide, skriv in lengda paa sidene paa grunnflata og hoegda\n";
                cin>>sida;
                cin>>hogd;
                cout<<"Volumet til pyramida er "<<(sida*sida*hogd)/3<<"cm3\n";
            goto vol;
            }

            case 'k':{//volumet til ei kule
                cout<<"du har valgt aa rekn ut volumet til ei kule skriv in radien \n";
                cin>>r;
                cout<<"volumet til kula er "<<pi*r*r*r*(4.0/3.0)<<"cm3 \n";
            goto vol;
            }


            case 'f':{//firkant med 3 ulike side
               cout<<"du har valgt aa rekne ut volumet til ein firkant med 3 ulike side, skriv dei in\n";
                cin>>sida;
                cin>>sidb;
                cin>>sidc;
                cout<<"firkanten er "<<sida*sidb*sidc<<"cm2 \n";
            goto vol;
            }

            case 't':{//terningvolum
                cout<<"skriv in sida\n";
                cin>>sida;
                cout<<"terningen er "<<sida*sida*sida<<"cm3 \n";
            goto vol;
            }

            default:{
                cout<<"ikkje gyldig proev igjen\n";
                goto vol;
                }



        }


    }

    case ('i'):{ //gjer informasjon om to tal
        cout<<"du har valgt aa samanlikne to integrerar skriv dei in"<<'\n';
            do  {
                cin>>inn;
                vekt.push_back(inn);
            } while (inn != '|');
    }

    }

    }
    else { // skal returnere om char 'op' ikkje er gyldig.
        cout<<"kommandoen '"<<op <<"' er ikkje gjenkjent \n"; goto start;
    }


    slutt:
    return 0;

}
