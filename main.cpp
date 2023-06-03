#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;

    int Qrooms=0, Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;


    int Srooms =0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;

    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,total_chicken=0;

    cout<< "\n\t quantity of item we have";
    cout<< "\n Rooms available:";
    cin >> Qrooms;
    cout<< "\n Quintity of pasta:";
    cin >> Qpasta;
    cout<< "\n Quintity of burger:";
    cin >> Qburger;
    cout<< "\n Quintity of noodles:";
    cin >> Qnoodles;
    cout<< "\n Quintity of shake:";
    cin >> Qshake;
    cout<< "\n Quintity of chiken:";
    cin >> Qchicken;


     m:

    cout<<"\n\t\t\t Please select from the menu options ";
   cout<< "\n\n1)Rooms";
    cout<<"\n2) Pasta";
     cout<<"\n3) Burger";
     cout<<"\n4) Noodle";
     cout<<"\n5)  Shake";
    cout<<"\n6) chicken";
    cout<<"\n6) Information regarding sale and collection ";
    cout<<"\n7) Exit";



    cout<<"\n\n Please enter the choice:";
    cin>> choice;

    switch(choice){



case 1:

    cout<<"\n\n Enter the Number of Rooms you want: ";
    cin>>quant;


    if(Qrooms-Srooms >= quant){


        Srooms=Srooms+quant;

        Total_rooms=Total_rooms+(quant*1200);
        cout<<"\n\n\t\t"<< quant<< "rooms have been alloted to you:";
    }

    else{


        cout<<"\n\tOnly "<< Qrooms-Srooms<< " room remaining in hotel";

        break;

    }





    case 2:

    cout<<"\n\n Enter the Number of Pasta you want: ";
    cin>>quant;


    if(Qpasta-Spasta >= quant){


        Spasta=Spasta+quant;

        Total_pasta=Total_pasta+(quant*120);
        cout<<"\n\n\t\t"<< quant<< "pasta selected:";
    }

    else{


        cout<<"\n\tOnly "<< Qpasta-Spasta<< " remaining pasta";

        break;

    }

    case 3:

    cout<<"\n\n Enter the Number of burger you want: ";
    cin>>quant;


    if(Qburger-Sburger >= quant){


        Sburger=Sburger+quant;

        Total_burger=Total_burger+(quant*120);
        cout<<"\n\n\t\t"<< quant<< "burger selected:";
    }

    else{


        cout<<"\n\tOnly "<< Qpasta-Spasta<< " remaining burger";

        break;

    }




    case 4:

    cout<<"\n\n Enter the Number of noodle you want: ";
    cin>>quant;


    if(Qnoodles-Snoodles >= quant){


        Snoodles=Snoodles+quant;

        Total_noodles=Total_noodles+(quant*100);
        cout<<"\n\n\t\t"<< quant<< "noodles selected:";
    }

    else{


        cout<<"\n\tOnly "<< Qnoodles-Snoodles<< " remaining noodles";

        break;

    }



    case 5:

    cout<<"\n\n Enter the Number of Shake you want: ";
    cin>>quant;


    if(Qshake-Sshake >= quant){


        Sshake=Sshake+quant;

        Total_shake=Total_shake+(quant*150);
        cout<<"\n\n\t\t"<< quant<< "Shake selected:";
    }

    else{


        cout<<"\n\tOnly "<< Qshake-Sshake<< " remaining shake";

        break;

    }



    case 6:

    cout<<"\n\n Enter the Number of chicken  you want: ";
    cin>>quant;


    if(Qchicken-Schicken >= quant){


        Schicken=Schicken+quant;

        total_chicken=total_chicken+(quant*120);
        cout<<"\n\n\t\t"<< quant<< "chicken selected:";
    }

    else{


        cout<<"\n\tOnly "<< Qchicken-Schicken<< " remaining chicken";

        break;

    }




    case 7:

    cout<<"\n\n Details of sales and collection: ";
    cout<< "\n\n Number of rooms we had :"<<Qrooms;
    cout<<"\n\n number of rooms we have rent"<< Srooms;
    cout<<"\n\n remaining rooms"<< Qrooms-Srooms;
    cout<<"\n\n Total room collection"<<Total_rooms;





    cout<< "\n\n Number of pasta we had :"<<Qpasta;
    cout<<"\n\n number of pasta we have rent"<< Spasta;
    cout<<"\n\n remaining pasta"<< Qpasta-Spasta;
    cout<<"\n\n Total pasta collection"<<Total_pasta;




     cout<< "\n\n Number of burger we had :"<<Qburger;
    cout<<"\n\n number of burger we have rent"<< Sburger;
    cout<<"\n\n remaining burger"<< Qburger-Sburger;
    cout<<"\n\n Total burger collection"<<Total_burger;

     cout<< "\n\n Number of noodles we had :"<<Qnoodles;
    cout<<"\n\n number of noodle we have rent"<< Snoodles;
    cout<<"\n\n remaining noodle"<< Qnoodles-Snoodles;
    cout<<"\n\n Total noodle collection"<<Total_noodles;



     cout<< "\n\n Number of shake we had :"<<Qshake;
    cout<<"\n\n number of shake we have rent"<< Sshake;
    cout<<"\n\n remaining shake"<< Qshake-Sshake;
    cout<<"\n\n Total shake collection"<<Total_shake;

     cout<< "\n\n Number of chicken we had :"<<Qchicken;
    cout<<"\n\n number of chicken we have rent"<< Schicken;
    cout<<"\n\n remaining chicken"<< Qchicken-Schicken;
    cout<<"\n\n Total chicken collection"<<total_chicken;






    case 8:

        exit(0);
    default:

        cout<<"please slected the correct number:";



    }


    goto m;









    return 0;
}
