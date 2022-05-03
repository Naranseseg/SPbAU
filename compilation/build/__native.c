#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native.h"
#include "__native_internal.h"
static PyMethodDef module_methods[] = {
    {"GCD", (PyCFunction)CPyPy_GCD, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "prog_11_13dec",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyMODINIT_FUNC PyInit_prog_11_13dec(void)
{
    PyObject* modname = NULL;
    if (CPyModule_prog_11_13dec_internal) {
        Py_INCREF(CPyModule_prog_11_13dec_internal);
        return CPyModule_prog_11_13dec_internal;
    }
    CPyModule_prog_11_13dec_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_prog_11_13dec_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_prog_11_13dec_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_prog_11_13dec_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_prog_11_13dec_internal;
    fail:
    Py_CLEAR(CPyModule_prog_11_13dec_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_GCD(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_multiplier;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_num_1;
    PyObject *cpy_r_num_2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_num_3;
    PyObject *cpy_r_num_4;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_quotient;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_coefficient_1;
    PyObject *cpy_r_coefficient_2;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
CPyL0: ;
    cpy_r_r0 = CPyTagged_StealAsObject(2);
    cpy_r_multiplier = cpy_r_r0;
    CPy_INCREF(cpy_r_a);
    cpy_r_r1 = cpy_r_a;
    CPy_INCREF(cpy_r_b);
    cpy_r_r2 = cpy_r_b;
    cpy_r_num_1 = cpy_r_r1;
    cpy_r_num_2 = cpy_r_r2;
CPyL1: ;
    cpy_r_r3 = CPyTagged_StealAsObject(0);
    cpy_r_r4 = PyObject_RichCompare(cpy_r_num_1, cpy_r_r3, 3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 4, CPyStatic_globals);
        goto CPyL68;
    }
CPyL2: ;
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 4, CPyStatic_globals);
        goto CPyL68;
    }
CPyL3: ;
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL14;
CPyL4: ;
    cpy_r_r8 = CPyTagged_StealAsObject(0);
    cpy_r_r9 = PyObject_RichCompare(cpy_r_num_2, cpy_r_r8, 3);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 4, CPyStatic_globals);
        goto CPyL68;
    }
CPyL5: ;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 4, CPyStatic_globals);
        goto CPyL68;
    }
CPyL6: ;
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL14;
CPyL7: ;
    cpy_r_r13 = PyObject_RichCompare(cpy_r_num_1, cpy_r_num_2, 4);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 5, CPyStatic_globals);
        goto CPyL68;
    }
CPyL8: ;
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 5, CPyStatic_globals);
        goto CPyL68;
    }
CPyL9: ;
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL12;
CPyL10: ;
    cpy_r_r17 = PyNumber_Remainder(cpy_r_num_1, cpy_r_num_2);
    CPy_DECREF(cpy_r_num_1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 6, CPyStatic_globals);
        goto CPyL69;
    }
CPyL11: ;
    cpy_r_num_1 = cpy_r_r17;
    goto CPyL1;
CPyL12: ;
    cpy_r_r18 = PyNumber_Remainder(cpy_r_num_2, cpy_r_num_1);
    CPy_DECREF(cpy_r_num_2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 8, CPyStatic_globals);
        goto CPyL70;
    }
CPyL13: ;
    cpy_r_num_2 = cpy_r_r18;
    goto CPyL1;
CPyL14: ;
    cpy_r_r19 = PyObject_RichCompare(cpy_r_num_2, cpy_r_num_1, 4);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL68;
    }
CPyL15: ;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL68;
    }
CPyL16: ;
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL18;
CPyL17: ;
    CPy_INCREF(cpy_r_num_2);
    cpy_r_r23 = cpy_r_num_2;
    goto CPyL19;
CPyL18: ;
    CPy_INCREF(cpy_r_num_1);
    cpy_r_r23 = cpy_r_num_1;
CPyL19: ;
    cpy_r_r24 = PyNumber_TrueDivide(cpy_r_a, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL68;
    }
CPyL20: ;
    cpy_r_r25 = cpy_r_r24;
    cpy_r_r26 = PyObject_RichCompare(cpy_r_num_2, cpy_r_num_1, 4);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL71;
    }
