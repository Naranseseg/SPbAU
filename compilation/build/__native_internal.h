#ifndef MYPYC_NATIVE_INTERNAL_H
#define MYPYC_NATIVE_INTERNAL_H
#include <Python.h>
#include <CPy.h>
#include "__native.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[5];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern CPyModule *CPyModule_prog_11_13dec_internal;
extern CPyModule *CPyModule_prog_11_13dec;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins_internal;
extern CPyModule *CPyModule_builtins;
extern PyObject *CPyDef_GCD(PyObject *cpy_r_a, PyObject *cpy_r_b);
extern PyObject *CPyPy_GCD(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
