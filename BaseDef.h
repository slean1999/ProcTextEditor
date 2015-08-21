#ifndef BASEDEF_H
#define BASEDEF_H

typedef struct tag_Color
{
    float fR;
    float fG;
    float fB;
    float fA;
    float fWeight;
}_Color;

enum ePattern
{
    eGRANITE_PATTERN = 0,
};

enum eWaveType
{
    eRAMP_WAVE = 0,
};

#endif // BASEDEF_H
