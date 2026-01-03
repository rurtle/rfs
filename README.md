# RFS (Rurtle File System)

**RFS** is a simple, educational file system implementation using **FUSE (Filesystem in Userspace)**. It is designed to demonstrate core file system concepts like VFS, inodes, and superblocks in a user-space environment on **Linux**.

## Project Structure

```text
rfs/                # PROJECT ROOT
├── Makefile        # Builds lib, executable, and tests
├── lib/            # Compiles static library (librfs.a)
├── include/        # Header files
│   ├── rfs.h       # Core definitions
│   └── utils.h     # Utility helpers
├── src/            # Source code
│   ├── main.c      # FUSE entry point
│   ├── rfs.c       # File system logic
│   └── utils.c     # Utility implementation
└── tests/          # TDD Test Suite
    └── test_runner.c
```

## Building

RFS uses a `Makefile` to compile a static library (`librfs.a`) and link it for both the main executable and the test runner.

**Prerequisites:**
*   Linux (Target Platform)
*   `libfuse3-dev` (Debian/Ubuntu) or `fuse3`
*   `gcc` and `make`

**Tested Environment:**
*   Ubuntu 24.04 LTS
*   GCC 13.3.0 (Ubuntu 13.3.0-6ubuntu2~24.04)

**Build:**
```bash
make
```

This ensures both the `rfs` daemon and the `test_runner` are built.

## Verification & Testing (TDD)

We recommend running tests *before* manual verification to ensure data structures are correct.

```bash
./test_runner
```

## Usage

To mount the filesystem:

1.  **Create a mount point:**
    ```bash
    mkdir mountpoint
    ```

2.  **Run the RFS daemon:**
    ```bash
    ./rfs mountpoint
    ```

3.  **Interact:**
    ```bash
    ls -l mountpoint/
    ```

4.  **Unmount:**
    ```bash
    fusermount -u mountpoint
    ```