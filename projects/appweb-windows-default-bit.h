/*
    bit.h -- Build It Configuration Header for windows-x86-default

    This header is created by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */


/* Settings */
#ifndef BIT_BIT
    #define BIT_BIT "0.8.7"
#endif
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_CONFIG_FILE
    #define BIT_CONFIG_FILE "appweb.conf"
#endif
#ifndef BIT_DEBUG
    #define BIT_DEBUG 1
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DISCOVER
    #define BIT_DISCOVER "cgi,dir,doxygen,dsi,esp,man,man2html,mdb,pmaker,ssl,utest,zip"
#endif
#ifndef BIT_EJS_DB
    #define BIT_EJS_DB 1
#endif
#ifndef BIT_EJS_MAIL
    #define BIT_EJS_MAIL 1
#endif
#ifndef BIT_EJS_MAPPER
    #define BIT_EJS_MAPPER 1
#endif
#ifndef BIT_EJS_TAR
    #define BIT_EJS_TAR 1
#endif
#ifndef BIT_EJS_TEMPLATE
    #define BIT_EJS_TEMPLATE 1
#endif
#ifndef BIT_EJS_WEB
    #define BIT_EJS_WEB 1
#endif
#ifndef BIT_EJS_ZLIB
    #define BIT_EJS_ZLIB 1
#endif
#ifndef BIT_EJS_ONE_MODULE
    #define BIT_EJS_ONE_MODULE 1
#endif
#ifndef BIT_EST_CAMELLIA
    #define BIT_EST_CAMELLIA 0
#endif
#ifndef BIT_EST_DES
    #define BIT_EST_DES 0
#endif
#ifndef BIT_EST_GEN_PRIME
    #define BIT_EST_GEN_PRIME 0
#endif
#ifndef BIT_EST_PADLOCK
    #define BIT_EST_PADLOCK 0
#endif
#ifndef BIT_EST_ROM_TABLES
    #define BIT_EST_ROM_TABLES 0
#endif
#ifndef BIT_EST_SSL_CLIENT
    #define BIT_EST_SSL_CLIENT 0
#endif
#ifndef BIT_EST_TEST_CERTS
    #define BIT_EST_TEST_CERTS 0
#endif
#ifndef BIT_EST_XTEA
    #define BIT_EST_XTEA 0
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 0
#endif
#ifndef BIT_HAS_LIB_RT
    #define BIT_HAS_LIB_RT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_HTTP_PAM
    #define BIT_HTTP_PAM 1
#endif
#ifndef BIT_HTTP_STEALTH
    #define BIT_HTTP_STEALTH 1
#endif
#ifndef BIT_MANIFEST
    #define BIT_MANIFEST "package/manifest.bit"
#endif
#ifndef BIT_MPR_LOGGING
    #define BIT_MPR_LOGGING 1
#endif
#ifndef BIT_MPR_MANAGER
    #define BIT_MPR_MANAGER "appman"
#endif
#ifndef BIT_PACKS
    #define BIT_PACKS "bits/packs"
#endif
#ifndef BIT_PLATFORMS
    #define BIT_PLATFORMS "local"
#endif
#ifndef BIT_PREFIXES
    #define BIT_PREFIXES "embedthis-prefixes"
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "appweb"
#endif
#ifndef BIT_REQUIRES
    #define BIT_REQUIRES "winsdk,compiler,lib,link,rc,pcre"
#endif
#ifndef BIT_SERVER_ROOT
    #define BIT_SERVER_ROOT "."
#endif
#ifndef BIT_STATIC
    #define BIT_STATIC 0
#endif
#ifndef BIT_SYNC
    #define BIT_SYNC "bitos,est,http,mpr,pcre,sqlite,ejs"
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "Embedthis Appweb"
#endif
#ifndef BIT_TUNE
    #define BIT_TUNE "size"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "4.3.3"
#endif
#ifndef BIT_WITHOUT_ALL
    #define BIT_WITHOUT_ALL "cgi,dir,doxygen,dsi,ejscript,esp,man,man2html,pmaker,php,sqlite,ssl"
#endif

/* Prefixes */
#ifndef BIT_ROOT_PREFIX
    #define BIT_ROOT_PREFIX "C:"
#endif
#ifndef BIT_PROGRAMFILES_PREFIX
    #define BIT_PROGRAMFILES_PREFIX "C:/Program Files"
#endif
#ifndef BIT_PROGRAMFILES32_PREFIX
    #define BIT_PROGRAMFILES32_PREFIX "C:/Program Files"
