#include <jni.h>
#include <stdio.h>
#include <math.h>
#include "libjniNewtonRaphson_JavaNewtonRaphson.h" // Archivo generado por javah

double f1(double x) {
    return pow(x, 3) - x - 1;
}

double f1_prime(double x) {
    return 3 * pow(x, 2) - 1;
}

double f2(double x) {
    return sin(x) - pow(x, 2);
}

double f2_prime(double x) {
    return cos(x) - 2 * x;
}

double f3(double x) {
    return log(x) - 1;
}

double f3_prime(double x) {
    return 1 / x;
}

JNIEXPORT void JNICALL Java_libjniNewtonRaphson_JavaNewtonRaphson_ejecutarNewtonRaphson
(JNIEnv *env, jobject obj, jint opcion, jdouble x0, jint maxIter, jdouble tol) {
    double (*f)(double);
    double (*f_prime)(double); 

        switch (opcion) {
        case 1:
            f = f1;
            f_prime = f1_prime;
            break;
        case 2:
            f = f2;
            f_prime = f2_prime;
            break;
        case 3:
            if (x0 <= 0) {
                printf("Error: el valor inicial para ln(x) debe ser mayor que 0.\n");
                return;
            }
            f = f3;
            f_prime = f3_prime;
            break;
        default:
            printf("Opción no válida.\n");
            return;
    }

    // Método de Newton-Raphson
    double x = x0;
    int iter = 0;

    while (iter < maxIter) {
        double fx = f(x);
        double fpx = f_prime(x);

        
        if (fabs(fpx) < 1e-6) {
            printf("La derivada es cero. No se puede continuar.\n");
            return;
        }

        
        double x_new = x - fx / fpx;

        
        printf("Iteración %d: x = %.6f, f(x) = %.6f\n", iter, x, fx);

        
        if (fabs(x_new - x) < tol) {
            printf("Convergencia alcanzada en %d iteraciones.\n", iter);
            printf("La raíz aproximada es: %.6f\n", x_new);
            return;
        }

        
        x = x_new;
        iter++;
    }

    printf("Se alcanzó el número máximo de iteraciones sin convergencia.\n");
}
