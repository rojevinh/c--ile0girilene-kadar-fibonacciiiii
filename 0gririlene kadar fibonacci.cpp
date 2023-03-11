#include <iostream.h>
#include <conio.h>
main()
{
	unsigned long int fib0=0, fib1=1,siradakifib;
	unsigned int kacinci;
	 while(kacinci!=0)
	 {
		 cout<<"kac kez tekrar edilmesini istiyorsunuz/n:"<<"adet :";
		 cin>>kacinci;
		 if(kacinci>1)
		 {
			 cout<<fib0<<endl<<fib1<<endl;
		 }
		 else
		 if(kacinci!=0)
		 cout<<fib0<<endl;
		 if(kacinci==0)
		 {
			 kacinci=1;
		 }
		 while(--kacinci>1)
		 {
			 siradakifib=fib0+fib1;
			 cout<<siradakifib<<endl;
			 fib0=fib1;
			 fib1=siradakifib;
		 }
		 fib0=0;
		 fib1=1;
	 }

	 getch();
}
