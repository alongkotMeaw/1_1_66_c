import java.util.Scanner;

class lap_4 {
    public static void main(String args[]) {
        // scaner
        Scanner myObj = new Scanner(System.in);
        // input
        System.out.print("Enter x: ");
        int x = myObj.nextInt();
        System.out.print("Enter y: ");
        int y = myObj.nextInt();
        // if
        if (x == 0 && y == 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = origin");
        } else if (x == 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = y-intercept");
        } else if (y == 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = x-intercept");
        } else if (x < 0 && y < 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = Q3");
        } else if (x > 0 && y < 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = Q4");
        } else if (x < 0 && y > 0) {
            System.out.println("coordinates(" + x + ',' + y + ") = Q2");
        } else {
            System.out.println("coordinates(" + x + ',' + y + ") = Q1");
        }

    }
}