class Printer
{
public:
   static void PrintAdd(int,int);//prints the sum of ints as int
   static void PrintAdd(int,int,int);//prints the sum of ints as int
   static void PrintAdd(double,double); //prints the sum of doubles as double
   static void PrintAdd(double,double,double); //prints the sum of doubles as double
   static void PrintMul(int,int); //prints the multiplication of ints as int
   static void PrintMul(int,int,int);  //prints the multiplication of ints as int
   static void PrintMul(double,double); //prints the multiplication of doubles as doubles
   static void PrintMul(double,double,double); //prints the multiplication of doubles as doubles

   static void PrintAdd(const char *, const char *);//concatenates the strings then prints the result
}
