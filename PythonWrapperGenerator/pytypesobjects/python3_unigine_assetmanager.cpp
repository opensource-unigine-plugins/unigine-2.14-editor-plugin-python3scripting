// this file automaticly generated from UnigineAssetManager.h
#include "python3_unigine_assetmanager.h"

#include <string>
#include <editor/UnigineAssetManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_AssetManager

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_AssetManager;

static void unigine_AssetManager_dealloc(unigine_AssetManager* self) {
    // Unigine::Log::message("unigine_AssetManager_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_AssetManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_AssetManager_new\n");
    unigine_AssetManager *self;
    self = (unigine_AssetManager *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_AssetManager_init(unigine_AssetManager *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_AssetManager_is_initialized(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isInitialized();
            };
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public (static): getAssetGUIDFromPath
static PyObject * unigine_AssetManager_get_asset_guid_from_path(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetGUIDFromPath(asset_path);
            };
            // args
            const char * asset_path;
            // return
            Unigine::UGUID retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::UGUID retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::UGUID
    return ret;
};

// public (static): getAssetPathFromGUID
static PyObject * unigine_AssetManager_get_asset_path_from_guid(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & asset_guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetPathFromGUID(asset_guid);
            };
            // args
            const Unigine::UGUID & asset_guid;
            // return
            Unigine::String retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_guid = asset_guid;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::String retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::String
    return ret;
};

// public (static): importAssetSync
static PyObject * unigine_AssetManager_import_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<UnigineEditor::Collection> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::importAssetSync(asset_path, import_parameters);
            };
            // args
            const char * asset_path;
            const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->import_parameters = import_parameters;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): importAssetAsync
static PyObject * unigine_AssetManager_import_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<UnigineEditor::Collection> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::importAssetAsync(asset_path, import_parameters);
            };
            // args
            const char * asset_path;
            const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->import_parameters = import_parameters;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): reimportAssetSync
static PyObject * unigine_AssetManager_reimport_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<UnigineEditor::Collection> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::reimportAssetSync(asset_path, import_parameters);
            };
            // args
            const char * asset_path;
            const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->import_parameters = import_parameters;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): reimportAssetAsync
static PyObject * unigine_AssetManager_reimport_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<UnigineEditor::Collection> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::reimportAssetAsync(asset_path, import_parameters);
            };
            // args
            const char * asset_path;
            const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->import_parameters = import_parameters;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): removeAssetSync
static PyObject * unigine_AssetManager_remove_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::removeAssetSync(asset_path);
            };
            // args
            const char * asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): removeAssetAsync
static PyObject * unigine_AssetManager_remove_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::removeAssetAsync(asset_path);
            };
            // args
            const char * asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): moveAssetSync
static PyObject * unigine_AssetManager_move_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * old_asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"old_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * old_asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::moveAssetSync(old_asset_path, new_asset_path);
            };
            // args
            const char * old_asset_path;
            const char * new_asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->old_asset_path = old_asset_path;
    pRunner->new_asset_path = new_asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): moveAssetAsync
static PyObject * unigine_AssetManager_move_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * old_asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"old_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * old_asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::moveAssetAsync(old_asset_path, new_asset_path);
            };
            // args
            const char * old_asset_path;
            const char * new_asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->old_asset_path = old_asset_path;
    pRunner->new_asset_path = new_asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): renameAssetSync
static PyObject * unigine_AssetManager_rename_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::renameAssetSync(asset_path, new_asset_name);
            };
            // args
            const char * asset_path;
            const char * new_asset_name;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->new_asset_name = new_asset_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): renameAssetAsync
static PyObject * unigine_AssetManager_rename_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::renameAssetAsync(asset_path, new_asset_name);
            };
            // args
            const char * asset_path;
            const char * new_asset_name;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->new_asset_name = new_asset_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): copyAssetSync
static PyObject * unigine_AssetManager_copy_asset_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::copyAssetSync(asset_path, new_asset_path);
            };
            // args
            const char * asset_path;
            const char * new_asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->new_asset_path = new_asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): copyAssetAsync
static PyObject * unigine_AssetManager_copy_asset_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // const char * new_asset_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_asset_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::copyAssetAsync(asset_path, new_asset_path);
            };
            // args
            const char * asset_path;
            const char * new_asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->new_asset_path = new_asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): isAsset
