import java.util.*;
class Shape{
void Area(float r){
System.out.println("Area of Circle: "+3.14*r*r);
}

void Area(int l,int b){
System.out.println("Area of Rectangle: "+l*b);
}

void Area(float b,float h){
System.out.println("Area of Triagle: "+.5*b*h);
}
}

class AreaCalculator{
public static void main(String ar[]){
int c,p=1;
Scanner s=new Scanner(System.in);
Shape sh=new Shape();
while (p!=0){
System.out.print("\n1.Circle\n2.Rectangle\n3.Triangle\n4.Exit\nEnter your Choice: ");
c=s.nextInt();
switch(c){
case 1: System.out.print("\nEnter the radius: ");
        float r=s.nextFloat();
        sh.Area(r);
        break;
case 2: System.out.print("\nEnter the Length: ");
        int l=s.nextInt();
        System.out.print("\nEnter the Breadth: ");
        int b= s.nextInt();
        sh.Area(l,b);
        break;
case 3: System.out.print("\nEnter the length: ");
        float len=s.nextFloat();
        System.out.print("\nEnter the height: ");
        float h=s.nextFloat();
        sh.Area(len,h);
        break;
case 4: p=0;
        break;

default : System.out.println("\nInvalid Input");
        break;

}

}
}
}
