/*
 * crc32.h
 *
 * Change Logs:
 * Date           Author            Notes
 * 2020-07-02     qiyongzhong       first version
 */

#ifndef __CRC32_H__
#define __CRC32_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "crc_cfg.h"
#include "typedef.h"

#ifdef CRCLIB_USING_CRC32

#if (!defined(CRC32_USING_CONST_TABLE) ||                                      \
     ((CRC32_POLY != 0xEDB88320) && (CRC32_POLY != 0x82F63B78)))
/*
 * @brief   cyclic initialize crc table
 * @param   none
 * @retval  none
 */
void crc32_table_init(void);
#endif

/*
 * @brief   cyclic calculation crc check value
 * @param   init_val    - initial value
 * @param   pdata       - datas pointer
 * @param   len         - datas len
 * @retval  calculated result
 */
uint32_t crc32_cyc_cal(uint32_t init_val, uint8_t *pduint32_t, uint32_t len);

/*
 * @brief   calculation crc check value, initial is CRC32_INIT_VAL
 * @param   pdata       - datas pointer
 * @param   len         - datas len
 * @retval  calculated result
 */
uint32_t crc32_cal(uint8_t *pduint32_t, uint32_t len);

#endif
#ifdef __cplusplus
}
#endif
#endif
