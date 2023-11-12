#pragma once
// dummy header

// some common pal stuff
#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif // __cplusplus

// gcc does not support this
#define __declspec(X)