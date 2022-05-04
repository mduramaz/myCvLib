#ifndef ARIYMETIC_OPERATORS__
#define ARIYMETIC_OPERATORS__

#include "image.h"

#define THRESH_BINARY 0
#define THRESH_BINARY_INV 1


namespace mycv
{
   Image* addANumber(Image *input,int number);
   Image* subtractANumber(Image *input,int number);
   Image* bitwiseAnd(Image *input,Image *input2);
   Image* bitwiseOr(Image *input,Image *input2);
   Image* bitwiseNot(Image *input);
   Image* bitwiseXOR(Image *input,Image *input2);
   Image* addImage(Image *input,Image *input2);
   Image* subtractImage(Image *input,Image *input2);
   Image* addImageWeight(Image *input,float w1,Image *input2,float w2);
   //type==bineary, if pixel value is smaller threshold value, set pixel value to threshold
   Image* threshold(Image *input,int type,int threshold);
}

#endif