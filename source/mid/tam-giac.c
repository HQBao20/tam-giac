/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include "tam-giac.h"
/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

/******************************************************************************/
/*                              EXPORTED DATA                                 */
/******************************************************************************/

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/
static float fDoDaiDoanThang(float fHoanhDo1, float fTungDo1, float fHoanhDo2,
    float fTungDo2);

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/

/******************************************************************************/
bool bKiemTraTamGiac(ToaDo_t toaDo)
{
    bool bCheckTamGiac = true;
    float fAb;
    float fAc;
    float fBc;

    fAb = fDoDaiDoanThang(toaDo.fAx, toaDo.fAy, toaDo.fBx, toaDo.fBy);
    fAc = fDoDaiDoanThang(toaDo.fAx, toaDo.fAy, toaDo.fCx, toaDo.fCy);
    fBc = fDoDaiDoanThang(toaDo.fBx, toaDo.fBy, toaDo.fCx, toaDo.fCy);

    if ((fAb == fAc + fBc) || (fAc == fAb + fBc) || (fBc == fAb + fAc))
    {
        bCheckTamGiac = false;
    }

    return bCheckTamGiac;
}

static float fDoDaiDoanThang(float fHoanhDo1, float fTungDo1, float fHoanhDo2,
    float fTungDo2)
{
    float fDoDai;
    float fHoanhDo;
    float fTungDo;

    fHoanhDo = abs(fHoanhDo1 - fHoanhDo2);
    fTungDo = abs(fTungDo1 - fTungDo2);
    fDoDai = sqrt(fHoanhDo * fHoanhDo + fTungDo * fTungDo);

    return fDoDai;
}

