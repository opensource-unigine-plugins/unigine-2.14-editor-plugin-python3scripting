// this file automaticly generated from UnigineUGUID.h
#include "python3_unigine_uguid.h"

#include <string>
#include <UnigineGUID.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_UGUID

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::UGUID * unigine_object_ptr;
} unigine_UGUID;

static void unigine_UGUID_dealloc(unigine_UGUID* self) {
    // Unigine::Log::message("unigine_UGUID_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_UGUID_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_UGUID_new\n");
    unigine_UGUID *self;
    self = (unigine_UGUID *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_UGUID_init(unigine_UGUID *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::UGUID();
    return 0;
}


// public : generate
static PyObject * unigine_UGUID_generate(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    self->unigine_object_ptr->generate();

    // end
    // return: void
    return ret;
};

// public : generate
static PyObject * unigine_UGUID_generate(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * str_;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * str_ = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->generate(str_);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : generate
static PyObject * unigine_UGUID_generate(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int & seed_;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int & seed_ = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->generate(seed_);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : generate
static PyObject * unigine_UGUID_generate(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const void * data;
    PyObject *pArg2; // int size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const void * data = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    int size = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->generate(data, size);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getFileSystemString
static PyObject * unigine_UGUID_get_file_system_string(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const char *
    return ret;
};

// public : setFileSystemString
static PyObject * unigine_UGUID_set_file_system_string(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * str_;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * str_ = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setFileSystemString(str_);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getValue
static PyObject * unigine_UGUID_get_value(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const unsigned char *
    return ret;
};

// public : getString
static PyObject * unigine_UGUID_get_string(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const char *
    return ret;
};

// public : setString
static PyObject * unigine_UGUID_set_string(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * str_;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * str_ = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setString(str_);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : clear
static PyObject * unigine_UGUID_clear(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    self->unigine_object_ptr->clear();

    // end
    // return: void
    return ret;
};

// public : isEmpty
static PyObject * unigine_UGUID_is_empty(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isEmpty();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isValid
static PyObject * unigine_UGUID_is_valid(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isValid();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : get
static PyObject * unigine_UGUID_get(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const char *
    return ret;
};

// public : get
static PyObject * unigine_UGUID_get(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int index = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: char &
    return ret;
};

// public : get
static PyObject * unigine_UGUID_get(unigine_UGUID* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int index = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: char
    return ret;
};

// public : hash
static PyObject * unigine_UGUID_hash(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: unsigned int
    return ret;
};

// public : hashLong
static PyObject * unigine_UGUID_hash_long(unigine_UGUID* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: long long unsigned int
    return ret;
};


static PyMethodDef unigine_UGUID_methods[] = {
    {
        "generate", (PyCFunction)unigine_UGUID_generate, METH_NOARGS,
        "public : generate"
    },
    {
        "generate", (PyCFunction)unigine_UGUID_generate, METH_VARARGS,
        "public : generate"
    },
    {
        "generate", (PyCFunction)unigine_UGUID_generate, METH_VARARGS,
        "public : generate"
    },
    {
        "generate", (PyCFunction)unigine_UGUID_generate, METH_VARARGS,
        "public : generate"
    },
    {
        "get_file_system_string", (PyCFunction)unigine_UGUID_get_file_system_string, METH_NOARGS,
        "public : getFileSystemString"
    },
    {
        "set_file_system_string", (PyCFunction)unigine_UGUID_set_file_system_string, METH_VARARGS,
        "public : setFileSystemString"
    },
    {
        "get_value", (PyCFunction)unigine_UGUID_get_value, METH_NOARGS,
        "public : getValue"
    },
    {
        "get_string", (PyCFunction)unigine_UGUID_get_string, METH_NOARGS,
        "public : getString"
    },
    {
        "set_string", (PyCFunction)unigine_UGUID_set_string, METH_VARARGS,
        "public : setString"
    },
    {
        "clear", (PyCFunction)unigine_UGUID_clear, METH_NOARGS,
        "public : clear"
    },
    {
        "is_empty", (PyCFunction)unigine_UGUID_is_empty, METH_NOARGS,
        "public : isEmpty"
    },
    {
        "is_valid", (PyCFunction)unigine_UGUID_is_valid, METH_NOARGS,
        "public : isValid"
    },
    {
        "get", (PyCFunction)unigine_UGUID_get, METH_NOARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_UGUID_get, METH_VARARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_UGUID_get, METH_VARARGS,
        "public : get"
    },
    {
        "hash", (PyCFunction)unigine_UGUID_hash, METH_NOARGS,
        "public : hash"
    },
    {
        "hash_long", (PyCFunction)unigine_UGUID_hash_long, METH_NOARGS,
        "public : hashLong"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_UGUIDType = {


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.UGUID",             // tp_name
    sizeof(unigine_UGUID) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_UGUID_dealloc,   // tp_dealloc
    0,                         // tp_vectorcall_offset
    0,                         // tp_getattr
    0,                         // tp_setattr
    0,                         // tp_as_async
    0,                         // tp_repr
    0,                         // tp_as_number
    0,                         // tp_as_sequence
    0,                         // tp_as_mapping
    0,                         // tp_hash
    0,                         // tp_call
    0,                         // tp_str
    0,                         // tp_getattro
    0,                         // tp_setattro
    0,                         // tp_as_buffer
    Py_TPFLAGS_DEFAULT,        // tp_flags
    "UGUID Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_UGUID_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_UGUID_init, // tp_init
    0, // tp_alloc
    unigine_UGUID_new, // tp_new
};

PyObject * UGUID::NewObject(Unigine::UGUID * unigine_object_ptr) {

    std::cout << "sizeof(unigine_UGUID) = " << sizeof(unigine_UGUID) << std::endl;

    unigine_UGUID *pInst = PyObject_New(unigine_UGUID, &unigine_UGUIDType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::UGUID * UGUID::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_UGUIDType) == 0) {
        // TODO error
    }
    unigine_UGUID *pInst = (unigine_UGUID *)pObject;
    return pInst->unigine_object_ptr;
}

// UniginePyTypeObjectUGUID

bool Python3UnigineUGUID::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_UGUIDType.tp_dict) {
        unigine_UGUIDType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_UGUIDType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineUGUID::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_UGUIDType);
    if (PyModule_AddObject(pModule, "UGUID", (PyObject *)&unigine_UGUIDType) < 0) {
        Py_DECREF(&unigine_UGUIDType);
        return false;
    }
    return true;
}


}; // namespace PyUnigine
