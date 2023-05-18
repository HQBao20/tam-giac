/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "../mid/tam-giac.h"
/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/
ToaDo_t toaDo;

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
int main(void)
{
   printf("==============================================================\n");
   printf("Nhap toa do cac dinh cua tam giac:\n");
   printf("Toa do dinh A:\n");
   printf("Ax: ");
   scanf("%f", &toaDo.fAx);
   fflush(stdin);
   printf("Ay: ");
   scanf("%f", &toaDo.fAy);
   fflush(stdin);
   printf("\n");
   printf("Toa do dinh B:\n");
   printf("Bx: ");
   scanf("%f", &toaDo.fBx);
   fflush(stdin);
   printf("By: ");
   scanf("%f", &toaDo.fBy);
   fflush(stdin);
   printf("\n");
   printf("Toa do dinh C:\n");
   printf("Cx: ");
   scanf("%f", &toaDo.fCx);
   fflush(stdin);
   printf("Cy: ");
   scanf("%f", &toaDo.fCy);
   fflush(stdin);
   printf("\n");
   printf("==============================================================\n");
   if(bKiemTraTamGiac(toaDo))
   {
       printf("Toa do ba diem nhap vao tao thanh mot tam giac!\n");
   }
   else
   {
       printf("Toa do ba diem nhap vao khong tao thanh mot tam giac!\n");
   }

    return 0;
}
