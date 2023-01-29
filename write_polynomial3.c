#include <stdio.h>
#include <stdlib.h>

void write_polynomial3(double a, double b, double c, double d) {
    if (a != 0) {
            if(a == -1.0){
                printf("-x^3");
            }
            else if(a == 1.0){
                printf("x^3");
            }
            else if(a == (int)a){
                printf("%dx^3",(int)a);
            }
            else{
                printf("%.1fx^3", a);}
        if (b > 0) {
            printf("+");
        }
    }
    else{
       if (b > 0) {
            printf("+");
        }

    }

    if (b != 0) {
        if(b == -1.0){
                printf("-x^2");
            }
            else if(b == 1.0){
                printf("x^2");
            }
            else if(b == (int)b){
                printf("%dx^2",(int)b);}
            else{
                printf("%.1fx^2", b);}
        if (c > 0) {
            printf("+");
        }
    }
    else{
       if (c > 0) {
            printf("+");
        }

    }

    if (c != 0) {
        if(c == -1.0){
                printf("-x");
            }
            else if(c == 1.0){
                printf("x");
            }
            else if(c == (int)c){
                printf("%dx",(int)c);}
            else{
                printf("%.1fx", c);}
        if (d > 0) {
            printf("+");
        }
    }
    else{
       if (d > 0) {
            printf("+");
        }

    }
    if (d != 0){
        if(d ==(int)d){
            printf("%d",(int)d);
        }
        else{
	    printf("%.1f",d);}
	}
    printf("\n");
}
void write_polynomial4(double a, double b, double c, double d,double e) {
     if (a != 0) {
            if(a == -1.0){
                printf("-x^4");
            }
            else if(a == 1.0){
                printf("x^4");
            }
            else if(a == (int)a){
                printf("%dx^4",(int)a);
            }
            else{
                printf("%.1fx^4", a);}
        if (b > 0) {
            printf("+");
        }
    }
    else{
       if (b > 0) {
            printf("+");
        }

    }

	
    if (b != 0) {
            if(b == -1.0){
                printf("-x^3");
            }
            else if(b == 1.0){
                printf("x^3");
            }
            else if(b == (int)b){
                printf("%dx^3",(int)b);
            }
            else{
                printf("%.1fx^3", b);}
        if (c > 0) {
            printf("+");
        }
    }
    else{
       if (c > 0) {
            printf("+");
        }

    }

    if (c != 0) {
        if(c == -1.0){
                printf("-x^2");
            }
            else if(c == 1.0){
                printf("x^2");
            }
            else if(c == (int)c){
                printf("%dx^2",(int)c);}
            else{
                printf("%.1fx^2", c);}
        if (d > 0) {
            printf("+");
        }
    }
    else{
       if (d > 0) {
            printf("+");
        }

    }

    if (d != 0) {
            if(d == -1.0){
                printf("-x");
            }
            else if(d == 1.0){
                printf("x");
            }
            else if(d == (int)d){
                printf("%dx",(int)d);}
            else{
                printf("%.1fx", d);}
        if (e > 0) {
            printf("+");
        }
    }
    else{
       if (e > 0) {
            printf("+");
        }

    }
    if (e != 0){
        if(e ==(int)e){
            printf("%d",(int)e);
        }
        else{
	    printf("%.1f",e);}
	}
    printf("\n");
}
