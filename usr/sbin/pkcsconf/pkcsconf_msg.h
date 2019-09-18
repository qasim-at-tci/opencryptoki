/*
 * COPYRIGHT (c) International Business Machines Corp. 2001-2017
 *
 * This program is provided under the terms of the Common Public License,
 * version 1.0 (CPL-1.0). Any use, reproduction or distribution for this
 * software constitutes recipient's acceptance of CPL-1.0 terms which can be
 * found in the file LICENSE file or at
 * https://opensource.org/licenses/cpl1.0.php
 */

#ifndef _H_PKCSCONF_MSG
#define _H_PKCSCONF_MSG

/* list of mechanism flags and their printable string names */
struct _pkcs11_mech_flags {
    char *name;
    CK_FLAGS flag;
} pkcs11_mech_flags[] = {
    { "CKF_HW", CKF_HW },
    { "CKF_ENCRYPT", CKF_ENCRYPT },
    { "CKF_DECRYPT", CKF_DECRYPT },
    { "CKF_DIGEST", CKF_DIGEST },
    { "CKF_SIGN", CKF_SIGN },
    { "CKF_SIGN_RECOVER", CKF_SIGN_RECOVER },
    { "CKF_VERIFY", CKF_VERIFY },
    { "CKF_VERIFY_RECOVER", CKF_VERIFY_RECOVER },
    { "CKF_GENERATE", CKF_GENERATE },
    { "CKF_GENERATE_KEY_PAIR", CKF_GENERATE_KEY_PAIR },
    { "CKF_WRAP", CKF_WRAP },
    { "CKF_UNWRAP", CKF_UNWRAP },
    { "CKF_DERIVE", CKF_DERIVE },
    { "CKF_EC_F_P", CKF_EC_F_P },
    { "CKF_EC_F_2M", CKF_EC_F_2M },
    { "CKF_EC_ECPARAMETERS", CKF_EC_ECPARAMETERS },
    { "CKF_EC_NAMEDCURVE", CKF_EC_NAMEDCURVE },
    { "CKF_EC_UNCOMPRESS", CKF_EC_UNCOMPRESS },
    { "CKF_EC_COMPRESS", CKF_EC_COMPRESS },
    { "CKF_EXTENSION", CKF_EXTENSION },
    { NULL_PTR, 0xFFFFFFFF }
};