static PyObject * unigine_AssetManager_is_asset(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isAsset(asset_path);
            };
            // args
            const char * asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): getAssetImportParameters
static PyObject * unigine_AssetManager_get_asset_import_parameters(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetImportParameters(asset_path);
            };
            // args
            const char * asset_path;
            // return
            Unigine::Ptr<UnigineEditor::Collection> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<UnigineEditor::Collection> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigineEditor::Collection::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<UnigineEditor::Collection>
    return ret;
};

// public (static): isAssetWritable
static PyObject * unigine_AssetManager_is_asset_writable(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isAssetWritable(asset_path);
            };
            // args
            const char * asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): getAssetGUIDs
static PyObject * unigine_AssetManager_get_asset_gui_ds(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetGUIDs();
            };
            // return
            Unigine::Vector<Unigine::UGUID> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::UGUID> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::UGUID>
    return ret;
};

// public (static): getAssetGUIDs
static PyObject * unigine_AssetManager_get_asset_gui_ds(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Vector<Unigine::UGUID> & asset_guids;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Vector<Unigine::UGUID> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getAssetGUIDs(asset_guids);
            };
            // args
            Unigine::Vector<Unigine::UGUID> & asset_guids;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_guids = asset_guids;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getAssetPaths
static PyObject * unigine_AssetManager_get_asset_paths(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetPaths();
            };
            // return
            Unigine::Vector<Unigine::String> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::String> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::String>
    return ret;
};

// public (static): getAssetPaths
static PyObject * unigine_AssetManager_get_asset_paths(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Vector<Unigine::String> & asset_paths;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Vector<Unigine::String> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getAssetPaths(asset_paths);
            };
            // args
            Unigine::Vector<Unigine::String> & asset_paths;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_paths = asset_paths;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getAssetGUIDsForDirectory
static PyObject * unigine_AssetManager_get_asset_gui_ds_for_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetGUIDsForDirectory(directory_path);
            };
            // args
            const char * directory_path;
            // return
            Unigine::Vector<Unigine::UGUID> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::UGUID> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::UGUID>
    return ret;
};

// public (static): getAssetGUIDsForDirectory
static PyObject * unigine_AssetManager_get_asset_gui_ds_for_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::UGUID> & asset_guids;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::UGUID> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getAssetGUIDsForDirectory(directory_path, asset_guids);
            };
            // args
            const char * directory_path;
            Unigine::Vector<Unigine::UGUID> & asset_guids;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->asset_guids = asset_guids;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getAssetPathsForDirectory
static PyObject * unigine_AssetManager_get_asset_paths_for_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getAssetPathsForDirectory(directory_path);
            };
            // args
            const char * directory_path;
            // return
            Unigine::Vector<Unigine::String> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::String> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::String>
    return ret;
};

// public (static): getAssetPathsForDirectory
static PyObject * unigine_AssetManager_get_asset_paths_for_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::String> & asset_paths;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::String> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getAssetPathsForDirectory(directory_path, asset_paths);
            };
            // args
            const char * directory_path;
            Unigine::Vector<Unigine::String> & asset_paths;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->asset_paths = asset_paths;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getRuntimeGUIDs
static PyObject * unigine_AssetManager_get_runtime_gui_ds(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getRuntimeGUIDs(asset_path);
            };
            // args
            const char * asset_path;
            // return
            Unigine::Vector<Unigine::UGUID> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::UGUID> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::UGUID>
    return ret;
};

// public (static): getRuntimeGUIDs
static PyObject * unigine_AssetManager_get_runtime_gui_ds(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * asset_path;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::UGUID> & runtime_guids;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"asset_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::UGUID> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getRuntimeGUIDs(asset_path, runtime_guids);
            };
            // args
            const char * asset_path;
            Unigine::Vector<Unigine::UGUID> & runtime_guids;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    pRunner->runtime_guids = runtime_guids;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getRuntimeAlias
static PyObject * unigine_AssetManager_get_runtime_alias(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & runtime_guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getRuntimeAlias(runtime_guid);
            };
            // args
            const Unigine::UGUID & runtime_guid;
            // return
            Unigine::String retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->runtime_guid = runtime_guid;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::String retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::String
    return ret;
};

