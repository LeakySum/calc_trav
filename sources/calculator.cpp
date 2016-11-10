double sum (double a, double b){
    return(a+b);}

double subtraction (double a, double b){
    return(a-b);
}

double division (double a, double b){
    if (b==0) {cout << "error\n";
        return(0);} else
        return(a/b);
}

double multyplication (double a, double b){
    return(a*b);
}

double square (double a){
    double x=1; double y;
    int i=0;
    while(1) {
        y=x;
        x=1./2*(x+a/x);
        if (x>=y) { i++; if (i>1) { break;}};
    }

    return(x);
}
double power (double a, double b){
    int x=a;
    if (b==0) a=0; else{
        for(int i=1; i<b; i++){a=a*x;};}
    return(a);
}
