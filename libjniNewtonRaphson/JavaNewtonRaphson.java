package libjniNewtonRaphson;

public class JavaNewtonRaphson {
    // Método nativo para ejecutar el método de Newton-Raphson en una función seleccionada
    public native void ejecutarNewtonRaphson(int opcion, double x0, int maxIter, double tol);

    public static void main(String[] args) {
        JavaNewtonRaphson newtonRaphson = new JavaNewtonRaphson();
        int opcion = 1;
        double x0 = 1.0;
        int maxIter = 100;
        double tol = 1e-6;
        newtonRaphson.ejecutarNewtonRaphson(opcion, x0, maxIter, tol);
    }
}
