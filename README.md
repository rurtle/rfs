# RFS (Rurtle File System)

**RFS** is a simple, educational file system implementation using **FUSE (Filesystem in Userspace)**. It is designed to demonstrate core file system concepts like VFS, inodes, and superblocks in a user-space environment.

## Project Structure

*   **`src/`**: Source code for the filesystem.
    *   `main.c`: The FUSE entry point (mounts the FS).
    *   [rfs.c](cci:7://file:///Users/sssarkar/Library/CloudStorage/GoogleDrive-rurtle.coder@gmail.com/My%20Drive/professionalstuff/OpenSource/TFS-TripFlieSystem/src/rfs.c:0:0-0:0): The core filesystem logic (metadata, read/write ops).
*   **`include/`**: Header files defining internal structures.
*   **`tests/`**: TDD test harness.
    *   `test_runner.c`: Direct tests against [rfs.c](cci:7://file:///Users/sssarkar/Library/CloudStorage/GoogleDrive-rurtle.coder@gmail.com/My%20Drive/professionalstuff/OpenSource/TFS-TripFlieSystem/src/rfs.c:0:0-0:0) (bypasses kernel).

## Building

RFS uses a [Makefile](cci:7://file:///Users/sssarkar/Library/CloudStorage/GoogleDrive-rurtle.coder@gmail.com/My%20Drive/professionalstuff/OpenSource/TFS-TripFlieSystem/Makefile:0:0-0:0) to compile a static library (`librfs.a`) and link it for both the main executable and the test runner.

**Prerequisites:**
*   Linux (or macOS with FUSE)
*   `libfuse3-dev` (Debian/Ubuntu) or `fuse3`
*   `gcc` and `make`

**Build:**
```bash
make