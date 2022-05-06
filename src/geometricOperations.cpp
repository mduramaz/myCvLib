#include "geometricOperations.h"

namespace mycv
{



Image* setRotation90(Image *input)
{

    Image* output=new Image(input);


    output->setHearder(output->width,output->height);
   
   for(int i=0; i<input->height; i++)
     for(int j=0; j<input->width; j++){
      
        (*output)[input->width-1-j][i].R=(*input)[i][j].R;
        (*output)[input->width-1-j][i].G=(*input)[i][j].G;
        (*output)[input->width-1-j][i].B=(*input)[i][j].B;
     }  
 
    return output;
}

Image* setRotation180(Image *input)
{
    Image* output=new Image(input);
    for(int i=0; i<input->height; i++)
     for(int j=0; j<input->width; j++){
      
        (*output)[input->height-1-i][input->width-1-j].R=(*input)[i][j].R;
        (*output)[input->height-1-i][input->width-1-j].G=(*input)[i][j].G;
        (*output)[input->height-1-i][input->width-1-j].B=(*input)[i][j].B;
     }  
 
    return output;
}

Image* setRotation270(Image *input)
{
    Image* output=new Image(input);
    output->setHearder(output->width,output->height);
   
    for(int i=0; i<input->height; i++)
     for(int j=0; j<input->width; j++){
      
        (*output)[j][input->height-1-i].R=(*input)[i][j].R;
        (*output)[j][input->height-1-i].G=(*input)[i][j].G;
        (*output)[j][input->height-1-i].B=(*input)[i][j].B;
     }  
    return output;
}

 

}