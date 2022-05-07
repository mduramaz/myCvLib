#ifndef FILTER_ALGORITMS__
#define FILTER_ALGORITMS__
#include "image.h"
#define M_PI 3.1415
namespace mycv{


void gaussFilterCreation(double **GKernel,double *,double sigma);

 Image* gaussianNoise(Image *input,double *kernelSize,double sigma);

 

Image* saltAndPepperNoise(Image *input);

Image* highPassSpatial(Image *input);




Image* maximumFilter(Image *input);

Image* medianFilter(Image *input);


Image* minimumFilter(Image *input);
    
}

#endif