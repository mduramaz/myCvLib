#include "filterAlgoritm.h"

namespace mycv{




void gaussFilterCreation(double **GKernel,double *kernelsize,double sigma)
{
	 
	double r, s = 2.0 * sigma * sigma;

	 
	double sum = 0.0;
    int halflengthx=kernelsize[0]/2; 
    int halflengthy=kernelsize[1]/2;
	for (int x = -halflengthx; x <= halflengthx; x++) {
		for (int y = -halflengthy; y <= halflengthy; y++) {
			r = sqrt(x * x + y * y);
			GKernel[x + halflengthx][y + halflengthy] = (exp(-(r * r) / s)) / (M_PI * s);
			sum += GKernel[x + halflengthx][y + halflengthy];
		}
	}

	for (int i = 0; i < kernelsize[0]; ++i){
		for (int j = 0; j < kernelsize[1]; ++j){
			GKernel[i][j] /= sum;
          printf("%lf _",GKernel[i][j]);
        }
        printf("\n \n");
    }
}

Image* gaussianNoise(Image *input,double *kernelSize,double sigma)
{
    Image* output=new Image(input);
    int kernelsizex=kernelSize[0]/2;
    int kernelsizey=kernelSize[1]/2;

    double** kernel=new double*[kernelSize[0]];
    for(int i=0; i<kernelSize[0]; i++)
       kernel[i]=new double[kernelSize[1]];
       
    gaussFilterCreation(kernel,kernelSize,sigma);

    for(int i=kernelsizex; i<input->height-kernelsizex; i++)
    {
        for(int j=kernelsizey; j<input->width-kernelsizey; j++)
        {
            double totalR=0,totalG=0,totalB=0;
            for(int k=-kernelsizex; k<kernelsizex; k++)
            {
                for(int l=-kernelsizey; l<kernelsizey; l++)
                {
                   totalR+=(((float)(*input)[i+k][j+l].R)*kernel[l+kernelsizex][k+kernelsizey]);
                   totalG+=(((float)(*input)[i+k][j+l].G)*kernel[l+kernelsizex][k+kernelsizey]);
                   totalB+=(((float)(*input)[i+k][j+l].B)*kernel[l+kernelsizex][k+kernelsizey]);
                }
            }
           // printf("%lf\n",totalR);
            (*output)[i][j].R=int(totalR);
            (*output)[i][j].G=int(totalG);
            (*output)[i][j].B=int(totalB);
            totalR=0;
            totalG=0;
            totalB=0;
        }

    }
 

// Function to create Gaussian filter

 

    return output;
}

Image* saltAndPepperNoise(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}

Image* highPassSpatial(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}




Image* maximumFilter(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}

Image* medianFilter(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}


Image* minimumFilter(Image *input)
{
    Image* output=new Image(input);
    
    return output;
}



    
}