// public (static): isRuntimePrimary
static PyObject * unigine_AssetManager_is_runtime_primary(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & runtime_guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isRuntimePrimary(runtime_guid);
            };
            // args
            const Unigine::UGUID & runtime_guid;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->runtime_guid = runtime_guid;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): createDirectory
static PyObject * unigine_AssetManager_create_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::createDirectory(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): removeDirectorySync
static PyObject * unigine_AssetManager_remove_directory_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::removeDirectorySync(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): removeDirectoryAsync
static PyObject * unigine_AssetManager_remove_directory_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::removeDirectoryAsync(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): moveDirectorySync
static PyObject * unigine_AssetManager_move_directory_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * old_directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"old_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * old_directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::moveDirectorySync(old_directory_path, new_directory_path);
            };
            // args
            const char * old_directory_path;
            const char * new_directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->old_directory_path = old_directory_path;
    pRunner->new_directory_path = new_directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): moveDirectoryAsync
static PyObject * unigine_AssetManager_move_directory_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * old_directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"old_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * old_directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::moveDirectoryAsync(old_directory_path, new_directory_path);
            };
            // args
            const char * old_directory_path;
            const char * new_directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->old_directory_path = old_directory_path;
    pRunner->new_directory_path = new_directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): renameDirectorySync
static PyObject * unigine_AssetManager_rename_directory_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::renameDirectorySync(directory_path, new_directory_name);
            };
            // args
            const char * directory_path;
            const char * new_directory_name;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->new_directory_name = new_directory_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): renameDirectoryAsync
static PyObject * unigine_AssetManager_rename_directory_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::renameDirectoryAsync(directory_path, new_directory_name);
            };
            // args
            const char * directory_path;
            const char * new_directory_name;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->new_directory_name = new_directory_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): copyDirectorySync
static PyObject * unigine_AssetManager_copy_directory_sync(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::copyDirectorySync(directory_path, new_directory_path);
            };
            // args
            const char * directory_path;
            const char * new_directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->new_directory_path = new_directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): copyDirectoryAsync
static PyObject * unigine_AssetManager_copy_directory_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // const char * new_directory_path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"new_directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * new_directory_path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::copyDirectoryAsync(directory_path, new_directory_path);
            };
            // args
            const char * directory_path;
            const char * new_directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->new_directory_path = new_directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): isDirectory
static PyObject * unigine_AssetManager_is_directory(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isDirectory(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): isDirectoryWritable
static PyObject * unigine_AssetManager_is_directory_writable(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isDirectoryWritable(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): getDirectoryPathsAll
static PyObject * unigine_AssetManager_get_directory_paths_all(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getDirectoryPathsAll();
            };
            // return
            Unigine::Vector<Unigine::String> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::String> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::String>
    return ret;
};

// public (static): getDirectoryPathsAll
static PyObject * unigine_AssetManager_get_directory_paths_all(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Vector<Unigine::String> & directory_paths;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Vector<Unigine::String> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getDirectoryPathsAll(directory_paths);
            };
            // args
            Unigine::Vector<Unigine::String> & directory_paths;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_paths = directory_paths;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): getDirectoryPaths
static PyObject * unigine_AssetManager_get_directory_paths(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getDirectoryPaths(directory_path);
            };
            // args
            const char * directory_path;
            // return
            Unigine::Vector<Unigine::String> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::String> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::String>
    return ret;
};

// public (static): getDirectoryPaths
static PyObject * unigine_AssetManager_get_directory_paths(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::String> & directory_paths;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::String> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::getDirectoryPaths(directory_path, directory_paths);
            };
            // args
            const char * directory_path;
            Unigine::Vector<Unigine::String> & directory_paths;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->directory_paths = directory_paths;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): createMountPoint
static PyObject * unigine_AssetManager_create_mount_point(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<UnigineEditor::MountPointParameters> & mount_creation_parameters;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<UnigineEditor::MountPointParameters> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::createMountPoint(directory_path, mount_creation_parameters);
            };
            // args
            const char * directory_path;
            const Unigine::Ptr<UnigineEditor::MountPointParameters> & mount_creation_parameters;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    pRunner->mount_creation_parameters = mount_creation_parameters;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): removeMountPoint
