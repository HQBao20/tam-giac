#ifndef TAM_GIAC_H_
#define TAM_GIAC_H_
/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
typedef struct
{
    float fAx;
    float fAy;
    float fBx;
    float fBy;
    float fCx;
    float fCy;
}ToaDo_t;

typedef struct
{
    float fAb;
    float fAc;
    float fBc;
    float fGocA;
    float fGocB;
    float fGocC;
}GocCanh_t;


/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

/******************************************************************************/
/*                              EXPORTED DATA                                 */
/******************************************************************************/

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/

/******************************************************************************/
/**
 * @brief Kiem tra toa do dau vao co du dieu kien tao thanh mot tam giac khong
 * 
 * @param toaDo 
 * @return true 
 * @return false 
 */
bool bKiemTraTamGiac(ToaDo_t toaDo);

/**
 * @brief Tinh do dai canh va goc cua tam giac
 * 
 * @param gocCanh 
 * @return float 
 */
float fGocCanhTamGiac(GocCanh_t gocCanh);

#endif /* TAM_GIAC_H_ */

