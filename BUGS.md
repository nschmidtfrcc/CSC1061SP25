Bugs/Fixes/Additions:
   General:
      Enters an infinite loop when a non-integer is input in any menu.
      
   Display Available Car Information Bugs/Fixes:
      Can remove "Car" from before each data type. Doesn't need to be "Car Year", "Car Make and Model", can just be "Year", and "Make and Model
      Each data type should be in line with each other:
         Instead of this:
         Car Year: 2015. Car Make and Model: Ford F-150. Car Price: $20500. Car VIN: 1521102868
         Car Year: 2010. Car Make and Model: Volkswagen New Beetle. Car Price: $4250. Car VIN: 9105781065
         Do this:
         Car Year: 2015. Car Make and Model: Ford F-150.            Car Price: $20500. Car VIN: 1521102868
         Car Year: 2010. Car Make and Model: Volkswagen New Beetle. Car Price: $4250.  Car VIN: 9105781065
   
   Display Sold Car Information Bugs/Fixes:
   
   Search Available Inventory Bugs/Fixes:
      Search by: function exits instead of reasking for input if an invalid integer is input.
      Input validation on Search by Car Make should account for lowercases.
      If nothing is found in the search, exits to the main menu instead of asking for new input.
      Output from a successful search doesn't have proper indentation for found results.
   
   Sell Car Bugs/Fixes:
      Sell Car function does not exist.
   
   Display Gross Sales Bugs/Fixes:
      Gross Sales should display as $0.00 at beginning instead of 0.
      
   List Customers Bugs/Fixes:

Fixed Bugs:
   General:
   
   Display Available Car Information:
   
   Display Sold Car Information:
   
   Search Available Inventory:
   
   Sell Car:
   
   Display Gross Sales: