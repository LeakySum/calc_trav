double sum (float a, float b){
    return a+b;
}

double sub (float a, float b){
    return a-b;
}

double div (float a, float b){
    if (b==0) return 0; 
    else
        return (float)a/b;
}

double mult (float a, float b){
    return a*b;
}

double sq (float a){
    double x=1; double y;
    int i=0;
    while(1) {
        y=x;
        x=1./2*(x+a/x);
        if (x>=y) { i++; if (i>1) { break;}};
    }

    return x;
}
double pow (float a, float b){
    int x=a;
    if (b==0) a=0; else{
        for(int i=1; i<b; i++) a=a*x;
    }
    return (double) a;
}
