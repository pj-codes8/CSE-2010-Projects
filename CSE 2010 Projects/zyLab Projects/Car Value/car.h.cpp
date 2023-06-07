#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear; 
      int purchasePrice;
      int currentValue;
   
   public:
      void SetModelYear(int userYear);

      int GetModelYear() const;
   
      void SetPurchasePrice(int);
   
      int GetPurchasePrice();
   
      void CalcCurrentValue(int currentYear);
   
      void PrintInfo();
   
};

#endif