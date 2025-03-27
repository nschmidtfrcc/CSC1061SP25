#ifndef car_h
#define car_h

#include <string>

using namespace std;

class Car {
   public:

      Car();
      Car(double price, int year, string make, string model, bool sold, string vin);
      void carDetails();
      void setPrice(double price);
      double getPrice();
      void setYear(int year);
      int getYear();
      void setMake(string make);
      string getMake();
      void setModel(string model);
      string getModel();
      void setSold(bool sold);
      bool getSold();
      void setVin(string vin);
      string getVin();
   private:
      double carPrice;
      int carYear;
      string carMake;
      string carModel;
      bool carSold;
      string carVin;
};//end Car class. JK

#endif
