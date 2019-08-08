#ifdef _WIN32
#include <aes.h>
#include <sha.h>
#include <modes.h>
#include <zlib.h>
#include <osrng.h>
#include <files.h>
#include <pwdbased.h>
#include <hex.h>
#include <eax.h>
#include <gcm.h>
#include <filters.h>
#include <eccrypto.h>
#include <oids.h>
#include <dsa.h>
#include <crc.h>
#else
#include "../config.h"
#define CRYPTOPP_INCLUDE_AES <CRYPTOPP_INCLUDE_PREFIX/aes.h>
#define CRYPTOPP_INCLUDE_SHA <CRYPTOPP_INCLUDE_PREFIX/sha.h>
#define CRYPTOPP_INCLUDE_MODES <CRYPTOPP_INCLUDE_PREFIX/modes.h>
#define CRYPTOPP_INCLUDE_ZLIB <CRYPTOPP_INCLUDE_PREFIX/zlib.h>
#define CRYPTOPP_INCLUDE_OSRNG <CRYPTOPP_INCLUDE_PREFIX/osrng.h>
#define CRYPTOPP_INCLUDE_FILES <CRYPTOPP_INCLUDE_PREFIX/files.h>
#define CRYPTOPP_INCLUDE_PWDBASED <CRYPTOPP_INCLUDE_PREFIX/pwdbased.h>
#define CRYPTOPP_INCLUDE_HEX <CRYPTOPP_INCLUDE_PREFIX/hex.h>
#define CRYPTOPP_INCLUDE_EAX <CRYPTOPP_INCLUDE_PREFIX/eax.h>
#define CRYPTOPP_INCLUDE_GCM <CRYPTOPP_INCLUDE_PREFIX/gcm.h>
#define CRYPTOPP_INCLUDE_FILTERS <CRYPTOPP_INCLUDE_PREFIX/filters.h>
#define CRYPTOPP_INCLUDE_ECCRYPTO <CRYPTOPP_INCLUDE_PREFIX/eccrypto.h>
#define CRYPTOPP_INCLUDE_OIDS <CRYPTOPP_INCLUDE_PREFIX/oids.h>
#define CRYPTOPP_INCLUDE_DSA <CRYPTOPP_INCLUDE_PREFIX/dsa.h>
#define CRYPTOPP_INCLUDE_CRC <CRYPTOPP_INCLUDE_PREFIX/crc.h>

#include CRYPTOPP_INCLUDE_AES
#include CRYPTOPP_INCLUDE_SHA
#include CRYPTOPP_INCLUDE_MODES
#include CRYPTOPP_INCLUDE_ZLIB
#include CRYPTOPP_INCLUDE_OSRNG
#include CRYPTOPP_INCLUDE_FILES
#include CRYPTOPP_INCLUDE_PWDBASED
#include CRYPTOPP_INCLUDE_HEX
#include CRYPTOPP_INCLUDE_EAX
#include CRYPTOPP_INCLUDE_GCM
#include CRYPTOPP_INCLUDE_FILTERS
#include CRYPTOPP_INCLUDE_ECCRYPTO
#include CRYPTOPP_INCLUDE_OIDS
#include CRYPTOPP_INCLUDE_DSA
#if (CRYPTOPP_VERSION >= 564)
#include CRYPTOPP_INCLUDE_CRC
#endif
#endif

namespace CryptoPPCompat
{
#if (CRYPTOPP_VERSION >= 600)
	typedef unsigned char byte;
#endif
}