#include <iostream>
using namespace std;
string ones[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen "
               }; 
  
// strings at index 0 and 1 are not used, they is to 
// make array indexing simple 
string tens[] = { "", "", "twenty ", "thirty ", "forty ", 
                 "fifty ", "sixty ", "seventy ", "eighty ", 
                 "ninety "
               }; 
  
string convert(long n){
    if(n<0) {
        return "Enter a positive number";
    }
    if(n==0) {
        return "Zero";
    }
    if(n<20) {
        return ones[n];
    }
    if(n<100) {
        
        return tens[n/10] + ((n%10!=0)?" ":"") + convert(n%100);
    }
    if(n<1000) {
            return ones[n / 100] + " hundred" + ((n % 100 != 0) ? " " : "") + convert(n % 100);
        }
    if (n < 1000000) {
            return convert(n / 1000) + " thousand" + ((n % 1000 != 0) ? " " : "") + convert(n % 1000);
        }
    if (n < 1000000000) {
            return convert(n / 1000000) + " million" + ((n % 1000000 != 0) ? " " : "") + convert(n % 1000000);
        }
    if(n<1000000000000) {
            return convert(n / 1000000000) + " billion"  + ((n % 1000000000 != 0) ? " " : "") + convert(n % 1000000000);
    }
        return convert(n/1000000000000) + " trillion" + ((n%1000000000000 != 0)? " ": "")+ convert(n%1000000000000);
 }