CPyL21: ;
    cpy_r_r27 = PyObject_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL71;
    }
CPyL22: ;
    cpy_r_r29 = cpy_r_r27;
    if (!cpy_r_r29) goto CPyL24;
CPyL23: ;
    CPy_INCREF(cpy_r_num_2);
    cpy_r_r30 = cpy_r_num_2;
    goto CPyL25;
CPyL24: ;
    CPy_INCREF(cpy_r_num_1);
    cpy_r_r30 = cpy_r_num_1;
CPyL25: ;
    cpy_r_r31 = PyNumber_TrueDivide(cpy_r_b, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 9, CPyStatic_globals);
        goto CPyL71;
    }
CPyL26: ;
    cpy_r_r32 = cpy_r_r31;
    cpy_r_num_3 = cpy_r_r25;
    cpy_r_num_4 = cpy_r_r32;
    cpy_r_r33 = PyObject_RichCompare(cpy_r_num_4, cpy_r_num_3, 4);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 10, CPyStatic_globals);
        goto CPyL72;
    }
CPyL27: ;
    cpy_r_r34 = PyObject_IsTrue(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 10, CPyStatic_globals);
        goto CPyL72;
    }
CPyL28: ;
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL30;
CPyL29: ;
    CPy_INCREF(cpy_r_num_4);
    cpy_r_r37 = cpy_r_num_4;
    goto CPyL31;
CPyL30: ;
    CPy_INCREF(cpy_r_num_3);
    cpy_r_r37 = cpy_r_num_3;
CPyL31: ;
    cpy_r_quotient = cpy_r_r37;
    cpy_r_r38 = PyObject_RichCompare(cpy_r_num_3, cpy_r_num_4, 4);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 11, CPyStatic_globals);
        goto CPyL73;
    }
CPyL32: ;
    cpy_r_r39 = PyObject_IsTrue(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 11, CPyStatic_globals);
        goto CPyL73;
    }
CPyL33: ;
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL43;
CPyL34: ;
    cpy_r_r42 = CPyTagged_StealAsObject(2);
    cpy_r_r43 = PyNumber_Subtract(cpy_r_num_3, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 12, CPyStatic_globals);
        goto CPyL73;
    }
CPyL35: ;
    cpy_r_r44 = PyNumber_Remainder(cpy_r_r43, cpy_r_num_4);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 12, CPyStatic_globals);
        goto CPyL73;
    }
CPyL36: ;
    cpy_r_r45 = CPyTagged_StealAsObject(0);
    cpy_r_r46 = PyObject_RichCompare(cpy_r_r44, cpy_r_r45, 3);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 12, CPyStatic_globals);
        goto CPyL73;
    }
CPyL37: ;
    cpy_r_r47 = PyObject_IsTrue(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 12, CPyStatic_globals);
        goto CPyL73;
    }
CPyL38: ;
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL51;
CPyL39: ;
    cpy_r_r50 = PyNumber_Add(cpy_r_num_3, cpy_r_quotient);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 13, CPyStatic_globals);
        goto CPyL73;
    }
CPyL40: ;
    cpy_r_r51 = PyNumber_InPlaceAdd(cpy_r_num_3, cpy_r_r50);
    CPy_DECREF(cpy_r_num_3);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 13, CPyStatic_globals);
        goto CPyL74;
    }
CPyL41: ;
    cpy_r_num_3 = cpy_r_r51;
    cpy_r_r52 = CPyTagged_StealAsObject(2);
    cpy_r_r53 = PyNumber_InPlaceAdd(cpy_r_multiplier, cpy_r_r52);
    CPy_DECREF(cpy_r_multiplier);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 14, CPyStatic_globals);
        goto CPyL75;
    }
CPyL42: ;
    cpy_r_multiplier = cpy_r_r53;
    goto CPyL34;
CPyL43: ;
    cpy_r_r54 = CPyTagged_StealAsObject(2);
    cpy_r_r55 = PyNumber_Subtract(cpy_r_num_4, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 16, CPyStatic_globals);
        goto CPyL73;
    }
