#ifndef COMPDVR_PEDEF_H
#define COMPDVR_PEDEF_H

// Definitions from bernd.luevelsmeyer@iplan.heitec.net 's pe.txt reference
#define IMAGE_FILE_MACHINE_I386    (0x14c)
#define IMAGE_FILE_MACHINE_I486    (0x14d)
#define IMAGE_FILE_MACHINE_I586    (0x14e)
#define IMAGE_FILE_MACHINE_R3000BE (0x160)
#define IMAGE_FILE_MACHINE_R3000   (0x162)
#define IMAGE_FILE_MACHINE_R4000   (0x166)
#define IMAGE_FILE_MACHINE_R10000  (0x168)
#define IMAGE_FILE_MACHINE_ALPHA   (0x184)
#define IMAGE_FILE_MACHINE_POWERPC (0x1F0)
// Recognize BE PowerPC by a coff BE style arch magic
#define IMAGE_FILE_MACHINE_POWERPCBE (0xF001)

#define IMAGE_FILE_RELOCS_STRIPPED         0x0001
#define IMAGE_FILE_EXECUTABLE_IMAGE        0x0002
#define IMAGE_FILE_LINE_NUMS_STRIPPED      0x0004
#define IMAGE_FILE_LOCAL_SYMS_STRIPPED     0x0008
#define IMAGE_FILE_AGGRESSIVE_WS_TRIM      0x0010
#define IMAGE_FILE_BYTES_REVERSED_LO       0x0080
#define IMAGE_FILE_32BIT_MACHINE           0x0100
#define IMAGE_FILE_DEBUG_STRIPPED          0x0200
#define IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP 0x0400
#define IMAGE_FILE_NET_RUN_FROM_SWAP       0x0800
#define IMAGE_FILE_SYSTEM                  0x1000
#define IMAGE_FILE_DLL                     0x2000
#define IMAGE_FILE_UP_SYSTEM_ONLY          0x4000
#define IMAGE_FILE_BYTES_REVERSED_HI       0x8000

#define IMAGE_SCN_CNT_CODE                 0x00000020
#define IMAGE_SCN_CNT_INITIALIZED_DATA     0x00000040
#define IMAGE_SCN_CNT_UNINITIALIZED_DATA   0x00000080

#define IMAGE_SCN_MEM_DISCARDABLE          0x02000000
#define IMAGE_SCN_MEM_NOT_CACHED           0x04000000
#define IMAGE_SCN_MEM_NOT_PAGED            0x08000000
#define IMAGE_SCN_MEM_SHARED               0x10000000
#define IMAGE_SCN_MEM_EXECUTE              0x20000000
#define IMAGE_SCN_MEM_READ                 0x40000000
#define IMAGE_SCN_MEM_WRITE                0x80000000

#endif//COMPDVR_PEDEF_H
