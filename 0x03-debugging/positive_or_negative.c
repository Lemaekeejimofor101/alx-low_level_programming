1 #include < " main.h" >
  2 
  3 void positive_or_negative(int i)
  4 {
  5         if (i > 0)
  6                 printf("%d is positive\n", i);
  7         else if (i < 0)
  8                 printf("%d is negative\n", i);
  9         else
 10                 printf("%d is zero\n", i);
 11 }
