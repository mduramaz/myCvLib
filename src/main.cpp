#include <iostream>
 
#include "image.h"
 

#include "geometricOperations.h"
#include "filterAlgoritm.h"

int main(int argc, char *argv[])
{ 
   mycv::Image *image=new mycv::Image("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess.bmp");
   double Gkernel[2]={11,11};
   double GSigma=2;
   mycv::Image *image_gray=mycv::gaussianNoise(image,Gkernel,GSigma);

   printf("%d",image->height);
   
    //mycv::Image *image_gray=mycv::setRotation90(image);
    printf("--w---\n");
    image_gray->write("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess3.bmp");

  

  
   /*    for(int i=0; i<10000; i++)
       {
        mycv::pixel* pixel=image.getpixel(i);
        printf("\n %d \n",(int)pixel[1]);
       }
    */
   return 0;
}
