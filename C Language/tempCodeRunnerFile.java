import java.util.function.Function; 
 
public class DirectionalDerivativeAndLineIntegral { 
 
    // Define the function 
    static double function(double x, double y) { 
        return -y / (x * x + y * y) + x / (x * x + y * y); 
    }
 
    // Calculate the directional derivative of the function at a point in the direction of a vector 
    static double directionalDerivative(double x, double y, double dx, double dy) { 
        double epsilon = 1e-6; // Small value for approximation 
        double functionAtPoint = function(x, y); 
        double functionAtPointPlusEps = function(x + epsilon * dx, y + epsilon * dy); 
        return (functionAtPointPlusEps - functionAtPoint) / epsilon; 
    } 
 
    // Define the line integral along a path specified by a function and bounds 
    static double lineIntegral(Function<Double, Double> function, double startX, double startY, double endX, double endY) { 
        double step = 0.01; // Step size for numerical integration 
        double integral = 0.0; 
        double currentX = startX; 
        double currentY = startY; 
        while (currentX < endX && currentY < endY) { 
            double value = function.apply(currentX); 
            integral += value * step; 
            currentX += step; 
            currentY += function.apply(currentX) * step; 
        } 
        return integral; 
    } 
 
    public static void main(String[] args) {  
        // Define the point and direction for the directional derivative 
        double x = 0; 
        double y = 0; 
        double dx = 2; 
        double dy = 2; 
 
        // Calculate the directional derivative 
        double directionalDerivativeResult = directionalDerivative(x, y, dx, dy); 
        System.out.println("Directional Derivative at (" + x + ", " + y + ") in direction (" + dx + ", " + dy + "): " + directionalDerivativeResult); 
 
        // Define the function for the line integral 
        Function<Double, Double> lineFunction = (t) -> Math.sqrt(1 - t * t); 
 
        // Calculate the line integral along the path 
        double lineIntegralResult = lineIntegral(lineFunction, 0, 0, 2, 2); 
        System.out.println("Line Integral along Path: " + lineIntegralResult); 
    } 
}