#endif
#ifndef BIT_BASE_PREFIX
    #define BIT_BASE_PREFIX "C:/Program Files"
#endif
#ifndef BIT_APP_PREFIX
    #define BIT_APP_PREFIX "C:/Program Files/Embedthis Appweb"
#endif
#ifndef BIT_VAPP_PREFIX
    #define BIT_VAPP_PREFIX "C:/Program Files/Embedthis Appweb"
#endif
#ifndef BIT_DATA_PREFIX
    #define BIT_DATA_PREFIX "C:/Program Files/Embedthis Appweb"
#endif
#ifndef BIT_STATE_PREFIX
    #define BIT_STATE_PREFIX "C:/Program Files/Embedthis Appweb"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "C:/Program Files/Embedthis Appweb/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "C:/Program Files/Embedthis Appweb/inc"
#endif
#ifndef BIT_LIB_PREFIX
    #define BIT_LIB_PREFIX "C:/Program Files/Embedthis Appweb/lib"
#endif
#ifndef BIT_MAN_PREFIX
    #define BIT_MAN_PREFIX "C:/Program Files/Embedthis Appweb/man"
#endif
#ifndef BIT_ETC_PREFIX
    #define BIT_ETC_PREFIX "C:/Program Files/Embedthis Appweb"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "C:/Program Files/Embedthis Appweb/web"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "C:/Program Files/Embedthis Appweb/log"
#endif
#ifndef BIT_SPOOL_PREFIX
    #define BIT_SPOOL_PREFIX "C:/Program Files/Embedthis Appweb/tmp"
#endif
#ifndef BIT_CACHE_PREFIX
    #define BIT_CACHE_PREFIX "C:/Program Files/Embedthis Appweb/cache"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "C:/Program Files/Embedthis Appweb/src"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ".exe"
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".lib"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".dll"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".lib"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".obj"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform windows-x86-default -configure . -gen vs"
#endif
#ifndef BIT_APPWEB_PRODUCT
    #define BIT_APPWEB_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "default"
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 4
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 3
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 3
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 400030003
#endif

/* Packs */
#ifndef BIT_PACK_CGI
    #define BIT_PACK_CGI 1
#endif
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_DIR
    #define BIT_PACK_DIR 1
#endif
#ifndef BIT_PACK_DOXYGEN
    #define BIT_PACK_DOXYGEN 1
#endif
#ifndef BIT_PACK_DSI
    #define BIT_PACK_DSI 1
#endif
#ifndef BIT_PACK_EJSCRIPT
    #define BIT_PACK_EJSCRIPT 0
#endif
#ifndef BIT_PACK_ESP
    #define BIT_PACK_ESP 1
#endif
#ifndef BIT_PACK_EST
    #define BIT_PACK_EST 1
#endif
#ifndef BIT_PACK_LIB
    #define BIT_PACK_LIB 1
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_MAN
    #define BIT_PACK_MAN 1
#endif
#ifndef BIT_PACK_MAN2HTML
    #define BIT_PACK_MAN2HTML 1
#endif
#ifndef BIT_PACK_MATRIXSSL
    #define BIT_PACK_MATRIXSSL 0
#endif
#ifndef BIT_PACK_MDB
    #define BIT_PACK_MDB 1
#endif
#ifndef BIT_PACK_NANOSSL
    #define BIT_PACK_NANOSSL 0
#endif
#ifndef BIT_PACK_OPENSSL
    #define BIT_PACK_OPENSSL 0
#endif
#ifndef BIT_PACK_PCRE
    #define BIT_PACK_PCRE 1
#endif
#ifndef BIT_PACK_PHP
    #define BIT_PACK_PHP 0
#endif
#ifndef BIT_PACK_PMAKER
    #define BIT_PACK_PMAKER 1
#endif
#ifndef BIT_PACK_RC
    #define BIT_PACK_RC 1
#endif
#ifndef BIT_PACK_SDB
    #define BIT_PACK_SDB 0
#endif
#ifndef BIT_PACK_SQLITE
    #define BIT_PACK_SQLITE 0
#endif
#ifndef BIT_PACK_SSL
    #define BIT_PACK_SSL 1
#endif
#ifndef BIT_PACK_UTEST
    #define BIT_PACK_UTEST 1
#endif
#ifndef BIT_PACK_VXWORKS
    #define BIT_PACK_VXWORKS 0
#endif
#ifndef BIT_PACK_WINSDK
    #define BIT_PACK_WINSDK 1
#endif
#ifndef BIT_PACK_ZIP
    #define BIT_PACK_ZIP 1
#endif
