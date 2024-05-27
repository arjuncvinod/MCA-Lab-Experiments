import java.util.*;

class StringArray{

String strs[];
int countStr;

StringArray(String str[],int n){
   strs =new String[n];
   for (int i = 0; i < n; i++) {
            strs[i] = str[i];
        }
   countStr=strs.length;
}

int search(String s){
for(int i=0;i<countStr;i++){
    if(strs[i].equals(s))
      return i;
}
return -1;

}

void sort() {
int n=countStr;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (strs[j].compareTo(strs[j + 1]) > 0) {
                    String temp = strs[j];
                    strs[j] = strs[j + 1];
                    strs[j + 1] = temp;
                }
            }
        }
System.out.println("Sorted Array is : ");
for(int j=0;j<n;j++){
System.out.println(strs[j]);
}
}
}
class StringArrayOperations{
public static void main(String a[]){
int n,res;
String key;
String s1[];
Scanner S= new Scanner(System.in);
System.out.println("Enter the numbers of strings: ");
n=S.nextInt();
s1=new String[n];

for(int i=0;i<n;i++){
System.out.println("Enter String "+(i+1));
s1[i]=S.next();
}

StringArray SA= new StringArray(s1,n);
System.out.println("Enter the Search Key: ");
key=S.next();
res=SA.search(key);

if(res>-1)
System.out.println("Element found at position "+(res+1));
else
System.out.println("Element not found");

SA.sort();

}
}




