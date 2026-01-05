#include <stdio.h>
#include <stdlib.h>

#include "rfs.h"
#include "utils.h"

// TODO: Implement FUSE Operations here

// 1. Get File Attributes (getattr)
// TODO: Look up the inode for 'path' and fill in the 'stbuf' structure.
//       - If path is "/", return directory attributes (mode = S_IFDIR | 0755, etc.)
//       - Otherwise, find the file/dir and return its attributes.
//       - Return 0 on success, -errno on failure (e.g., -ENOENT).
// static int rfs_getattr(const char *path, struct stat *stbuf, struct fuse_file_info *fi) {
//     (void) fi;
//     // ...
//     return 0;
// }

// 2. Read Directory (readdir)
// TODO: Parse the directory data to list its contents.
//       - Use the 'filler' function provided by FUSE to add entries (., .., filenames).
// static int rfs_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
//                        off_t offset, struct fuse_file_info *fi,
//                        enum fuse_readdir_flags flags) {
//     (void) offset;
//     (void) fi;
//     (void) flags;
//     // 2a. Check if path exists and is a directory
//     // 2b. Add "." and ".."
//     // filler(buf, ".", NULL, 0, 0);
//     // filler(buf, "..", NULL, 0, 0);
//     // 2c. Iterate over directory entries and add them
//     return 0;
// }

// 3. Create File (create)
// TODO: Create a new file.
//       - Update parent directory to include new entry.
//       - Allocate a new inode.
//       - Initialize inode fields.
// static int rfs_create(const char *path, mode_t mode, struct fuse_file_info *fi) {
//     // ...
//     return 0;
// }

// 4. Write to File (write)
// TODO: Write data to a file.
//       - Determine which blocks to write to.
//       - Allocate new blocks if necessary (update allocation bitmap).
//       - Copy buffer 'buf' to the blocks.
//       - Update file size in inode.
// static int rfs_write(const char *path, const char *buf, size_t size, off_t offset,
//                      struct fuse_file_info *fi) {
//     // ...
//     return size; // Return number of bytes written
// }

// 5. Read from File (read)
// TODO: Read data from a file.
//       - Determine blocks based on offset.
//       - Read from those blocks into 'buf'.
// static int rfs_read(const char *path, char *buf, size_t size, off_t offset,
//                     struct fuse_file_info *fi) {
//     // ...
//     return size; // Return number of bytes read
// }


// 6. Define the `fuse_operations` struct (to be used in main.c)
// struct fuse_operations rfs_oper = {
//     .getattr = rfs_getattr,
//     .readdir = rfs_readdir,
//     // .create = rfs_create,
//     // .read   = rfs_read,
//     // .write  = rfs_write,
//     // ... add other operations
// };
