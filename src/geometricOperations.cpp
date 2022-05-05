#include "geometricOperations.h"

namespace mycv
{



Image* setRotation90(Image *input)
{

    Image* output=new Image(input);

    output->setHearder(output->height,output->width);

    for(int i =0;i<output->width;i++)
    {
        for(int j =0;j<output->height;   j++)
        {
            for(int k =0; k<3; k++)
            {
              // output->image[3*(j*(output->width)+i)+k]=0;
                
              // output->image[3*(j*(output->width)+i)+k]=input->image[3*(i*(input->height)+j)+k];
            }
           // output->image[i*(output->height)+j]=input->image[];
           // out_buffer[j][height-1-i] = buffer[i][j];
        }
    }


    return output;
}

Image* setRotation180(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}

Image* setRotation270(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}

Image* setRotation360(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}


}