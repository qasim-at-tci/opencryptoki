nobase_lib_LTLIBRARIES += opencryptoki/stdll/libpkcs11_cca.la

EXTRA_DIST += usr/lib/cca_stdll/ccatok.conf

noinst_HEADERS +=							\
	usr/lib/cca_stdll/defs.h usr/lib/cca_stdll/csulincl.h		\
	usr/lib/cca_stdll/cca_stdll.h usr/lib/cca_stdll/cca_func.h	\
	usr/lib/cca_stdll/tok_struct.h

opencryptoki_stdll_libpkcs11_cca_la_CFLAGS =				\
	-DLINUX -DNODSA -DNODH						\
	-DTOK_NEW_DATA_STORE=0x0003000c					\
	-I${srcdir}/usr/lib/cca_stdll -I${srcdir}/usr/lib/common	\
	-I${srcdir}/usr/include -DSTDLL_NAME=\"ccatok\"			\
	-I${top_builddir}/usr/lib/api -I${srcdir}/usr/lib/api		\
	-I${top_builddir}/usr/lib/config -I${srcdir}/usr/lib/config	\
	-I${srcdir}/usr/lib/hsm_mk_change 				\
	-I${top_builddir}/usr/lib/hsm_mk_change

if AIX
opencryptoki_stdll_libpkcs11_cca_la_LDFLAGS = -qmkshrobj -lcrypto \
	-lpthread -qnocrt -lrt -ldl -Wl,-bnoautoexp -Wl,-bstatic,-llber,-bdynamic \
	-export-symbols ${srcdir}/opencryptoki_tok.map.sym
else
opencryptoki_stdll_libpkcs11_cca_la_LDFLAGS = -shared			\
	-Wl,-z,defs,-Bsymbolic -lcrypto -lpthread -nostartfiles		\
	-Wl,-soname,$@ -lrt -ldl -llber					\
	-Wl,--version-script=${srcdir}/opencryptoki_tok.map
endif

opencryptoki_stdll_libpkcs11_cca_la_SOURCES = usr/lib/common/asn1.c	\
	usr/lib/common/dig_mgr.c usr/lib/common/hwf_obj.c		\
	usr/lib/common/trace.c usr/lib/common/key.c			\
	usr/lib/common/mech_list.c usr/lib/common/mech_dh.c		\
	usr/lib/common/mech_rng.c usr/lib/common/new_host.c		\
	usr/lib/common/sign_mgr.c usr/lib/common/cert.c			\
	usr/lib/common/dp_obj.c usr/lib/common/mech_aes.c		\
	usr/lib/common/mech_rsa.c usr/lib/common/mech_ec.c		\
	usr/lib/common/obj_mgr.c usr/lib/common/template.c		\
	usr/lib/common/data_obj.c usr/lib/common/encr_mgr.c		\
	usr/lib/common/key_mgr.c usr/lib/common/mech_md2.c		\
	usr/lib/common/mech_sha.c usr/lib/common/object.c		\
	usr/lib/common/decr_mgr.c usr/lib/common/globals.c		\
	usr/lib/common/loadsave.c usr/lib/common/utility.c		\
	usr/lib/common/mech_des.c usr/lib/common/mech_des3.c		\
	usr/lib/common/mech_md5.c usr/lib/common/mech_ssl3.c		\
	usr/lib/common/verify_mgr.c usr/lib/common/p11util.c		\
	usr/lib/common/sw_crypt.c usr/lib/common/shared_memory.c	\
	usr/lib/common/profile_obj.c usr/lib/cca_stdll/cca_specific.c	\
	usr/lib/common/attributes.c usr/lib/common/dlist.c		\
	usr/lib/common/utility_common.c usr/lib/common/ec_supported.c	\
	usr/lib/api/policyhelper.c usr/lib/config/configuration.c	\
	usr/lib/config/cfgparse.y usr/lib/config/cfglex.l		\
	usr/lib/common/mech_openssl.c usr/lib/common/pqc_supported.c	\
	usr/lib/hsm_mk_change/hsm_mk_change.c				\
	usr/lib/common/btree.c usr/lib/common/sess_mgr.c		\
	usr/lib/cca_stdll/cca_mkchange.c usr/lib/common/mech_pqc.c

if AIX
opencryptoki_stdll_libpkcs11_cca_la_SOURCES += usr/lib/common/aix/short_name.c
endif

if !NO_PKEY
opencryptoki_stdll_libpkcs11_cca_la_SOURCES +=				\
	usr/lib/common/pkey_utils.c
endif	
