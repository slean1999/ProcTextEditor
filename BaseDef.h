#ifndef BASEDEF_H
#define BASEDEF_H

typedef struct tag_Color
{
    float fValue;
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

typedef struct tag_Turb
{
    float fTurbX;
    float fTurbY;
    float fTurbZ;
    float fLambda;
    float fOctave;
    float fOmega;
}_Turb;


enum ePattern
{
    eGRANITE_PATTERN = 0,
    ePattern_MAX,

    eRAMP_WAVE,
    eWave_MAX,

    eTRANSFORM_WARP,
    eAll_MAX,
};


#endif // BASEDEF_H
