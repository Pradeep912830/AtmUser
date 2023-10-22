#include<iostream>
using namespace std;
void menu();
void withdraw();
void balancecheak();
void receive();
int ch;
float totalamount=5000;
	float amount;

int main()
{  
 
   do{
   
	menu();
		cout<<"choose your option"<<endl;
	cin>>ch;
	switch(ch)
      { 
	  		   
	case 1:
		cout<<"\nwithdraw money"<<endl;
			withdraw();
		break;
	case 2:
	    cout<<"cheak balance"<<endl;
	        balancecheak();
		break;
	case 3:
	    cout<<"received money"<<endl;
	          receive();
		break;
    case 4:
    	cout<<"exit";
 			break;
    default:
    	cout<<"try again"<<endl;
    	cout<<"choose correct option"<<endl;
    
   } 
}while(ch!=4); 

	return 0;
}
void menu()
{
	cout<<"\n1. withdraw money....:"<<endl;
	cout<<"\n2. cheak balance....:"<<endl;
	cout<<"\n3. received money....:"<<endl;
	cout<<"\n4. exit"<<endl;
}
void withdraw()
{	
	cout<<"Enter amount";
	cin>>amount;
	if(amount<=totalamount)
	{
	totalamount=totalamount-amount;
	cout<<"withdraw successful"<<endl;
	cout<<"total amount = "<<totalamount;		
	}
    else
    {
    	cout<<"this amount is not availble in your account"<<endl;
    	cout<<"your totalamount = "<<totalamount;
	}	
}
void balancecheak()
{
	cout<<"total amount = "<<totalamount<<endl;
}
void receive()
{
	cout<<"enter amount";
	cin>>amount;
	totalamount = totalamount+amount;
	cout<<"receive successful"<<endl;
	
	cout<<"total amount = "<<totalamount<<endl;
}
