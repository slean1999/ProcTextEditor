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

typedef struct tag_Property
{
    float fDiffuse;
    float fBrillance;
    float fSpecular;
    float fRoughness;
    float vAmbient[3];
    float vRelc_max[3];
    float vRelc_min[3];
    float fFalloff;
}_Property;

enum ePattern
{
    eGRANITE_PATTERN = 0,
};

enum eWaveType
{
    eRAMP_WAVE = 0,
};

#endif // BASEDEF_H
