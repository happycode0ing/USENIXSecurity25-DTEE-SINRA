/*
 * encryption.c
 *
 *  Created on: 2024年9月21日
 *      Author: 27951
 */
#include "encryption.h"
#include "aes.h"

#include <string.h>

// CBC mode

#if defined(AES256)
    uint8_t key[32] = { 0x60, 0x3d, 0xeb, 0x10, 0x15, 0xca, 0x71, 0xbe, 0x2b, 0x73, 0xae, 0xf0, 0x85, 0x7d, 0x77, 0x81,
                        0x1f, 0x35, 0x2c, 0x07, 0x3b, 0x61, 0x08, 0xd7, 0x2d, 0x98, 0x10, 0xa3, 0x09, 0x14, 0xdf, 0xf4 };
#elif defined(AES192)
    uint8_t key[24] = { 0x8e, 0x73, 0xb0, 0xf7, 0xda, 0x0e, 0x64, 0x52, 0xc8, 0x10, 0xf3, 0x2b, 0x80, 0x90, 0x79, 0xe5,
                        0x62, 0xf8, 0xea, 0xd2, 0x52, 0x2c, 0x6b, 0x7b };
#elif defined(AES128)
    uint8_t key[16] = { 0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c };
#endif

    uint8_t iv[]  = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f };

void encrypt_data(uint8_t * buffer, unsigned int length)
{
    struct AES_ctx ctx;
    // 初始化 IV
    AES_init_ctx_iv(&ctx, key, iv);
    // 加密
    AES_CBC_encrypt_buffer(&ctx, (uint8_t *)buffer, length);
    return ;
}


void decrypt_data(uint8_t * buffer, unsigned int length)
{
    struct AES_ctx ctx;
    // 初始化 IV
    AES_init_ctx_iv(&ctx, key, iv);
    // 解密
    AES_CBC_decrypt_buffer(&ctx, (uint8_t *)buffer, length);

    return ;
}
