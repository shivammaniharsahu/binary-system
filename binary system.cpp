#include<iostream>
using namespace std;
int binary();
int octal();
int hexadecimal();
int main()
{
	int o;
	cout<<"Enter the option in which you want change\n";
	cout<<"1 : For Binary\n";
	cout<<"2 : For Octal\n";
	cout<<"3 : For Hexadecimal\n";
	cin>>o;
	switch(o)
	{
		case 1:
				 binary();
				break;
		case 2:
			 octal();
			break;
		case 3:	
			hexadecimal();
			break;
		default:
			cout<<"Invalid Choice";
			
	}
}
int binary()
{
	
	int k,j=0,s[100],i=1,no,nm[100];
	double n,sb,dm;				
	cout<<"Enter Your Decimal Number Please =";
	cin>>n;
				no=n;
				sb=n-no;
				cout<<"Your Decimal No. in Binary Form is \n ";
				while(no!=0)
				{
					s[j]=no%2;
					no=no/2;
					j++;	
				}
				for(k=j-1;k>=0;k--)
				{
					cout<<s[k];
				}
				for(i=0;i<4;i++)
				{
					dm=sb*2;
					if(dm>0)
					{
						nm[i]=dm;
						sb=dm-nm[i];
					}
					else
					{
						nm[i]=0;
						sb=sb*2;
					}		
				}
				cout<<".";
				for(i=0;i<4;i++)
				{
					cout<<nm[i];
				}
}
int octal()
{
	
				int k,j=0,s[100],i=1,no,nm[100];
				double n,sb,dm;
								
				cout<<"Enter Your Decimal Number Please =";
				cin>>n;
				no=n;
				sb=n-no;	
				cout<<"Your Decimal No. in Octal Form is \n ";
				while(no!=0)
				{
					s[j]=no%8;
					no=no/8;
					j++;	
				}
				for(k=j-1;k>=0;k--)
				{
					cout<<s[k];
				}
				for(i=0;i<4;i++)
				{
					dm=sb*8;
					if(dm>0)
					{
						nm[i]=dm;
						sb=dm-nm[i];
					}
					else
					{
						nm[i]=0;
						sb=sb*8;
					}		
				}
				cout<<".";
				for(i=0;i<4;i++)
				{
					cout<<nm[i];
				}
}
int hexadecimal()
{
			
				int k,j=0,s[100],i=1,no,nm[100],r,in;
				double n,sb,dm;
											
				cout<<"Enter Your Decimal Number Please =";
				cin>>n;
				char hex[50],hex1[50];
				no=n;
				sb=n-no;
				cout<<"Your Decimal No. in Hexadecimal form is\n";
				while(no!=0)
				{
					r=no%16;
					if(r<10)
					{
						hex[i++]=r+48;
					}
					else 
					{
						hex[i++]=r+55;	
					}	
					no=no/16;
				}
				for(k=i;k>0;k--)
				{
					cout<<hex[k];
				}
				for(i=0;i<4;i++)
				{
					
					dm=sb*16;
					if(dm>0)
					{
						
							
						if(dm<10)
						{
							in=dm;
							hex1[j++]=in+48;
						}
						else 
						{
							in=dm;
							hex1[j++]=in+55;	
						}	
							
						sb=dm-in;
					}
					else
					{
						hex1[j++]=0;
						sb=sb*16;
					}		
				}
				cout<<".";
				for(j=0;j<4;j++)
				{
					cout<<hex1[j];
				}
}
				
