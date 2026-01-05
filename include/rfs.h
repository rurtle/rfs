#ifndef _RFS_H_
#define _RFS_H_

#define FUSE_USE_VERSION 31
#include <fuse3/fuse.h>

#include <time.h>
#include <sys/types.h>

// Filesystem Constants

#define RFS_MAGIC 0x4C2DA       // Hex for date 3-1-2026, day I started this project on

#define BLOCK_SIZE 4096         // 4 KB blocks

#define MAX_FILENAME 255        // Maximum filename length
#define MAX_PATH_LEN 4096       // Maximum path length

// On-Disk Data Structures (The "Layout")

struct rfs_superblock {
    uint32_t magic;           // Magic number
    uint32_t block_count;     // Total blocks in FS
    uint32_t inode_count;     // Total inodes
    uint32_t free_blocks;     // Number of free blocks
    uint32_t free_inodes;     // Number of free inodes
    // ... other metadata
};

struct rfs_inode {
    uint16_t mode;            // File mode (permissions, type)
    uint16_t links;           // Hard link count
    uint32_t size;            // File size in bytes

    // Timestamps
    time_t  atime;            // Last access time
    time_t  mtime;            // Last modification time
    time_t  ctime;            // Last status change time

    uint32_t blocks[12];      // Direct data blocks (simplification)
};

struct rfs_dirent {
    uint32_t inode_num;       // Inode number
    char name[MAX_FILENAME];  // Filename
};

#endif _RFS_H_  /* _RFS_H_ */
