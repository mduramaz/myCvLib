#include <iostream>
#include "cudatest.cuh"
#include "image.h"

int main(int argc, char *argv[])
{ 
   mycv::Image image("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess.bmp");
   image.write("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess3.bmp");
   
   
     /*  for(int i=0; i<10000; i++){
    mycv::pixel* pixel=image.getpixel(i);
    printf("\n %d \n",(int)pixel[1]);
    }*/
    
   return 0;
}
