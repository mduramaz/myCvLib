#include "aritmeticOperators.h"
#include "image.h"

namespace mycv
{
  /*     Image* addANumber(Image *input,int number)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
         int value=input->image[i]+number;
         value>255?255:value;
         input->image[i]=value;
      }
      return output;
   }


   Image* subtractANumber(Image *input,int number)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
         int value=input->image[i]+number;
         value<0?0:value;
         input->image[i]=value;
      }
      return output;
   }


   Image* bitwiseAnd(Image *input,Image *input2)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
        if(input->image[i]==255 && input2->image[i]==255)
        {
           output->image[i]=255;
        }
        else
        {
           output->image[i]=0;
        }
      }   
      return output; 
   }
     
   Image* bitwiseOr(Image *input,Image *input2)
   {
      Image* output=new Image(input);

      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
        if(input->image[i]==0 && input2->image[i]==0)
        {
           output->image[i]=0;
        }
        else
        {
           output->image[i]=255;
        }
      }   


      return output;
   }

   Image* bitwiseNot(Image *input)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
          output->image[i]=input->image[i]==255?0:255;
      return output;
   }


   Image* bitwiseXOR(Image *input,Image *input2)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
        if((input->image[i]==255 && input2->image[i]==255) ||
            input->image[i]==0 && input2->image[i]==0)
        {
           output->image[i]=255;
        }
        else
        {
           output->image[i]=0;
        }
      }   
      return output; ;
   }

   Image* addImage(Image *input,Image *input2)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++){
           int total=input->image[i]+input2->image[i];
           output->image[i]=total>255?255:total;
      }
      return output;
   }

      Image* subtractImage(Image *input,Image *input2)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++){
           int total=abs(input->image[i]-input2->image[i]);
           output->image[i]=total<0?0:total;
      }
      return output;
   }

   Image* addImageWeight(Image *input,float w1,Image *input2,float w2)
   {
      Image* output=new Image(input);
      for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
         output->image[i]=(input->image[i])*w1+(input2->image[i])*w2;
      }
      return output;
   }

   //https://docs.opencv.org/4.x/d7/d4d/tutorial_py_thresholding.html

   //type==bineary, if pixel value is smaller threshold value, set pixel value to threshold
   Image* threshold(Image *input,int type,int threshold)
   {
      Image* output=new Image(input);
       for(int i=0; i<(output->height)*(output->width)*3; i++)
      {
         if(type==0)
        {
          if(input->image[i]>threshold)
          {
             output->image[i]=255;
          }
          else
          {
             output->image[i]=0;
          }
        }
        else
        {
          if(input->image[i]<threshold)
          {
             output->image[i]=255;
          }
          else
          {
             output->image[i]=0;
          }       
        }

      }   

      return output;
   }

     */
}