static PyObject * unigine_AssetManager_remove_mount_point(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::removeMountPoint(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): isMountPoint
static PyObject * unigine_AssetManager_is_mount_point(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isMountPoint(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): getMountPointParameters
static PyObject * unigine_AssetManager_get_mount_point_parameters(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::getMountPointParameters(directory_path);
            };
            // args
            const char * directory_path;
            // return
            Unigine::Ptr<UnigineEditor::MountPointParameters> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<UnigineEditor::MountPointParameters> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigineEditor::MountPointParameters::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<UnigineEditor::MountPointParameters>
    return ret;
};

// public (static): refreshMountPointAsync
static PyObject * unigine_AssetManager_refresh_mount_point_async(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * directory_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"directory_path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * directory_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::refreshMountPointAsync(directory_path);
            };
            // args
            const char * directory_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->directory_path = directory_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): blockAutoRefresh
static PyObject * unigine_AssetManager_block_auto_refresh(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::blockAutoRefresh();
            };
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): unblockAutoRefresh
static PyObject * unigine_AssetManager_unblock_auto_refresh(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::AssetManager::unblockAutoRefresh();
            };
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

// public (static): isAutoRefreshBlocked
static PyObject * unigine_AssetManager_is_auto_refresh_blocked(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isAutoRefreshBlocked();
            };
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): generateUniquePath
static PyObject * unigine_AssetManager_generate_unique_path(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::generateUniquePath(path);
            };
            // args
            const char * path;
            // return
            Unigine::String retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::String retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::String
    return ret;
};

// public (static): isExist
static PyObject * unigine_AssetManager_is_exist(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isExist(path);
            };
            // args
            const char * path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};


