// C++ new / delete through mimalloc (third_party/mimalloc, compiled into build/mimalloc.o):
// libcdr and librevenge make millions of small allocations while loading a big plan, which
// macOS's malloc does slowly (a quarter of the loading time). Only C++ code uses it: the
// SVG / CorelDRAW libraries; the viewer and the decoders keep the system malloc.
#include <mimalloc-new-delete.h>
