#include <iostream>
#include <iomanip>
using namespace std;
/*
GAMEJAM - CSC 134
rossatoe
10/30/23
*/
static int HP;
static int gun;
int main();
void Garden();
void secFloor();
void diningRoom();
void Lobby(){
  int choice;
  int clear = 0;
  cout<<"The doors opens while you walk to it and you find a large lobby,the floor covered with a red carpet and a gold color in the collumns and walls."<<endl;
  cout<<"To your right, there's a living room with a large couch, to your right you have a dining room with a table for 20 persons and infront of you there's some stairs to a second floor full of rooms."<<endl;
  while (HP != 0){
    cout<<"What's your next move?"<<endl<<endl;
    cout<<"1)Rest on the couch\t  "<<"\t2)Go to the second floor"<<endl;
    cout<<"3)Check the dining room\t"<<"\t4)Leave the Lobby"<<endl;
    cin>>choice;
    switch (choice){
      case 1:
        choice = 2;
        if (clear == 1){
          cout<<"You lay down on the coach and have the best nap of your life, but you have to continue your journey."<<endl;
        } else {
        cout<<"You lay down on the couch and close your eyes. Suddenly, you heard a weird noise and you wake up, there's a zombie horde walking all over the lobby."<<endl;
      cout<<"You tried to be quiet but they saw you."<<endl;
      while(choice >= 2 && choice <= 5){
        cout<<"What's your next move?"<<endl;
        cout<<"\n1)Accept your destiny\t"<<"\t2)Run to the second floor"<<endl;
        cout<<"3)Run to the Garden  \t"<<"\t4)Run to the dining room"<<endl;
        if (gun == 1){
          cout<<"5)Use your Ray Gun Mark II"<<endl;
        }
        cin>>choice;
        if (choice >= 2 && choice <= 4){
          if (clear == 0){
            cout<<"There's too many zombies, you can't pass."<<endl;
          }
        }
        else if (choice == 5){
          cout<<"You remember you had found a Ray Gun Mark II on a coffin, you take it out and start killing zombies like a maniac."<<endl;
          cout<<"Well done, there's no more zombies on the way."<<endl;
          clear = 1;
          break;
        }
        else if (choice == 1){
          cout<<"You give up to the zombies, I can't tell what happens next."<<endl;
          HP = 0;
        }
      }
        }
      break;
      case 2:
        secFloor();
      break;
      case 3:
        cout<<"Coming soon."<<endl;
      break;
      case 4:
        Garden();
      break;
      default:
      cout<<"Invalid option."<<endl;
      break;
    }
  }
}
void Garden(){
  int choice = 0;
  cout<<"The garden is full of graves and an old dead tree."<<endl;
  cout<<"You can see grave's holes still opened, leaving the coffin in sight."<<endl;
  while (HP != 0){
    cout<<"What's your next move?"<<endl<<endl;
    cout<<"1)Read the graves\t  "<<"\t2)Open the coffin"<<endl;
    cout<<"3)Enter the mansion\t"<<"\t4)Leave the mansion"<<endl;
    cin>>choice;
    switch (choice){
      case 1:
      cout<<"You lay on the ground approaching to the stone and read what is says...\nIt has your name and today's date."<<endl;
      cout<<"The last thing you heard was a muttered word, as he knelt above you with a rock in his fist."<<endl;
      HP = 0;
      break;
      case 2:
      cout<<"You approach to the coffin and open it, you found a Ray Gun Mark II."<<endl;
        gun = 1;
      break;
      case 3:
        cout<<"You decide to enter in the mansion, why not?"<<endl;
        Lobby();
      break;
      case 4:
        cout<<"The fog is too dense, You can't leave the mansion."<<endl;
      break;
    }
  }
  cout<<"\n\tYOU DIED"<<endl;
  cout<<"\t▀▀▀▀▀▀▀▀"<<endl;
  string ans;
  cout<<"Retry? y/n"<<endl;
  cin>>ans;
  if (ans == "y"){
    HP = 1;
    gun = 0;
    Garden();
  } else if (ans == "n"){
    cout<<"\nSee you in your nightmares.."<<endl;
    cout<<"\t"<<endl;
  }
}
void secFloor(){
  int choice = 1;
  cout<<"You go to the second floor and found a hallway full of doors, sadly you can only interact with 2 of them until the next game update."<<endl;
  while(HP != 0){
    cout<<"What's your next move?"<<endl;
    cout<<"1)Enter to Room 1     \t"<<"\t2)Enter to Room 2"<<endl;
    cout<<"\n3)Go back to the Looby\t"<<"\t4) More Rooms coming soon"<<endl;
    cin>>choice;
    switch (choice){
      case 1:
        cout<<"You try to open the door but it's lock, you will need a key that I didn't create yet."<<endl;
      break;
      case 2:
        cout<<"You open the door and found a wither that insta-kill you, I'm so sorry."<<endl;
        HP = 0;
      break;
      case 3:
        Lobby();
      break;
      case 4:
        cout<<"I said coming soon, but not this soon."<<endl;
      break;

    }
  }
}
void diningRoom(){
  cout<<"You walk to the dining room, the large dining table is full of food just made, you can see the food steam that cover the place with a sweet and almost palatable smell."<<endl;
  cout<<"At the end fo the room you see a door."<<endl;
  while (HP != 0){
    cout<<"What's your next move?"<<endl;
    cout<<"1)Check the table\t  "<<"\t2)Open "<<endl;
    cout<<"3)Enter the mansion\t"<<"\t4)Coming soon."<<endl;
  }
}
int main() {
  //std::cout << "Hello World!\n";
  int run;
  gun = 0;
  HP = 1;
  cout<<"\n\t▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl;
  cout<<"\t▌Spooky Mansion▐"<<endl;
  cout<<"\t▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n"<<endl;
  cout<<"\t» 1 - Start"<<endl;
  cout<<"\t» 2 - Quit"<<endl;
  cout<<"\nYour option: ";
  cin>>run;
  while (run < 1 || run > 2){
    cout<<"Please enter a valid option: ";
    cin>>run;
  }
  while (run == 1 && HP == 1){
    cout<<"You spawn in front of the mansion's door, you don't know how did you get there."<<endl;
    cout<<"It's a cold night full of dense fog."<<endl;
    Garden();
  }
  if (run == 2){
    cout<<"\nSee you in your nightmares.."<<endl;
    cout<<"\t"<<endl;
  }
  return 0;
}