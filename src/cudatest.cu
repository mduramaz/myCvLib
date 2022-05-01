#include "cudatest.cuh"

__global__ void cudatest()
{
    printf("------------------------------------------------------------------------------ \n");
}

void test()
{

    

    cudatest<<<1,100>>>();
    cudaDeviceSynchronize();

}