/* list of mechanisms and their printable string names */
struct _pkcs11_mech_list {
    char *name;
    CK_MECHANISM_TYPE mech;
} pkcs11_mech_list[] = {
    { "CKM_RSA_PKCS_KEY_PAIR_GEN", CKM_RSA_PKCS_KEY_PAIR_GEN },
    { "CKM_RSA_PKCS", CKM_RSA_PKCS },
    { "CKM_RSA_9796", CKM_RSA_9796 },
    { "CKM_RSA_X_509", CKM_RSA_X_509 },
    { "CKM_MD2_RSA_PKCS", CKM_MD2_RSA_PKCS },
    { "CKM_MD5_RSA_PKCS", CKM_MD5_RSA_PKCS },
    { "CKM_SHA1_RSA_PKCS", CKM_SHA1_RSA_PKCS },
    { "CKM_RIPEMD128_RSA_PKCS", CKM_RIPEMD128_RSA_PKCS },
    { "CKM_RIPEMD160_RSA_PKCS", CKM_RIPEMD160_RSA_PKCS },
    { "CKM_RSA_PKCS_OAEP", CKM_RSA_PKCS_OAEP },
    { "CKM_RSA_X9_31_KEY_PAIR_GEN", CKM_RSA_X9_31_KEY_PAIR_GEN },
    { "CKM_RSA_X9_31", CKM_RSA_X9_31 },
    { "CKM_SHA1_RSA_X9_31", CKM_SHA1_RSA_X9_31 },
    { "CKM_RSA_PKCS_PSS", CKM_RSA_PKCS_PSS },
    { "CKM_SHA1_RSA_PKCS_PSS", CKM_SHA1_RSA_PKCS_PSS },
    { "CKM_DSA_KEY_PAIR_GEN", CKM_DSA_KEY_PAIR_GEN },
    { "CKM_DSA", CKM_DSA },
    { "CKM_DSA_SHA1", CKM_DSA_SHA1 },
    { "CKM_DH_PKCS_KEY_PAIR_GEN", CKM_DH_PKCS_KEY_PAIR_GEN },
    { "CKM_DH_PKCS_DERIVE", CKM_DH_PKCS_DERIVE },
    { "CKM_X9_42_DH_KEY_PAIR_GEN", CKM_X9_42_DH_KEY_PAIR_GEN },
    { "CKM_X9_42_DH_DERIVE", CKM_X9_42_DH_DERIVE },
    { "CKM_X9_42_DH_HYBRID_DERIVE", CKM_X9_42_DH_HYBRID_DERIVE },
    { "CKM_X9_42_MQV_DERIVE", CKM_X9_42_MQV_DERIVE },
    { "CKM_SHA224_RSA_PKCS", CKM_SHA224_RSA_PKCS },
    { "CKM_SHA256_RSA_PKCS", CKM_SHA256_RSA_PKCS },
    { "CKM_SHA384_RSA_PKCS", CKM_SHA384_RSA_PKCS },
    { "CKM_SHA512_RSA_PKCS", CKM_SHA512_RSA_PKCS },
    { "CKM_SHA224_RSA_PKCS_PSS", CKM_SHA224_RSA_PKCS_PSS },
    { "CKM_SHA256_RSA_PKCS_PSS", CKM_SHA256_RSA_PKCS_PSS },
    { "CKM_SHA384_RSA_PKCS_PSS", CKM_SHA384_RSA_PKCS_PSS },
    { "CKM_SHA512_RSA_PKCS_PSS", CKM_SHA512_RSA_PKCS_PSS },
    { "CKM_RC2_KEY_GEN", CKM_RC2_KEY_GEN },
    { "CKM_RC2_ECB", CKM_RC2_ECB },
    { "CKM_RC2_CBC", CKM_RC2_CBC },
    { "CKM_RC2_MAC", CKM_RC2_MAC },
    { "CKM_RC2_MAC_GENERAL", CKM_RC2_MAC_GENERAL },
    { "CKM_RC2_CBC_PAD", CKM_RC2_CBC_PAD },
    { "CKM_RC4_KEY_GEN", CKM_RC4_KEY_GEN },
    { "CKM_RC4", CKM_RC4 },
    { "CKM_DES_KEY_GEN", CKM_DES_KEY_GEN },
    { "CKM_DES_ECB", CKM_DES_ECB },
    { "CKM_DES_CBC", CKM_DES_CBC },
    { "CKM_DES_MAC", CKM_DES_MAC },
    { "CKM_DES_MAC_GENERAL", CKM_DES_MAC_GENERAL },
    { "CKM_DES_CBC_PAD", CKM_DES_CBC_PAD },
    { "CKM_DES_OFB64", CKM_DES_OFB64 },
    { "CKM_DES_CFB8", CKM_DES_CFB8 },
    { "CKM_DES_CFB64", CKM_DES_CFB64 },
    { "CKM_DES2_KEY_GEN", CKM_DES2_KEY_GEN },
    { "CKM_DES3_KEY_GEN", CKM_DES3_KEY_GEN },
    { "CKM_DES3_ECB", CKM_DES3_ECB },
    { "CKM_DES3_CBC", CKM_DES3_CBC },
    { "CKM_DES3_MAC", CKM_DES3_MAC },
    { "CKM_DES3_MAC_GENERAL", CKM_DES3_MAC_GENERAL },
    { "CKM_DES3_CBC_PAD", CKM_DES3_CBC_PAD },
    { "CKM_DES3_CMAC_GENERAL", CKM_DES3_CMAC_GENERAL },
    { "CKM_DES3_CMAC", CKM_DES3_CMAC },
    { "CKM_CDMF_KEY_GEN", CKM_CDMF_KEY_GEN },
    { "CKM_CDMF_ECB", CKM_CDMF_ECB },
    { "CKM_CDMF_CBC", CKM_CDMF_CBC },
    { "CKM_CDMF_MAC", CKM_CDMF_MAC },
    { "CKM_CDMF_MAC_GENERAL", CKM_CDMF_MAC_GENERAL },
    { "CKM_CDMF_CBC_PAD", CKM_CDMF_CBC_PAD },
    { "CKM_MD2", CKM_MD2 },
    { "CKM_MD2_HMAC", CKM_MD2_HMAC },
    { "CKM_MD2_HMAC_GENERAL", CKM_MD2_HMAC_GENERAL },
    { "CKM_MD5", CKM_MD5 },
    { "CKM_MD5_HMAC", CKM_MD5_HMAC },
    { "CKM_MD5_HMAC_GENERAL", CKM_MD5_HMAC_GENERAL },
    { "CKM_SHA_1", CKM_SHA_1 },
    { "CKM_SHA_1_HMAC", CKM_SHA_1_HMAC },
    { "CKM_SHA_1_HMAC_GENERAL", CKM_SHA_1_HMAC_GENERAL },
    { "CKM_RIPEMD128", CKM_RIPEMD128 },
    { "CKM_RIPEMD128_HMAC", CKM_RIPEMD128_HMAC },
    { "CKM_RIPEMD128_HMAC_GENERAL", CKM_RIPEMD128_HMAC_GENERAL },
    { "CKM_RIPEMD160", CKM_RIPEMD160 },
    { "CKM_RIPEMD160_HMAC", CKM_RIPEMD160_HMAC },
    { "CKM_RIPEMD160_HMAC_GENERAL", CKM_RIPEMD160_HMAC_GENERAL },
    { "CKM_SHA224", CKM_SHA224 },
    { "CKM_SHA224_HMAC", CKM_SHA224_HMAC },
    { "CKM_SHA224_HMAC_GENERAL", CKM_SHA224_HMAC_GENERAL },
    { "CKM_SHA256", CKM_SHA256 },
    { "CKM_SHA256_HMAC", CKM_SHA256_HMAC },
    { "CKM_SHA256_HMAC_GENERAL", CKM_SHA256_HMAC_GENERAL },
    { "CKM_SHA384", CKM_SHA384 },
    { "CKM_SHA384_HMAC", CKM_SHA384_HMAC },
    { "CKM_SHA384_HMAC_GENERAL", CKM_SHA384_HMAC_GENERAL },
    { "CKM_SHA512", CKM_SHA512 },
    { "CKM_SHA512_HMAC", CKM_SHA512_HMAC },
    { "CKM_SHA512_HMAC_GENERAL", CKM_SHA512_HMAC_GENERAL },
    { "CKM_SHA512_224", CKM_SHA512_224 },
    { "CKM_SHA512_224_HMAC", CKM_SHA512_224_HMAC },
    { "CKM_SHA512_224_HMAC_GENERAL", CKM_SHA512_224_HMAC_GENERAL },
    { "CKM_SHA512_256", CKM_SHA512_256 },
    { "CKM_SHA512_256_HMAC", CKM_SHA512_256_HMAC },
    { "CKM_SHA512_256_HMAC_GENERAL", CKM_SHA512_256_HMAC_GENERAL },
    { "CKM_CAST_KEY_GEN", CKM_CAST_KEY_GEN },
    { "CKM_CAST_ECB", CKM_CAST_ECB },
    { "CKM_CAST_CBC", CKM_CAST_CBC },
    { "CKM_CAST_MAC", CKM_CAST_MAC },
    { "CKM_CAST_MAC_GENERAL", CKM_CAST_MAC_GENERAL },
    { "CKM_CAST_CBC_PAD", CKM_CAST_CBC_PAD },
    { "CKM_CAST3_KEY_GEN", CKM_CAST3_KEY_GEN },
    { "CKM_CAST3_ECB", CKM_CAST3_ECB },
    { "CKM_CAST3_CBC", CKM_CAST3_CBC },
    { "CKM_CAST3_MAC", CKM_CAST3_MAC },
    { "CKM_CAST3_MAC_GENERAL", CKM_CAST3_MAC_GENERAL },
    { "CKM_CAST3_CBC_PAD", CKM_CAST3_CBC_PAD },
    { "CKM_CAST5_KEY_GEN", CKM_CAST5_KEY_GEN },
    { "CKM_CAST128_KEY_GEN", CKM_CAST128_KEY_GEN },
    { "CKM_CAST5_ECB", CKM_CAST5_ECB },
    { "CKM_CAST128_ECB", CKM_CAST128_ECB },
    { "CKM_CAST5_CBC", CKM_CAST5_CBC },
    { "CKM_CAST128_CBC", CKM_CAST128_CBC },
    { "CKM_CAST5_MAC", CKM_CAST5_MAC },
    { "CKM_CAST128_MAC", CKM_CAST128_MAC },
    { "CKM_CAST5_MAC_GENERAL", CKM_CAST5_MAC_GENERAL },
    { "CKM_CAST128_MAC_GENERAL", CKM_CAST128_MAC_GENERAL },
    { "CKM_CAST5_CBC_PAD", CKM_CAST5_CBC_PAD },
    { "CKM_CAST128_CBC_PAD", CKM_CAST128_CBC_PAD },
    { "CKM_RC5_KEY_GEN", CKM_RC5_KEY_GEN },
    { "CKM_RC5_ECB", CKM_RC5_ECB },
    { "CKM_RC5_CBC", CKM_RC5_CBC },
    { "CKM_RC5_MAC", CKM_RC5_MAC },
    { "CKM_RC5_MAC_GENERAL", CKM_RC5_MAC_GENERAL },
    { "CKM_RC5_CBC_PAD", CKM_RC5_CBC_PAD },
    { "CKM_IDEA_KEY_GEN", CKM_IDEA_KEY_GEN },
    { "CKM_IDEA_ECB", CKM_IDEA_ECB },
    { "CKM_IDEA_CBC", CKM_IDEA_CBC },
    { "CKM_IDEA_MAC", CKM_IDEA_MAC },
    { "CKM_IDEA_MAC_GENERAL", CKM_IDEA_MAC_GENERAL },
    { "CKM_IDEA_CBC_PAD", CKM_IDEA_CBC_PAD },
    { "CKM_GENERIC_SECRET_KEY_GEN", CKM_GENERIC_SECRET_KEY_GEN },
    { "CKM_CONCATENATE_BASE_AND_KEY", CKM_CONCATENATE_BASE_AND_KEY },
    { "CKM_CONCATENATE_BASE_AND_DATA", CKM_CONCATENATE_BASE_AND_DATA },
    { "CKM_CONCATENATE_DATA_AND_BASE", CKM_CONCATENATE_DATA_AND_BASE },
    { "CKM_XOR_BASE_AND_DATA", CKM_XOR_BASE_AND_DATA },
    { "CKM_EXTRACT_KEY_FROM_KEY", CKM_EXTRACT_KEY_FROM_KEY },
    { "CKM_SSL3_PRE_MASTER_KEY_GEN", CKM_SSL3_PRE_MASTER_KEY_GEN },
    { "CKM_SSL3_MASTER_KEY_DERIVE", CKM_SSL3_MASTER_KEY_DERIVE },
    { "CKM_SSL3_KEY_AND_MAC_DERIVE", CKM_SSL3_KEY_AND_MAC_DERIVE },
    { "CKM_SSL3_MASTER_KEY_DERIVE_DH", CKM_SSL3_MASTER_KEY_DERIVE_DH },
    { "CKM_TLS_PRE_MASTER_KEY_GEN", CKM_TLS_PRE_MASTER_KEY_GEN },
    { "CKM_TLS_MASTER_KEY_DERIVE", CKM_TLS_MASTER_KEY_DERIVE },
    { "CKM_TLS_KEY_AND_MAC_DERIVE", CKM_TLS_KEY_AND_MAC_DERIVE },
    { "CKM_TLS_MASTER_KEY_DERIVE_DH", CKM_TLS_MASTER_KEY_DERIVE_DH },
    { "CKM_SSL3_MD5_MAC", CKM_SSL3_MD5_MAC },
    { "CKM_SSL3_SHA1_MAC", CKM_SSL3_SHA1_MAC },
    { "CKM_MD5_KEY_DERIVATION", CKM_MD5_KEY_DERIVATION },
    { "CKM_MD2_KEY_DERIVATION", CKM_MD2_KEY_DERIVATION },
    { "CKM_SHA1_KEY_DERIVATION", CKM_SHA1_KEY_DERIVATION },
    { "CKM_SHA224_KEY_DERIVATION", CKM_SHA224_KEY_DERIVATION },
    { "CKM_SHA256_KEY_DERIVATION", CKM_SHA256_KEY_DERIVATION },
    { "CKM_SHA384_KEY_DERIVATION", CKM_SHA384_KEY_DERIVATION },
    { "CKM_SHA512_KEY_DERIVATION", CKM_SHA512_KEY_DERIVATION },
    { "CKM_PBE_MD2_DES_CBC", CKM_PBE_MD2_DES_CBC },
    { "CKM_PBE_MD5_DES_CBC", CKM_PBE_MD5_DES_CBC },
    { "CKM_PBE_MD5_CAST_CBC", CKM_PBE_MD5_CAST_CBC },
    { "CKM_PBE_MD5_CAST3_CBC", CKM_PBE_MD5_CAST3_CBC },
    { "CKM_PBE_MD5_CAST5_CBC", CKM_PBE_MD5_CAST5_CBC },
    { "CKM_PBE_MD5_CAST128_CBC", CKM_PBE_MD5_CAST128_CBC },
    { "CKM_PBE_SHA1_CAST5_CBC", CKM_PBE_SHA1_CAST5_CBC },
    { "CKM_PBE_SHA1_CAST128_CBC", CKM_PBE_SHA1_CAST128_CBC },
    { "CKM_PBE_SHA1_RC4_128", CKM_PBE_SHA1_RC4_128 },
    { "CKM_PBE_SHA1_RC4_40", CKM_PBE_SHA1_RC4_40 },
    { "CKM_PBE_SHA1_DES3_EDE_CBC", CKM_PBE_SHA1_DES3_EDE_CBC },
    { "CKM_PBE_SHA1_DES2_EDE_CBC", CKM_PBE_SHA1_DES2_EDE_CBC },
    { "CKM_PBE_SHA1_RC2_128_CBC", CKM_PBE_SHA1_RC2_128_CBC },
    { "CKM_PBE_SHA1_RC2_40_CBC", CKM_PBE_SHA1_RC2_40_CBC },
    { "CKM_PKCS5_PBKD2", CKM_PKCS5_PBKD2 },
    { "CKM_PBA_SHA1_WITH_SHA1_HMAC", CKM_PBA_SHA1_WITH_SHA1_HMAC },
    { "CKM_KEY_WRAP_LYNKS", CKM_KEY_WRAP_LYNKS },
    { "CKM_KEY_WRAP_SET_OAEP", CKM_KEY_WRAP_SET_OAEP },
    { "CKM_SKIPJACK_KEY_GEN", CKM_SKIPJACK_KEY_GEN },
    { "CKM_SKIPJACK_ECB64", CKM_SKIPJACK_ECB64 },
    { "CKM_SKIPJACK_CBC64", CKM_SKIPJACK_CBC64 },
    { "CKM_SKIPJACK_OFB64", CKM_SKIPJACK_OFB64 },
    { "CKM_SKIPJACK_CFB64", CKM_SKIPJACK_CFB64 },
    { "CKM_SKIPJACK_CFB32", CKM_SKIPJACK_CFB32 },
    { "CKM_SKIPJACK_CFB16", CKM_SKIPJACK_CFB16 },
    { "CKM_SKIPJACK_CFB8", CKM_SKIPJACK_CFB8 },
    { "CKM_SKIPJACK_WRAP", CKM_SKIPJACK_WRAP },
    { "CKM_SKIPJACK_PRIVATE_WRAP", CKM_SKIPJACK_PRIVATE_WRAP },
    { "CKM_SKIPJACK_RELAYX", CKM_SKIPJACK_RELAYX },
    { "CKM_KEA_KEY_PAIR_GEN", CKM_KEA_KEY_PAIR_GEN },
    { "CKM_KEA_KEY_DERIVE", CKM_KEA_KEY_DERIVE },
    { "CKM_FORTEZZA_TIMESTAMP", CKM_FORTEZZA_TIMESTAMP },
    { "CKM_BATON_KEY_GEN", CKM_BATON_KEY_GEN },
    { "CKM_BATON_ECB128", CKM_BATON_ECB128 },
    { "CKM_BATON_ECB96", CKM_BATON_ECB96 },
    { "CKM_BATON_CBC128", CKM_BATON_CBC128 },
    { "CKM_BATON_COUNTER", CKM_BATON_COUNTER },
    { "CKM_BATON_SHUFFLE", CKM_BATON_SHUFFLE },
    { "CKM_BATON_WRAP", CKM_BATON_WRAP },
    { "CKM_ECDSA_KEY_PAIR_GEN", CKM_ECDSA_KEY_PAIR_GEN },
    { "CKM_EC_KEY_PAIR_GEN", CKM_EC_KEY_PAIR_GEN },
    { "CKM_ECDSA", CKM_ECDSA },
    { "CKM_ECDSA_SHA1", CKM_ECDSA_SHA1 },
    { "CKM_ECDSA_SHA224", CKM_ECDSA_SHA224 },
    { "CKM_ECDSA_SHA256", CKM_ECDSA_SHA256 },
    { "CKM_ECDSA_SHA384", CKM_ECDSA_SHA384 },
    { "CKM_ECDSA_SHA512", CKM_ECDSA_SHA512 },
    { "CKM_ECDH1_DERIVE", CKM_ECDH1_DERIVE },
    { "CKM_ECDH1_COFACTOR_DERIVE", CKM_ECDH1_COFACTOR_DERIVE },
    { "CKM_ECMQV_DERIVE", CKM_ECMQV_DERIVE },
    { "CKM_JUNIPER_KEY_GEN", CKM_JUNIPER_KEY_GEN },
    { "CKM_JUNIPER_ECB128", CKM_JUNIPER_ECB128 },
    { "CKM_JUNIPER_CBC128", CKM_JUNIPER_CBC128 },
    { "CKM_JUNIPER_COUNTER", CKM_JUNIPER_COUNTER },
    { "CKM_JUNIPER_SHUFFLE", CKM_JUNIPER_SHUFFLE },
    { "CKM_JUNIPER_WRAP", CKM_JUNIPER_WRAP },
    { "CKM_FASTHASH", CKM_FASTHASH },
    { "CKM_AES_KEY_GEN", CKM_AES_KEY_GEN },
    { "CKM_AES_ECB", CKM_AES_ECB },
    { "CKM_AES_CBC", CKM_AES_CBC },
    { "CKM_AES_MAC", CKM_AES_MAC },
    { "CKM_AES_MAC_GENERAL", CKM_AES_MAC_GENERAL },
    { "CKM_AES_CBC_PAD", CKM_AES_CBC_PAD },
    { "CKM_AES_CTR", CKM_AES_CTR },
    { "CKM_AES_GCM", CKM_AES_GCM },
    { "CKM_AES_CMAC_GENERAL", CKM_AES_CMAC_GENERAL },
    { "CKM_AES_CMAC", CKM_AES_CMAC },
    { "CKM_AES_OFB", CKM_AES_OFB },
    { "CKM_AES_CFB8", CKM_AES_CFB8 },
    { "CKM_AES_CFB64", CKM_AES_CFB64 },
    { "CKM_AES_CFB128", CKM_AES_CFB128 },
    { "CKM_DSA_PARAMETER_GEN", CKM_DSA_PARAMETER_GEN },
    { "CKM_DH_PKCS_PARAMETER_GEN", CKM_DH_PKCS_PARAMETER_GEN },
    { "CKM_X9_42_DH_PARAMETER_GEN", CKM_X9_42_DH_PARAMETER_GEN },
    { "CKM_VENDOR_DEFINED", CKM_VENDOR_DEFINED },
    { "CKM_IBM_SHA3_224", CKM_IBM_SHA3_224 },
    { "CKM_IBM_SHA3_256", CKM_IBM_SHA3_256 },
    { "CKM_IBM_SHA3_384", CKM_IBM_SHA3_384 },
    { "CKM_IBM_SHA3_512", CKM_IBM_SHA3_512 },
    { "CKM_IBM_SHA3_224_HMAC", CKM_IBM_SHA3_224_HMAC },
    { "CKM_IBM_SHA3_256_HMAC", CKM_IBM_SHA3_256_HMAC },
    { "CKM_IBM_SHA3_384_HMAC", CKM_IBM_SHA3_384_HMAC },
    { "CKM_IBM_SHA3_512_HMAC", CKM_IBM_SHA3_512_HMAC },
    { NULL_PTR, 0xFFFFFFFF }
};

#endif
