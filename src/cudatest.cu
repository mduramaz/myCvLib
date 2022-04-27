#include "include/cudatest.cuh"

__global__ void testasd123()
{
    printf("------------------------------------------------------------------------------ \n");
}

void test()
{

    

    testasd123<<<1,100>>>();
    cudaDeviceSynchronize();

}