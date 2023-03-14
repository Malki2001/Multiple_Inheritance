#include <iostream>
using namespace std;


class Sweets
{

   public:

     static int  SweetCounter;

  Sweets()
  {
    SweetCounter++;
  }

  ~Sweets()
  {
    SweetCounter--;
  }

};

class  Chocolate: public Sweets
{

  public:

     static int ChocolateCounter;

  Chocolate():Sweets()
  {
     ChocolateCounter++;
  }

  ~Chocolate()
  {
    ChocolateCounter--;
  }

};

class Icecream: public Sweets
{

  public:

  static int IcecreamCounter;

  Icecream():Sweets()
  {
    IcecreamCounter++;
  }

  ~Icecream()
  {
    IcecreamCounter--;
  }

};

int Sweets::SweetCounter = 0;
int Chocolate::ChocolateCounter = 0;
int Icecream::IcecreamCounter = 0;

int main()
{

  Chocolate firstChoco,secondChoco,thirdChoco;
  Icecream firstIce,secondIce,thirdIce,fourthIce,fifthIce;

  cout << "Total number of Sweets: " << Sweets::SweetCounter << endl;
  cout << "Number of Chocolates: " << Chocolate::ChocolateCounter << endl;
  cout << "Number of Ice cream: " << Icecream::IcecreamCounter << endl;

  return 0;

}



