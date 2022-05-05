#include <iostream>
 
#include "image.h"
 

#include "geometricOperations.h"

int main(int argc, char *argv[])
{ 
   mycv::Image image("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess.bmp");
   for(int i=0; i<100; i++)
     for(int j=0; j<100; j++){
         image.pixel[i][j].R=0;
         image.pixel[i][j].G=0;
         image.pixel[i][j].B=0;
     }
     
   image.write("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess3.bmp");

  /* mycv::Image *image_gray=mycv::setRotation90(&image);

   image_gray->write("C:\\Users\\mehmet\\Desktop\\myCvLibWs\\chess35.bmp");

    */
   /*    for(int i=0; i<10000; i++)
       {
        mycv::pixel* pixel=image.getpixel(i);
        printf("\n %d \n",(int)pixel[1]);
       }
    */
   return 0;
}
