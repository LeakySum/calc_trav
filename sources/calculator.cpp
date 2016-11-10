double sum (double a, double b){
    return a+b;
}

double sub (double a, double b){
    return a-b;
}

double div (double a, double b){
    if (b==0) {
        return(0);} else
        return a/b;
}

double mult (double a, double b){
    return a*b;
}

double sq (double a){
    double x=1; double y;
    int i=0;
    while(1) {
        y=x;
        x=1./2*(x+a/x);
        if (x>=y) { i++; if (i>1) { break;}};
    }

    return(x);
}
double pow (double a, double b){
    int x=a;
    if (b==0) a=0; else{
        for(int i=1; i<b; i++){a=a*x;};}
    return a;
}
