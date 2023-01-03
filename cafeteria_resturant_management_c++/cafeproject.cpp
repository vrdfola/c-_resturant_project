

#include <iostream>
#include <cctype>
using namespace std;

/*
Design a system for a restaurant in which users can order multiple food items from the following menu:
1. Press something to buy pizza
2. Press something to buy rice
3. Press something to buy spaghetti
4. Press something to buy tea
5. Press something to buy roast
User enters their balance in her credit card.
User can buy multiple products if she has desired balance.
If user is a member of the restaurant then system should give 10% discount.
At the end add 16% GST on total bills and deduct money from credit card.
*/
int main()
{
 const float GST=0.16,discount=0.10;
 int Pizza= 1500,Rice= 350,Spaghetti=500,Tea=30,Roast=500;
 float accountBalance=0,totalBill=0,finalBill=0,currentBill=0;
 char menu,membership,answer;
 cout<<endl<<endl<<"************** Fola Cafeteria ***************"<<endl<<endl;
 cout<<"Enter Account Balance: ";
 cin>>accountBalance;
 cout<<endl<<"Do you have membership in our restaurant (y/n): ";
 cin>>membership;
 do
 {
  bool hasBalance=false;
  cout<<endl<<"=============Menu============="<<endl
   <<"1. Press '1' to Buy Pizza"<<endl
   <<"2. Press '2' to Buy Rice"<<endl
   <<"3. Press '3' to Buy Spaghetti"<<endl
   <<"4. Press '4' to Buy Tea"<<endl
   <<"5. Press '5' to Buy Roast"<<endl
   <<endl<<"Please select Items from the menu: ";
  cin>>menu;
  switch(menu)
  {
  case '1':
   if (accountBalance>=(Pizza+Pizza*GST))
   {
    totalBill=Pizza;
    hasBalance=true;
   }         //if (accountBalance>=(Pizza+Pizza*GST)){ case '1'
   break;
  case '2':
   if (accountBalance>=(Rice+Rice*GST))
   {
    totalBill=Rice;
    hasBalance=true;
   }         //if (accountBalance>=(Rice+Rice*GST)){ case '2
   break;
  case '3':
   if (accountBalance>=(Spaghetti+Spaghetti*GST))
   {
    totalBill=Spaghetti;
    hasBalance=true;
   }         //if (accountBalance>=(Spaghetti+Spaghetti*GST)){ case '3'
   break;
  case '4':
   if (accountBalance>=(Tea+Tea*GST))
   {
    totalBill=Tea;
    hasBalance=true;
   }         //if (accountBalance>=(Tea+Tea*GST)){ case '4'
   break;
  case '5':
   if (accountBalance>=(Roast+Roast*GST))
   {
    totalBill=Roast;
    hasBalance=true;
   }         //if (accountBalance>=(Roast+Roast*GST)){ case '5'
   break;
  default:
   cout<<endl<<"You entered a wrong number"<<endl;
  }            //switch(menu)
  if(hasBalance==true)
  {
   if (tolower(membership)=='y')
   {
    finalBill+=totalBill+(totalBill*GST)-(totalBill*discount);
    currentBill=totalBill+(totalBill*GST)-(totalBill*discount);
   }
   else
   {
    finalBill+=totalBill+(totalBill*GST);
    currentBill=totalBill+(totalBill*GST);
   }            //if (tolower(membership)=='y')
   accountBalance-=currentBill;
   cout<<endl<<"Final Bill = "<<finalBill<<endl;
   cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
  }                //if(hasBalance==true)
  else
  {
   cout<<endl<<"You don't have Sufficent Money"<<endl;
   hasBalance=false;
  }//end else
  cout<<endl<<"Do you want to continue (y/n): ";
  cin>>answer;
 }while (tolower(answer)=='y');
cout<<endl<<"Your Final Bill is = "<<finalBill<<endl;
cout<<endl<<"Remaining Balance = "<<accountBalance<<endl;
return 0;
}

