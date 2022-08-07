//NAME: YIRLO BEATRICE           ID NO: 10912374

#include <iostream>

int main() {
   float sum = 0, count = 0, average;
   int t;
   std::cout<<"Enter your number: ";
   std::cin>>t;
    for(int i=2; i<t; i++){
        for(int j=2; j<=i; j++){
            if(j==i){
                sum+=i;
                count++;
            }else if(i%j==0){
                break;
            }
        }
    }
    average=sum/count;
    std::cout<<"Average = " << average;

    return 0;
}