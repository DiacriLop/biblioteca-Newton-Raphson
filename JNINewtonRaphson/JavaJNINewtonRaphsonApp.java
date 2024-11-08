package JNINewtonRaphson;

import libjniNewtonRaphson.JavaNewtonRaphson;

public class JavaJNINewtonRaphsonApp {
    JavaNewtonRaphson newtonRaphson;

    static {
        System.loadLibrary("jniNewtonRaphson");
    }

    public JavaJNINewtonRaphsonApp() {
        newtonRaphson = new JavaNewtonRaphson();
    }

    public void ejecutarNewtonRaphson(int opcion, double x0, int maxIter, double tol) {
        newtonRaphson.ejecutarNewtonRaphson(opcion,x0, maxIter,tol);
    }

    public static void main(String[] args) {

        JavaJNINewtonRaphsonApp app = new JavaJNINewtonRaphsonApp();

        int opcion = 1;
        double x0 = 1.5;
        int maxIter = 50;
       double tol = 1e-6;

        System.out.println("Ejecutando");
        app.ejecutarNewtonRaphson(opcion, x0, maxIter, tol);
    }
}

