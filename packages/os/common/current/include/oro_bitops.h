#include <pkgconf/os.h>
#ifdef OROBLD_OS_AGNOSTIC
# if defined(OROBLD_OS_ARCH_i386)
#  include "oro_i386/oro_bitops.h"
# elif defined(OROBLD_OS_ARCH_x86_64)
#  include "oro_x86_64/oro_bitops.h"
# else
#  error "Unknown Processor Architecture"
# endif
#else
#include <asm/bitops.h>
#endif
