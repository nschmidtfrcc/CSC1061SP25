#ifndef Car_h
#define Car_h

#include <string>

using namespace std;

class Car {
   public:
      ///// CONSTRUCTOR /////
      Car();
      Car(double price, int year, string make, string model, bool sold, string vin);
      ///// SETTERS /////
      void setPrice(double price);
      void setYear(int year);
      void setMake(string make);
      void setModel(string model);
      void setVin(string vin);
      void setSold(bool sold);
      ///// GETTERS /////
      void carDetails();
      double getPrice();
      int getYear();
      string getMake();
      string getModel();
      string getVin();
      bool getSold();
   private:
      double carPrice;
      int carYear;
      string carMake;
      string carModel;
      string carVin;
      bool carSold;
};//end Car class. JK

#endif
