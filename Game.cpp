#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() 
{
    cout<<"\n\t\t\t^^______Welcome to game______^^";
    cout<<"\n\t<<----^^you will have to guss a  number  between 1 to 100^^---->>";
    cout<<"\n\t\t<<----Start playing game & best of luck---->>";
    srand(time(0));
    int randnumber=(rand()%100)+1;
    
    cout<<"\n\t<<**---You will have total 3 chances  to guess the correct number---**>>";
    int chanceLeft = 3;
    int playerinput;

    for (int i = 1; i <= 3; i++)
    {
        cout<<"\n enter the number";
        cin>>playerinput;
        
        if (playerinput==randnumber)
        {
            cout<<"\n---conga !! you have successfully gussed the right number---\n";
            cout<<"\n thanks for playing Game";
            break;
        }
        else{

            if (playerinput>randnumber)
            {
                cout<<"\n insert a smaller number . try agin"<<endl;
            }
            else
            {
                cout<<"\n'''[insert a larger number & try agin]'''"<<endl;
            }
            
        }
        chanceLeft--;
        cout<<"\n (---^^chances left to guess the randam number^^---:"<< chanceLeft <<" )"<<endl;

        if (chanceLeft==0)
        {
            cout<<"\n Sorry your chance has been finished to gueess the rondom number \n"<<endl;
            cout<<"\n  The rondom number was : "<<randnumber<<endl;
            
            cout<<"\n thanks for playing a Game have a good day";
        }
         
    }
    cout<<"\n";
    
    return 0;
}