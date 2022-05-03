#include "image.h"
#include "colourSpace.h"

namespace mycv{


   Image* convertGrayScale(Image *input)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->width)*(output->height)*3; i+=3)
      {
            unsigned char grayscale=(input->image[i])*0.299+(input->image[i+1])*0.587 +(input->image[i+2])*0.114;
            //("%c\n",grayscale);
            output->image[i]=grayscale;    
            output->image[i+1]=grayscale;
            output->image[i+2]=grayscale;
          //  printf("%d,",i);
      }
      return output;
   }
   





};