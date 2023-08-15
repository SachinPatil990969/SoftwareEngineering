#  How memory is managed in Python?
Memory Management in Python

Python uses a private heap space for memory management. All Python objects and data structures are located in a private heap. The programmer does not have access to this private heap and interpreter takes care of this Python private heap.

The allocation of Python heap space for Python objects is done by Python memory manager. The core API gives access to some tools for the programmer to code.

Python also has an inbuilt garbage collector, which recycles all the unused memory and frees the memory and makes it available to the heap space.

Python memory manager deals with different dynamic storage management. Python memory manager has different components which deal with various dynamic storage management such as sharing, segmentation, preallocation or the different memory sizes.