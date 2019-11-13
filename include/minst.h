//
// Created by string on 2019/11/3.
//

#ifndef C_NN_MINST_H
#define C_NN_MINST_H

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <random>
#include <time.h>

typedef struct MinstImg{
    int c;            // the width of image
    int r;            // the height of image
    float** ImgData;  // dynamic array 2x2 for image data
}MinstImg;

typedef struct MinstImgArr{
    int ImgNum;       // the number of image
    MinstImg* ImgPtr; // the pointer to image struct
}*ImgArr;             //

typedef struct MinstLabel{
    int l;            // the langth of output label
    float* LabelData; // the data of output label
}MinstLabel;

typedef struct MinstLabelArr{
    int LabelNum;
    MinstLabel* LabelPtr;
}*LabelArr;           // the array of label of image

LabelArr read_Label(const char* filename);   // load the image label
ImgArr read_Img(const char* filename);       // load the image
void save_Img(ImgArr imgarr, char* filedir); // save the image data to file

#endif //C_NN_MINST_H
