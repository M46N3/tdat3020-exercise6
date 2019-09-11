#include "format.hpp"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
	format(reinterpret_cast<const char *>(Data), Size);
	return 0;  // Non-zero return values are reserved for future use.
}
