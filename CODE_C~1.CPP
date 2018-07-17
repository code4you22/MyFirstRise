#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
void main()
{
clrscr();
int cho;
cout<<"program contain many program"<<cout<<"\n";
cout<<"enter the nu of program you want to execute\n";
cout<<"1.2.3.4.5.6.7.8.\n";
cin>>cho;
  //switch case to excute the program according user choice
switch(cho)
  {
  case 1:
  {
	int sales,i,comm;
	cout<<"enter the amount of sales";
	cin>>sales;
	cout<<"sales amount is:-"<<sales;
	i=sales;
	    if(i>=0 && i<=10000)
	    {
		cout<<"commission is 10%";
	    }
	else if(sales>=10000 && sales<=15000)
	   {
		cout<<"commission is 15%";
	   }
	else if(sales>=15000)
	   {
		cout<<"commission is 20%";
	   }
  break;
  }
  case 2:
  {
    int choice;
    double number=678.123454321;
	  cout<<"Enter the choice\n";
	  cout<<"1.2.3.4.5.\n";
	  cin>>choice;
	switch(choice)
	{
	    case 1:
	    {
	    cout<<"case 1 value is:-"<<cout<<setprecision(2)<<number;
	    break;
	    }
	  case 2:
	  {
	    cout<<"case 2 value is:-"<<cout<<setprecision(4)<<number;
	    break;
	  }
	  case 3:
	  {
	  cout<<"case 3 value is:-"<<cout<<setprecision(6)<<number;
	  break;
	  }
	  case 4:
	  {
	  cout<<"case 4 value is:-"<<cout<<setprecision(8)<<number;
	  break;
	  }
	  case 5:
	  {
	  cout<<"case 5 value is:-"<<cout<<setprecision(8)<<number;
	  break;
	  }
   }
   break;
   }
  case 3:
  {
  int num;
  cout<<"Enter the number";
  cin>>num;
    if(num>=0 && num<=100)
    {
      cout<<"number is valid";
    }
    else{
	cout<<"number is in-valid";
    }
  break;
  }
  case 4:
  {
  int ch;
  cout<<"enter the choice t run the code";
  cin>>ch;
  switch(ch)
  {
  case 1:
   {
    int i;
    int val=0;
    for(i=2;i<=100;i++)
    {
    int div=i%2;
    if(div==0)
     {
     val=val+i;
     }
     cout<<"sum is:-"<<cout<<val;
    }
    cout<<"last sum is:-"<<cout<<val;
    break;
    }
     case 2:
     {
      int sqr=0;
    // all number between 1 to 100 square which starts with floating  point
     for(int i=0;i<=100;i++)
       {
       sqr=pow(i,2);
       }
       cout<<sqr;
      break;
    }
    case 3:
    {
     int sum=0,a,b;
     cout<<"Enter the a and b values";
     cin>>a;
     cin>>b;
     for(int i=a;i<=b;i++)
       {
	int div=i%2;
	if(div!=0){
	sum=sum+i;
       }
       cout<<"odd nu calculations are:-"<<cout<<sum;
       break;
       }
  break;
  }
  }
  case 5:
  {
  // not done
  cout<<"for loop concept of controlling";
  break;
  }
  case 6:
  {
    int s1=0;
    int i1 = 1;
	 while(i1<10)
	 {
	 s1=s1+i1;
	 i1++;
	 }
	 cout<<"values"<<cout<<s1;
  break;
  }
  case 7:
  {
   int n;
   cout<<"enter n";
   cin>>n;
   cout<<"n is"<<cout<<n;
   double x = 0;
   double s;
   s = 1.0 / (1 + n * n);
   while ( s > 0.01);
   {
	s = 1.0 / (1 + n * n);
	n ++;
	x = x + s;
   }
  break;
  }
  case 8:
  {
  int co;
  cout<<"Enter the choice";
  cin>>co;
  switch(co)
  {
  case 1:
  {
  int a1,a2,l1,l2,area1,area2;
   cout<<"Enter the length and width of two rectangle";
   cin>>a1;
   cin>>a2;
   cin>>l1;
   cin>>l2;
   area1=a1*l1;
   area2=a2*l2;
   if(area1<0)
   {
   cout<<"Enter correct or positive values";
   }
   if(area2<0)
   {
   cout<<"Enter correct or positive values";
   }
   if(area1==area2)
   {
   cout<<"Both rectangle are same";
   }
   if(area1>area2)
   {
   cout<<"first rectangle is bigger than second";
   }
   if(area1<area2)
   {
   cout<<"second rectangle is bigger than second";
   }
  break;
  }
case 2:
{
// eight code 2
   int sum=0,n;
   cout<<"Enter the end point";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     sum=sum+i;
   }
  cout<<"sum of values are"<<cout<<sum;
  break;
}
}
}
}
}
getch();
}