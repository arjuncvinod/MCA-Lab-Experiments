import java.util.*;
interface Resizable {
    void resize(int percentage);
}

class Image implements Resizable {
    private int width;
    private int height;

    public Image(int width, int height) {
        this.width = width;
        this.height = height;
    }

    @Override
    public void resize(int percentage) {
        double factor = percentage / 100.0;
        int newWidth = (int) (width * factor);
        int newHeight = (int) (height * factor);
        width = newWidth;
        height = newHeight;
        System.out.println("Image resized to " + width + "x" + height);
    }
}

class ResizeImage{
    public static void main(String[] args) {
        int w,h,p;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the image width: ");
        w=s.nextInt();
        System.out.print("Enter the image height: ");
        h=s.nextInt();  
        System.out.print("Enter the percentage to resize: ");
        p=s.nextInt();
        Image image = new Image(w,h);
        image.resize(p);
    }
}