static PyMethodDef unigine_AssetManager_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_AssetManager_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "get_asset_guid_from_path", (PyCFunction)unigine_AssetManager_get_asset_guid_from_path, METH_STATIC|METH_VARARGS,
        "public (static): getAssetGUIDFromPath"
    },
    {
        "get_asset_path_from_guid", (PyCFunction)unigine_AssetManager_get_asset_path_from_guid, METH_STATIC|METH_VARARGS,
        "public (static): getAssetPathFromGUID"
    },
    {
        "import_asset_sync", (PyCFunction)unigine_AssetManager_import_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): importAssetSync"
    },
    {
        "import_asset_async", (PyCFunction)unigine_AssetManager_import_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): importAssetAsync"
    },
    {
        "reimport_asset_sync", (PyCFunction)unigine_AssetManager_reimport_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): reimportAssetSync"
    },
    {
        "reimport_asset_async", (PyCFunction)unigine_AssetManager_reimport_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): reimportAssetAsync"
    },
    {
        "remove_asset_sync", (PyCFunction)unigine_AssetManager_remove_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): removeAssetSync"
    },
    {
        "remove_asset_async", (PyCFunction)unigine_AssetManager_remove_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): removeAssetAsync"
    },
    {
        "move_asset_sync", (PyCFunction)unigine_AssetManager_move_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): moveAssetSync"
    },
    {
        "move_asset_async", (PyCFunction)unigine_AssetManager_move_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): moveAssetAsync"
    },
    {
        "rename_asset_sync", (PyCFunction)unigine_AssetManager_rename_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): renameAssetSync"
    },
    {
        "rename_asset_async", (PyCFunction)unigine_AssetManager_rename_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): renameAssetAsync"
    },
    {
        "copy_asset_sync", (PyCFunction)unigine_AssetManager_copy_asset_sync, METH_STATIC|METH_VARARGS,
        "public (static): copyAssetSync"
    },
    {
        "copy_asset_async", (PyCFunction)unigine_AssetManager_copy_asset_async, METH_STATIC|METH_VARARGS,
        "public (static): copyAssetAsync"
    },
    {
        "is_asset", (PyCFunction)unigine_AssetManager_is_asset, METH_STATIC|METH_VARARGS,
        "public (static): isAsset"
    },
    {
        "get_asset_import_parameters", (PyCFunction)unigine_AssetManager_get_asset_import_parameters, METH_STATIC|METH_VARARGS,
        "public (static): getAssetImportParameters"
    },
    {
        "is_asset_writable", (PyCFunction)unigine_AssetManager_is_asset_writable, METH_STATIC|METH_VARARGS,
        "public (static): isAssetWritable"
    },
    {
        "get_asset_gui_ds", (PyCFunction)unigine_AssetManager_get_asset_gui_ds, METH_STATIC|METH_NOARGS,
        "public (static): getAssetGUIDs"
    },
    {
        "get_asset_gui_ds", (PyCFunction)unigine_AssetManager_get_asset_gui_ds, METH_STATIC|METH_VARARGS,
        "public (static): getAssetGUIDs"
    },
    {
        "get_asset_paths", (PyCFunction)unigine_AssetManager_get_asset_paths, METH_STATIC|METH_NOARGS,
        "public (static): getAssetPaths"
    },
    {
        "get_asset_paths", (PyCFunction)unigine_AssetManager_get_asset_paths, METH_STATIC|METH_VARARGS,
        "public (static): getAssetPaths"
    },
    {
        "get_asset_gui_ds_for_directory", (PyCFunction)unigine_AssetManager_get_asset_gui_ds_for_directory, METH_STATIC|METH_VARARGS,
        "public (static): getAssetGUIDsForDirectory"
    },
    {
        "get_asset_gui_ds_for_directory", (PyCFunction)unigine_AssetManager_get_asset_gui_ds_for_directory, METH_STATIC|METH_VARARGS,
        "public (static): getAssetGUIDsForDirectory"
    },
    {
        "get_asset_paths_for_directory", (PyCFunction)unigine_AssetManager_get_asset_paths_for_directory, METH_STATIC|METH_VARARGS,
        "public (static): getAssetPathsForDirectory"
    },
    {
        "get_asset_paths_for_directory", (PyCFunction)unigine_AssetManager_get_asset_paths_for_directory, METH_STATIC|METH_VARARGS,
        "public (static): getAssetPathsForDirectory"
    },
    {
        "get_runtime_gui_ds", (PyCFunction)unigine_AssetManager_get_runtime_gui_ds, METH_STATIC|METH_VARARGS,
        "public (static): getRuntimeGUIDs"
    },
    {
        "get_runtime_gui_ds", (PyCFunction)unigine_AssetManager_get_runtime_gui_ds, METH_STATIC|METH_VARARGS,
        "public (static): getRuntimeGUIDs"
    },
    {
        "get_runtime_alias", (PyCFunction)unigine_AssetManager_get_runtime_alias, METH_STATIC|METH_VARARGS,
        "public (static): getRuntimeAlias"
    },
    {
        "is_runtime_primary", (PyCFunction)unigine_AssetManager_is_runtime_primary, METH_STATIC|METH_VARARGS,
        "public (static): isRuntimePrimary"
    },
    {
        "create_directory", (PyCFunction)unigine_AssetManager_create_directory, METH_STATIC|METH_VARARGS,
        "public (static): createDirectory"
    },
    {
        "remove_directory_sync", (PyCFunction)unigine_AssetManager_remove_directory_sync, METH_STATIC|METH_VARARGS,
        "public (static): removeDirectorySync"
    },
    {
        "remove_directory_async", (PyCFunction)unigine_AssetManager_remove_directory_async, METH_STATIC|METH_VARARGS,
        "public (static): removeDirectoryAsync"
    },
    {
        "move_directory_sync", (PyCFunction)unigine_AssetManager_move_directory_sync, METH_STATIC|METH_VARARGS,
        "public (static): moveDirectorySync"
    },
    {
        "move_directory_async", (PyCFunction)unigine_AssetManager_move_directory_async, METH_STATIC|METH_VARARGS,
        "public (static): moveDirectoryAsync"
    },
    {
        "rename_directory_sync", (PyCFunction)unigine_AssetManager_rename_directory_sync, METH_STATIC|METH_VARARGS,
        "public (static): renameDirectorySync"
    },
    {
        "rename_directory_async", (PyCFunction)unigine_AssetManager_rename_directory_async, METH_STATIC|METH_VARARGS,
        "public (static): renameDirectoryAsync"
    },
    {
        "copy_directory_sync", (PyCFunction)unigine_AssetManager_copy_directory_sync, METH_STATIC|METH_VARARGS,
        "public (static): copyDirectorySync"
    },
    {
        "copy_directory_async", (PyCFunction)unigine_AssetManager_copy_directory_async, METH_STATIC|METH_VARARGS,
        "public (static): copyDirectoryAsync"
    },
    {
        "is_directory", (PyCFunction)unigine_AssetManager_is_directory, METH_STATIC|METH_VARARGS,
        "public (static): isDirectory"
    },
    {
        "is_directory_writable", (PyCFunction)unigine_AssetManager_is_directory_writable, METH_STATIC|METH_VARARGS,
        "public (static): isDirectoryWritable"
    },
    {
        "get_directory_paths_all", (PyCFunction)unigine_AssetManager_get_directory_paths_all, METH_STATIC|METH_NOARGS,
        "public (static): getDirectoryPathsAll"
    },
    {
        "get_directory_paths_all", (PyCFunction)unigine_AssetManager_get_directory_paths_all, METH_STATIC|METH_VARARGS,
        "public (static): getDirectoryPathsAll"
    },
    {
        "get_directory_paths", (PyCFunction)unigine_AssetManager_get_directory_paths, METH_STATIC|METH_VARARGS,
        "public (static): getDirectoryPaths"
    },
    {
        "get_directory_paths", (PyCFunction)unigine_AssetManager_get_directory_paths, METH_STATIC|METH_VARARGS,
        "public (static): getDirectoryPaths"
    },
    {
        "create_mount_point", (PyCFunction)unigine_AssetManager_create_mount_point, METH_STATIC|METH_VARARGS,
        "public (static): createMountPoint"
    },
    {
        "remove_mount_point", (PyCFunction)unigine_AssetManager_remove_mount_point, METH_STATIC|METH_VARARGS,
        "public (static): removeMountPoint"
    },
    {
        "is_mount_point", (PyCFunction)unigine_AssetManager_is_mount_point, METH_STATIC|METH_VARARGS,
        "public (static): isMountPoint"
    },
    {
        "get_mount_point_parameters", (PyCFunction)unigine_AssetManager_get_mount_point_parameters, METH_STATIC|METH_VARARGS,
        "public (static): getMountPointParameters"
    },
    {
        "refresh_mount_point_async", (PyCFunction)unigine_AssetManager_refresh_mount_point_async, METH_STATIC|METH_VARARGS,
        "public (static): refreshMountPointAsync"
    },
    {
        "block_auto_refresh", (PyCFunction)unigine_AssetManager_block_auto_refresh, METH_STATIC|METH_NOARGS,
        "public (static): blockAutoRefresh"
    },
    {
        "unblock_auto_refresh", (PyCFunction)unigine_AssetManager_unblock_auto_refresh, METH_STATIC|METH_NOARGS,
        "public (static): unblockAutoRefresh"
    },
    {
        "is_auto_refresh_blocked", (PyCFunction)unigine_AssetManager_is_auto_refresh_blocked, METH_STATIC|METH_NOARGS,
        "public (static): isAutoRefreshBlocked"
    },
    {
        "generate_unique_path", (PyCFunction)unigine_AssetManager_generate_unique_path, METH_STATIC|METH_VARARGS,
        "public (static): generateUniquePath"
    },
    {
        "is_exist", (PyCFunction)unigine_AssetManager_is_exist, METH_STATIC|METH_VARARGS,
        "public (static): isExist"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_AssetManagerType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.AssetManager",             // tp_name
    sizeof(unigine_AssetManager) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_AssetManager_dealloc,   // tp_dealloc
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
    "AssetManager Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_AssetManager_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_AssetManager_init, // tp_init
    0, // tp_alloc
    unigine_AssetManager_new, // tp_new
};


// UniginePyTypeObjectAssetManager

bool Python3UnigineAssetManager::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_AssetManagerType.tp_dict) {
        unigine_AssetManagerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_AssetManagerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineAssetManager::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_AssetManagerType);
    if (PyModule_AddObject(pModule, "AssetManager", (PyObject *)&unigine_AssetManagerType) < 0) {
        Py_DECREF(&unigine_AssetManagerType);
        return false;
    }
    return true;
}

PyObject * AssetManager::NewObject() {
    // std::cout << "sizeof(unigine_AssetManager) = " << sizeof(unigine_AssetManager) << std::endl;
    unigine_AssetManager *pInst = PyObject_New(unigine_AssetManager, &unigine_AssetManagerType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

}; // namespace PyUnigine