CPyL44: ;
    cpy_r_r56 = PyNumber_Remainder(cpy_r_r55, cpy_r_num_3);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 16, CPyStatic_globals);
        goto CPyL73;
    }
CPyL45: ;
    cpy_r_r57 = CPyTagged_StealAsObject(0);
    cpy_r_r58 = PyObject_RichCompare(cpy_r_r56, cpy_r_r57, 3);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 16, CPyStatic_globals);
        goto CPyL73;
    }
CPyL46: ;
    cpy_r_r59 = PyObject_IsTrue(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 16, CPyStatic_globals);
        goto CPyL73;
    }
CPyL47: ;
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL51;
CPyL48: ;
    cpy_r_r62 = PyNumber_InPlaceAdd(cpy_r_num_4, cpy_r_quotient);
    CPy_DECREF(cpy_r_num_4);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 17, CPyStatic_globals);
        goto CPyL76;
    }
CPyL49: ;
    cpy_r_num_4 = cpy_r_r62;
    cpy_r_r63 = CPyTagged_StealAsObject(2);
    cpy_r_r64 = PyNumber_InPlaceAdd(cpy_r_multiplier, cpy_r_r63);
    CPy_DECREF(cpy_r_multiplier);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 18, CPyStatic_globals);
        goto CPyL75;
    }
CPyL50: ;
    cpy_r_multiplier = cpy_r_r64;
    goto CPyL43;
CPyL51: ;
    CPy_INCREF(cpy_r_multiplier);
    cpy_r_r65 = cpy_r_multiplier;
    cpy_r_r66 = PyNumber_Multiply(cpy_r_multiplier, cpy_r_quotient);
    CPy_DECREF(cpy_r_multiplier);
    CPy_DECREF(cpy_r_quotient);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL77;
    }
CPyL52: ;
    cpy_r_r67 = CPyTagged_StealAsObject(2);
    cpy_r_r68 = PyNumber_Subtract(cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL77;
    }
CPyL53: ;
    cpy_r_r69 = PyObject_RichCompare(cpy_r_num_4, cpy_r_num_3, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL78;
    }
CPyL54: ;
    cpy_r_r70 = PyObject_IsTrue(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL78;
    }
CPyL55: ;
    cpy_r_r72 = cpy_r_r70;
    if (cpy_r_r72) {
        goto CPyL79;
    } else
        goto CPyL80;
CPyL56: ;
    cpy_r_r73 = cpy_r_num_4;
    goto CPyL58;
CPyL57: ;
    cpy_r_r73 = cpy_r_num_3;
CPyL58: ;
    cpy_r_r74 = PyNumber_TrueDivide(cpy_r_r68, cpy_r_r73);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL81;
    }
CPyL59: ;
    cpy_r_r75 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r76[1] = {cpy_r_r74};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_r75, cpy_r_r77, 1, 0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL82;
    }
CPyL60: ;
    CPy_DECREF(cpy_r_r74);
    cpy_r_r79 = PyNumber_Negative(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 19, CPyStatic_globals);
        goto CPyL81;
    }
CPyL61: ;
    cpy_r_r80 = cpy_r_r79;
    cpy_r_coefficient_1 = cpy_r_r65;
    cpy_r_coefficient_2 = cpy_r_r80;
    cpy_r_r81 = PyObject_RichCompare(cpy_r_num_2, cpy_r_num_1, 4);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 20, CPyStatic_globals);
        goto CPyL83;
    }
CPyL62: ;
    cpy_r_r82 = PyObject_IsTrue(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("prog_11_13dec.py", "GCD", 20, CPyStatic_globals);
        goto CPyL83;
    }
CPyL63: ;
    cpy_r_r84 = cpy_r_r82;
    if (cpy_r_r84) {
        goto CPyL84;
    } else
        goto CPyL85;
CPyL64: ;
    cpy_r_r85 = cpy_r_num_2;
    goto CPyL66;
CPyL65: ;
    cpy_r_r85 = cpy_r_num_1;
