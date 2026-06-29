#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints Python bytes object info.
 * @p: Python object
 */
void print_python_bytes(PyObject *p)
{
    PyBytesObject *bytes;
    char *str;
    Py_ssize_t size, i, limit;

    printf("[.] bytes object info\n");

    if (strcmp(p->ob_type->tp_name, "bytes") != 0)
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    bytes = (PyBytesObject *)p;
    size = bytes->ob_base.ob_size;
    str = bytes->ob_sval;

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", str);

    limit = size + 1;
    if (limit > 10)
        limit = 10;

    printf("  first %ld bytes:", limit);

    for (i = 0; i < limit; i++)
        printf(" %02x", (unsigned char)str[i]);

    printf("\n");
}

/**
 * print_python_list - Prints Python list info.
 * @p: Python object
 */
void print_python_list(PyObject *p)
{
    PyListObject *list;
    Py_ssize_t i;

    list = (PyListObject *)p;

    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n",
           list->ob_base.ob_size);
    printf("[*] Allocated = %ld\n",
           list->allocated);

    for (i = 0; i < list->ob_base.ob_size; i++)
    {
        printf("Element %ld: %s\n",
               i,
               list->ob_item[i]->ob_type->tp_name);

        if (strcmp(list->ob_item[i]->ob_type->tp_name, "bytes") == 0)
            print_python_bytes(list->ob_item[i]);
    }
}
