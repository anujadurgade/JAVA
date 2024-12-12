package exp1;

public class complex
	{
	int real,img;
	public complex()
	{
		real=img=0;
	}
	public complex(int real,int img)
	{
		this.real=real;
		this.img=img;
	}
	public void printcomplex()
	{
		System.out.println(real+"+"+img+"i");
	}
	public complex addcomplex(complex o2)
	{
		complex temp=new complex();
		temp.real=this.real+o2.real;
		temp.img=this.img+o2.img;
		return temp;
	}
	public complex subtractcomplex(complex o2)
	{
		complex temp=new complex();
		temp.real=this.real-o2.real;
		temp.img=this.img-o2.img;
		return temp;
	}
	public complex multiplycomplex(complex o2)
	{
		complex temp=new complex();
		temp.real=this.real*o2.real;
		temp.img=this.img*o2.img;
		return temp;
	}
	public complex divisioncomplex(complex o2)
	{
	complex temp=new complex();
	temp.real=this.real/o2.real;
	temp.img=this.img/o2.img;
	return temp;
	

	


		}
	

}

package exp1;

public class TestComplex
	{

	public static void main(String[] args)
		{
		complex o1,o2,o3;
		o3=new complex();
		o1=new complex(13,16);
		o2=new complex(4,7);
		System.out.println("o1 is");
		o1.printcomplex();
		System.out.println("o2 is");
		o2.printcomplex();
		o3=o1.addcomplex(o2);
		System.out.println("o3=o1+o2 is");
		o3.printcomplex();
		o3=o1.subtractcomplex(o2);
		o2.printcomplex();
		System.out.println("o3=o1-o2 is");
		o3.printcomplex();
		o3=o1.multiplycomplex(o2);
		System.out.println("o3=o1*o2 is");
		o3.printcomplex();
		o3=o1.divisioncomplex(o2);
		System.out.println("o3=o1/o2 is");
		o3.printcomplex();
		}	

	}


OUTPUT:
o1 is
13+16i
o2 is
4+7i
o3=o1+o2 is
17+23i
4+7i
o3=o1-o2 is
9+9i
o3=o1*o2 is
52+112i
o3=o1/o2 is
3+2i