#ifndef Car_h
#define Car_h

#include <string>

using namespace std;

class Car {
   public:
      ///// CONSTRUCTOR /////
      Car();
      Car(double price, int year, string make, string model, bool sold, string vin, string color);
      Car(Car& soldCar);
      ///// SETTERS /////
      void setPrice(double price);
      void setYear(int year);
      void setMake(string make);
      void setModel(string model);
      void setVin(string vin);
      void setSold(bool sold);
      void setColor(string color);

      ///// GETTERS /////
      void carDetails();
      double getPrice();
      int getYear();
      string getMake();
      string getModel();
      string getVin();
      bool getSold();
      string getColor();
   private:
      double carPrice;
      int carYear;
      string carMake;
      string carModel;
      string carVin;
      bool carSold;
      string carColor;
};//end Car class. JK

#endif
