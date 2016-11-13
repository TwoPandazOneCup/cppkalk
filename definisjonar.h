int kvad (int a){
    return a*a;
}

int tredje(int a){
    return a*a*a;
}

double sirka(int a){
    return a*a*3.142;
}

int sum( int a, int b){
    return a+b;
}

int fibbonacci(int f){
    int a=0;
    int b=1;
    int c;
    for(int tell=1; tell < f; tell++){
        c=a+b;
        a=b;
        b=c;
        }
    return c;
}

void vHjelp(){
        cout<<
        "p\t for vulumet til ei pyramide\n"
        "s\t for volumet til ein sylinder\n"
        "k\t for vulumet til ei kule\n"
        "f\t for volumet til ein firkant med 3 ulike sider\n"
        "t\t for vulumet til ein firkant der alle sidene er like laange\n";
}

void hjelp(){
    cout<<" \
        h\t skrive dinna menyen\n \
        a\t reknar ut areal\n \
        v\t reknar ut volum \n \
        i\t samanliknar to tal\n \
        f\t for å få n'te fibonacci talet\n \
        \n";
}
