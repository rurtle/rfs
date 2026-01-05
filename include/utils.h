#ifndef RFS_UTILS_H
#define RFS_UTILS_H

// TODO: Add necessary includes (e.g., <stddef.h>, "rfs.h")

// 1. Logging Helper Macros
// TODO: Define macros for logging (e.g., LOG_INFO, LOG_ERROR) that can optionally show
//       file/line numbers. This helps in debugging FUSE operations.

// 2. Memory Management Helpers
// TODO: (Optional) Define wrappers for malloc/free to track memory usage or handle failures gracefully.

// 3. Path Parsing Helpers
// TODO: Declarations for functions that split paths into components, or helper to
//       validate filenames (e.g., max length).
// void split_path(const char *path, char *directory, char *filename);

// 4. Bit manipulation (if using bitmaps for free space)
// TODO: Declarations for setting/clearing bits in a bitmap buffer.
// int set_bit(unsigned char *bitmap, int index);
// int clear_bit(unsigned char *bitmap, int index);
// int find_free_bit(unsigned char *bitmap, int size);

#endif // RFS_UTILS_H