CPyL66: ;
    cpy_r_r86.f0 = cpy_r_coefficient_1;
    cpy_r_r86.f1 = cpy_r_coefficient_2;
    cpy_r_r86.f2 = cpy_r_r85;
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_INCREF(cpy_r_r86.f2);
    CPy_DECREF(cpy_r_coefficient_1);
    CPy_DECREF(cpy_r_coefficient_2);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = PyTuple_New(3);
    if (unlikely(cpy_r_r87 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1 = cpy_r_r86.f0;
    PyTuple_SET_ITEM(cpy_r_r87, 0, __tmp1);
    PyObject *__tmp2 = cpy_r_r86.f1;
    PyTuple_SET_ITEM(cpy_r_r87, 1, __tmp2);
    PyObject *__tmp3 = cpy_r_r86.f2;
    PyTuple_SET_ITEM(cpy_r_r87, 2, __tmp3);
    return cpy_r_r87;
CPyL67: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL68: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    goto CPyL67;
CPyL69: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_2);
    goto CPyL67;
CPyL70: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    goto CPyL67;
CPyL71: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_r25);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_num_4);
    goto CPyL67;
CPyL73: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_num_4);
    CPy_DecRef(cpy_r_quotient);
    goto CPyL67;
CPyL74: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_4);
    CPy_DecRef(cpy_r_quotient);
    goto CPyL67;
CPyL75: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_num_4);
    CPy_DecRef(cpy_r_quotient);
    goto CPyL67;
CPyL76: ;
    CPy_DecRef(cpy_r_multiplier);
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_quotient);
    goto CPyL67;
CPyL77: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_num_4);
    CPy_DecRef(cpy_r_r65);
    goto CPyL67;
CPyL78: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_num_3);
    CPy_DecRef(cpy_r_num_4);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r68);
    goto CPyL67;
CPyL79: ;
    CPy_DECREF(cpy_r_num_3);
    goto CPyL56;
CPyL80: ;
    CPy_DECREF(cpy_r_num_4);
    goto CPyL57;
CPyL81: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_r65);
    goto CPyL67;
CPyL82: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r74);
    goto CPyL67;
CPyL83: ;
    CPy_DecRef(cpy_r_num_1);
    CPy_DecRef(cpy_r_num_2);
    CPy_DecRef(cpy_r_coefficient_1);
    CPy_DecRef(cpy_r_coefficient_2);
    goto CPyL67;
CPyL84: ;
    CPy_DECREF(cpy_r_num_1);
    goto CPyL64;
CPyL85: ;
    CPy_DECREF(cpy_r_num_2);
    goto CPyL65;
}

PyObject *CPyPy_GCD(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:GCD", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a = obj_a;
    PyObject *arg_b = obj_b;
    PyObject *retval = CPyDef_GCD(arg_a, arg_b);
    return retval;
fail: ;
    CPy_AddTraceback("prog_11_13dec.py", "GCD", 1, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
CPyL0: ;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
CPyL1: ;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "<module>", -1, CPyStatic_globals);
        goto CPyL7;
    }
CPyL2: ;
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyTagged_StealAsObject(98);
    cpy_r_r6 = CPyTagged_StealAsObject(84);
    cpy_r_r7 = CPyDef_GCD(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "<module>", 21, CPyStatic_globals);
        goto CPyL7;
    }
CPyL4: ;
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[4]; /* 'print' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "<module>", 21, CPyStatic_globals);
        goto CPyL8;
    }
CPyL5: ;
    PyObject *cpy_r_r11[1] = {cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("prog_11_13dec.py", "<module>", 21, CPyStatic_globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL6: ;
    CPy_DECREF(cpy_r_r7);
    return 1;
CPyL7: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL8: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
CPyL9: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL6;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_prog_11_13dec = Py_None;
    CPyModule_builtins = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[5];
const char * const CPyLit_Str[] = {
    "\002\bbuiltins\005print",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {0};
CPyModule *CPyModule_prog_11_13dec_internal = NULL;
CPyModule *CPyModule_prog_11_13dec;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins_internal = NULL;
CPyModule *CPyModule_builtins;
PyObject *CPyDef_GCD(PyObject *cpy_r_a, PyObject *cpy_r_b);
PyObject *CPyPy_GCD(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
