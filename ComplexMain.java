import java.util.Scanner;
class  complex
{
    double real,img;
    complex(double r,double i)
    {
        real=r;
        img=i;
    }
    complex add(complex c2)
    {
        double r =real +c2.real; 
        double i=img+c2.img;
        complex Res=new complex(r,i);
        return(Res);
    }
    complex sub(complex c2)
    {
        double r=real-c2.real;
        double i=img -c2.img;
        complex Res=new complex(r,i);
        return (Res);
    }
    complex multi(complex c2)
    {
        double r=real*c2.real - img*c2.img;
        double i=real*c2.img + img*c2.real;
        complex Res=new complex(r,i);
        return (Res);
    }
    void display()
    {
        System.out.println("The Result is "+real+"+"+img+"i");
    }
    public class ComplexMain
    {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the first complex number real and then img");
        double r1=sc.nextDouble();
        double i1=sc.nextDouble();
        complex c1=new complex(r1,i1);
        System.out.println("First complex no. is"+r1+"+"+i1+"i");
        System.out.println("Enter the second complex number real and then img");
        double r2=sc.nextDouble();
        double i2=sc.nextDouble();
        complex c2=new complex(r2,i2);
        System.out.println("Second complex no. is"+r2+"+"+i2+"i");
        System.out.println("Choose 1 for addition and 2 for sub and 3 for multi");
        int choose=sc.nextInt();
        switch (choose)
        {
            case 1:
                complex   resadd=c1.add(c2);
                resadd.display();
                break;
            case 2:
                complex ressub= c1.sub(c2);
                ressub.display();
                break;
            case 3:
                complex resmulti= c1.multi(c2);
                resmulti.display();
                break;
        }
       
    }
    
 }
}