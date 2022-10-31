//just for fun

// Rules:
// 1) Go according to what the program says.


#include <iostream>
using namespace std;


int calculateDiscount(int val,int damn){  
    return (val*damn)/100;
}
int main()  
{ char choice, check, a;
  int g=0;
    cout<<("IT'S YOUR CHOICE!!\n\nIn this event, can you pls make the amount of atleast one item from the below item lists for us? You will get a nice gift while completing the event.\n\nItem list:\n1)Hershey's milk chocolate\n2)Lay's (classic)\n3)Persil laundry detergent");          
    displaythatagain:
    cout<<("\n\nNow if your ready.\n1) Pls enter H for Hershey's milk chocolate\n2) Pls enter L for Lay's (classic)\n3) Pls enter P Persil laundry detergent\n:) = ");
    cin>>choice;
    choice = toupper(choice); 
    
    switch (choice){
      case 'H':
        cout<<("Selected Hershey's milk chocolate");
        break;
      case 'L':
        cout<<("Selected Lay's (classic)");
        break;
      case 'P':
        cout<<("Selected Persil laundry detergent");
        break;
      default:
        cout<<("Invalid letter \n :(");
        goto displaythatagain;
    }

    tryagain:
    cout<<("\n\n(we count the discount as well and then we will give the net amount to that item)\nPls type E for enter to continue ");
    cin>>check;
     if (toupper(check)!='E'){
        cout<<"Invalid letter :(.\n";
        goto tryagain;
     }    
    
    cout<<("\nPls enter your amount for the selected item = $");
    cin>>g;
    
    if(g>10000){
        cout<<"\n10\% and your net amount is: $"+ to_string(g - calculateDiscount(g,10));
    }
    else{
        cout<<"\n5\% and your net amount is: $"+ to_string(g  - calculateDiscount(g,5));
    }
    cout<<"\n\nCongratulations you have completed our event!\n";
    gift:
    cout<<"\nPls type G for your gift!\n";
    cin>>a;
    if (toupper(a)!='G'){
        cout<<"Invalid letter :(.\n";
        goto gift;} //gaurd clause method
    
    cout<<"\nYou have won 2 tickets of BTS concert in california!\n\nTHANK YOU SO MUCH FOR USING! ^^\n\n";
    quit:
    cout<<"Pls type Q to quit the platform.\n";
    cin>>a;
    if (toupper(a)!='Q'){
        cout<<"Invalid letter :(.\n";
        goto quit;} //gaurd clause method
    return 0;
}
    
    
    
    
    
    
    
    





  








   






    
    
    
    
    
    
    
    





  








   





