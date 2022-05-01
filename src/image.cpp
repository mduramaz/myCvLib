#include <iostream>
#include "image.h"



namespace mycv{

    void Image::bitMapReader(const char *imgName)
    {
        header=new unsigned char[BMP_HEADER_SIZE];
        colorTable=new unsigned char[BMP_COLOR_TABLE_SIZE];

        int i;
        FILE *streamIn;
        streamIn = fopen(imgName,"rb");

        if(streamIn ==(FILE *)0)
        {
            std::cout<<"Unable to read image \n"<<"Exit code"<<std::endl;
            exit(1);
        }

        for(i =0;i<54;i++)
        {
            header[i] = getc(streamIn);
        }

        width = *(int *)&header[18];
        height = *(int *)&header[22]; 
        bitDepth = *(int *)&header[28];
        
        if(bitDepth <=8)
        {
            fread(colorTable,sizeof(unsigned char),1024,streamIn);
        }

        image=new unsigned char[width*height*3];
        fread(image,sizeof(unsigned char),width*height*3,streamIn);
    
        fclose(streamIn);

    }

    void Image::imageWriter(const char *imgName)
    {
        FILE *fo = fopen(imgName,"wb");
        fwrite(header,sizeof(unsigned char),54,fo);
        if(bitDepth <=8)
        {
            fwrite(colorTable,sizeof(unsigned char),1024,fo);
        }
        fwrite(image,sizeof(unsigned char),width*height*3, fo);
        fclose(fo);
    }

}


