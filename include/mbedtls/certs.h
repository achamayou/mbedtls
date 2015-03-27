/**
 * \file certs.h
 *
 * \brief Sample certificates and DHM parameters for testing
 *
 *  Copyright (C) 2006-2010, ARM Limited, All Rights Reserved
 *
 *  This file is part of mbed TLS (https://tls.mbed.org)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef POLARSSL_CERTS_H
#define POLARSSL_CERTS_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Concatenation of all available CA certificates */
extern const char   test_ca_list[];
extern const size_t test_ca_list_len;

/*
 * Convenience for users who just want a certificate:
 * RSA by default, or ECDSA if RSA is not available
 */
extern const char * test_ca_crt;
extern const size_t test_ca_crt_len;
extern const char * test_ca_key;
extern const size_t test_ca_key_len;
extern const char * test_ca_pwd;
extern const size_t test_ca_pwd_len;
extern const char * test_srv_crt;
extern const size_t test_srv_crt_len;
extern const char * test_srv_key;
extern const size_t test_srv_key_len;
extern const char * test_cli_crt;
extern const size_t test_cli_crt_len;
extern const char * test_cli_key;
extern const size_t test_cli_key_len;

#if defined(POLARSSL_ECDSA_C)
extern const char   test_ca_crt_ec[];
extern const size_t test_ca_crt_ec_len;
extern const char   test_ca_key_ec[];
extern const size_t test_ca_key_ec_len;
extern const char   test_ca_pwd_ec[];
extern const size_t test_ca_pwd_ec_len;
extern const char   test_srv_crt_ec[];
extern const size_t test_srv_crt_ec_len;
extern const char   test_srv_key_ec[];
extern const size_t test_srv_key_ec_len;
extern const char   test_cli_crt_ec[];
extern const size_t test_cli_crt_ec_len;
extern const char   test_cli_key_ec[];
extern const size_t test_cli_key_ec_len;
#endif

#if defined(POLARSSL_RSA_C)
extern const char   test_ca_crt_rsa[];
extern const size_t test_ca_crt_rsa_len;
extern const char   test_ca_key_rsa[];
extern const size_t test_ca_key_rsa_len;
extern const char   test_ca_pwd_rsa[];
extern const size_t test_ca_pwd_rsa_len;
extern const char   test_srv_crt_rsa[];
extern const size_t test_srv_crt_rsa_len;
extern const char   test_srv_key_rsa[];
extern const size_t test_srv_key_rsa_len;
extern const char   test_cli_crt_rsa[];
extern const size_t test_cli_crt_rsa_len;
extern const char   test_cli_key_rsa[];
extern const size_t test_cli_key_rsa_len;
#endif

#if defined(POLARSSL_DHM_C)
extern const char   test_dhm_params[];
extern const size_t test_dhm_params_len;
#endif

#ifdef __cplusplus
}
#endif

#endif /* certs.h */