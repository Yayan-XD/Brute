# 1 "yxdfb/Password.cpp"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 482 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "yxdfb/Password.cpp" 2
# 16 "yxdfb/Password.cpp"
# 1 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 1
# 11 "/data/data/com.termux/files/usr/include/python3.12/Python.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/patchlevel.h" 1
# 12 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pyconfig.h" 1
# 13 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pymacconfig.h" 1
# 14 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 23 "/data/data/com.termux/files/usr/include/python3.12/Python.h"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 1 3
# 87 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__config" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__config" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__config_site" 1 3
# 44 "/data/data/com.termux/files/usr/include/c++/v1/__config_site" 3
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmacro-redefined"






#pragma clang diagnostic pop
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__config" 2 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__config" 3
# 458 "/data/data/com.termux/files/usr/include/c++/v1/__config" 3
# 1 "/data/data/com.termux/files/usr/include/features.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/features.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 1 3 4
# 335 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/android/versioning.h" 1 3 4
# 336 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/android/api-level.h" 1 3 4
# 48 "/data/data/com.termux/files/usr/include/android/api-level.h" 3 4
extern "C" {
# 194 "/data/data/com.termux/files/usr/include/android/api-level.h" 3 4
int android_get_application_target_sdk_version() __attribute__((__availability__(android,strict,introduced=24 )));







# 1 "/data/data/com.termux/files/usr/include/bits/get_device_api_level_inlines.h" 1 3 4
# 35 "/data/data/com.termux/files/usr/include/bits/get_device_api_level_inlines.h" 3 4
extern "C" {


int __system_property_get(const char* _Nonnull __name, char* _Nonnull __value);
int atoi(const char* _Nonnull __s) __attribute__((__pure__));

static __inline__ int android_get_device_api_level() {
  char value[92] = { 0 };
  if (__system_property_get("ro.build.version.sdk", value) < 1) return -1;
  int api_level = atoi(value);
  return (api_level > 0) ? api_level : -1;
}

}
# 203 "/data/data/com.termux/files/usr/include/android/api-level.h" 2 3 4
# 220 "/data/data/com.termux/files/usr/include/android/api-level.h" 3 4
}
# 337 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/android/ndk-version.h" 1 3 4
# 339 "/data/data/com.termux/files/usr/include/sys/cdefs.h" 2 3 4
# 37 "/data/data/com.termux/files/usr/include/features.h" 2 3 4
# 459 "/data/data/com.termux/files/usr/include/c++/v1/__config" 2 3
# 88 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 2 3
# 91 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 3



# 1 "/data/data/com.termux/files/usr/include/stdlib.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/alloca.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/wait.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/wait.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/wait.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/bits/wait.h" 2 3 4
# 34 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/malloc.h" 1 3 4
# 29 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 43 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 3



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 1 3
# 84 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 3
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_header_macro.h" 1 3
# 85 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_ptrdiff_t.h" 1 3
# 18 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_ptrdiff_t.h" 3
typedef long int ptrdiff_t;
# 89 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_size_t.h" 1 3
# 18 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_size_t.h" 3
typedef long unsigned int size_t;
# 94 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3
# 103 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 3
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_wchar_t.h" 1 3
# 104 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_null.h" 1 3
# 109 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_nullptr_t.h" 1 3
# 114 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3
# 123 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 3
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_max_align_t.h" 1 3
# 19 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_max_align_t.h" 3
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 124 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stddef_offsetof.h" 1 3
# 129 "/data/data/com.termux/files/usr/lib/clang/19/include/stddef.h" 2 3
# 47 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 2 3



typedef decltype(nullptr) nullptr_t;
# 30 "/data/data/com.termux/files/usr/include/malloc.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdio.h" 1 3 4
# 105 "/data/data/com.termux/files/usr/include/c++/v1/stdio.h" 3



# 1 "/data/data/com.termux/files/usr/include/stdio.h" 1 3 4
# 42 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/types.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdint.h" 1 3 4
# 110 "/data/data/com.termux/files/usr/include/c++/v1/stdint.h" 3
# 124 "/data/data/com.termux/files/usr/include/c++/v1/stdint.h" 3
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdint.h" 1 3
# 56 "/data/data/com.termux/files/usr/lib/clang/19/include/stdint.h" 3
# 1 "/data/data/com.termux/files/usr/include/stdint.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/stdint.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/wchar_limits.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/stdint.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/stdint.h" 2 3 4


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef long __int64_t;
typedef unsigned long __uint64_t;






typedef long __intptr_t;
typedef unsigned long __uintptr_t;





typedef __int8_t int8_t;
typedef __uint8_t uint8_t;

typedef __int16_t int16_t;
typedef __uint16_t uint16_t;

typedef __int32_t int32_t;
typedef __uint32_t uint32_t;

typedef __int64_t int64_t;
typedef __uint64_t uint64_t;

typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;

typedef int8_t int_least8_t;
typedef uint8_t uint_least8_t;

typedef int16_t int_least16_t;
typedef uint16_t uint_least16_t;

typedef int32_t int_least32_t;
typedef uint32_t uint_least32_t;

typedef int64_t int_least64_t;
typedef uint64_t uint_least64_t;

typedef int8_t int_fast8_t;
typedef uint8_t uint_fast8_t;

typedef int64_t int_fast64_t;
typedef uint64_t uint_fast64_t;


typedef int64_t int_fast16_t;
typedef uint64_t uint_fast16_t;
typedef int64_t int_fast32_t;
typedef uint64_t uint_fast32_t;







typedef uint64_t uintmax_t;
typedef int64_t intmax_t;
# 57 "/data/data/com.termux/files/usr/lib/clang/19/include/stdint.h" 2 3
# 125 "/data/data/com.termux/files/usr/include/c++/v1/stdint.h" 2 3
# 34 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/linux/types.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/types.h" 1 3 4






# 1 "/data/data/com.termux/files/usr/include/asm-generic/types.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/asm-generic/int-ll64.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 1 3 4
# 10 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 11 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/bitsperlong.h" 2 3 4
# 10 "/data/data/com.termux/files/usr/include/asm-generic/int-ll64.h" 2 3 4

typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;

__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 10 "/data/data/com.termux/files/usr/include/asm-generic/types.h" 2 3 4
# 8 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/types.h" 2 3 4
# 10 "/data/data/com.termux/files/usr/include/linux/types.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/linux/stddef.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/linux/compiler_types.h" 1 3 4
# 11 "/data/data/com.termux/files/usr/include/linux/compiler_types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/compiler.h" 1 3 4
# 12 "/data/data/com.termux/files/usr/include/linux/compiler_types.h" 2 3 4
# 10 "/data/data/com.termux/files/usr/include/linux/stddef.h" 2 3 4
# 10 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 2 3 4


typedef struct {
  unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void(* __kernel_sighandler_t) (int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/posix_types.h" 1 3 4








typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;

# 1 "/data/data/com.termux/files/usr/include/asm-generic/posix_types.h" 1 3 4
# 11 "/data/data/com.termux/files/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;


typedef __kernel_ulong_t __kernel_ino_t;


typedef unsigned int __kernel_mode_t;


typedef int __kernel_pid_t;


typedef int __kernel_ipc_pid_t;


typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;


typedef __kernel_long_t __kernel_suseconds_t;


typedef int __kernel_daddr_t;


typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;






typedef unsigned int __kernel_old_dev_t;







typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;



typedef struct {
  int val[2];
} __kernel_fsid_t;

typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 13 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/posix_types.h" 2 3 4
# 19 "/data/data/com.termux/files/usr/include/linux/posix_types.h" 2 3 4
# 12 "/data/data/com.termux/files/usr/include/linux/types.h" 2 3 4

typedef __signed__ __int128 __s128 __attribute__((aligned(16)));
typedef unsigned __int128 __u128 __attribute__((aligned(16)));



typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;



typedef unsigned __poll_t;
# 37 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/types.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/bits/pthread_types.h" 2 3 4

typedef struct {
  uint32_t flags;
  void* stack_base;
  size_t stack_size;
  size_t guard_size;
  int32_t sched_policy;
  int32_t sched_priority;

  char __reserved[16];

} pthread_attr_t;


typedef struct {

  int64_t __private[4];



} pthread_barrier_t;



typedef int pthread_barrierattr_t;


typedef struct {

  int32_t __private[12];



} pthread_cond_t;

typedef long pthread_condattr_t;

typedef int pthread_key_t;

typedef struct {

  int32_t __private[10];



} pthread_mutex_t;

typedef long pthread_mutexattr_t;

typedef int pthread_once_t;

typedef struct {

  int32_t __private[14];



} pthread_rwlock_t;

typedef long pthread_rwlockattr_t;


typedef struct {

  int64_t __private;



} pthread_spinlock_t;


typedef long pthread_t;
# 40 "/data/data/com.termux/files/usr/include/sys/types.h" 2 3 4


typedef __kernel_gid32_t __gid_t;
typedef __gid_t gid_t;
typedef __kernel_uid32_t __uid_t;
typedef __uid_t uid_t;
typedef __kernel_pid_t __pid_t;
typedef __pid_t pid_t;
typedef uint32_t __id_t;
typedef __id_t id_t;

typedef unsigned long blkcnt_t;
typedef unsigned long blksize_t;
typedef __kernel_caddr_t caddr_t;
typedef __kernel_clock_t clock_t;

typedef __kernel_clockid_t __clockid_t;
typedef __clockid_t clockid_t;

typedef __kernel_daddr_t daddr_t;
typedef unsigned long fsblkcnt_t;
typedef unsigned long fsfilcnt_t;

typedef __kernel_mode_t __mode_t;
typedef __mode_t mode_t;

typedef __kernel_key_t __key_t;
typedef __key_t key_t;

typedef __kernel_ino_t __ino_t;
typedef __ino_t ino_t;

typedef uint64_t ino64_t;

typedef uint32_t __nlink_t;
typedef __nlink_t nlink_t;

typedef void* __timer_t;
typedef __timer_t timer_t;

typedef __kernel_suseconds_t __suseconds_t;
typedef __suseconds_t suseconds_t;


typedef uint32_t __useconds_t;
typedef __useconds_t useconds_t;





typedef uint64_t dev_t;



typedef __kernel_time_t __time_t;
typedef __time_t time_t;




typedef int64_t off_t;
typedef off_t loff_t;
typedef loff_t off64_t;
# 115 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
typedef uint32_t __socklen_t;

typedef __socklen_t socklen_t;

typedef __builtin_va_list __va_list;
# 128 "/data/data/com.termux/files/usr/include/sys/types.h" 3 4
typedef __kernel_ssize_t ssize_t;


typedef unsigned int uint_t;
typedef unsigned int uint;


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef uint32_t u_int32_t;
typedef uint16_t u_int16_t;
typedef uint8_t u_int8_t;
typedef uint64_t u_int64_t;
# 43 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3 4
# 47 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg_header_macro.h" 1 3 4
# 48 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg___gnuc_va_list.h" 1 3 4
# 12 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg___gnuc_va_list.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 52 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg_va_list.h" 1 3 4
# 12 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg_va_list.h" 3 4
typedef __builtin_va_list va_list;
# 57 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg_va_arg.h" 1 3 4
# 62 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg___va_copy.h" 1 3 4
# 67 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/__stdarg_va_copy.h" 1 3 4
# 72 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 2 3 4
# 45 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 46 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/c++/v1/string.h" 1 3 4
# 58 "/data/data/com.termux/files/usr/include/c++/v1/string.h" 3



# 1 "/data/data/com.termux/files/usr/include/string.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/string.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/string.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/xlocale.h" 1 3 4
# 44 "/data/data/com.termux/files/usr/include/xlocale.h" 3 4
struct __locale_t;




typedef struct __locale_t* locale_t;
# 35 "/data/data/com.termux/files/usr/include/string.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 1 3 4
# 40 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 3 4
extern "C" {
# 49 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 3 4
int strcasecmp(const char* _Nonnull __s1, const char* _Nonnull __s2) __attribute__((__pure__));






int strcasecmp_l(const char* _Nonnull __s1, const char* _Nonnull __s2, locale_t _Nonnull __l) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=23 )));
# 68 "/data/data/com.termux/files/usr/include/bits/strcasecmp.h" 3 4
int strncasecmp(const char* _Nonnull __s1, const char* _Nonnull __s2, size_t __n) __attribute__((__pure__));






int strncasecmp_l(const char* _Nonnull __s1, const char* _Nonnull __s2, size_t __n, locale_t _Nonnull __l) __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=23 )));



}
# 37 "/data/data/com.termux/files/usr/include/string.h" 2 3 4

extern "C" {


# 1 "/data/data/com.termux/files/usr/include/strings.h" 1 3 4
# 60 "/data/data/com.termux/files/usr/include/strings.h" 3 4
extern "C" {



static __inline__ __attribute__((__always_inline__)) void __bionic_bcopy(const void* _Nonnull b1, void* _Nonnull b2, size_t len) {
  __builtin_memmove(b2, b1, len);
}



static __inline__ __attribute__((__always_inline__)) void __bionic_bzero(void* _Nonnull b, size_t len) {
  __builtin_memset(b, 0, len);
}
# 81 "/data/data/com.termux/files/usr/include/strings.h" 3 4
static __inline__ int ffs(int __n) {
  return __builtin_ffs(__n);
}
# 92 "/data/data/com.termux/files/usr/include/strings.h" 3 4
static __inline__ int ffsl(long __n) {
  return __builtin_ffsl(__n);
}
# 103 "/data/data/com.termux/files/usr/include/strings.h" 3 4
static __inline__ int ffsll(long long __n) {
  return __builtin_ffsll(__n);
}





}
# 42 "/data/data/com.termux/files/usr/include/string.h" 2 3 4


void* _Nullable memccpy(void* _Nonnull __dst, const void* _Nonnull __src, int __stop_char, size_t __n);
void* _Nullable memchr(const void* _Nonnull __s, int __ch, size_t __n) __attribute__((__pure__));

extern "C++" void* _Nullable memrchr(void* _Nonnull __s, int __ch, size_t __n) __asm__("memrchr") __attribute__((__pure__));
extern "C++" const void* _Nullable memrchr(const void* _Nonnull __s, int __ch, size_t __n) __asm__("memrchr") __attribute__((__pure__));



int memcmp(const void* _Nonnull __lhs, const void* _Nonnull __rhs, size_t __n) __attribute__((__pure__));
void* _Nonnull memcpy(void* _Nonnull, const void* _Nonnull, size_t);



void* _Nonnull mempcpy(void* _Nonnull __dst, const void* _Nonnull __src, size_t __n) __attribute__((__availability__(android,strict,introduced=23 )));



void* _Nonnull memmove(void* _Nonnull __dst, const void* _Nonnull __src, size_t __n);







void* _Nonnull memset(void* _Nonnull __dst, int __ch, size_t __n);
# 84 "/data/data/com.termux/files/usr/include/string.h" 3 4
void* _Nullable memmem(const void* _Nonnull __haystack, size_t __haystack_size, const void* _Nonnull __needle, size_t __needle_size) __attribute__((__pure__));

char* _Nullable strchr(const char* _Nonnull __s, int __ch) __attribute__((__pure__));
char* _Nullable __strchr_chk(const char* _Nonnull __s, int __ch, size_t __n);




extern "C++" char* _Nonnull strchrnul(char* _Nonnull __s, int __ch) __asm__("strchrnul") __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=24 )));
extern "C++" const char* _Nonnull strchrnul(const char* _Nonnull __s, int __ch) __asm__("strchrnul") __attribute__((__pure__)) __attribute__((__availability__(android,strict,introduced=24 )));
# 105 "/data/data/com.termux/files/usr/include/string.h" 3 4
char* _Nullable strrchr(const char* _Nonnull __s, int __ch) __attribute__((__pure__));
char* _Nullable __strrchr_chk(const char* _Nonnull __s, int __ch, size_t __n);

size_t strlen(const char* _Nonnull __s) __attribute__((__pure__));
size_t __strlen_chk(const char* _Nonnull __s, size_t __n);

int strcmp(const char* _Nonnull __lhs, const char* _Nonnull __rhs) __attribute__((__pure__));
char* _Nonnull stpcpy(char* _Nonnull __dst, const char* _Nonnull __src);
char* _Nonnull strcpy(char* _Nonnull __dst, const char* _Nonnull __src);
char* _Nonnull strcat(char* _Nonnull __dst, const char* _Nonnull __src);
char* _Nullable strdup(const char* _Nonnull __s);

char* _Nullable strstr(const char* _Nonnull __haystack, const char* _Nonnull __needle) __attribute__((__pure__));

extern "C++" char* _Nullable strcasestr(char* _Nonnull, const char* _Nonnull) __asm__("strcasestr") __attribute__((__pure__));
extern "C++" const char* _Nullable strcasestr(const char* _Nonnull, const char* _Nonnull) __asm__("strcasestr") __attribute__((__pure__));



char* _Nullable strtok(char* _Nullable __s, const char* _Nonnull __delimiter);
char* _Nullable strtok_r(char* _Nullable __s, const char* _Nonnull __delimiter, char* _Nonnull * _Nonnull __pos_ptr);

char* _Nonnull strerror(int __errno_value);


char* _Nonnull strerror_l(int __errno_value, locale_t _Nonnull __l) __attribute__((__availability__(android,strict,introduced=23 )));



char* _Nonnull strerror_r(int __errno_value, char* _Nullable __buf, size_t __n) __asm__("__gnu_strerror_r") __attribute__((__availability__(android,strict,introduced=23 )));
# 167 "/data/data/com.termux/files/usr/include/string.h" 3 4
const char* _Nonnull strerrordesc_np(int __errno_value) __asm__("strerror");


size_t strnlen(const char* _Nonnull __s, size_t __n) __attribute__((__pure__));
char* _Nonnull strncat(char* _Nonnull __dst, const char* _Nonnull __src, size_t __n);
char* _Nullable strndup(const char* _Nonnull __s, size_t __n);
int strncmp(const char* _Nonnull __lhs, const char* _Nonnull __rhs, size_t __n) __attribute__((__pure__));
char* _Nonnull stpncpy(char* _Nonnull __dst, const char* _Nonnull __src, size_t __n);
char* _Nonnull strncpy(char* _Nonnull __dst, const char* _Nonnull __src, size_t __n);

size_t strlcat(char* _Nonnull __dst, const char* _Nonnull __src, size_t __n);
size_t strlcpy(char* _Nonnull __dst, const char* _Nonnull __src, size_t __n);

size_t strcspn(const char* _Nonnull __s, const char* _Nonnull __reject) __attribute__((__pure__));
char* _Nullable strpbrk(const char* _Nonnull __s, const char* _Nonnull __accept) __attribute__((__pure__));
char* _Nullable strsep(char* _Nullable * _Nonnull __s_ptr, const char* _Nonnull __delimiter);
size_t strspn(const char* _Nonnull __s, const char* _Nonnull __accept);

char* _Nonnull strsignal(int __signal);

int strcoll(const char* _Nonnull __lhs, const char* _Nonnull __rhs) __attribute__((__pure__));
size_t strxfrm(char* _Null_unspecified __dst, const char* _Nonnull __src, size_t __n);

int strcoll_l(const char* _Nonnull __lhs, const char* _Nonnull __rhs, locale_t _Nonnull __l) __attribute__((__pure__));
size_t strxfrm_l(char* _Null_unspecified __dst, const char* _Nonnull __src, size_t __n, locale_t _Nonnull __l);
# 201 "/data/data/com.termux/files/usr/include/string.h" 3 4
extern "C++" char* _Nonnull basename(char* _Nullable __path) __asm__("__gnu_basename") __attribute__((__availability__(android,strict,introduced=23 )));
extern "C++" const char* _Nonnull basename(const char* _Nonnull __path) __asm__("__gnu_basename") __attribute__((__availability__(android,strict,introduced=23 )));
# 225 "/data/data/com.termux/files/usr/include/string.h" 3 4
extern "C++" {
inline __attribute__((__always_inline__))
void* _Nullable __bionic_memchr(const void* _Nonnull const s , int c, size_t n) {
    return memchr(s, c, n);
}

inline __attribute__((__always_inline__))
const void* _Nullable memchr(const void* _Nonnull const s , int c, size_t n)
        __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_memchr(s, c, n);
}

inline __attribute__((__always_inline__))
void* _Nullable memchr(void* _Nonnull const s , int c, size_t n) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_memchr(s, c, n);
}

inline __attribute__((__always_inline__))
char* _Nullable __bionic_strchr(const char* _Nonnull const s , int c) {
    return strchr(s, c);
}

inline __attribute__((__always_inline__))
const char* _Nullable strchr(const char* _Nonnull const s , int c)
        __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strchr(s, c);
}

inline __attribute__((__always_inline__))
char* _Nullable strchr(char* _Nonnull const s , int c)
        __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strchr(s, c);
}

inline __attribute__((__always_inline__))
char* _Nullable __bionic_strrchr(const char* _Nonnull const s , int c) {
    return strrchr(s, c);
}

inline __attribute__((__always_inline__))
const char* _Nullable strrchr(const char* _Nonnull const s , int c) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strrchr(s, c);
}

inline __attribute__((__always_inline__))
char* _Nullable strrchr(char* _Nonnull const s , int c) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strrchr(s, c);
}


inline __attribute__((__always_inline__))
char* _Nullable __bionic_strstr(const char* _Nonnull h, const char* _Nonnull n) { return strstr(h, n); }

inline __attribute__((__always_inline__))
const char* _Nullable strstr(const char* _Nonnull h, const char* _Nonnull n) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strstr(h, n);
}

inline __attribute__((__always_inline__))
char* _Nullable strstr(char* _Nonnull h, const char* _Nonnull n) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strstr(h, n);
}

inline __attribute__((__always_inline__))
char* _Nullable __bionic_strpbrk(const char* _Nonnull h, const char* _Nonnull n) { return strpbrk(h, n); }

inline __attribute__((__always_inline__))
char* _Nullable strpbrk(char* _Nonnull h, const char* _Nonnull n) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strpbrk(h, n);
}

inline __attribute__((__always_inline__))
const char* _Nullable strpbrk(const char* _Nonnull h, const char* _Nonnull n) __attribute__((__enable_if__(true, "preferred overload"))) __attribute__((__enable_if__(true, ""))) {
    return __bionic_strpbrk(h, n);
}
}



}
# 62 "/data/data/com.termux/files/usr/include/c++/v1/string.h" 2 3
# 72 "/data/data/com.termux/files/usr/include/c++/v1/string.h" 3
extern "C++" {
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const char* strchr(const char* __s, int __c) {
  return __builtin_strchr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) char* strchr(char* __s, int __c) {
  return __builtin_strchr(__s, __c);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const char* strpbrk(const char* __s1, const char* __s2) {
  return __builtin_strpbrk(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) char* strpbrk(char* __s1, const char* __s2) {
  return __builtin_strpbrk(__s1, __s2);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const char* strrchr(const char* __s, int __c) {
  return __builtin_strrchr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) char* strrchr(char* __s, int __c) {
  return __builtin_strrchr(__s, __c);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const void* memchr(const void* __s, int __c, size_t __n) {
  return __builtin_memchr(__s, __c, __n);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) void* memchr(void* __s, int __c, size_t __n) {
  return __builtin_memchr(__s, __c, __n);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const char* strstr(const char* __s1, const char* __s2) {
  return __builtin_strstr(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) char* strstr(char* __s1, const char* __s2) {
  return __builtin_strstr(__s1, __s2);
}
}
# 49 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 1 3 4
# 13 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/bits/flock64.h" 1 3 4
# 10 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/flock.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/bits/flock.h" 3 4
extern "C" {
# 60 "/data/data/com.termux/files/usr/include/bits/flock.h" 3 4
struct flock { short l_type; short l_whence; off64_t l_start; off64_t l_len; pid_t l_pid; };
struct flock64 { short l_type; short l_whence; off64_t l_start; off64_t l_len; pid_t l_pid; };




}
# 11 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 2 3 4
# 110 "/data/data/com.termux/files/usr/include/asm-generic/fcntl.h" 3 4
struct f_owner_ex {
  int type;
  __kernel_pid_t pid;
};
# 14 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/fcntl.h" 2 3 4
# 51 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/seek_constants.h" 1 3 4
# 53 "/data/data/com.termux/files/usr/include/stdio.h" 2 3 4





extern "C" {

typedef off_t fpos_t;
typedef off64_t fpos64_t;

struct __sFILE;
typedef struct __sFILE FILE;


extern FILE* _Nonnull stdin __attribute__((__availability__(android,strict,introduced=23 )));
extern FILE* _Nonnull stdout __attribute__((__availability__(android,strict,introduced=23 )));
extern FILE* _Nonnull stderr __attribute__((__availability__(android,strict,introduced=23 )));
# 111 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
void clearerr(FILE* _Nonnull __fp);
int fclose(FILE* _Nonnull __fp);
int feof(FILE* _Nonnull __fp);
int ferror(FILE* _Nonnull __fp);
int fflush(FILE* _Nullable __fp);
int fgetc(FILE* _Nonnull __fp);
char* _Nullable fgets(char* _Nonnull __buf, int __size, FILE* _Nonnull __fp);
int fprintf(FILE* _Nonnull __fp , const char* _Nonnull __fmt, ...) __attribute__((__format__(printf, 2, 3)));
int fputc(int __ch, FILE* _Nonnull __fp);
int fputs(const char* _Nonnull __s, FILE* _Nonnull __fp);
size_t fread(void* _Nonnull __buf, size_t __size, size_t __count, FILE* _Nonnull __fp);
int fscanf(FILE* _Nonnull __fp, const char* _Nonnull __fmt, ...) __attribute__((__format__(scanf, 2, 3)));
size_t fwrite(const void* _Nonnull __buf, size_t __size, size_t __count, FILE* _Nonnull __fp);
int getc(FILE* _Nonnull __fp);
int getchar(void);
ssize_t getdelim(char* _Nullable * _Nonnull __line_ptr, size_t* _Nonnull __line_length_ptr, int __delimiter, FILE* _Nonnull __fp);
ssize_t getline(char* _Nullable * _Nonnull __line_ptr, size_t* _Nonnull __line_length_ptr, FILE* _Nonnull __fp);

void perror(const char* _Nullable __msg);
int printf(const char* _Nonnull __fmt, ...) __attribute__((__format__(printf, 1, 2)));
int putc(int __ch, FILE* _Nonnull __fp);
int putchar(int __ch);
int puts(const char* _Nonnull __s);
int remove(const char* _Nonnull __path);
void rewind(FILE* _Nonnull __fp);
int scanf(const char* _Nonnull __fmt, ...) __attribute__((__format__(scanf, 1, 2)));
void setbuf(FILE* _Nonnull __fp, char* _Nullable __buf);
int setvbuf(FILE* _Nonnull __fp, char* _Nullable __buf, int __mode, size_t __size);
int sscanf(const char* _Nonnull __s, const char* _Nonnull __fmt, ...) __attribute__((__format__(scanf, 2, 3)));
int ungetc(int __ch, FILE* _Nonnull __fp);
int vfprintf(FILE* _Nonnull __fp, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(printf, 2, 0)));
int vprintf(const char* _Nonnull __fp, va_list __args) __attribute__((__format__(printf, 1, 0)));

int dprintf(int __fd, const char* _Nonnull __fmt, ...) __attribute__((__format__(printf, 2, 3)));
int vdprintf(int __fd, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(printf, 2, 0)));





int sprintf(char* _Null_unspecified __s, const char* _Nonnull __fmt, ...)
    __attribute__((__format__(printf, 2, 3))) ;
int vsprintf(char* _Null_unspecified __s, const char* _Nonnull __fmt, va_list __args)
    __attribute__((__format__(printf, 2, 0))) ;
char* _Nullable tmpnam(char* _Nullable __s)
    __attribute__((__deprecated__("tmpnam is unsafe, use mkstemp or tmpfile instead")));

char* _Nullable tempnam(const char* _Nullable __dir, const char* _Nullable __prefix)
    __attribute__((__deprecated__("tempnam is unsafe, use mkstemp or tmpfile instead")));







int rename(const char* _Nonnull __old_path, const char* _Nonnull __new_path);







int renameat(int __old_dir_fd, const char* _Nonnull __old_path, int __new_dir_fd, const char* _Nonnull __new_path);
# 212 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int fseek(FILE* _Nonnull __fp, long __offset, int __whence);
long ftell(FILE* _Nonnull __fp);
# 238 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int fgetpos(FILE* _Nonnull __fp, fpos_t* _Nonnull __pos);
int fsetpos(FILE* _Nonnull __fp, const fpos_t* _Nonnull __pos);
int fseeko(FILE* _Nonnull __fp, off_t __offset, int __whence);
off_t ftello(FILE* _Nonnull __fp);


FILE* _Nullable funopen(const void* _Nullable __cookie,
              int (* _Null_unspecified __read_fn)(void* _Nonnull, char* _Nonnull, int),
              int (* _Null_unspecified __write_fn)(void* _Nonnull, const char* _Nonnull, int),
              fpos_t (* _Nullable __seek_fn)(void* _Nonnull, fpos_t, int),
              int (* _Nullable __close_fn)(void* _Nonnull));




int fgetpos64(FILE* _Nonnull __fp, fpos64_t* _Nonnull __pos) __attribute__((__availability__(android,strict,introduced=24 )));
int fsetpos64(FILE* _Nonnull __fp, const fpos64_t* _Nonnull __pos) __attribute__((__availability__(android,strict,introduced=24 )));
int fseeko64(FILE* _Nonnull __fp, off64_t __offset, int __whence) __attribute__((__availability__(android,strict,introduced=24 )));
off64_t ftello64(FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=24 )));






FILE* _Nullable funopen64(const void* _Nullable __cookie,
                int (* _Null_unspecified __read_fn)(void* _Nonnull, char* _Nonnull, int),
                int (* _Null_unspecified __write_fn)(void* _Nonnull, const char* _Nonnull, int),
                fpos64_t (* _Nullable __seek_fn)(void* _Nonnull, fpos64_t, int),
                int (* _Nullable __close_fn)(void* _Nonnull)) __attribute__((__availability__(android,strict,introduced=24 )));




FILE* _Nullable fopen(const char* _Nonnull __path, const char* _Nonnull __mode);


FILE* _Nullable fopen64(const char* _Nonnull __path, const char* _Nonnull __mode) __attribute__((__availability__(android,strict,introduced=24 )));


FILE* _Nullable freopen(const char* _Nullable __path, const char* _Nonnull __mode, FILE* _Nonnull __fp);


FILE* _Nullable freopen64(const char* _Nullable __path, const char* _Nonnull __mode, FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=24 )));



FILE* _Nullable tmpfile64(void) __attribute__((__availability__(android,strict,introduced=24 )));



int snprintf(char* _Null_unspecified __buf, size_t __size, const char* _Nonnull __fmt, ...) __attribute__((__format__(printf, 3, 4)));
int vfscanf(FILE* _Nonnull __fp, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(scanf, 2, 0)));
int vscanf(const char* _Nonnull __fmt , va_list __args) __attribute__((__format__(scanf, 1, 0)));
int vsnprintf(char* _Null_unspecified __buf, size_t __size, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(printf, 3, 0)));
int vsscanf(const char* _Nonnull __s, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(scanf, 2, 0)));
# 302 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
static __inline__ char* _Nonnull ctermid(char* _Nullable s) {
 if (s == 0) return (char*) "/dev/tty";
 strcpy(s, "/dev/tty");
 return s;
}


FILE* _Nullable fdopen(int __fd, const char* _Nonnull __mode);
int fileno(FILE* _Nonnull __fp);
int pclose(FILE* _Nonnull __fp);
FILE* _Nullable popen(const char* _Nonnull __command, const char* _Nonnull __mode);
void flockfile(FILE* _Nonnull __fp);
int ftrylockfile(FILE* _Nonnull __fp);
void funlockfile(FILE* _Nonnull __fp);
int getc_unlocked(FILE* _Nonnull __fp);
int getchar_unlocked(void);
int putc_unlocked(int __ch, FILE* _Nonnull __fp);
int putchar_unlocked(int __ch);



FILE* _Nullable fmemopen(void* _Nullable __buf, size_t __size, const char* _Nonnull __mode) __attribute__((__availability__(android,strict,introduced=23 )));
FILE* _Nullable open_memstream(char* _Nonnull * _Nonnull __ptr, size_t* _Nonnull __size_ptr) __attribute__((__availability__(android,strict,introduced=23 )));




int asprintf(char* _Nullable * _Nonnull __s_ptr, const char* _Nonnull __fmt, ...) __attribute__((__format__(printf, 2, 3)));
char* _Nullable fgetln(FILE* _Nonnull __fp, size_t* _Nonnull __length_ptr);
int fpurge(FILE* _Nonnull __fp);
void setbuffer(FILE* _Nonnull __fp, char* _Nullable __buf, int __size);
int setlinebuf(FILE* _Nonnull __fp);
int vasprintf(char* _Nullable * _Nonnull __s_ptr, const char* _Nonnull __fmt, va_list __args) __attribute__((__format__(printf, 2, 0)));


void clearerr_unlocked(FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=23 )));
int feof_unlocked(FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=23 )));
int ferror_unlocked(FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=23 )));




int fileno_unlocked(FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=24 )));
# 376 "/data/data/com.termux/files/usr/include/stdio.h" 3 4
int open(const char*, int, ...);
extern pid_t getpid();
extern int unlink(const char*);
void free(void* p);
uint32_t arc4random(void);
static __inline__ FILE* _Nullable tmpfile() {
 int p = getpid();
 char* path;
 int i;
 for (i = 0; i < 100; i++) {
  unsigned int r = arc4random();
  if (asprintf(&path, "/data/data/com.termux/files/usr/tmp/tmpfile.%d-%u", p, r) == -1) return __null;
  int fd = open(path, 00000002 | 00000100 | 00000200 | 0400000, 0600);
  if (fd >= 0) {
   FILE* result = fdopen(fd, "w+");
   unlink(path);
   free(path);
   return result;
  }
  free(path);
 }
 return __null;
}

}
# 109 "/data/data/com.termux/files/usr/include/c++/v1/stdio.h" 2 3
# 31 "/data/data/com.termux/files/usr/include/malloc.h" 2 3 4

extern "C" {
# 58 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* _Nullable malloc(size_t __byte_count) __attribute__((__malloc__)) __attribute__((__alloc_size__(1))) __attribute__((__warn_unused_result__));
# 67 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* _Nullable calloc(size_t __item_count, size_t __item_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2))) __attribute__((__warn_unused_result__));
# 77 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* _Nullable realloc(void* _Nullable __ptr, size_t __byte_count) __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));
# 100 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void free(void* _Nullable __ptr);
# 111 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
void* _Nullable memalign(size_t __alignment, size_t __byte_count) __attribute__((__malloc__)) __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));





size_t malloc_usable_size(const void* _Nullable __ptr);
# 143 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
struct mallinfo { size_t arena; size_t ordblks; size_t smblks; size_t hblks; size_t hblkhd; size_t usmblks; size_t fsmblks; size_t uordblks; size_t fordblks; size_t keepcost; };







struct mallinfo mallinfo(void);




struct mallinfo2 { size_t arena; size_t ordblks; size_t smblks; size_t hblks; size_t hblkhd; size_t usmblks; size_t fsmblks; size_t uordblks; size_t fordblks; size_t keepcost; };






struct mallinfo2 mallinfo2(void) __asm__("mallinfo");
# 192 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
int malloc_info(int __must_be_zero, FILE* _Nonnull __fp) __attribute__((__availability__(android,strict,introduced=23 )));
# 321 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
enum HeapTaggingLevel {




  M_HEAP_TAGGING_LEVEL_NONE = 0,






  M_HEAP_TAGGING_LEVEL_TBI = 1,





  M_HEAP_TAGGING_LEVEL_ASYNC = 2,





  M_HEAP_TAGGING_LEVEL_SYNC = 3,

};
# 421 "/data/data/com.termux/files/usr/include/malloc.h" 3 4
}
# 35 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4






extern "C" {




__attribute__((__noreturn__)) void abort(void) __attribute__((__nomerge__));
__attribute__((__noreturn__)) void exit(int __status);
__attribute__((__noreturn__)) void _Exit(int __status);

int atexit(void (* _Nonnull __fn)(void));

int at_quick_exit(void (* _Nonnull __fn)(void));
void quick_exit(int __status) __attribute__((__noreturn__));

char* _Nullable getenv(const char* _Nonnull __name);
int putenv(char* _Nonnull __assignment);
int setenv(const char* _Nonnull __name, const char* _Nonnull __value, int __overwrite);
int unsetenv(const char* _Nonnull __name);
int clearenv(void);

char* _Nullable mkdtemp(char* _Nonnull __template);
char* _Nullable mktemp(char* _Nonnull __template) __attribute__((__deprecated__("mktemp is unsafe, use mkstemp or tmpfile instead")));



int mkostemp64(char* _Nonnull __template, int __flags) __attribute__((__availability__(android,strict,introduced=23 )));
int mkostemp(char* _Nonnull __template, int __flags) __attribute__((__availability__(android,strict,introduced=23 )));
int mkostemps64(char* _Nonnull __template, int __suffix_length, int __flags) __attribute__((__availability__(android,strict,introduced=23 )));
int mkostemps(char* _Nonnull __template, int __suffix_length, int __flags) __attribute__((__availability__(android,strict,introduced=23 )));


int mkstemp64(char* _Nonnull __template);
int mkstemp(char* _Nonnull __template);


int mkstemps64(char* _Nonnull __template, int __flags) __attribute__((__availability__(android,strict,introduced=23 )));


int mkstemps(char* _Nonnull __template, int __flags);

long strtol(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);
long long strtoll(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);
unsigned long strtoul(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);
unsigned long long strtoull(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);

int posix_memalign(void* _Nullable * _Nullable __memptr, size_t __alignment, size_t __size);







double strtod(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr);
long double strtold(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr);







int atoi(const char* _Nonnull __s) __attribute__((__pure__));
long atol(const char* _Nonnull __s) __attribute__((__pure__));
long long atoll(const char* _Nonnull __s) __attribute__((__pure__));

__attribute__((__warn_unused_result__)) char* _Nullable realpath(const char* _Nonnull __path, char* _Nullable __resolved);
# 125 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
int system(const char* _Nonnull __command);

void* _Nullable bsearch(const void* _Nonnull __key, const void* _Nullable __base, size_t __nmemb, size_t __size, int (* _Nonnull __comparator)(const void* _Nonnull __lhs, const void* _Nonnull __rhs));

void qsort(void* _Nullable __base, size_t __nmemb, size_t __size, int (* _Nonnull __comparator)(const void* _Nullable __lhs, const void* _Nullable __rhs));

uint32_t arc4random(void);
uint32_t arc4random_uniform(uint32_t __upper_bound);
void arc4random_buf(void* _Nonnull __buf, size_t __n);



int rand_r(unsigned int* _Nonnull __seed_ptr);

double drand48(void);
double erand48(unsigned short __xsubi[_Nonnull 3]);
long jrand48(unsigned short __xsubi[_Nonnull 3]);


void lcong48(unsigned short __param[_Nonnull 7]) __attribute__((__availability__(android,strict,introduced=23 )));


long lrand48(void);
long mrand48(void);
long nrand48(unsigned short __xsubi[_Nonnull 3]);
unsigned short* _Nonnull seed48(unsigned short __seed16v[_Nonnull 3]);
void srand48(long __seed);

char* _Nullable initstate(unsigned int __seed, char* _Nonnull __state, size_t __n);
char* _Nullable setstate(char* _Nonnull __state);

int getpt(void);
int posix_openpt(int __flags);
char* _Nullable ptsname(int __fd);
int ptsname_r(int __fd, char* _Nonnull __buf, size_t __n);
int unlockpt(int __fd);







typedef struct {
  int quot;
  int rem;
} div_t;

div_t div(int __numerator, int __denominator) __attribute__((__const__));

typedef struct {
  long int quot;
  long int rem;
} ldiv_t;

ldiv_t ldiv(long __numerator, long __denominator) __attribute__((__const__));

typedef struct {
  long long int quot;
  long long int rem;
} lldiv_t;

lldiv_t lldiv(long long __numerator, long long __denominator) __attribute__((__const__));
# 203 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
const char* _Nullable getprogname(void);
void setprogname(const char* _Nonnull __name);

int mblen(const char* _Nullable __s, size_t __n) ;
size_t mbstowcs(wchar_t* _Nullable __dst, const char* _Nullable __src, size_t __n);
int mbtowc(wchar_t* _Nullable __wc_ptr, const char* _Nullable __s, size_t __n);
int wctomb(char* _Nullable __dst, wchar_t __wc);

size_t wcstombs(char* _Nullable __dst, const wchar_t* _Nullable __src, size_t __n);







int abs(int __x) __attribute__((__const__));
long labs(long __x) __attribute__((__const__));
long long llabs(long long __x) __attribute__((__const__));

float strtof(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr);
double atof(const char* _Nonnull __s) __attribute__((__pure__));
int rand(void);
void srand(unsigned int __seed);
long random(void);
void srandom(unsigned int __seed);
int grantpt(int __fd);

long long strtoll_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base, locale_t _Nonnull __l);
unsigned long long strtoull_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base, locale_t _Nonnull __l);
long double strtold_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, locale_t _Nonnull __l);
# 243 "/data/data/com.termux/files/usr/include/stdlib.h" 3 4
}

# 1 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/android/legacy_stdlib_inlines.h" 2 3 4


extern "C" {

static __inline__ double strtod_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, locale_t _Nonnull __l) {
  return strtod(__s, __end_ptr);
}

static __inline__ float strtof_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, locale_t _Nonnull __l) {
  return strtof(__s, __end_ptr);
}

static __inline__ long strtol_l(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base, locale_t _Nonnull __l) {
  return strtol(__s, __end_ptr, __base);
}

}
# 246 "/data/data/com.termux/files/usr/include/stdlib.h" 2 3 4
# 95 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 2 3



extern "C++" {
# 114 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 3
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long abs(long __x) noexcept { return __builtin_labs(__x); }
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long abs(long long __x) noexcept {
  return __builtin_llabs(__x);
}


[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float abs(float __lcpp_x) noexcept {
  return __builtin_fabsf(__lcpp_x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double abs(double __lcpp_x) noexcept {
  return __builtin_fabs(__lcpp_x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double abs(long double __lcpp_x) noexcept {
  return __builtin_fabsl(__lcpp_x);
}
# 147 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 3
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) ldiv_t div(long __x, long __y) noexcept { return ::ldiv(__x, __y); }

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) lldiv_t div(long long __x, long long __y) noexcept { return ::lldiv(__x, __y); }


}
# 24 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdio.h" 1 3
# 25 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/c++/v1/errno.h" 1 3
# 29 "/data/data/com.termux/files/usr/include/c++/v1/errno.h" 3



# 1 "/data/data/com.termux/files/usr/include/errno.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/errno.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/errno.h" 1 3 4






# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/errno.h" 1 3 4






# 1 "/data/data/com.termux/files/usr/include/asm-generic/errno.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/asm-generic/errno-base.h" 1 3 4
# 10 "/data/data/com.termux/files/usr/include/asm-generic/errno.h" 2 3 4
# 8 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/errno.h" 2 3 4
# 8 "/data/data/com.termux/files/usr/include/linux/errno.h" 2 3 4
# 38 "/data/data/com.termux/files/usr/include/errno.h" 2 3 4

extern "C" {
# 52 "/data/data/com.termux/files/usr/include/errno.h" 3 4
int* _Nonnull __errno(void) __attribute__((__const__));







}
# 33 "/data/data/com.termux/files/usr/include/c++/v1/errno.h" 2 3
# 26 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2



# 1 "/data/data/com.termux/files/usr/include/unistd.h" 1 3 4
# 31 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/sys/select.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/time.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/bits/timespec.h" 1 3 4
# 46 "/data/data/com.termux/files/usr/include/bits/timespec.h" 3 4
struct timespec {

  time_t tv_sec;

  long tv_nsec;
};
# 10 "/data/data/com.termux/files/usr/include/linux/time.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/linux/time_types.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/linux/time.h" 1 3 4
# 10 "/data/data/com.termux/files/usr/include/linux/time_types.h" 2 3 4

struct __kernel_timespec {
  __kernel_time64_t tv_sec;
  long long tv_nsec;
};
struct __kernel_itimerspec {
  struct __kernel_timespec it_interval;
  struct __kernel_timespec it_value;
};
struct __kernel_old_timespec {
  __kernel_old_time_t tv_sec;
  long tv_nsec;
};
struct __kernel_sock_timeval {
  __s64 tv_sec;
  __s64 tv_usec;
};
# 12 "/data/data/com.termux/files/usr/include/linux/time.h" 2 3 4



struct timeval {
  __kernel_old_time_t tv_sec;
  __kernel_suseconds_t tv_usec;
};
struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};
struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
# 40 "/data/data/com.termux/files/usr/include/sys/select.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/signal.h" 1 3 4
# 35 "/data/data/com.termux/files/usr/include/signal.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/sigcontext.h" 1 3 4
# 11 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/sigcontext.h" 3 4
struct sigcontext {
  __u64 fault_address;
  __u64 regs[31];
  __u64 sp;
  __u64 pc;
  __u64 pstate;
  __u8 __reserved[4096] __attribute__((__aligned__(16)));
};
struct _aarch64_ctx {
  __u32 magic;
  __u32 size;
};

struct fpsimd_context {
  struct _aarch64_ctx head;
  __u32 fpsr;
  __u32 fpcr;
  __uint128_t vregs[32];
};

struct esr_context {
  struct _aarch64_ctx head;
  __u64 esr;
};

struct extra_context {
  struct _aarch64_ctx head;
  __u64 datap;
  __u32 size;
  __u32 __reserved[3];
};

struct sve_context {
  struct _aarch64_ctx head;
  __u16 vl;
  __u16 flags;
  __u16 __reserved[2];
};


struct tpidr2_context {
  struct _aarch64_ctx head;
  __u64 tpidr2;
};

struct za_context {
  struct _aarch64_ctx head;
  __u16 vl;
  __u16 __reserved[3];
};

struct zt_context {
  struct _aarch64_ctx head;
  __u16 nregs;
  __u16 __reserved[3];
};

# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/sve_context.h" 1 3 4
# 69 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/sigcontext.h" 2 3 4
# 36 "/data/data/com.termux/files/usr/include/signal.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 3 4
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/limits.h" 1 3 4
# 25 "/data/data/com.termux/files/usr/lib/clang/19/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/limits.h" 1 3 4
# 41 "/data/data/com.termux/files/usr/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/float.h" 1 3 4
# 77 "/data/data/com.termux/files/usr/include/c++/v1/float.h" 3



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/float.h" 1 3
# 81 "/data/data/com.termux/files/usr/include/c++/v1/float.h" 2 3
# 42 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/linux/limits.h" 1 3 4
# 44 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4
# 143 "/data/data/com.termux/files/usr/include/limits.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/posix_limits.h" 1 3 4
# 144 "/data/data/com.termux/files/usr/include/limits.h" 2 3 4
# 26 "/data/data/com.termux/files/usr/lib/clang/19/include/limits.h" 2 3 4
# 34 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/signal.h" 1 3 4








# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/signal.h" 1 3 4
# 12 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/signal.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/asm-generic/signal.h" 1 3 4
# 56 "/data/data/com.termux/files/usr/include/asm-generic/signal.h" 3 4
typedef struct {
  unsigned long sig[(64 / 64)];
} sigset_t;
typedef unsigned long old_sigset_t;
# 1 "/data/data/com.termux/files/usr/include/asm-generic/signal-defs.h" 1 3 4
# 45 "/data/data/com.termux/files/usr/include/asm-generic/signal-defs.h" 3 4
typedef void __signalfn_t(int);
typedef __signalfn_t * __sighandler_t;
typedef void __restorefn_t(void);
typedef __restorefn_t * __sigrestore_t;
# 61 "/data/data/com.termux/files/usr/include/asm-generic/signal.h" 2 3 4



struct __kernel_sigaction {
  __sighandler_t sa_handler;
  unsigned long sa_flags;

  __sigrestore_t sa_restorer;

  sigset_t sa_mask;
};
typedef struct sigaltstack {
  void * ss_sp;
  int ss_flags;
  __kernel_size_t ss_size;
} stack_t;
# 13 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/signal.h" 2 3 4
# 10 "/data/data/com.termux/files/usr/include/linux/signal.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/siginfo.h" 1 3 4






# 1 "/data/data/com.termux/files/usr/include/asm-generic/siginfo.h" 1 3 4
# 11 "/data/data/com.termux/files/usr/include/asm-generic/siginfo.h" 3 4
typedef union sigval {
  int sival_int;
  void * sival_ptr;
} sigval_t;
# 25 "/data/data/com.termux/files/usr/include/asm-generic/siginfo.h" 3 4
union __sifields {
  struct {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
  } _kill;
  struct {
    __kernel_timer_t _tid;
    int _overrun;
    sigval_t _sigval;
    int _sys_private;
  } _timer;
  struct {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    sigval_t _sigval;
  } _rt;
  struct {
    __kernel_pid_t _pid;
    __kernel_uid32_t _uid;
    int _status;
    __kernel_clock_t _utime;
    __kernel_clock_t _stime;
  } _sigchld;
  struct {
    void * _addr;

    union {
      int _trapno;
      short _addr_lsb;
      struct {
        char _dummy_bnd[(__alignof__(void *) < sizeof(short) ? sizeof(short) : __alignof__(void *))];
        void * _lower;
        void * _upper;
      } _addr_bnd;
      struct {
        char _dummy_pkey[(__alignof__(void *) < sizeof(short) ? sizeof(short) : __alignof__(void *))];
        __u32 _pkey;
      } _addr_pkey;
      struct {
        unsigned long _data;
        __u32 _type;
        __u32 _flags;
      } _perf;
    };
  } _sigfault;
  struct {
    long _band;
    int _fd;
  } _sigpoll;
  struct {
    void * _call_addr;
    int _syscall;
    unsigned int _arch;
  } _sigsys;
};







typedef struct siginfo {
  union {
    struct { int si_signo; int si_errno; int si_code; union __sifields _sifields; };
    int _si_pad[128 / sizeof(int)];
  };
} siginfo_t;
# 215 "/data/data/com.termux/files/usr/include/asm-generic/siginfo.h" 3 4
typedef struct sigevent {
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  union {
    int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
    int _tid;
    struct {
      void(* _function) (sigval_t);
      void * _attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;
# 8 "/data/data/com.termux/files/usr/include/aarch64-linux-android/asm/siginfo.h" 2 3 4
# 11 "/data/data/com.termux/files/usr/include/linux/signal.h" 2 3 4
# 35 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 2 3 4
# 46 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 3 4
typedef int sig_atomic_t;

typedef __sighandler_t sig_t;
typedef __sighandler_t sighandler_t;





typedef sigset_t sigset64_t;
# 76 "/data/data/com.termux/files/usr/include/bits/signal_types.h" 3 4
struct sigaction { int sa_flags; union { sighandler_t sa_handler; void (*sa_sigaction)(int, struct siginfo*, void*); }; sigset_t sa_mask; void (*sa_restorer)(void); };
struct sigaction64 { int sa_flags; union { sighandler_t sa_handler; void (*sa_sigaction)(int, struct siginfo*, void*); }; sigset_t sa_mask; void (*sa_restorer)(void); };
# 38 "/data/data/com.termux/files/usr/include/signal.h" 2 3 4



# 1 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/signal.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/user.h" 1 3 4
# 32 "/data/data/com.termux/files/usr/include/sys/user.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/sys/user.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/bits/page_size.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/bits/page_size.h" 3 4
extern "C" {
# 49 "/data/data/com.termux/files/usr/include/bits/page_size.h" 3 4
}
# 36 "/data/data/com.termux/files/usr/include/sys/user.h" 2 3 4

extern "C" {
# 222 "/data/data/com.termux/files/usr/include/sys/user.h" 3 4
struct user_regs_struct {
  uint64_t regs[31];
  uint64_t sp;
  uint64_t pc;
  uint64_t pstate;
};
struct user_fpsimd_struct {
  __uint128_t vregs[32];
  uint32_t fpsr;
  uint32_t fpcr;
};
# 245 "/data/data/com.termux/files/usr/include/sys/user.h" 3 4
}
# 35 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 2 3 4

extern "C" {
# 105 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 3 4
typedef unsigned long greg_t;
typedef greg_t gregset_t[34];
typedef struct user_fpsimd_struct fpregset_t;


typedef struct sigcontext mcontext_t;

typedef struct ucontext {
  unsigned long uc_flags;
  struct ucontext *uc_link;
  stack_t uc_stack;
  union {
    sigset_t uc_sigmask;
    sigset64_t uc_sigmask64;
  };

  char __padding[128 - sizeof(sigset_t)];
  mcontext_t uc_mcontext;
} ucontext_t;
# 392 "/data/data/com.termux/files/usr/include/sys/ucontext.h" 3 4
}
# 42 "/data/data/com.termux/files/usr/include/signal.h" 2 3 4


extern "C" {
# 54 "/data/data/com.termux/files/usr/include/signal.h" 3 4
int __libc_current_sigrtmin(void);
int __libc_current_sigrtmax(void);

extern const char* _Nonnull const sys_siglist[(64 + 1)];
extern const char* _Nonnull const sys_signame[(64 + 1)];



int sigaction(int __signal, const struct sigaction* _Nullable __new_action, struct sigaction* _Nullable __old_action);






int siginterrupt(int __signal, int __flag);

sighandler_t _Nonnull signal(int __signal, sighandler_t _Nullable __handler);
int sigaddset(sigset_t* _Nonnull __set, int __signal);





int sigdelset(sigset_t* _Nonnull __set, int __signal);





int sigemptyset(sigset_t* _Nonnull __set);





int sigfillset(sigset_t* _Nonnull __set);





int sigismember(const sigset_t* _Nonnull __set, int __signal);






int sigpending(sigset_t* _Nonnull __set);





int sigprocmask(int __how, const sigset_t* _Nullable __new_set, sigset_t* _Nullable __old_set);





int sigsuspend(const sigset_t* _Nonnull __mask);





int sigwait(const sigset_t* _Nonnull __set, int* _Nonnull __signal);
# 145 "/data/data/com.termux/files/usr/include/signal.h" 3 4
int raise(int __signal);
int kill(pid_t __pid, int __signal);
int killpg(int __pgrp, int __signal);
int tgkill(int __tgid, int __tid, int __signal);

int sigaltstack(const stack_t* _Nullable __new_signal_stack, stack_t* _Nullable __old_signal_stack);

void psiginfo(const siginfo_t* _Nonnull __info, const char* _Nullable __msg);
void psignal(int __signal, const char* _Nullable __msg);

int pthread_kill(pthread_t __pthread, int __signal);
# 164 "/data/data/com.termux/files/usr/include/signal.h" 3 4
int pthread_sigmask(int __how, const sigset_t* _Nullable __new_set, sigset_t* _Nullable __old_set);
# 173 "/data/data/com.termux/files/usr/include/signal.h" 3 4
int sigqueue(pid_t __pid, int __signal, const union sigval __value) __attribute__((__availability__(android,strict,introduced=23 )));
int sigtimedwait(const sigset_t* _Nonnull __set, siginfo_t* _Nullable __info, const struct timespec* _Nullable __timeout) __attribute__((__availability__(android,strict,introduced=23 )));
# 184 "/data/data/com.termux/files/usr/include/signal.h" 3 4
int sigwaitinfo(const sigset_t* _Nonnull __set, siginfo_t* _Nullable __info) __attribute__((__availability__(android,strict,introduced=23 )));
# 193 "/data/data/com.termux/files/usr/include/signal.h" 3 4
}
# 41 "/data/data/com.termux/files/usr/include/sys/select.h" 2 3 4

extern "C" {

typedef unsigned long fd_mask;
# 57 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
typedef struct {
  fd_mask fds_bits[1024/(8 * sizeof(fd_mask))];
} fd_set;
# 74 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
void __FD_CLR_chk(int, fd_set* _Nonnull , size_t);
void __FD_SET_chk(int, fd_set* _Nonnull, size_t);
int __FD_ISSET_chk(int, const fd_set* _Nonnull, size_t);
# 98 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
int select(int __max_fd_plus_one, fd_set* _Nullable __read_fds, fd_set* _Nullable __write_fds, fd_set* _Nullable __exception_fds, struct timeval* _Nullable __timeout);
# 109 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
int pselect(int __max_fd_plus_one, fd_set* _Nullable __read_fds, fd_set* _Nullable __write_fds, fd_set* _Nullable __exception_fds, const struct timespec* _Nullable __timeout, const sigset_t* _Nullable __mask);
# 128 "/data/data/com.termux/files/usr/include/sys/select.h" 3 4
}
# 35 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/fcntl.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/fcntl.h" 3 4
extern "C" {







int fcntl(int __fd, int __op, ...);

}
# 37 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/getentropy.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/bits/getentropy.h" 3 4
extern "C" {
# 57 "/data/data/com.termux/files/usr/include/bits/getentropy.h" 3 4
}
# 38 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/getopt.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/bits/getopt.h" 3 4
extern "C" {







int getopt(int __argc, char* const _Nonnull __argv[_Nullable], const char* _Nonnull __options);




extern char* _Nullable optarg;






extern int optind;






extern int opterr;




extern int optopt;

}
# 39 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/ioctl.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/ioctl.h" 3 4
extern "C" {




int ioctl(int __fd, int __op, ...);
# 60 "/data/data/com.termux/files/usr/include/bits/ioctl.h" 3 4
int ioctl(int __fd, unsigned __op, ...) __attribute__((__overloadable__)) __attribute__((__enable_if__(1, ""))) __asm__("ioctl");


}
# 40 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/lockf.h" 1 3 4
# 48 "/data/data/com.termux/files/usr/include/bits/lockf.h" 3 4
extern "C" {
# 61 "/data/data/com.termux/files/usr/include/bits/lockf.h" 3 4
int lockf(int __fd, int __op, off_t __length) __attribute__((__availability__(android,strict,introduced=24 )));





int lockf64(int __fd, int __op, off64_t __length) __attribute__((__availability__(android,strict,introduced=24 )));



}
# 41 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/bits/sysconf.h" 1 3 4
# 332 "/data/data/com.termux/files/usr/include/bits/sysconf.h" 3 4
extern "C" {
# 347 "/data/data/com.termux/files/usr/include/bits/sysconf.h" 3 4
long sysconf(int __name);

}
# 44 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4

extern "C" {
# 77 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
extern char* _Nullable * _Nullable environ;

__attribute__((__noreturn__)) void _exit(int __status);
# 88 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
pid_t fork(void);
# 118 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
pid_t vfork(void) __attribute__((__returns_twice__));







pid_t getpid(void);







pid_t gettid(void);

pid_t getpgid(pid_t __pid);
int setpgid(pid_t __pid, pid_t __pgid);
pid_t getppid(void);
pid_t getpgrp(void);
int setpgrp(void);
pid_t getsid(pid_t __pid);
pid_t setsid(void);

int execv(const char* _Nonnull __path, char* _Nullable const* _Nullable __argv);
int execvp(const char* _Nonnull __file, char* _Nullable const* _Nullable __argv);
int execvpe(const char* _Nonnull __file, char* _Nullable const* _Nullable __argv, char* _Nullable const* _Nullable __envp);
int execve(const char* _Nonnull __file, char* _Nullable const* _Nullable __argv, char* _Nullable const* _Nullable __envp);
int execl(const char* _Nonnull __path, const char* _Nullable __arg0, ...) __attribute__((__sentinel__));
int execlp(const char* _Nonnull __file, const char* _Nullable __arg0, ...) __attribute__((__sentinel__));
int execle(const char* _Nonnull __path, const char* _Nullable __arg0, ... )
    __attribute__((__sentinel__(1)));






int nice(int __incr);
# 169 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setegid(gid_t __gid);
# 180 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int seteuid(uid_t __uid);
# 191 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setgid(gid_t __gid);
# 202 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setregid(gid_t __rgid, gid_t __egid);
# 213 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setresgid(gid_t __rgid, gid_t __egid, gid_t __sgid);
# 224 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setresuid(uid_t __ruid, uid_t __euid, uid_t __suid);
# 235 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setreuid(uid_t __ruid, uid_t __euid);
# 246 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int setuid(uid_t __uid);

uid_t getuid(void);
uid_t geteuid(void);
gid_t getgid(void);
gid_t getegid(void);
int getgroups(int __size, gid_t* _Nullable __list);
int setgroups(size_t __size, const gid_t* _Nullable __list);
int getresuid(uid_t* _Nonnull __ruid, uid_t* _Nonnull __euid, uid_t* _Nonnull __suid);
int getresgid(gid_t* _Nonnull __rgid, gid_t* _Nonnull __egid, gid_t* _Nonnull __sgid);
char* _Nullable getlogin(void);






long fpathconf(int __fd, int __name);
long pathconf(const char* _Nonnull __path, int __name);

int access(const char* _Nonnull __path, int __mode);
int faccessat(int __dirfd, const char* _Nonnull __path, int __mode, int __flags);
int link(const char* _Nonnull __old_path, const char* _Nonnull __new_path);
int linkat(int __old_dir_fd, const char* _Nonnull __old_path, int __new_dir_fd, const char* _Nonnull __new_path, int __flags);
int unlink(const char* _Nonnull __path);
int unlinkat(int __dirfd, const char* _Nonnull __path, int __flags);
int chdir(const char* _Nonnull __path);
int fchdir(int __fd);
int rmdir(const char* _Nonnull __path);
int pipe(int __fds[_Nonnull 2]);

int pipe2(int __fds[_Nonnull 2], int __flags);

int chroot(const char* _Nonnull __path);
int symlink(const char* _Nonnull __old_path, const char* _Nonnull __new_path);
int symlinkat(const char* _Nonnull __old_path, int __new_dir_fd, const char* _Nonnull __new_path);
ssize_t readlink(const char* _Nonnull __path, char* _Nonnull __buf, size_t __buf_size);
ssize_t readlinkat(int __dir_fd, const char* _Nonnull __path, char* _Nonnull __buf, size_t __buf_size);
int chown(const char* _Nonnull __path, uid_t __owner, gid_t __group);
int fchown(int __fd, uid_t __owner, gid_t __group);
int fchownat(int __dir_fd, const char* _Nonnull __path, uid_t __owner, gid_t __group, int __flags);
int lchown(const char* _Nonnull __path, uid_t __owner, gid_t __group);
char* _Nullable getcwd(char* _Nullable __buf, size_t __size);

void sync(void);
# 299 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int close(int __fd);
# 311 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
ssize_t read(int __fd, void* _Null_unspecified __buf, size_t __count);
# 323 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
ssize_t write(int __fd, const void* _Null_unspecified __buf, size_t __count);

int dup(int __old_fd);
int dup2(int __old_fd, int __new_fd);
int dup3(int __old_fd, int __new_fd, int __flags);
int fsync(int __fd);
int fdatasync(int __fd);
# 339 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int truncate(const char* _Nonnull __path, off_t __length);
off_t lseek(int __fd, off_t __offset, int __whence);
ssize_t pread(int __fd, void* _Nonnull __buf, size_t __count, off_t __offset);
ssize_t pwrite(int __fd, const void* _Nonnull __buf, size_t __count, off_t __offset);
int ftruncate(int __fd, off_t __length);


int truncate64(const char* _Nonnull __path, off64_t __length);
off64_t lseek64(int __fd, off64_t __offset, int __whence);
ssize_t pread64(int __fd, void* _Nonnull __buf, size_t __count, off64_t __offset);
ssize_t pwrite64(int __fd, const void* _Nonnull __buf, size_t __count, off64_t __offset);
int ftruncate64(int __fd, off64_t __length);

int pause(void);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
int usleep(useconds_t __microseconds);

int gethostname(char* _Nonnull _buf, size_t __buf_size);


int sethostname(const char* _Nonnull __name, size_t __n) __attribute__((__availability__(android,strict,introduced=23 )));



int brk(void* _Nonnull __addr);
void* _Nullable sbrk(ptrdiff_t __increment);

int isatty(int __fd);
char* _Nullable ttyname(int __fd);
int ttyname_r(int __fd, char* _Nonnull __buf, size_t __buf_size);

int acct(const char* _Nullable __path);
# 380 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
int getpagesize(void) __attribute__((__const__));

long syscall(long __number, ...);

int daemon(int __no_chdir, int __no_close);
# 394 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
pid_t tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, pid_t __pid);
# 463 "/data/data/com.termux/files/usr/include/unistd.h" 3 4
static __inline__ char* getpass(const char* prompt) {

    struct _termios {
        unsigned int c_iflag;
        unsigned int c_oflag;
        unsigned int c_cflag;
        unsigned int c_lflag;
        unsigned char c_line;
        unsigned char c_cc[19 ];
    };

    struct _termios term_old, term_new;
    static char password[513] = { 0 };
    int len = 0, tty_changed = 0;


    while (*prompt) {
        write(1, prompt, 1);
        prompt++;
    }


    if (ioctl(0, 0x5401 , &term_old) == 0) {
        term_new = term_old;
        term_new.c_lflag &= ~0000010;

        if (ioctl(0, 0x5402+0 , &term_new) == 0) {
            tty_changed = 1;
        } else {
            tty_changed = 0;
        }
    }


    char chr;
    while (read(0, &chr, sizeof(char)) > 0) {
        if (chr == '\r' || chr == '\n' || chr == 0) {
            break;
        }

        if (len == sizeof(password)-1) {


            continue;
        } else {
            password[len++] = chr;
        }
    }
    password[len] = 0;


    if (tty_changed) {
        ioctl(0, 0x5402+0 , &term_old);
    }


    write(1, "\n", 1);

    return password;
}


}

# 1 "/data/data/com.termux/files/usr/include/android/legacy_unistd_inlines.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/android/legacy_unistd_inlines.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/swab.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/bits/swab.h" 3 4
extern "C" {

static __inline__ void swab(const void* _Nonnull __void_src, void* _Nonnull __void_dst, ssize_t __byte_count) {
  const uint8_t* __src = (static_cast<const uint8_t*>(__void_src));
  uint8_t* __dst = (static_cast<uint8_t*>(__void_dst));
  while (__byte_count > 1) {
    uint8_t x = *__src++;
    uint8_t y = *__src++;
    *__dst++ = y;
    *__dst++ = x;
    __byte_count -= 2;
  }
}

}
# 37 "/data/data/com.termux/files/usr/include/android/legacy_unistd_inlines.h" 2 3 4
# 528 "/data/data/com.termux/files/usr/include/unistd.h" 2 3 4
# 30 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2





# 1 "/data/data/com.termux/files/usr/include/assert.h" 1 3 4
# 73 "/data/data/com.termux/files/usr/include/assert.h" 3 4
extern "C" {





void __assert(const char* _Nonnull __file, int __line, const char* _Nonnull __msg) __attribute__((__noreturn__));





void __assert2(const char* _Nonnull __file, int __line, const char* _Nonnull __function, const char* _Nonnull __msg) __attribute__((__noreturn__));

}
# 36 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 1 3
# 109 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3
# 110 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 2 3
# 118 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 3
# 127 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 3
# 1 "/data/data/com.termux/files/usr/include/wchar.h" 1 3 4
# 33 "/data/data/com.termux/files/usr/include/wchar.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdio.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3 4
# 36 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/time.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/time.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sys/time.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/sys/time.h" 3 4
extern "C" {

int gettimeofday(struct timeval* _Nullable __tv, struct timezone* _Nullable __tz);
int settimeofday(const struct timeval* _Nullable __tv, const struct timezone* _Nullable __tz);

int getitimer(int __which, struct itimerval* _Nonnull __current_value);
int setitimer(int __which, const struct itimerval* _Nonnull __new_value, struct itimerval* _Nullable __old_value);

int utimes(const char* _Nonnull __path, const struct timeval __times[_Nullable 2]);



int futimes(int __fd, const struct timeval __times[_Nullable 2]);
int lutimes(const char* _Nonnull __path, const struct timeval __times[_Nullable 2]);
# 71 "/data/data/com.termux/files/usr/include/sys/time.h" 3 4
int futimesat(int __dir_fd, const char* _Null_unspecified __path, const struct timeval __times[_Nullable 2]);
# 115 "/data/data/com.termux/files/usr/include/sys/time.h" 3 4
}
# 38 "/data/data/com.termux/files/usr/include/time.h" 2 3 4


extern "C" {
# 63 "/data/data/com.termux/files/usr/include/time.h" 3 4
extern char* _Nonnull tzname[];


extern int daylight;


extern long int timezone;

struct sigevent;




struct tm {

  int tm_sec;

  int tm_min;

  int tm_hour;

  int tm_mday;

  int tm_mon;

  int tm_year;

  int tm_wday;

  int tm_yday;

  int tm_isdst;

  long int tm_gmtoff;

  const char* _Nullable tm_zone;
};
# 110 "/data/data/com.termux/files/usr/include/time.h" 3 4
time_t time(time_t* _Nullable __t);
# 120 "/data/data/com.termux/files/usr/include/time.h" 3 4
int nanosleep(const struct timespec* _Nonnull __duration, struct timespec* _Nullable __remainder);
# 132 "/data/data/com.termux/files/usr/include/time.h" 3 4
char* _Nullable asctime(const struct tm* _Nonnull __tm);
# 142 "/data/data/com.termux/files/usr/include/time.h" 3 4
char* _Nullable asctime_r(const struct tm* _Nonnull __tm, char* _Nonnull __buf);







double difftime(time_t __lhs, time_t __rhs);
# 161 "/data/data/com.termux/files/usr/include/time.h" 3 4
time_t mktime(struct tm* _Nonnull __tm);
# 186 "/data/data/com.termux/files/usr/include/time.h" 3 4
struct tm* _Nullable localtime(const time_t* _Nonnull __t);
# 198 "/data/data/com.termux/files/usr/include/time.h" 3 4
struct tm* _Nullable localtime_r(const time_t* _Nonnull __t, struct tm* _Nonnull __tm);
# 218 "/data/data/com.termux/files/usr/include/time.h" 3 4
time_t timelocal(struct tm* _Nonnull __tm);
# 229 "/data/data/com.termux/files/usr/include/time.h" 3 4
struct tm* _Nullable gmtime(const time_t* _Nonnull __t);
# 240 "/data/data/com.termux/files/usr/include/time.h" 3 4
struct tm* _Nullable gmtime_r(const time_t* _Nonnull __t, struct tm* _Nonnull __tm);




time_t timegm(struct tm* _Nonnull __tm);







char* _Nullable strptime(const char* _Nonnull __s, const char* _Nonnull __fmt, struct tm* _Nonnull __tm) __attribute__((__format__(strftime, 2, 0)));
# 270 "/data/data/com.termux/files/usr/include/time.h" 3 4
size_t strftime(char* _Nonnull __buf, size_t __n, const char* _Nonnull __fmt, const struct tm* _Nullable __tm) __attribute__((__format__(strftime, 3, 0)));




size_t strftime_l(char* _Nonnull __buf, size_t __n, const char* _Nonnull __fmt, const struct tm* _Nullable __tm, locale_t _Nonnull __l) __attribute__((__format__(strftime, 3, 0)));
# 287 "/data/data/com.termux/files/usr/include/time.h" 3 4
char* _Nullable ctime(const time_t* _Nonnull __t);
# 297 "/data/data/com.termux/files/usr/include/time.h" 3 4
char* _Nullable ctime_r(const time_t* _Nonnull __t, char* _Nonnull __buf);
# 311 "/data/data/com.termux/files/usr/include/time.h" 3 4
void tzset(void);
# 358 "/data/data/com.termux/files/usr/include/time.h" 3 4
clock_t clock(void);
# 368 "/data/data/com.termux/files/usr/include/time.h" 3 4
int clock_getcpuclockid(pid_t __pid, clockid_t* _Nonnull __clock) __attribute__((__availability__(android,strict,introduced=23 )));
# 378 "/data/data/com.termux/files/usr/include/time.h" 3 4
int clock_getres(clockid_t __clock, struct timespec* _Nullable __resolution);







int clock_gettime(clockid_t __clock, struct timespec* _Nonnull __ts);
# 397 "/data/data/com.termux/files/usr/include/time.h" 3 4
int clock_nanosleep(clockid_t __clock, int __flags, const struct timespec* _Nonnull __time, struct timespec* _Nullable __remainder);







int clock_settime(clockid_t __clock, const struct timespec* _Nonnull __ts);







int timer_create(clockid_t __clock, struct sigevent* _Nullable __event, timer_t _Nonnull * _Nonnull __timer_ptr);







int timer_delete(timer_t _Nonnull __timer);







int timer_settime(timer_t _Nonnull __timer, int __flags, const struct itimerspec* _Nonnull __new_value, struct itimerspec* _Nullable __old_value);







int timer_gettime(timer_t _Nonnull _timer, struct itimerspec* _Nonnull __ts);
# 446 "/data/data/com.termux/files/usr/include/time.h" 3 4
int timer_getoverrun(timer_t _Nonnull __timer);
# 504 "/data/data/com.termux/files/usr/include/time.h" 3 4
}
# 38 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4


# 1 "/data/data/com.termux/files/usr/include/bits/bionic_multibyte_result.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/bits/bionic_multibyte_result.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3 4
# 38 "/data/data/com.termux/files/usr/include/bits/bionic_multibyte_result.h" 2 3 4


extern "C" {







enum : size_t {


  BIONIC_MULTIBYTE_RESULT_ILLEGAL_SEQUENCE = -1UL,




  BIONIC_MULTIBYTE_RESULT_INCOMPLETE_SEQUENCE = -2UL,







  BIONIC_MULTIBYTE_RESULT_NO_BYTES_CONSUMED = -3UL,

};

}
# 41 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4
# 1 "/data/data/com.termux/files/usr/include/bits/mbstate_t.h" 1 3 4
# 42 "/data/data/com.termux/files/usr/include/bits/mbstate_t.h" 3 4
typedef struct {
  unsigned char __seq[4];

  unsigned char __reserved[4];

} mbstate_t;
# 42 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4

# 1 "/data/data/com.termux/files/usr/include/bits/wctype.h" 1 3 4
# 34 "/data/data/com.termux/files/usr/include/bits/wctype.h" 3 4
extern "C" {

typedef unsigned int wint_t;



int iswalnum(wint_t __wc);
int iswalpha(wint_t __wc);
int iswblank(wint_t __wc);
int iswcntrl(wint_t __wc);
int iswdigit(wint_t __wc);
int iswgraph(wint_t __wc);
int iswlower(wint_t __wc);
int iswprint(wint_t __wc);
int iswpunct(wint_t __wc);
int iswspace(wint_t __wc);
int iswupper(wint_t __wc);
int iswxdigit(wint_t __wc);

wint_t towlower(wint_t __wc);
wint_t towupper(wint_t __wc);

typedef long wctype_t;
wctype_t wctype(const char* _Nonnull __name);
int iswctype(wint_t __wc, wctype_t __type);

typedef const void* wctrans_t;
wint_t towctrans(wint_t __wc, wctrans_t _Nonnull __transform) ;
wctrans_t _Nullable wctrans(const char* _Nonnull __name) ;

}
# 44 "/data/data/com.termux/files/usr/include/wchar.h" 2 3 4

extern "C" {

wint_t btowc(int __ch);
int fwprintf(FILE* _Nonnull __fp, const wchar_t* _Nonnull __fmt, ...);
int fwscanf(FILE* _Nonnull __fp, const wchar_t* _Nonnull __fmt, ...);
wint_t fgetwc(FILE* _Nonnull __fp);
wchar_t* _Nullable fgetws(wchar_t* _Nonnull __buf, int __size, FILE* _Nonnull __fp);
wint_t fputwc(wchar_t __wc, FILE* _Nonnull __fp);
int fputws(const wchar_t* _Nonnull __s, FILE* _Nonnull __fp);
int fwide(FILE* _Nonnull __fp, int __mode);
wint_t getwc(FILE* _Nonnull __fp);
wint_t getwchar(void);
int mbsinit(const mbstate_t* _Nullable __ps);
size_t mbrlen(const char* _Nullable __s, size_t __n, mbstate_t* _Nullable __ps);
size_t mbrtowc(wchar_t* _Nullable __buf, const char* _Nullable __s, size_t __n, mbstate_t* _Nullable __ps);
size_t mbsrtowcs(wchar_t* _Nullable __dst, const char* _Nullable * _Nonnull __src, size_t __dst_n, mbstate_t* _Nullable __ps);





size_t mbsnrtowcs(wchar_t* _Nullable __dst, const char* _Nullable * _Nullable __src, size_t __src_n, size_t __dst_n, mbstate_t* _Nullable __ps);
wint_t putwc(wchar_t __wc, FILE* _Nonnull __fp);
wint_t putwchar(wchar_t __wc);
int swprintf(wchar_t* _Nonnull __buf, size_t __n, const wchar_t* _Nonnull __fmt, ...);
int swscanf(const wchar_t* _Nonnull __s, const wchar_t* _Nonnull __fmt, ...);
wint_t ungetwc(wint_t __wc, FILE* _Nonnull __fp);
int vfwprintf(FILE* _Nonnull __fp, const wchar_t* _Nonnull __fmt, va_list __args);
int vfwscanf(FILE* _Nonnull __fp, const wchar_t* _Nonnull __fmt, va_list __args);
int vswprintf(wchar_t* _Nonnull __buf, size_t __n, const wchar_t* _Nonnull __fmt, va_list __args);
int vswscanf(const wchar_t* _Nonnull __s, const wchar_t* _Nonnull __fmt, va_list __args);
int vwprintf(const wchar_t* _Nonnull __fmt, va_list __args);
int vwscanf(const wchar_t* _Nonnull __fmt, va_list __args);
wchar_t* _Nonnull wcpcpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src);
wchar_t* _Nonnull wcpncpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);
size_t wcrtomb(char* _Nullable __buf, wchar_t __wc, mbstate_t* _Nullable __ps);
int wcscasecmp(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs);


int wcscasecmp_l(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs, locale_t _Nonnull __l) __attribute__((__availability__(android,strict,introduced=23 )));


wchar_t* _Nonnull wcscat(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src);
wchar_t* _Nullable wcschr(const wchar_t * _Nonnull __s, wchar_t __wc);
int wcscmp(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs);
int wcscoll(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs);
wchar_t* _Nonnull wcscpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src);
size_t wcscspn(const wchar_t* _Nonnull __s, const wchar_t* _Nonnull __accept);
size_t wcsftime(wchar_t* _Nonnull __buf, size_t __n, const wchar_t* _Nullable __fmt, const struct tm* _Nonnull __tm);





size_t wcslen(const wchar_t* _Nonnull __s);
int wcsncasecmp(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs, size_t __n);


int wcsncasecmp_l(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs, size_t __n, locale_t _Nonnull __l) __attribute__((__availability__(android,strict,introduced=23 )));


wchar_t* _Nonnull wcsncat(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);
int wcsncmp(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs, size_t __n);
wchar_t* _Nonnull wcsncpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);
size_t wcsnrtombs(char* _Nullable __dst, const wchar_t* _Null_unspecified * _Nullable __src, size_t __src_n, size_t __dst_n, mbstate_t* _Nullable __ps);
wchar_t* _Nullable wcspbrk(const wchar_t* _Nonnull __s, const wchar_t* _Nonnull __accept);
wchar_t* _Nullable wcsrchr(const wchar_t* _Nonnull __s, wchar_t __wc);
size_t wcsrtombs(char* _Nullable __dst, const wchar_t* _Null_unspecified * _Nullable __src, size_t __dst_n, mbstate_t* _Nullable __ps);





size_t wcsspn(const wchar_t* _Nonnull __s, const wchar_t* _Nonnull __accept);
wchar_t* _Nullable wcsstr(const wchar_t* _Nonnull __haystack, const wchar_t* _Nonnull __needle);
double wcstod(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr);





float wcstof(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr);





wchar_t* _Nullable wcstok(wchar_t* _Nullable __s, const wchar_t* _Nonnull __delimiter, wchar_t* _Nonnull * _Nonnull __ptr);
long wcstol(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr, int __base);





long long wcstoll(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr, int __base);
long double wcstold(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr);
unsigned long wcstoul(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr, int __base);





unsigned long long wcstoull(const wchar_t* _Nonnull __s, wchar_t* _Null_unspecified * _Nullable __end_ptr, int __base);
int wcswidth(const wchar_t* _Nonnull __s, size_t __n);
size_t wcsxfrm(wchar_t* _Null_unspecified __dst, const wchar_t* _Nonnull __src, size_t __n);
int wctob(wint_t __wc);
int wcwidth(wchar_t __wc);
wchar_t* _Nullable wmemchr(const wchar_t* _Nonnull __src, wchar_t __wc, size_t __n);
int wmemcmp(const wchar_t* _Nullable __lhs, const wchar_t* _Nullable __rhs, size_t __n);
wchar_t* _Nonnull wmemcpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);



wchar_t* _Nonnull wmempcpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n) __attribute__((__availability__(android,strict,introduced=23 )));



wchar_t* _Nonnull wmemmove(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);
wchar_t* _Nonnull wmemset(wchar_t* _Nonnull __dst, wchar_t __wc, size_t __n);
int wprintf(const wchar_t* _Nonnull __fmt, ...);
int wscanf(const wchar_t* _Nonnull __fmt, ...);

long long wcstoll_l(const wchar_t* _Nonnull __s, wchar_t* _Nullable * _Nullable __end_ptr, int __base, locale_t _Nonnull __l);
unsigned long long wcstoull_l(const wchar_t* _Nonnull __s, wchar_t* _Nullable * _Nullable __end_ptr, int __base, locale_t _Nonnull __l);
long double wcstold_l(const wchar_t* _Nonnull __s, wchar_t* _Nullable * _Nullable __end_ptr, locale_t _Nonnull __l);

int wcscoll_l(const wchar_t* _Nonnull __lhs, const wchar_t* _Nonnull __rhs, locale_t _Nonnull __l) __attribute__((__pure__));
size_t wcsxfrm_l(wchar_t* _Null_unspecified __dst, const wchar_t* _Nonnull __src, size_t __n, locale_t _Nonnull __l);
size_t wcslcat(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);
size_t wcslcpy(wchar_t* _Nonnull __dst, const wchar_t* _Nonnull __src, size_t __n);



FILE* _Nullable open_wmemstream(wchar_t* _Nonnull * _Nonnull __ptr, size_t* _Nonnull __size_ptr) __attribute__((__availability__(android,strict,introduced=23 )));


wchar_t* _Nullable wcsdup(const wchar_t* _Nonnull __s);
size_t wcsnlen(const wchar_t* _Nonnull __s, size_t __n);

}
# 128 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 2 3
# 146 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 3
extern "C++" {
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) wchar_t* __libcpp_wcschr(const wchar_t* __s, wchar_t __c) {
  return (wchar_t*)wcschr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const wchar_t* wcschr(const wchar_t* __s, wchar_t __c) {
  return __libcpp_wcschr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) wchar_t* wcschr(wchar_t* __s, wchar_t __c) {
  return __libcpp_wcschr(__s, __c);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) wchar_t* __libcpp_wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {
  return (wchar_t*)wcspbrk(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const wchar_t*
wcspbrk(const wchar_t* __s1, const wchar_t* __s2) {
  return __libcpp_wcspbrk(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) wchar_t* wcspbrk(wchar_t* __s1, const wchar_t* __s2) {
  return __libcpp_wcspbrk(__s1, __s2);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) wchar_t* __libcpp_wcsrchr(const wchar_t* __s, wchar_t __c) {
  return (wchar_t*)wcsrchr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const wchar_t* wcsrchr(const wchar_t* __s, wchar_t __c) {
  return __libcpp_wcsrchr(__s, __c);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) wchar_t* wcsrchr(wchar_t* __s, wchar_t __c) {
  return __libcpp_wcsrchr(__s, __c);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) wchar_t* __libcpp_wcsstr(const wchar_t* __s1, const wchar_t* __s2) {
  return (wchar_t*)wcsstr(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const wchar_t*
wcsstr(const wchar_t* __s1, const wchar_t* __s2) {
  return __libcpp_wcsstr(__s1, __s2);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) wchar_t* wcsstr(wchar_t* __s1, const wchar_t* __s2) {
  return __libcpp_wcsstr(__s1, __s2);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) wchar_t* __libcpp_wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {
  return (wchar_t*)wmemchr(__s, __c, __n);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) const wchar_t*
wmemchr(const wchar_t* __s, wchar_t __c, size_t __n) {
  return __libcpp_wmemchr(__s, __c, __n);
}
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) wchar_t* wmemchr(wchar_t* __s, wchar_t __c, size_t __n) {
  return __libcpp_wmemchr(__s, __c, __n);
}
}
# 37 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2

# 1 "/data/data/com.termux/files/usr/include/python3.12/pyport.h" 1





# 1 "/data/data/com.termux/files/usr/include/c++/v1/inttypes.h" 1 3
# 242 "/data/data/com.termux/files/usr/include/c++/v1/inttypes.h" 3
# 252 "/data/data/com.termux/files/usr/include/c++/v1/inttypes.h" 3
# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/inttypes.h" 1 3
# 24 "/data/data/com.termux/files/usr/lib/clang/19/include/inttypes.h" 3
# 1 "/data/data/com.termux/files/usr/include/inttypes.h" 1 3 4
# 324 "/data/data/com.termux/files/usr/include/inttypes.h" 3 4
typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

extern "C" {
intmax_t imaxabs(intmax_t __i) __attribute__((__const__));
imaxdiv_t imaxdiv(intmax_t __numerator, intmax_t __denominator) __attribute__((__const__));
intmax_t strtoimax(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);
uintmax_t strtoumax(const char* _Nonnull __s, char* _Nullable * _Nullable __end_ptr, int __base);
intmax_t wcstoimax(const wchar_t* _Nonnull __s, wchar_t* _Nullable * _Nullable __end_ptr, int __base);
uintmax_t wcstoumax(const wchar_t* _Nonnull __s, wchar_t* _Nullable * _Nullable __end_ptr, int __base);
}
# 25 "/data/data/com.termux/files/usr/lib/clang/19/include/inttypes.h" 2 3
# 253 "/data/data/com.termux/files/usr/include/c++/v1/inttypes.h" 2 3
# 7 "/data/data/com.termux/files/usr/include/python3.12/pyport.h" 2
# 120 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
# 131 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
typedef ssize_t Py_ssize_t;
# 145 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
typedef Py_ssize_t Py_hash_t;


typedef size_t Py_uhash_t;


typedef Py_ssize_t Py_ssize_clean_t;
# 195 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 1 3
# 298 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 3



# 1 "/data/data/com.termux/files/usr/include/math.h" 1 3 4
# 21 "/data/data/com.termux/files/usr/include/math.h" 3 4
extern "C" {



typedef double __double_t;
typedef __double_t double_t;
typedef float __float_t;
typedef __float_t float_t;
# 76 "/data/data/com.termux/files/usr/include/math.h" 3 4
double acos(double __x);
float acosf(float __x);
long double acosl(long double __x);

double asin(double __x);
float asinf(float __x);
long double asinl(long double __x);

double atan(double __x);
float atanf(float __x);
long double atanl(long double __x);

double atan2(double __y, double __x);
float atan2f(float __y, float __x);
long double atan2l(long double __y, long double __x);

double cos(double __x);
float cosf(float __x);
long double cosl(long double __x);

double sin(double __x);
float sinf(float __x);
long double sinl(long double __x);

double tan(double __x);
float tanf(float __x);
long double tanl(long double __x);

double acosh(double __x);
float acoshf(float __x);
long double acoshl(long double __x);

double asinh(double __x);
float asinhf(float __x);
long double asinhl(long double __x);

double atanh(double __x);
float atanhf(float __x);
long double atanhl(long double __x);

double cosh(double __x);
float coshf(float __x);
long double coshl(long double __x);

double sinh(double __x);
float sinhf(float __x);
long double sinhl(long double __x);

double tanh(double __x);
float tanhf(float __x);
long double tanhl(long double __x);

double exp(double __x);
float expf(float __x);
long double expl(long double __x);

double exp2(double __x);
float exp2f(float __x);
long double exp2l(long double __x);

double expm1(double __x);
float expm1f(float __x);
long double expm1l(long double __x);

double frexp(double __x, int* _Nonnull __exponent);
float frexpf(float __x, int* _Nonnull __exponent);
long double frexpl(long double __x, int* _Nonnull __exponent);

int ilogb(double __x) __attribute__((__const__));
int ilogbf(float __x) __attribute__((__const__));
int ilogbl(long double __x) __attribute__((__const__));

double ldexp(double __x, int __exponent);
float ldexpf(float __x, int __exponent);
long double ldexpl(long double __x, int __exponent);

double log(double __x);
float logf(float __x);
long double logl(long double __x);

double log10(double __x);
float log10f(float __x);
long double log10l(long double __x);

double log1p(double __x);
float log1pf(float __x);
long double log1pl(long double __x);

double log2(double __x);
float log2f(float __x);
long double log2l(long double __x);

double logb(double __x);
float logbf(float __x);
long double logbl(long double __x);

double modf(double __x, double* _Nonnull __integral_part);
float modff(float __x, float* _Nonnull __integral_part);
long double modfl(long double __x, long double* _Nonnull __integral_part);

double scalbn(double __x, int __exponent);
float scalbnf(float __x, int __exponent);
long double scalbnl(long double __x, int __exponent);

double scalbln(double __x, long __exponent);
float scalblnf(float __x, long __exponent);
long double scalblnl(long double __x, long __exponent);

double cbrt(double __x);
float cbrtf(float __x);
long double cbrtl(long double __x);

double fabs(double __x) __attribute__((__const__));
float fabsf(float __x) __attribute__((__const__));
long double fabsl(long double __x) __attribute__((__const__));

double hypot(double __x, double __y);
float hypotf(float __x, float __y);
long double hypotl(long double __x, long double __y);

double pow(double __x, double __y);
float powf(float __x, float __y);
long double powl(long double __x, long double __y);

double sqrt(double __x);
float sqrtf(float __x);
long double sqrtl(long double __x);

double erf(double __x);
float erff(float __x);
long double erfl(long double __x);

double erfc(double __x);
float erfcf(float __x);
long double erfcl(long double __x);

double lgamma(double __x);
float lgammaf(float __x);
long double lgammal(long double __x);

double tgamma(double __x);
float tgammaf(float __x);
long double tgammal(long double __x);

double ceil(double __x);
float ceilf(float __x);
long double ceill(long double __x);

double floor(double __x);
float floorf(float __x);
long double floorl(long double __x);

double nearbyint(double __x);
float nearbyintf(float __x);
long double nearbyintl(long double __x);

double rint(double __x);
float rintf(float __x);
long double rintl(long double __x);

long lrint(double __x);
long lrintf(float __x);
long lrintl(long double __x);

long long llrint(double __x);
long long llrintf(float __x);
long long llrintl(long double __x);

double round(double __x);
float roundf(float __x);
long double roundl(long double __x);

long lround(double __x);
long lroundf(float __x);
long lroundl(long double __x);

long long llround(double __x);
long long llroundf(float __x);
long long llroundl(long double __x);

double trunc(double __x);
float truncf(float __x);
long double truncl(long double __x);

double fmod(double __x, double __y);
float fmodf(float __x, float __y);
long double fmodl(long double __x, long double __y);

double remainder(double __x, double __y);
float remainderf(float __x, float __y);
long double remainderl(long double __x, long double __y);

double remquo(double __x, double __y, int* _Nonnull __quotient_bits);
float remquof(float __x, float __y, int* _Nonnull __quotient_bits);
long double remquol(long double __x, long double __y, int* _Nonnull __quotient_bits);

double copysign(double __value, double __sign) __attribute__((__const__));
float copysignf(float __value, float __sign) __attribute__((__const__));
long double copysignl(long double __value, long double __sign) __attribute__((__const__));

double nan(const char* _Nonnull __kind) __attribute__((__const__));
float nanf(const char* _Nonnull __kind) __attribute__((__const__));
long double nanl(const char* _Nonnull __kind) __attribute__((__const__));

double nextafter(double __x, double __y);
float nextafterf(float __x, float __y);
long double nextafterl(long double __x, long double __y);

double nexttoward(double __x, long double __y);
float nexttowardf(float __x, long double __y);
long double nexttowardl(long double __x, long double __y);

double fdim(double __x, double __y);
float fdimf(float __x, float __y);
long double fdiml(long double __x, long double __y);

double fmax(double __x, double __y) __attribute__((__const__));
float fmaxf(float __x, float __y) __attribute__((__const__));
long double fmaxl(long double __x, long double __y) __attribute__((__const__));

double fmin(double __x, double __y) __attribute__((__const__));
float fminf(float __x, float __y) __attribute__((__const__));
long double fminl(long double __x, long double __y) __attribute__((__const__));

double fma(double __x, double __y, double __z);
float fmaf(float __x, float __y, float __z);
long double fmal(long double __x, long double __y, long double __z);
# 322 "/data/data/com.termux/files/usr/include/math.h" 3 4
int (isinf)(double __x) __attribute__((__const__));
int (isnan)(double __x) __attribute__((__const__));



extern int signgam;

double j0(double __x);
double j1(double __x);
double jn(int __n, double __x);
double y0(double __x);
double y1(double __x);
double yn(int __n, double __x);
# 361 "/data/data/com.termux/files/usr/include/math.h" 3 4
double gamma(double __x);
double scalb(double __x, double __exponent);
double drem(double __x, double __y);
int finite(double __x) __attribute__((__const__));
int isnanf(float __x) __attribute__((__const__));
double gamma_r(double __x, int* _Nonnull __sign);
double lgamma_r(double __x, int* _Nonnull __sign);
double significand(double __x);


long double lgammal_r(long double __x, int* _Nonnull __sign) __attribute__((__availability__(android,strict,introduced=23 )));


long double significandl(long double __x);
float dremf(float __x, float __y);
int finitef(float __x) __attribute__((__const__));
float gammaf(float __x);
float j0f(float __x);
float j1f(float __x);
float jnf(int __n, float __x);
float scalbf(float __x, float __exponent);
float y0f(float __x);
float y1f(float __x);
float ynf(int __n, float __x);
float gammaf_r(float __x, int* _Nonnull __sign);
float lgammaf_r(float __x, int* _Nonnull __sign);
float significandf(float __x);
void sincos(double __x, double* _Nonnull __sin, double* _Nonnull __cos);
void sincosf(float __x, float* _Nonnull __sin, float* _Nonnull __cos);
void sincosl(long double __x, long double* _Nonnull __sin, long double* _Nonnull __cos);
# 411 "/data/data/com.termux/files/usr/include/math.h" 3 4
}
# 302 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3






extern "C++" {
# 358 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/abs.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__math/abs.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/enable_if.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/enable_if.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <bool, class _Tp = void>
struct enable_if {};
template <class _Tp>
struct enable_if<true, _Tp> {
  typedef _Tp type;
};

template <bool _Bp, class _Tp = void>
using __enable_if_t __attribute__((__nodebug__)) = typename enable_if<_Bp, _Tp>::type;


template <bool _Bp, class _Tp = void>
using enable_if_t = typename enable_if<_Bp, _Tp>::type;


}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__math/abs.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/integral_constant.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/integral_constant.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, _Tp __v>
struct integral_constant {
  static constexpr const _Tp value = __v;
  typedef _Tp value_type;
  typedef integral_constant type;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr operator value_type() const noexcept { return value; }

  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr value_type operator()() const noexcept { return value; }

};

template <class _Tp, _Tp __v>
constexpr const _Tp integral_constant<_Tp, __v>::value;

typedef integral_constant<bool, true> true_type;
typedef integral_constant<bool, false> false_type;

template <bool _Val>
using _BoolConstant __attribute__((__nodebug__)) = integral_constant<bool, _Val>;


template <bool __b>
using bool_constant = integral_constant<bool, __b>;


}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_const.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_const.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_const {
  using type __attribute__((__nodebug__)) = __remove_const(_Tp);
};

template <class _Tp>
using __remove_const_t = __remove_const(_Tp);
# 43 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_const.h" 3
template <class _Tp>
using remove_const_t = __remove_const_t<_Tp>;


}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_volatile.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_volatile.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_volatile {
  using type __attribute__((__nodebug__)) = __remove_volatile(_Tp);
};

template <class _Tp>
using __remove_volatile_t = __remove_volatile(_Tp);
# 43 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_volatile.h" 3
template <class _Tp>
using remove_volatile_t = __remove_volatile_t<_Tp>;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_cv {
  using type __attribute__((__nodebug__)) = __remove_cv(_Tp);
};

template <class _Tp>
using __remove_cv_t = __remove_cv(_Tp);
# 41 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cv.h" 3
template <class _Tp>
using remove_cv_t = __remove_cv_t<_Tp>;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp> struct __libcpp_is_integral { enum { value = 0 }; };
template <> struct __libcpp_is_integral<bool> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<char> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<signed char> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<unsigned char> { enum { value = 1 }; };

template <> struct __libcpp_is_integral<wchar_t> { enum { value = 1 }; };




template <> struct __libcpp_is_integral<char16_t> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<char32_t> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<short> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<unsigned short> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<int> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<unsigned int> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<long> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<unsigned long> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<long long> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<unsigned long long> { enum { value = 1 }; };

template <> struct __libcpp_is_integral<__int128_t> { enum { value = 1 }; };
template <> struct __libcpp_is_integral<__uint128_t> { enum { value = 1 }; };





template <class _Tp>
struct is_integral : _BoolConstant<__is_integral(_Tp)> {};


template <class _Tp>
inline constexpr bool is_integral_v = __is_integral(_Tp);
# 72 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_integral.h" 3
}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__math/abs.h" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/abs.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fabs(float __x) noexcept { return __builtin_fabsf(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fabs(double __x) noexcept {
  return __builtin_fabs(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fabs(long double __x) noexcept {
  return __builtin_fabsl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fabs(_A1 __x) noexcept {
  return __builtin_fabs((double)__x);
}

}

}}
# 359 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_arithmetic.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_arithmetic.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_floating_point.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_floating_point.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp> struct __libcpp_is_floating_point : public false_type {};
template <> struct __libcpp_is_floating_point<float> : public true_type {};
template <> struct __libcpp_is_floating_point<double> : public true_type {};
template <> struct __libcpp_is_floating_point<long double> : public true_type {};


template <class _Tp>
struct is_floating_point : public __libcpp_is_floating_point<__remove_cv_t<_Tp> > {};


template <class _Tp>
inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_arithmetic.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_arithmetic.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_arithmetic
    : public integral_constant<bool, is_integral<_Tp>::value || is_floating_point<_Tp>::value> {};


template <class _Tp>
inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/promote.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/promote.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_same.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_same.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class _Up>
struct is_same : _BoolConstant<__is_same(_Tp, _Up)> {};


template <class _Tp, class _Up>
inline constexpr bool is_same_v = __is_same(_Tp, _Up);
# 36 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_same.h" 3
template <class _Tp, class _Up>
using _IsSame = _BoolConstant<__is_same(_Tp, _Up)>;

template <class _Tp, class _Up>
using _IsNotSame = _BoolConstant<!__is_same(_Tp, _Up)>;

}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/promote.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__utility/declval.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__utility/declval.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



#pragma GCC diagnostic push
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__utility/declval.h" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__utility/declval.h" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <class _Tp>
_Tp&& __declval(int);
template <class _Tp>
_Tp __declval(long);
#pragma GCC diagnostic pop

template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) decltype(std::__declval<_Tp>(0)) declval() noexcept {
  static_assert(!__is_same(_Tp, _Tp),
                "std::declval can only be used in an unevaluated context. "
                "It's likely that your current usage is trying to extract a value from the function.");
}

}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/promote.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/promote.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __numeric_type {
  static void __test(...);
  static float __test(float);
  static double __test(char);
  static double __test(int);
  static double __test(unsigned);
  static double __test(long);
  static double __test(unsigned long);
  static double __test(long long);
  static double __test(unsigned long long);

  static double __test(__int128_t);
  static double __test(__uint128_t);

  static double __test(double);
  static long double __test(long double);

  typedef decltype(__test(std::declval<_Tp>())) type;
  static const bool value = _IsNotSame<type, void>::value;
};

template <>
struct __numeric_type<void> {
  static const bool value = true;
};

template <class _A1,
          class _A2 = void,
          class _A3 = void,
          bool = __numeric_type<_A1>::value && __numeric_type<_A2>::value && __numeric_type<_A3>::value>
class __promote_imp {
public:
  static const bool value = false;
};

template <class _A1, class _A2, class _A3>
class __promote_imp<_A1, _A2, _A3, true> {
private:
  typedef typename __promote_imp<_A1>::type __type1;
  typedef typename __promote_imp<_A2>::type __type2;
  typedef typename __promote_imp<_A3>::type __type3;

public:
  typedef decltype(__type1() + __type2() + __type3()) type;
  static const bool value = true;
};

template <class _A1, class _A2>
class __promote_imp<_A1, _A2, void, true> {
private:
  typedef typename __promote_imp<_A1>::type __type1;
  typedef typename __promote_imp<_A2>::type __type2;

public:
  typedef decltype(__type1() + __type2()) type;
  static const bool value = true;
};

template <class _A1>
class __promote_imp<_A1, void, void, true> {
public:
  typedef typename __numeric_type<_A1>::type type;
  static const bool value = true;
};

template <class _A1, class _A2 = void, class _A3 = void>
class __promote : public __promote_imp<_A1, _A2, _A3> {};

}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/limits" 1 3
# 105 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__assert" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__assert" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__verbose_abort" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__verbose_abort" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__availability" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__availability" 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__verbose_abort" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__verbose_abort" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



[[noreturn]] __attribute__((__visibility__("default")))
    __attribute__((__format__(__printf__, 1, 2))) void __libcpp_verbose_abort(const char* __format, ...);
# 51 "/data/data/com.termux/files/usr/include/c++/v1/__verbose_abort" 3
}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__assert" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__assert" 3
# 106 "/data/data/com.termux/files/usr/include/c++/v1/limits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_signed.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_signed.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_signed : _BoolConstant<__is_signed(_Tp)> {};


template <class _Tp>
inline constexpr bool is_signed_v = __is_signed(_Tp);
# 57 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_signed.h" 3
}}
# 109 "/data/data/com.termux/files/usr/include/c++/v1/limits" 2 3
# 113 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3



# 1 "/data/data/com.termux/files/usr/include/c++/v1/__undef_macros" 1 3
# 117 "/data/data/com.termux/files/usr/include/c++/v1/limits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/version" 1 3
# 252 "/data/data/com.termux/files/usr/include/c++/v1/version" 3
# 118 "/data/data/com.termux/files/usr/include/c++/v1/limits" 2 3

namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

enum float_round_style {
  round_indeterminate = -1,
  round_toward_zero = 0,
  round_to_nearest = 1,
  round_toward_infinity = 2,
  round_toward_neg_infinity = 3
};

enum float_denorm_style {
  denorm_indeterminate = -1,
  denorm_absent = 0,
  denorm_present = 1
};

template <class _Tp, bool = is_arithmetic<_Tp>::value>
class __libcpp_numeric_limits {
protected:
  typedef _Tp type;

  static constexpr const bool is_specialized = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return type(); }

  static constexpr const int digits = 0;
  static constexpr const int digits10 = 0;
  static constexpr const int max_digits10 = 0;
  static constexpr const bool is_signed = false;
  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 0;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return type(); }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return type(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return type(); }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = false;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <class _Tp, int __digits, bool _IsSigned>
struct __libcpp_compute_min {
  static constexpr const _Tp value = _Tp(_Tp(1) << __digits);
};

template <class _Tp, int __digits>
struct __libcpp_compute_min<_Tp, __digits, false> {
  static constexpr const _Tp value = _Tp(0);
};

template <class _Tp>
class __libcpp_numeric_limits<_Tp, true> {
protected:
  typedef _Tp type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = type(-1) < type(0);
  static constexpr const int digits = static_cast<int>(sizeof(type) * 8 - is_signed);
  static constexpr const int digits10 = digits * 3 / 10;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min = __libcpp_compute_min<type, digits, is_signed>::value;
  static constexpr const type __max = is_signed ? type(type(~0) ^ __min) : type(~0);
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __min; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __max; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return min(); }

  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return type(0); }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return type(0); }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = !std::is_signed<_Tp>::value;




  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<bool, true> {
protected:
  typedef bool type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = false;
  static constexpr const int digits = 1;
  static constexpr const int digits10 = 0;
  static constexpr const int max_digits10 = 0;
  static constexpr const type __min = false;
  static constexpr const type __max = true;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __min; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __max; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return min(); }

  static constexpr const bool is_integer = true;
  static constexpr const bool is_exact = true;
  static constexpr const int radix = 2;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return type(0); }

  static constexpr const int min_exponent = 0;
  static constexpr const int min_exponent10 = 0;
  static constexpr const int max_exponent = 0;
  static constexpr const int max_exponent10 = 0;

  static constexpr const bool has_infinity = false;
  static constexpr const bool has_quiet_NaN = false;
  static constexpr const bool has_signaling_NaN = false;
  static constexpr const float_denorm_style has_denorm = denorm_absent;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return type(0); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return type(0); }

  static constexpr const bool is_iec559 = false;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;
  static constexpr const bool tinyness_before = false;
  static constexpr const float_round_style round_style = round_toward_zero;
};

template <>
class __libcpp_numeric_limits<float, true> {
protected:
  typedef float type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 24;
  static constexpr const int digits10 = 6;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return 1.17549435e-38F; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return 3.40282347e+38F; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return 1.19209290e-7F; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return 0.5F; }

  static constexpr const int min_exponent = (-125);
  static constexpr const int min_exponent10 = (-37);
  static constexpr const int max_exponent = 128;
  static constexpr const int max_exponent10 = 38;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __builtin_huge_valf(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __builtin_nanf(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __builtin_nansf(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return 1.40129846e-45F; }

  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = true;



  static constexpr const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<double, true> {
protected:
  typedef double type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 53;
  static constexpr const int digits10 = 15;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return 2.2250738585072014e-308; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return 1.7976931348623157e+308; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return 2.2204460492503131e-16; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return 0.5; }

  static constexpr const int min_exponent = (-1021);
  static constexpr const int min_exponent10 = (-307);
  static constexpr const int max_exponent = 1024;
  static constexpr const int max_exponent10 = 308;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __builtin_huge_val(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __builtin_nan(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __builtin_nans(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return 4.9406564584124654e-324; }

  static constexpr const bool is_iec559 = true;
  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = true;



  static constexpr const float_round_style round_style = round_to_nearest;
};

template <>
class __libcpp_numeric_limits<long double, true> {
protected:
  typedef long double type;

  static constexpr const bool is_specialized = true;

  static constexpr const bool is_signed = true;
  static constexpr const int digits = 113;
  static constexpr const int digits10 = 33;
  static constexpr const int max_digits10 = 2 + (digits * 30103l) / 100000l;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return 3.36210314311209350626267781732175260e-4932L; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return 1.18973149535723176508575932662800702e+4932L; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return -max(); }

  static constexpr const bool is_integer = false;
  static constexpr const bool is_exact = false;
  static constexpr const int radix = 2;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return 1.92592994438723585305597794258492732e-34L; }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return 0.5L; }

  static constexpr const int min_exponent = (-16381);
  static constexpr const int min_exponent10 = (-4931);
  static constexpr const int max_exponent = 16384;
  static constexpr const int max_exponent10 = 4932;

  static constexpr const bool has_infinity = true;
  static constexpr const bool has_quiet_NaN = true;
  static constexpr const bool has_signaling_NaN = true;
  static constexpr const float_denorm_style has_denorm = denorm_present;
  static constexpr const bool has_denorm_loss = false;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __builtin_huge_vall(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __builtin_nanl(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __builtin_nansl(""); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return 6.47517511943802511092443895822764655e-4966L; }




  static constexpr const bool is_iec559 = true;

  static constexpr const bool is_bounded = true;
  static constexpr const bool is_modulo = false;

  static constexpr const bool traps = false;

  static constexpr const bool tinyness_before = true;



  static constexpr const float_round_style round_style = round_to_nearest;
};

template <class _Tp>
class numeric_limits : private __libcpp_numeric_limits<__remove_cv_t<_Tp> > {
  typedef __libcpp_numeric_limits<__remove_cv_t<_Tp> > __base;
  typedef typename __base::type type;

public:
  static constexpr const bool is_specialized = __base::is_specialized;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __base::min(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __base::max(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return __base::lowest(); }

  static constexpr const int digits = __base::digits;
  static constexpr const int digits10 = __base::digits10;
  static constexpr const int max_digits10 = __base::max_digits10;
  static constexpr const bool is_signed = __base::is_signed;
  static constexpr const bool is_integer = __base::is_integer;
  static constexpr const bool is_exact = __base::is_exact;
  static constexpr const int radix = __base::radix;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return __base::epsilon(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return __base::round_error(); }

  static constexpr const int min_exponent = __base::min_exponent;
  static constexpr const int min_exponent10 = __base::min_exponent10;
  static constexpr const int max_exponent = __base::max_exponent;
  static constexpr const int max_exponent10 = __base::max_exponent10;

  static constexpr const bool has_infinity = __base::has_infinity;
  static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
  static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
#pragma GCC diagnostic push
# 467 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 467 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  static constexpr const float_denorm_style has_denorm = __base::has_denorm;
  static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
#pragma GCC diagnostic pop
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __base::infinity(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __base::quiet_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __base::signaling_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return __base::denorm_min(); }

  static constexpr const bool is_iec559 = __base::is_iec559;
  static constexpr const bool is_bounded = __base::is_bounded;
  static constexpr const bool is_modulo = __base::is_modulo;

  static constexpr const bool traps = __base::traps;
  static constexpr const bool tinyness_before = __base::tinyness_before;
  static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_specialized;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::digits;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::digits10;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::max_digits10;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_signed;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_integer;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_exact;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::radix;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::min_exponent;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::min_exponent10;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::max_exponent;
template <class _Tp>
constexpr const int numeric_limits<_Tp>::max_exponent10;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::has_infinity;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::has_quiet_NaN;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::has_signaling_NaN;
template <class _Tp>
constexpr const float_denorm_style numeric_limits<_Tp>::has_denorm;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::has_denorm_loss;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_iec559;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_bounded;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::is_modulo;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::traps;
template <class _Tp>
constexpr const bool numeric_limits<_Tp>::tinyness_before;
template <class _Tp>
constexpr const float_round_style numeric_limits<_Tp>::round_style;

template <class _Tp>
class numeric_limits<const _Tp> : private numeric_limits<_Tp> {
  typedef numeric_limits<_Tp> __base;
  typedef _Tp type;

public:
  static constexpr const bool is_specialized = __base::is_specialized;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __base::min(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __base::max(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return __base::lowest(); }

  static constexpr const int digits = __base::digits;
  static constexpr const int digits10 = __base::digits10;
  static constexpr const int max_digits10 = __base::max_digits10;
  static constexpr const bool is_signed = __base::is_signed;
  static constexpr const bool is_integer = __base::is_integer;
  static constexpr const bool is_exact = __base::is_exact;
  static constexpr const int radix = __base::radix;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return __base::epsilon(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return __base::round_error(); }

  static constexpr const int min_exponent = __base::min_exponent;
  static constexpr const int min_exponent10 = __base::min_exponent10;
  static constexpr const int max_exponent = __base::max_exponent;
  static constexpr const int max_exponent10 = __base::max_exponent10;

  static constexpr const bool has_infinity = __base::has_infinity;
  static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
  static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
#pragma GCC diagnostic push
# 561 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 561 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  static constexpr const float_denorm_style has_denorm = __base::has_denorm;
  static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
#pragma GCC diagnostic pop
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __base::infinity(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __base::quiet_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __base::signaling_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return __base::denorm_min(); }

  static constexpr const bool is_iec559 = __base::is_iec559;
  static constexpr const bool is_bounded = __base::is_bounded;
  static constexpr const bool is_modulo = __base::is_modulo;

  static constexpr const bool traps = __base::traps;
  static constexpr const bool tinyness_before = __base::tinyness_before;
  static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_specialized;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::digits;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::digits10;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::max_digits10;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_signed;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_integer;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_exact;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::radix;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::min_exponent;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::min_exponent10;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::max_exponent;
template <class _Tp>
constexpr const int numeric_limits<const _Tp>::max_exponent10;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::has_infinity;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::has_quiet_NaN;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::has_signaling_NaN;
template <class _Tp>
constexpr const float_denorm_style numeric_limits<const _Tp>::has_denorm;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::has_denorm_loss;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_iec559;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_bounded;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::is_modulo;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::traps;
template <class _Tp>
constexpr const bool numeric_limits<const _Tp>::tinyness_before;
template <class _Tp>
constexpr const float_round_style numeric_limits<const _Tp>::round_style;

template <class _Tp>
class numeric_limits<volatile _Tp> : private numeric_limits<_Tp> {
  typedef numeric_limits<_Tp> __base;
  typedef _Tp type;

public:
  static constexpr const bool is_specialized = __base::is_specialized;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __base::min(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __base::max(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return __base::lowest(); }

  static constexpr const int digits = __base::digits;
  static constexpr const int digits10 = __base::digits10;
  static constexpr const int max_digits10 = __base::max_digits10;
  static constexpr const bool is_signed = __base::is_signed;
  static constexpr const bool is_integer = __base::is_integer;
  static constexpr const bool is_exact = __base::is_exact;
  static constexpr const int radix = __base::radix;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return __base::epsilon(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return __base::round_error(); }

  static constexpr const int min_exponent = __base::min_exponent;
  static constexpr const int min_exponent10 = __base::min_exponent10;
  static constexpr const int max_exponent = __base::max_exponent;
  static constexpr const int max_exponent10 = __base::max_exponent10;

  static constexpr const bool has_infinity = __base::has_infinity;
  static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
  static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
#pragma GCC diagnostic push
# 655 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 655 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  static constexpr const float_denorm_style has_denorm = __base::has_denorm;
  static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
#pragma GCC diagnostic pop
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __base::infinity(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __base::quiet_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __base::signaling_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return __base::denorm_min(); }

  static constexpr const bool is_iec559 = __base::is_iec559;
  static constexpr const bool is_bounded = __base::is_bounded;
  static constexpr const bool is_modulo = __base::is_modulo;

  static constexpr const bool traps = __base::traps;
  static constexpr const bool tinyness_before = __base::tinyness_before;
  static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_specialized;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::digits;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::digits10;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::max_digits10;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_signed;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_integer;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_exact;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::radix;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::min_exponent;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::min_exponent10;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::max_exponent;
template <class _Tp>
constexpr const int numeric_limits<volatile _Tp>::max_exponent10;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::has_infinity;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::has_quiet_NaN;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::has_signaling_NaN;
template <class _Tp>
constexpr const float_denorm_style numeric_limits<volatile _Tp>::has_denorm;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::has_denorm_loss;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_iec559;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_bounded;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::is_modulo;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::traps;
template <class _Tp>
constexpr const bool numeric_limits<volatile _Tp>::tinyness_before;
template <class _Tp>
constexpr const float_round_style numeric_limits<volatile _Tp>::round_style;

template <class _Tp>
class numeric_limits<const volatile _Tp> : private numeric_limits<_Tp> {
  typedef numeric_limits<_Tp> __base;
  typedef _Tp type;

public:
  static constexpr const bool is_specialized = __base::is_specialized;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type min() noexcept { return __base::min(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type max() noexcept { return __base::max(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type lowest() noexcept { return __base::lowest(); }

  static constexpr const int digits = __base::digits;
  static constexpr const int digits10 = __base::digits10;
  static constexpr const int max_digits10 = __base::max_digits10;
  static constexpr const bool is_signed = __base::is_signed;
  static constexpr const bool is_integer = __base::is_integer;
  static constexpr const bool is_exact = __base::is_exact;
  static constexpr const int radix = __base::radix;
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type epsilon() noexcept { return __base::epsilon(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type round_error() noexcept { return __base::round_error(); }

  static constexpr const int min_exponent = __base::min_exponent;
  static constexpr const int min_exponent10 = __base::min_exponent10;
  static constexpr const int max_exponent = __base::max_exponent;
  static constexpr const int max_exponent10 = __base::max_exponent10;

  static constexpr const bool has_infinity = __base::has_infinity;
  static constexpr const bool has_quiet_NaN = __base::has_quiet_NaN;
  static constexpr const bool has_signaling_NaN = __base::has_signaling_NaN;
#pragma GCC diagnostic push
# 749 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 749 "/data/data/com.termux/files/usr/include/c++/v1/limits" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
  static constexpr const float_denorm_style has_denorm = __base::has_denorm;
  static constexpr const bool has_denorm_loss = __base::has_denorm_loss;
#pragma GCC diagnostic pop
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type infinity() noexcept { return __base::infinity(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type quiet_NaN() noexcept { return __base::quiet_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type signaling_NaN() noexcept { return __base::signaling_NaN(); }
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static constexpr type denorm_min() noexcept { return __base::denorm_min(); }

  static constexpr const bool is_iec559 = __base::is_iec559;
  static constexpr const bool is_bounded = __base::is_bounded;
  static constexpr const bool is_modulo = __base::is_modulo;

  static constexpr const bool traps = __base::traps;
  static constexpr const bool tinyness_before = __base::tinyness_before;
  static constexpr const float_round_style round_style = __base::round_style;
};

template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_specialized;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::digits;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::digits10;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::max_digits10;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_signed;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_integer;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_exact;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::radix;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::min_exponent;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::min_exponent10;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::max_exponent;
template <class _Tp>
constexpr const int numeric_limits<const volatile _Tp>::max_exponent10;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::has_infinity;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::has_quiet_NaN;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::has_signaling_NaN;
template <class _Tp>
constexpr const float_denorm_style numeric_limits<const volatile _Tp>::has_denorm;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::has_denorm_loss;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_iec559;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_bounded;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::is_modulo;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::traps;
template <class _Tp>
constexpr const bool numeric_limits<const volatile _Tp>::tinyness_before;
template <class _Tp>
constexpr const float_round_style numeric_limits<const volatile _Tp>::round_style;

}}




# 1 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 1 3
# 421 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__fwd/hash.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__fwd/hash.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class>
struct hash;

}}
# 422 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_const.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_const.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct add_const {
  typedef __attribute__((__nodebug__)) const _Tp type;
};


template <class _Tp>
using add_const_t = typename add_const<_Tp>::type;


}}
# 423 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_cv.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_cv.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct add_cv {
  typedef __attribute__((__nodebug__)) const volatile _Tp type;
};


template <class _Tp>
using add_cv_t = typename add_cv<_Tp>::type;


}}
# 424 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_lvalue_reference.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_lvalue_reference.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_referenceable.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_referenceable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct __libcpp_is_referenceable : integral_constant<bool, __is_referenceable(_Tp)> {};
# 39 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_referenceable.h" 3
}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_lvalue_reference.h" 2 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_lvalue_reference.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
using __add_lvalue_reference_t = __add_lvalue_reference(_Tp);
# 42 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_lvalue_reference.h" 3
template <class _Tp>
struct add_lvalue_reference {
  using type __attribute__((__nodebug__)) = __add_lvalue_reference_t<_Tp>;
};


template <class _Tp>
using add_lvalue_reference_t = __add_lvalue_reference_t<_Tp>;


}}
# 425 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 1 3
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_void.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_void.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_void : _BoolConstant<__is_void(_Tp)> {};


template <class _Tp>
inline constexpr bool is_void_v = __is_void(_Tp);
# 45 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_void.h" 3
}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_reference.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_reference.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/cstddef" 1 3
# 43 "/data/data/com.termux/files/usr/include/c++/v1/cstddef" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3
# 44 "/data/data/com.termux/files/usr/include/c++/v1/cstddef" 2 3
# 55 "/data/data/com.termux/files/usr/include/c++/v1/cstddef" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

using ::nullptr_t;
using ::ptrdiff_t __attribute__((__using_if_exists__));
using ::size_t __attribute__((__using_if_exists__));


using ::max_align_t __attribute__((__using_if_exists__));


}}


namespace std
{
enum class byte : unsigned char {};

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte operator|(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(static_cast<unsigned int>(__lhs) | static_cast<unsigned int>(__rhs)));
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte& operator|=(byte& __lhs, byte __rhs) noexcept {
  return __lhs = __lhs | __rhs;
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte operator&(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(static_cast<unsigned int>(__lhs) & static_cast<unsigned int>(__rhs)));
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte& operator&=(byte& __lhs, byte __rhs) noexcept {
  return __lhs = __lhs & __rhs;
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte operator^(byte __lhs, byte __rhs) noexcept {
  return static_cast<byte>(
      static_cast<unsigned char>(static_cast<unsigned int>(__lhs) ^ static_cast<unsigned int>(__rhs)));
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte& operator^=(byte& __lhs, byte __rhs) noexcept {
  return __lhs = __lhs ^ __rhs;
}

__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr byte operator~(byte __b) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(~static_cast<unsigned int>(__b)));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr byte& operator<<=(byte& __lhs, _Integer __shift) noexcept {
  return __lhs = __lhs << __shift;
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr byte operator<<(byte __lhs, _Integer __shift) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) << __shift));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr byte& operator>>=(byte& __lhs, _Integer __shift) noexcept {
  return __lhs = __lhs >> __shift;
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr byte operator>>(byte __lhs, _Integer __shift) noexcept {
  return static_cast<byte>(static_cast<unsigned char>(static_cast<unsigned int>(__lhs) >> __shift));
}

template <class _Integer, __enable_if_t<is_integral<_Integer>::value, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr _Integer to_integer(byte __b) noexcept {
  return static_cast<_Integer>(__b);
}

}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_reference.h" 2 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_reference.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_reference {
  using type __attribute__((__nodebug__)) = __remove_reference_t(_Tp);
};

template <class _Tp>
using __libcpp_remove_reference_t = __remove_reference_t(_Tp);
# 41 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_reference.h" 3
template <class _Tp>
using remove_reference_t = __libcpp_remove_reference_t<_Tp>;


}}
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 2 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
using __add_pointer_t = __add_pointer(_Tp);
# 45 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_pointer.h" 3
template <class _Tp>
struct add_pointer {
  using type __attribute__((__nodebug__)) = __add_pointer_t<_Tp>;
};


template <class _Tp>
using add_pointer_t = __add_pointer_t<_Tp>;


}}
# 426 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_rvalue_reference.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_rvalue_reference.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
using __add_rvalue_reference_t = __add_rvalue_reference(_Tp);
# 42 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_rvalue_reference.h" 3
template <class _Tp>
struct add_rvalue_reference {
  using type = __add_rvalue_reference_t<_Tp>;
};


template <class _Tp>
using add_rvalue_reference_t = __add_rvalue_reference_t<_Tp>;


}}
# 427 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_volatile.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/add_volatile.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct add_volatile {
  typedef __attribute__((__nodebug__)) volatile _Tp type;
};


template <class _Tp>
using add_volatile_t = typename add_volatile<_Tp>::type;


}}
# 428 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/conditional.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/conditional.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <bool>
struct _IfImpl;

template <>
struct _IfImpl<true> {
  template <class _IfRes, class _ElseRes>
  using _Select __attribute__((__nodebug__)) = _IfRes;
};

template <>
struct _IfImpl<false> {
  template <class _IfRes, class _ElseRes>
  using _Select __attribute__((__nodebug__)) = _ElseRes;
};

template <bool _Cond, class _IfRes, class _ElseRes>
using _If __attribute__((__nodebug__)) = typename _IfImpl<_Cond>::template _Select<_IfRes, _ElseRes>;

template <bool _Bp, class _If, class _Then>
struct conditional {
  using type __attribute__((__nodebug__)) = _If;
};
template <class _If, class _Then>
struct conditional<false, _If, _Then> {
  using type __attribute__((__nodebug__)) = _Then;
};


template <bool _Bp, class _IfRes, class _ElseRes>
using conditional_t __attribute__((__nodebug__)) = typename conditional<_Bp, _IfRes, _ElseRes>::type;



template <bool _Bp, class _If, class _Then>
using __conditional_t __attribute__((__nodebug__)) = typename conditional<_Bp, _If, _Then>::type;

}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/nat.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/nat.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

struct __nat {

  __nat() = delete;
  __nat(const __nat&) = delete;
  __nat& operator=(const __nat&) = delete;
  ~__nat() = delete;

};

}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/type_list.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/type_list.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Hp, class _Tp>
struct __type_list {
  typedef _Hp _Head;
  typedef _Tp _Tail;
};

template <class _TypeList, size_t _Size, bool = _Size <= sizeof(typename _TypeList::_Head)>
struct __find_first;

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, true> {
  typedef __attribute__((__nodebug__)) _Hp type;
};

template <class _Hp, class _Tp, size_t _Size>
struct __find_first<__type_list<_Hp, _Tp>, _Size, false> {
  typedef __attribute__((__nodebug__)) typename __find_first<_Tp, _Size>::type type;
};

}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 2 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __align_type {
  static const size_t value = __alignof(_Tp);
  typedef _Tp type;
};

struct __struct_double {
  long double __lx;
};
struct __struct_double4 {
  double __lx[4];
};


typedef __type_list<__align_type<unsigned char>,
        __type_list<__align_type<unsigned short>,
        __type_list<__align_type<unsigned int>,
        __type_list<__align_type<unsigned long>,
        __type_list<__align_type<unsigned long long>,
        __type_list<__align_type<double>,
        __type_list<__align_type<long double>,
        __type_list<__align_type<__struct_double>,
        __type_list<__align_type<__struct_double4>,
        __type_list<__align_type<int*>,
        __nat
        > > > > > > > > > > __all_types;


template <size_t _Align>
struct alignas(_Align) __fallback_overaligned {};

template <class _TL, size_t _Align>
struct __find_pod;

template <class _Hp, size_t _Align>
struct __find_pod<__type_list<_Hp, __nat>, _Align> {
  typedef __conditional_t<_Align == _Hp::value, typename _Hp::type, __fallback_overaligned<_Align> > type;
};

template <class _Hp, class _Tp, size_t _Align>
struct __find_pod<__type_list<_Hp, _Tp>, _Align> {
  typedef __conditional_t<_Align == _Hp::value, typename _Hp::type, typename __find_pod<_Tp, _Align>::type> type;
};

template <class _TL, size_t _Len>
struct __find_max_align;

template <class _Hp, size_t _Len>
struct __find_max_align<__type_list<_Hp, __nat>, _Len> : public integral_constant<size_t, _Hp::value> {};

template <size_t _Len, size_t _A1, size_t _A2>
struct __select_align {
private:
  static const size_t __min = _A2 < _A1 ? _A2 : _A1;
  static const size_t __max = _A1 < _A2 ? _A2 : _A1;

public:
  static const size_t value = _Len < __max ? __min : __max;
};

template <class _Hp, class _Tp, size_t _Len>
struct __find_max_align<__type_list<_Hp, _Tp>, _Len>
    : public integral_constant<size_t, __select_align<_Len, _Hp::value, __find_max_align<_Tp, _Len>::value>::value> {};

template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
struct aligned_storage {
  typedef typename __find_pod<__all_types, _Align>::type _Aligner;
  union type {
    _Aligner __align;
    unsigned char __data[(_Len + _Align - 1) / _Align * _Align];
  };
};



#pragma GCC diagnostic push
# 100 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 3
#pragma GCC diagnostic ignored "-Wdeprecated"
# 100 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 3
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <size_t _Len, size_t _Align = __find_max_align<__all_types, _Len>::value>
using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;
#pragma GCC diagnostic pop
# 115 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_storage.h" 3
template <size_t _Len> struct aligned_storage<_Len, 0x1> { struct alignas(0x1) type { unsigned char __lx[(_Len + 0x1 - 1) / 0x1 * 0x1]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x2> { struct alignas(0x2) type { unsigned char __lx[(_Len + 0x2 - 1) / 0x2 * 0x2]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x4> { struct alignas(0x4) type { unsigned char __lx[(_Len + 0x4 - 1) / 0x4 * 0x4]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x8> { struct alignas(0x8) type { unsigned char __lx[(_Len + 0x8 - 1) / 0x8 * 0x8]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x10> { struct alignas(0x10) type { unsigned char __lx[(_Len + 0x10 - 1) / 0x10 * 0x10]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x20> { struct alignas(0x20) type { unsigned char __lx[(_Len + 0x20 - 1) / 0x20 * 0x20]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x40> { struct alignas(0x40) type { unsigned char __lx[(_Len + 0x40 - 1) / 0x40 * 0x40]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x80> { struct alignas(0x80) type { unsigned char __lx[(_Len + 0x80 - 1) / 0x80 * 0x80]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x100> { struct alignas(0x100) type { unsigned char __lx[(_Len + 0x100 - 1) / 0x100 * 0x100]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x200> { struct alignas(0x200) type { unsigned char __lx[(_Len + 0x200 - 1) / 0x200 * 0x200]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x400> { struct alignas(0x400) type { unsigned char __lx[(_Len + 0x400 - 1) / 0x400 * 0x400]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x800> { struct alignas(0x800) type { unsigned char __lx[(_Len + 0x800 - 1) / 0x800 * 0x800]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x1000> { struct alignas(0x1000) type { unsigned char __lx[(_Len + 0x1000 - 1) / 0x1000 * 0x1000]; }; };
template <size_t _Len> struct aligned_storage<_Len, 0x2000> { struct alignas(0x2000) type { unsigned char __lx[(_Len + 0x2000 - 1) / 0x2000 * 0x2000]; }; };


template <size_t _Len> struct aligned_storage<_Len, 0x4000> { struct alignas(0x4000) type { unsigned char __lx[(_Len + 0x4000 - 1) / 0x4000 * 0x4000]; }; };




}}
# 429 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_union.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/aligned_union.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <size_t _I0, size_t... _In>
struct __static_max;

template <size_t _I0>
struct __static_max<_I0> {
  static const size_t value = _I0;
};

template <size_t _I0, size_t _I1, size_t... _In>
struct __static_max<_I0, _I1, _In...> {
  static const size_t value = _I0 >= _I1 ? __static_max<_I0, _In...>::value : __static_max<_I1, _In...>::value;
};

template <size_t _Len, class _Type0, class... _Types>
struct aligned_union {
  static const size_t alignment_value =
      __static_max<__alignof(_Type0), __alignof(_Types)...>::value;
  static const size_t __len = __static_max<_Len, sizeof(_Type0), sizeof(_Types)...>::value;
  typedef typename aligned_storage<__len, alignment_value>::type type;
};


template <size_t _Len, class... _Types>
using aligned_union_t = typename aligned_union<_Len, _Types...>::type;


}}
# 430 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/alignment_of.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/alignment_of.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct alignment_of : public integral_constant<size_t, alignof(_Tp)> {};


template <class _Tp>
inline constexpr size_t alignment_of_v = alignof(_Tp);


}}
# 431 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/apply_cv.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/apply_cv.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_const.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_const.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_const : _BoolConstant<__is_const(_Tp)> {};


template <class _Tp>
inline constexpr bool is_const_v = __is_const(_Tp);
# 45 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_const.h" 3
}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/apply_cv.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_volatile.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_volatile.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_volatile : _BoolConstant<__is_volatile(_Tp)> {};


template <class _Tp>
inline constexpr bool is_volatile_v = __is_volatile(_Tp);
# 45 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_volatile.h" 3
}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/apply_cv.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/apply_cv.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp,
          bool = is_const<__libcpp_remove_reference_t<_Tp> >::value,
          bool = is_volatile<__libcpp_remove_reference_t<_Tp> >::value>
struct __apply_cv_impl {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = _Up;
};

template <class _Tp>
struct __apply_cv_impl<_Tp, true, false> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = const _Up;
};

template <class _Tp>
struct __apply_cv_impl<_Tp, false, true> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = volatile _Up;
};

template <class _Tp>
struct __apply_cv_impl<_Tp, true, true> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = const volatile _Up;
};

template <class _Tp>
struct __apply_cv_impl<_Tp&, false, false> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = _Up&;
};

template <class _Tp>
struct __apply_cv_impl<_Tp&, true, false> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = const _Up&;
};

template <class _Tp>
struct __apply_cv_impl<_Tp&, false, true> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = volatile _Up&;
};

template <class _Tp>
struct __apply_cv_impl<_Tp&, true, true> {
  template <class _Up>
  using __apply __attribute__((__nodebug__)) = const volatile _Up&;
};

template <class _Tp, class _Up>
using __apply_cv_t __attribute__((__nodebug__)) = typename __apply_cv_impl<_Tp>::template __apply<_Up>;

}}
# 432 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/can_extract_key.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/can_extract_key.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__fwd/pair.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__fwd/pair.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class, class>
struct pair;

}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/can_extract_key.h" 2 3




# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_const_ref.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_const_ref.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
using __remove_const_ref_t = __remove_const_t<__libcpp_remove_reference_t<_Tp> >;

}}
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/can_extract_key.h" 2 3
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/can_extract_key.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


struct __extract_key_fail_tag {};
struct __extract_key_self_tag {};
struct __extract_key_first_tag {};

template <class _ValTy, class _Key, class _RawValTy = __remove_const_ref_t<_ValTy> >
struct __can_extract_key
    : __conditional_t<_IsSame<_RawValTy, _Key>::value, __extract_key_self_tag, __extract_key_fail_tag> {};

template <class _Pair, class _Key, class _First, class _Second>
struct __can_extract_key<_Pair, _Key, pair<_First, _Second> >
    : __conditional_t<_IsSame<__remove_const_t<_First>, _Key>::value, __extract_key_first_tag, __extract_key_fail_tag> {
};




template <class _ValTy, class _Key, class _ContainerValueTy, class _RawValTy = __remove_const_ref_t<_ValTy> >
struct __can_extract_map_key : integral_constant<bool, _IsSame<_RawValTy, _Key>::value> {};



template <class _ValTy, class _Key, class _RawValTy>
struct __can_extract_map_key<_ValTy, _Key, _Key, _RawValTy> : false_type {};

}}
# 433 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 1 3
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_array.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_array.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 36 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_array.h" 3
template <class _Tp>
struct is_array : public false_type {};
template <class _Tp>
struct is_array<_Tp[]> : public true_type {};
template <class _Tp, size_t _Np>
struct is_array<_Tp[_Np]> : public true_type {};


template <class _Tp>
inline constexpr bool is_array_v = is_array<_Tp>::value;




}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_function.h" 1 3
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_function.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_reference.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_reference.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_lvalue_reference : _BoolConstant<__is_lvalue_reference(_Tp)> {};

template <class _Tp>
struct is_rvalue_reference : _BoolConstant<__is_rvalue_reference(_Tp)> {};

template <class _Tp>
struct is_reference : _BoolConstant<__is_reference(_Tp)> {};


template <class _Tp>
inline constexpr bool is_reference_v = __is_reference(_Tp);
template <class _Tp>
inline constexpr bool is_lvalue_reference_v = __is_lvalue_reference(_Tp);
template <class _Tp>
inline constexpr bool is_rvalue_reference_v = __is_rvalue_reference(_Tp);
# 73 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_reference.h" 3
}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_function.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_function.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_function : integral_constant<bool, __is_function(_Tp)> {};
# 37 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_function.h" 3
template <class _Tp>
inline constexpr bool is_function_v = is_function<_Tp>::value;


}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_extent.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_extent.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_extent {
  using type __attribute__((__nodebug__)) = __remove_extent(_Tp);
};

template <class _Tp>
using __remove_extent_t = __remove_extent(_Tp);
# 48 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_extent.h" 3
template <class _Tp>
using remove_extent_t = __remove_extent_t<_Tp>;


}}
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 2 3
# 24 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
using __decay_t __attribute__((__nodebug__)) = __decay(_Tp);

template <class _Tp>
struct decay {
  using type __attribute__((__nodebug__)) = __decay_t<_Tp>;
};
# 67 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/decay.h" 3
template <class _Tp>
using decay_t = __decay_t<_Tp>;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cvref.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cvref.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
using __remove_cvref_t __attribute__((__nodebug__)) = __remove_cvref(_Tp);





template <class _Tp, class _Up>
struct __is_same_uncvref : _IsSame<__remove_cvref_t<_Tp>, __remove_cvref_t<_Up> > {};
# 44 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_cvref.h" 3
}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/void_t.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/void_t.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class...>
using void_t = void;


template <class...>
using __void_t = void;

}}
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 2 3
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 43 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_type.h" 3
template <class _Tp, class _Up, class = void>
struct __common_type2_imp {};



template <class _Tp, class _Up>
struct __common_type2_imp<_Tp, _Up, __void_t<decltype(true ? std::declval<_Tp>() : std::declval<_Up>())> > {
  typedef __attribute__((__nodebug__)) __decay_t<decltype(true ? std::declval<_Tp>() : std::declval<_Up>())> type;
};

template <class, class = void>
struct __common_type_impl {};

template <class... _Tp>
struct __common_types;
template <class... _Tp>
struct common_type;

template <class _Tp, class _Up>
struct __common_type_impl< __common_types<_Tp, _Up>, __void_t<typename common_type<_Tp, _Up>::type> > {
  typedef typename common_type<_Tp, _Up>::type type;
};

template <class _Tp, class _Up, class _Vp, class... _Rest>
struct __common_type_impl<__common_types<_Tp, _Up, _Vp, _Rest...>, __void_t<typename common_type<_Tp, _Up>::type> >
    : __common_type_impl<__common_types<typename common_type<_Tp, _Up>::type, _Vp, _Rest...> > {};



template <>
struct common_type<> {};



template <class _Tp>
struct common_type<_Tp> : public common_type<_Tp, _Tp> {};




template <class _Tp, class _Up>
struct common_type<_Tp, _Up>
    : conditional<_IsSame<_Tp, __decay_t<_Tp> >::value && _IsSame<_Up, __decay_t<_Up> >::value,
                  __common_type2_imp<_Tp, _Up>,
                  common_type<__decay_t<_Tp>, __decay_t<_Up> > >::type {};



template <class _Tp, class _Up, class _Vp, class... _Rest>
struct common_type<_Tp, _Up, _Vp, _Rest...>
    : __common_type_impl<__common_types<_Tp, _Up, _Vp, _Rest...> > {};


template <class... _Tp>
using common_type_t = typename common_type<_Tp...>::type;


}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/copy_cv.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/copy_cv.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _From, class _To>
struct __copy_cv {
  using type = _To;
};

template <class _From, class _To>
struct __copy_cv<const _From, _To> {
  using type = typename add_const<_To>::type;
};

template <class _From, class _To>
struct __copy_cv<volatile _From, _To> {
  using type = typename add_volatile<_To>::type;
};

template <class _From, class _To>
struct __copy_cv<const volatile _From, _To> {
  using type = typename add_cv<_To>::type;
};

template <class _From, class _To>
using __copy_cv_t = typename __copy_cv<_From, _To>::type;

}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/copy_cvref.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/copy_cvref.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _From, class _To>
struct __copy_cvref {
  using type = __copy_cv_t<_From, _To>;
};

template <class _From, class _To>
struct __copy_cvref<_From&, _To> {
  using type = __add_lvalue_reference_t<__copy_cv_t<_From, _To> >;
};

template <class _From, class _To>
struct __copy_cvref<_From&&, _To> {
  using type = __add_rvalue_reference_t<__copy_cv_t<_From, _To> >;
};

template <class _From, class _To>
using __copy_cvref_t = typename __copy_cvref<_From, _To>::type;

}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_convertible.h" 1 3
# 23 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_convertible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _T1, class _T2>
struct is_convertible : public integral_constant<bool, __is_convertible(_T1, _T2)> {};


template <class _From, class _To>
inline constexpr bool is_convertible_v = __is_convertible(_From, _To);


}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 2 3
# 25 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 191 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/common_reference.h" 3
}}
# 434 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/conjunction.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/conjunction.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class...>
using __expand_to_true = true_type;

template <class... _Pred>
__expand_to_true<__enable_if_t<_Pred::value>...> __and_helper(int);

template <class...>
false_type __and_helper(...);






template <class... _Pred>
using _And __attribute__((__nodebug__)) = decltype(std::__and_helper<_Pred...>(0));



template <class...>
struct conjunction : true_type {};

template <class _Arg>
struct conjunction<_Arg> : _Arg {};

template <class _Arg, class... _Args>
struct conjunction<_Arg, _Args...> : conditional_t<!bool(_Arg::value), _Arg, conjunction<_Args...>> {};

template <class... _Args>
inline constexpr bool conjunction_v = conjunction<_Args...>::value;



}}
# 437 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/dependent_type.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/dependent_type.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, bool>
struct __dependent_type : public _Tp {};

}}
# 439 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/disjunction.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/disjunction.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <bool>
struct _OrImpl;

template <>
struct _OrImpl<true> {
  template <class _Res, class _First, class... _Rest>
  using _Result __attribute__((__nodebug__)) =
      typename _OrImpl<!bool(_First::value) && sizeof...(_Rest) != 0>::template _Result<_First, _Rest...>;
};

template <>
struct _OrImpl<false> {
  template <class _Res, class...>
  using _Result = _Res;
};







template <class... _Args>
using _Or __attribute__((__nodebug__)) = typename _OrImpl<sizeof...(_Args) != 0>::template _Result<false_type, _Args...>;



template <class... _Args>
struct disjunction : _Or<_Args...> {};

template <class... _Args>
inline constexpr bool disjunction_v = _Or<_Args...>::value;



}}
# 440 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/extent.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/extent.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp, size_t _Dim = 0>
struct extent : integral_constant<size_t, __array_extent(_Tp, _Dim)> {};


template <class _Tp, unsigned _Ip = 0>
inline constexpr size_t extent_v = __array_extent(_Tp, _Ip);
# 52 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/extent.h" 3
}}
# 442 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_unique_object_representation.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_unique_object_representation.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_all_extents.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_all_extents.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_all_extents {
  using type __attribute__((__nodebug__)) = __remove_all_extents(_Tp);
};

template <class _Tp>
using __remove_all_extents_t = __remove_all_extents(_Tp);
# 48 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_all_extents.h" 3
template <class _Tp>
using remove_all_extents_t = __remove_all_extents_t<_Tp>;


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_unique_object_representation.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_unique_object_representation.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct has_unique_object_representations
    : public integral_constant<bool, __has_unique_object_representations(remove_cv_t<remove_all_extents_t<_Tp>>)> {};

template <class _Tp>
inline constexpr bool has_unique_object_representations_v = has_unique_object_representations<_Tp>::value;



}}
# 443 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_virtual_destructor.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/has_virtual_destructor.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct has_virtual_destructor : public integral_constant<bool, __has_virtual_destructor(_Tp)> {};


template <class _Tp>
inline constexpr bool has_virtual_destructor_v = __has_virtual_destructor(_Tp);


}}
# 444 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_base_of.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_base_of.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Bp, class _Dp>
struct is_base_of : public integral_constant<bool, __is_base_of(_Bp, _Dp)> {};


template <class _Bp, class _Dp>
inline constexpr bool is_base_of_v = __is_base_of(_Bp, _Dp);


}}
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_core_convertible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_core_convertible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {






template <class _Tp, class _Up, class = void>
struct __is_core_convertible : public false_type {};

template <class _Tp, class _Up>
struct __is_core_convertible<_Tp, _Up, decltype(static_cast<void (*)(_Up)>(0)(static_cast<_Tp (*)()>(0)()))>
    : public true_type {};

}}
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_function_pointer.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_function_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __libcpp_is_member_pointer {
  enum { __is_member = false, __is_func = false, __is_obj = false };
};
template <class _Tp, class _Up>
struct __libcpp_is_member_pointer<_Tp _Up::*> {
  enum {
    __is_member = true,
    __is_func = is_function<_Tp>::value,
    __is_obj = !__is_func,
  };
};



template <class _Tp>
struct is_member_function_pointer : _BoolConstant<__is_member_function_pointer(_Tp)> {};


template <class _Tp>
inline constexpr bool is_member_function_pointer_v = __is_member_function_pointer(_Tp);
# 60 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_function_pointer.h" 3
}}
# 23 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_object_pointer.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_object_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_member_object_pointer : _BoolConstant<__is_member_object_pointer(_Tp)> {};


template <class _Tp>
inline constexpr bool is_member_object_pointer_v = __is_member_object_pointer(_Tp);
# 44 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_object_pointer.h" 3
}}
# 24 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_reference_wrapper.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_reference_wrapper.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
class reference_wrapper;

template <class _Tp>
struct __is_reference_wrapper_impl : public false_type {};
template <class _Tp>
struct __is_reference_wrapper_impl<reference_wrapper<_Tp> > : public true_type {};
template <class _Tp>
struct __is_reference_wrapper : public __is_reference_wrapper_impl<__remove_cv_t<_Tp> > {};

}}
# 25 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3





# 1 "/data/data/com.termux/files/usr/include/c++/v1/__utility/forward.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__utility/forward.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr _Tp&&
forward([[_Clang::__lifetimebound__]] __libcpp_remove_reference_t<_Tp>& __t) noexcept {
  return static_cast<_Tp&&>(__t);
}

template <class _Tp>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr _Tp&&
forward([[_Clang::__lifetimebound__]] __libcpp_remove_reference_t<_Tp>&& __t) noexcept {
  static_assert(!is_lvalue_reference<_Tp>::value, "cannot forward an rvalue as an lvalue");
  return static_cast<_Tp&&>(__t);
}

}}
# 31 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 2 3
# 34 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/invoke.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

struct __any {
  __any(...);
};

template <class _MP, bool _IsMemberFunctionPtr, bool _IsMemberObjectPtr>
struct __member_pointer_traits_imp {};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...), true, false> {
  typedef _Class _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...), true, false> {
  typedef _Class _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const, true, false> {
  typedef _Class const _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const, true, false> {
  typedef _Class const _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile, true, false> {
  typedef _Class volatile _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile, true, false> {
  typedef _Class volatile _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile, true, false> {
  typedef _Class const volatile _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile, true, false> {
  typedef _Class const volatile _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...)&, true, false> {
  typedef _Class& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...)&, true, false> {
  typedef _Class& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const&, true, false> {
  typedef _Class const& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const&, true, false> {
  typedef _Class const& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile&, true, false> {
  typedef _Class volatile& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile&, true, false> {
  typedef _Class volatile& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile&, true, false> {
  typedef _Class const volatile& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile&, true, false> {
  typedef _Class const volatile& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...)&&, true, false> {
  typedef _Class&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...)&&, true, false> {
  typedef _Class&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const&&, true, false> {
  typedef _Class const&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const&&, true, false> {
  typedef _Class const&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) volatile&&, true, false> {
  typedef _Class volatile&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) volatile&&, true, false> {
  typedef _Class volatile&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param...) const volatile&&, true, false> {
  typedef _Class const volatile&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param...);
};

template <class _Rp, class _Class, class... _Param>
struct __member_pointer_traits_imp<_Rp (_Class::*)(_Param..., ...) const volatile&&, true, false> {
  typedef _Class const volatile&& _ClassType;
  typedef _Rp _ReturnType;
  typedef _Rp(_FnType)(_Param..., ...);
};

template <class _Rp, class _Class>
struct __member_pointer_traits_imp<_Rp _Class::*, false, true> {
  typedef _Class _ClassType;
  typedef _Rp _ReturnType;
};

template <class _MP>
struct __member_pointer_traits
    : public __member_pointer_traits_imp<__remove_cv_t<_MP>,
                                         is_member_function_pointer<_MP>::value,
                                         is_member_object_pointer<_MP>::value> {



};

template <class _DecayedFp>
struct __member_pointer_class_type {};

template <class _Ret, class _ClassType>
struct __member_pointer_class_type<_Ret _ClassType::*> {
  typedef _ClassType type;
};

template <class _Fp,
          class _A0,
          class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet1 =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value &&
                  (is_same<_ClassT, _DecayA0>::value || is_base_of<_ClassT, _DecayA0>::value)>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>, class _DecayA0 = __decay_t<_A0> >
using __enable_if_bullet2 =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value && __is_reference_wrapper<_DecayA0>::value>;

template <class _Fp,
          class _A0,
          class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet3 =
    __enable_if_t<is_member_function_pointer<_DecayFp>::value &&
                  !(is_same<_ClassT, _DecayA0>::value || is_base_of<_ClassT, _DecayA0>::value) &&
                  !__is_reference_wrapper<_DecayA0>::value>;

template <class _Fp,
          class _A0,
          class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet4 =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value &&
                  (is_same<_ClassT, _DecayA0>::value || is_base_of<_ClassT, _DecayA0>::value)>;

template <class _Fp, class _A0, class _DecayFp = __decay_t<_Fp>, class _DecayA0 = __decay_t<_A0> >
using __enable_if_bullet5 =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value && __is_reference_wrapper<_DecayA0>::value>;

template <class _Fp,
          class _A0,
          class _DecayFp = __decay_t<_Fp>,
          class _DecayA0 = __decay_t<_A0>,
          class _ClassT = typename __member_pointer_class_type<_DecayFp>::type>
using __enable_if_bullet6 =
    __enable_if_t<is_member_object_pointer<_DecayFp>::value &&
                  !(is_same<_ClassT, _DecayA0>::value || is_base_of<_ClassT, _DecayA0>::value) &&
                  !__is_reference_wrapper<_DecayA0>::value>;





template <class... _Args>
__nat __invoke(__any, _Args&&... __args);




template <class _Fp, class _A0, class... _Args, class = __enable_if_bullet1<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype((std::declval<_A0>().*std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp&& __f, _A0&& __a0, _Args&&... __args)
    noexcept(noexcept((static_cast<_A0&&>(__a0).*__f)(static_cast<_Args&&>(__args)...)))
               { return (static_cast<_A0&&>(__a0).*__f)(static_cast<_Args&&>(__args)...); }

template <class _Fp, class _A0, class... _Args, class = __enable_if_bullet2<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype((std::declval<_A0>().get().*std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp&& __f, _A0&& __a0, _Args&&... __args)
    noexcept(noexcept((__a0.get().*__f)(static_cast<_Args&&>(__args)...)))
               { return (__a0.get().*__f)(static_cast<_Args&&>(__args)...); }

template <class _Fp, class _A0, class... _Args, class = __enable_if_bullet3<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype(((*std::declval<_A0>()).*std::declval<_Fp>())(std::declval<_Args>()...))
__invoke(_Fp&& __f, _A0&& __a0, _Args&&... __args)
    noexcept(noexcept(((*static_cast<_A0&&>(__a0)).*__f)(static_cast<_Args&&>(__args)...)))
               { return ((*static_cast<_A0&&>(__a0)).*__f)(static_cast<_Args&&>(__args)...); }



template <class _Fp, class _A0, class = __enable_if_bullet4<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype(std::declval<_A0>().*std::declval<_Fp>())
__invoke(_Fp&& __f, _A0&& __a0)
    noexcept(noexcept(static_cast<_A0&&>(__a0).*__f))
               { return static_cast<_A0&&>(__a0).*__f; }

template <class _Fp, class _A0, class = __enable_if_bullet5<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype(std::declval<_A0>().get().*std::declval<_Fp>())
__invoke(_Fp&& __f, _A0&& __a0)
    noexcept(noexcept(__a0.get().*__f))
               { return __a0.get().*__f; }

template <class _Fp, class _A0, class = __enable_if_bullet6<_Fp, _A0> >
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype((*std::declval<_A0>()).*std::declval<_Fp>())
__invoke(_Fp&& __f, _A0&& __a0)
    noexcept(noexcept((*static_cast<_A0&&>(__a0)).*__f))
               { return (*static_cast<_A0&&>(__a0)).*__f; }



template <class _Fp, class... _Args>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr
decltype(std::declval<_Fp>()(std::declval<_Args>()...))
__invoke(_Fp&& __f, _Args&&... __args)
    noexcept(noexcept(static_cast<_Fp&&>(__f)(static_cast<_Args&&>(__args)...)))
               { return static_cast<_Fp&&>(__f)(static_cast<_Args&&>(__args)...); }



template <class _Ret, class _Fp, class... _Args>
struct __invokable_r {
  template <class _XFp, class... _XArgs>
  static decltype(std::__invoke(std::declval<_XFp>(), std::declval<_XArgs>()...)) __try_call(int);
  template <class _XFp, class... _XArgs>
  static __nat __try_call(...);



  using _Result = decltype(__try_call<_Fp, _Args...>(0));

  using type = __conditional_t<_IsNotSame<_Result, __nat>::value,
                               __conditional_t<is_void<_Ret>::value, true_type, __is_core_convertible<_Result, _Ret> >,
                               false_type>;
  static const bool value = type::value;
};
template <class _Fp, class... _Args>
using __invokable = __invokable_r<void, _Fp, _Args...>;

template <bool _IsInvokable, bool _IsCVVoid, class _Ret, class _Fp, class... _Args>
struct __nothrow_invokable_r_imp {
  static const bool value = false;
};

template <class _Ret, class _Fp, class... _Args>
struct __nothrow_invokable_r_imp<true, false, _Ret, _Fp, _Args...> {
  typedef __nothrow_invokable_r_imp _ThisT;

  template <class _Tp>
  static void __test_noexcept(_Tp) noexcept;




  static const bool value =
      noexcept(_ThisT::__test_noexcept<_Ret>(std::__invoke(std::declval<_Fp>(), std::declval<_Args>()...)));

};

template <class _Ret, class _Fp, class... _Args>
struct __nothrow_invokable_r_imp<true, true, _Ret, _Fp, _Args...> {



  static const bool value = noexcept(std::__invoke(std::declval<_Fp>(), std::declval<_Args>()...));

};

template <class _Ret, class _Fp, class... _Args>
using __nothrow_invokable_r =
    __nothrow_invokable_r_imp<__invokable_r<_Ret, _Fp, _Args...>::value, is_void<_Ret>::value, _Ret, _Fp, _Args...>;

template <class _Fp, class... _Args>
using __nothrow_invokable = __nothrow_invokable_r_imp<__invokable<_Fp, _Args...>::value, true, void, _Fp, _Args...>;

template <class _Fp, class... _Args>
struct __invoke_of
    : public enable_if<__invokable<_Fp, _Args...>::value, typename __invokable_r<void, _Fp, _Args...>::_Result> {};

template <class _Ret, bool = is_void<_Ret>::value>
struct __invoke_void_return_wrapper {
  template <class... _Args>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static _Ret __call(_Args&&... __args) {
    return std::__invoke(std::forward<_Args>(__args)...);
  }
};

template <class _Ret>
struct __invoke_void_return_wrapper<_Ret, true> {
  template <class... _Args>
  __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) static void __call(_Args&&... __args) {
    std::__invoke(std::forward<_Args>(__args)...);
  }
};





template <class _Fn, class... _Args>
struct is_invocable : integral_constant<bool, __invokable<_Fn, _Args...>::value> {};

template <class _Ret, class _Fn, class... _Args>
struct is_invocable_r : integral_constant<bool, __invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class... _Args>
inline constexpr bool is_invocable_v = is_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class... _Args>
inline constexpr bool is_invocable_r_v = is_invocable_r<_Ret, _Fn, _Args...>::value;



template <class _Fn, class... _Args>
struct is_nothrow_invocable : integral_constant<bool, __nothrow_invokable<_Fn, _Args...>::value> {
};

template <class _Ret, class _Fn, class... _Args>
struct is_nothrow_invocable_r
    : integral_constant<bool, __nothrow_invokable_r<_Ret, _Fn, _Args...>::value> {};

template <class _Fn, class... _Args>
inline constexpr bool is_nothrow_invocable_v = is_nothrow_invocable<_Fn, _Args...>::value;

template <class _Ret, class _Fn, class... _Args>
inline constexpr bool is_nothrow_invocable_r_v = is_nothrow_invocable_r<_Ret, _Fn, _Args...>::value;

template <class _Fn, class... _Args>
struct invoke_result : __invoke_of<_Fn, _Args...> {};

template <class _Fn, class... _Args>
using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;



}}
# 446 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_abstract.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_abstract.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_abstract : public integral_constant<bool, __is_abstract(_Tp)> {};


template <class _Tp>
inline constexpr bool is_abstract_v = __is_abstract(_Tp);


}}
# 447 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_aggregate.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_aggregate.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_aggregate : public integral_constant<bool, __is_aggregate(_Tp)> {};

template <class _Tp>
inline constexpr bool is_aggregate_v = __is_aggregate(_Tp);



}}
# 448 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_assignable.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class _Up>
struct is_assignable : _BoolConstant<__is_assignable(_Tp, _Up)> {};


template <class _Tp, class _Arg>
inline constexpr bool is_assignable_v = __is_assignable(_Tp, _Arg);


}}
# 451 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_bounded_array.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_bounded_array.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class>
struct __libcpp_is_bounded_array : false_type {};
template <class _Tp, size_t _Np>
struct __libcpp_is_bounded_array<_Tp[_Np]> : true_type {};
# 39 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_bounded_array.h" 3
}}
# 453 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_callable.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_callable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Func, class... _Args, class = decltype(std::declval<_Func>()(std::declval<_Args>()...))>
true_type __is_callable_helper(int);
template <class...>
false_type __is_callable_helper(...);

template <class _Func, class... _Args>
struct __is_callable : decltype(std::__is_callable_helper<_Func, _Args...>(0)) {};

}}
# 454 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_char_like_type.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_char_like_type.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_standard_layout.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_standard_layout.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_standard_layout : public integral_constant<bool, __is_standard_layout(_Tp)> {};


template <class _Tp>
inline constexpr bool is_standard_layout_v = __is_standard_layout(_Tp);


}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_char_like_type.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivial.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivial.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivial : public integral_constant<bool, __is_trivial(_Tp)> {};


template <class _Tp>
inline constexpr bool is_trivial_v = __is_trivial(_Tp);


}}
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_char_like_type.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_char_like_type.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _CharT>
using _IsCharLikeType = _And<is_standard_layout<_CharT>, is_trivial<_CharT> >;

}}
# 455 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_class.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_class.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_class : public integral_constant<bool, __is_class(_Tp)> {};


template <class _Tp>
inline constexpr bool is_class_v = __is_class(_Tp);


}}
# 456 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_compound.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_compound.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_fundamental.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_fundamental.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_null_pointer.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_null_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __is_nullptr_t_impl : public false_type {};
template <>
struct __is_nullptr_t_impl<nullptr_t> : public true_type {};

template <class _Tp>
struct __is_nullptr_t : public __is_nullptr_t_impl<__remove_cv_t<_Tp> > {};


template <class _Tp>
struct is_null_pointer : public __is_nullptr_t_impl<__remove_cv_t<_Tp> > {};


template <class _Tp>
inline constexpr bool is_null_pointer_v = is_null_pointer<_Tp>::value;



}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_fundamental.h" 2 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_fundamental.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_fundamental : _BoolConstant<__is_fundamental(_Tp)> {};


template <class _Tp>
inline constexpr bool is_fundamental_v = __is_fundamental(_Tp);
# 46 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_fundamental.h" 3
}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_compound.h" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_compound.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_compound : _BoolConstant<__is_compound(_Tp)> {};


template <class _Tp>
inline constexpr bool is_compound_v = __is_compound(_Tp);
# 44 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_compound.h" 3
}}
# 457 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_constant_evaluated.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_constant_evaluated.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {







__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) inline constexpr bool __libcpp_is_constant_evaluated() noexcept {
  return __builtin_is_constant_evaluated();
}

}}
# 459 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_constructible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class... _Args>
struct is_constructible : public integral_constant<bool, __is_constructible(_Tp, _Args...)> {};


template <class _Tp, class... _Args>
inline constexpr bool is_constructible_v = __is_constructible(_Tp, _Args...);


}}
# 460 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_copy_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_copy_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_copy_assignable
    : public integral_constant<
          bool,
          __is_assignable(__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<typename add_const<_Tp>::type>)> {};


template <class _Tp>
inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;


}}
# 462 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_copy_constructible.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_copy_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_copy_constructible
    : public integral_constant<bool, __is_constructible(_Tp, __add_lvalue_reference_t<typename add_const<_Tp>::type>)> {
};


template <class _Tp>
inline constexpr bool is_copy_constructible_v = is_copy_constructible<_Tp>::value;


}}
# 463 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_default_constructible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_default_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_default_constructible : public integral_constant<bool, __is_constructible(_Tp)> {};


template <class _Tp>
inline constexpr bool is_default_constructible_v = __is_constructible(_Tp);


}}
# 464 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_destructible.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_destructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_destructible : _BoolConstant<__is_destructible(_Tp)> {};


template <class _Tp>
inline constexpr bool is_destructible_v = __is_destructible(_Tp);
# 95 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_destructible.h" 3
}}
# 465 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_empty.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_empty.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_empty : public integral_constant<bool, __is_empty(_Tp)> {};


template <class _Tp>
inline constexpr bool is_empty_v = __is_empty(_Tp);


}}
# 466 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_enum.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_enum.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_enum : public integral_constant<bool, __is_enum(_Tp)> {};


template <class _Tp>
inline constexpr bool is_enum_v = __is_enum(_Tp);


}}
# 467 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_final.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_final.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __libcpp_is_final : public integral_constant<bool, __is_final(_Tp)> {};


template <class _Tp>
struct is_final : public integral_constant<bool, __is_final(_Tp)> {};



template <class _Tp>
inline constexpr bool is_final_v = __is_final(_Tp);


}}
# 468 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3



# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_implicitly_default_constructible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_implicitly_default_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {






template <class _Tp>
void __test_implicit_default_constructible(_Tp);

template <class _Tp, class = void, class = typename is_default_constructible<_Tp>::type>
struct __is_implicitly_default_constructible : false_type {};

template <class _Tp>
struct __is_implicitly_default_constructible<_Tp,
                                             decltype(std::__test_implicit_default_constructible<_Tp const&>({})),
                                             true_type> : true_type {};

template <class _Tp>
struct __is_implicitly_default_constructible<_Tp,
                                             decltype(std::__test_implicit_default_constructible<_Tp const&>({})),
                                             false_type> : false_type {};


}}
# 472 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_literal_type.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_literal_type.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct __attribute__((__deprecated__)) is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)> {};


template <class _Tp>
__attribute__((__deprecated__)) inline constexpr bool is_literal_type_v = __is_literal_type(_Tp);



}}
# 474 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_pointer.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_member_pointer : _BoolConstant<__is_member_pointer(_Tp)> {};


template <class _Tp>
inline constexpr bool is_member_pointer_v = __is_member_pointer(_Tp);
# 45 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_member_pointer.h" 3
}}
# 477 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_move_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_move_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_move_assignable
    : public integral_constant<bool, __is_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};


template <class _Tp>
inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;


}}
# 478 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_move_constructible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_move_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_move_constructible
    : public integral_constant<bool, __is_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};


template <class _Tp>
inline constexpr bool is_move_constructible_v = is_move_constructible<_Tp>::value;


}}
# 479 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_assignable.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class _Arg>
struct is_nothrow_assignable : public integral_constant<bool, __is_nothrow_assignable(_Tp, _Arg)> {
};


template <class _Tp, class _Arg>
inline constexpr bool is_nothrow_assignable_v = __is_nothrow_assignable(_Tp, _Arg);


}}
# 480 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_constructible.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {




template < class _Tp, class... _Args>
struct is_nothrow_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp, _Args...)> {};
# 65 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_constructible.h" 3
template <class _Tp, class... _Args>
inline constexpr bool is_nothrow_constructible_v = is_nothrow_constructible<_Tp, _Args...>::value;


}}
# 481 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_convertible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_convertible.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/lazy.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/lazy.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <template <class...> class _Func, class... _Args>
struct _Lazy : _Func<_Args...> {};

}}
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_convertible.h" 2 3
# 23 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_convertible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 48 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_convertible.h" 3
}}
# 482 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_copy_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_copy_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_nothrow_copy_assignable
    : public integral_constant<bool,
                               __is_nothrow_assignable(__add_lvalue_reference_t<_Tp>,
                                                       __add_lvalue_reference_t<typename add_const<_Tp>::type>)> {};


template <class _Tp>
inline constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<_Tp>::value;


}}
# 483 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_copy_constructible.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_copy_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 33 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_copy_constructible.h" 3
template <class _Tp>
struct is_nothrow_copy_constructible
    : public integral_constant<
          bool,
          __is_nothrow_constructible(_Tp, typename add_lvalue_reference<typename add_const<_Tp>::type>::type)> {};




template <class _Tp>
inline constexpr bool is_nothrow_copy_constructible_v = is_nothrow_copy_constructible<_Tp>::value;


}}
# 484 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_default_constructible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_default_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_nothrow_default_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp)> {};


template <class _Tp>
inline constexpr bool is_nothrow_default_constructible_v = __is_nothrow_constructible(_Tp);


}}
# 485 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_destructible.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_destructible.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scalar.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scalar.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_pointer.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_pointer : _BoolConstant<__is_pointer(_Tp)> {};


template <class _Tp>
inline constexpr bool is_pointer_v = __is_pointer(_Tp);
# 63 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_pointer.h" 3
}}
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scalar.h" 2 3
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scalar.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_scalar : _BoolConstant<__is_scalar(_Tp)> {};


template <class _Tp>
inline constexpr bool is_scalar_v = __is_scalar(_Tp);
# 67 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scalar.h" 3
}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_destructible.h" 2 3
# 23 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_destructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <bool, class _Tp>
struct __libcpp_is_nothrow_destructible;

template <class _Tp>
struct __libcpp_is_nothrow_destructible<false, _Tp> : public false_type {};

template <class _Tp>
struct __libcpp_is_nothrow_destructible<true, _Tp>
    : public integral_constant<bool, noexcept(std::declval<_Tp>().~_Tp()) > {};

template <class _Tp>
struct is_nothrow_destructible
    : public __libcpp_is_nothrow_destructible<is_destructible<_Tp>::value, _Tp> {};

template <class _Tp, size_t _Ns>
struct is_nothrow_destructible<_Tp[_Ns]> : public is_nothrow_destructible<_Tp> {};

template <class _Tp>
struct is_nothrow_destructible<_Tp&> : public true_type {};

template <class _Tp>
struct is_nothrow_destructible<_Tp&&> : public true_type {};
# 68 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_destructible.h" 3
template <class _Tp>
inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<_Tp>::value;


}}
# 486 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_move_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_move_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_nothrow_move_assignable
    : public integral_constant<bool,
                               __is_nothrow_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {
};


template <class _Tp>
inline constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<_Tp>::value;


}}
# 487 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_move_constructible.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_move_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {




template <class _Tp>
struct is_nothrow_move_constructible
    : public integral_constant<bool, __is_nothrow_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};
# 39 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_nothrow_move_constructible.h" 3
template <class _Tp>
inline constexpr bool is_nothrow_move_constructible_v = is_nothrow_move_constructible<_Tp>::value;


}}
# 488 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_object.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_object.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_union.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_union.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_union : public integral_constant<bool, __is_union(_Tp)> {};


template <class _Tp>
inline constexpr bool is_union_v = __is_union(_Tp);


}}
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_object.h" 2 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_object.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_object : _BoolConstant<__is_object(_Tp)> {};


template <class _Tp>
inline constexpr bool is_object_v = __is_object(_Tp);
# 50 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_object.h" 3
}}
# 490 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_pod.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_pod.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_pod : public integral_constant<bool, __is_pod(_Tp)> {};


template <class _Tp>
inline constexpr bool is_pod_v = __is_pod(_Tp);


}}
# 491 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_polymorphic.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_polymorphic.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_polymorphic : public integral_constant<bool, __is_polymorphic(_Tp)> {};


template <class _Tp>
inline constexpr bool is_polymorphic_v = __is_polymorphic(_Tp);


}}
# 493 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3





# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scoped_enum.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scoped_enum.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/underlying_type.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/underlying_type.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, bool = is_enum<_Tp>::value>
struct __underlying_type_impl;

template <class _Tp>
struct __underlying_type_impl<_Tp, false> {};

template <class _Tp>
struct __underlying_type_impl<_Tp, true> {
  typedef __underlying_type(_Tp) type;
};

template <class _Tp>
struct underlying_type : __underlying_type_impl<_Tp, is_enum<_Tp>::value> {};


template <class _Tp>
using underlying_type_t = typename underlying_type<_Tp>::type;


}}
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scoped_enum.h" 2 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scoped_enum.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 38 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_scoped_enum.h" 3
}}
# 499 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_specialization.h" 1 3
# 29 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_specialization.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp, template <class...> class _Template>
inline constexpr bool __is_specialization_v = false;

template <template <class...> class _Template, class... _Args>
inline constexpr bool __is_specialization_v<_Template<_Args...>, _Template> = true;



}}
# 501 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_swappable.h" 1 3
# 29 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_swappable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __is_swappable;
template <class _Tp>
struct __is_nothrow_swappable;


template <class _Tp>
using __swap_result_t = __enable_if_t<is_move_constructible<_Tp>::value && is_move_assignable<_Tp>::value>;





template <class _Tp>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __swap_result_t<_Tp> swap(_Tp& __x, _Tp& __y)
    noexcept(is_nothrow_move_constructible<_Tp>::value&& is_nothrow_move_assignable<_Tp>::value);

template <class _Tp, size_t _Np, __enable_if_t<__is_swappable<_Tp>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) void swap(_Tp (&__a)[_Np], _Tp (&__b)[_Np])
    noexcept(__is_nothrow_swappable<_Tp>::value);

namespace __detail {


template <class _Tp, class _Up = _Tp, bool _NotVoid = !is_void<_Tp>::value && !is_void<_Up>::value>
struct __swappable_with {
  template <class _LHS, class _RHS>
  static decltype(swap(std::declval<_LHS>(), std::declval<_RHS>())) __test_swap(int);
  template <class, class>
  static __nat __test_swap(long);


  typedef decltype((__test_swap<_Tp, _Up>(0))) __swap1;
  typedef decltype((__test_swap<_Up, _Tp>(0))) __swap2;

  static const bool value = _IsNotSame<__swap1, __nat>::value && _IsNotSame<__swap2, __nat>::value;
};

template <class _Tp, class _Up>
struct __swappable_with<_Tp, _Up, false> : false_type {};

template <class _Tp, class _Up = _Tp, bool _Swappable = __swappable_with<_Tp, _Up>::value>
struct __nothrow_swappable_with {
  static const bool value =

      noexcept(swap(std::declval<_Tp>(), std::declval<_Up>()))&& noexcept(
          swap(std::declval<_Up>(), std::declval<_Tp>()));



};

template <class _Tp, class _Up>
struct __nothrow_swappable_with<_Tp, _Up, false> : false_type {};

}

template <class _Tp>
struct __is_swappable : public integral_constant<bool, __detail::__swappable_with<_Tp&>::value> {};

template <class _Tp>
struct __is_nothrow_swappable : public integral_constant<bool, __detail::__nothrow_swappable_with<_Tp&>::value> {};



template <class _Tp, class _Up>
struct is_swappable_with
    : public integral_constant<bool, __detail::__swappable_with<_Tp, _Up>::value> {};

template <class _Tp>
struct is_swappable
    : public __conditional_t<__libcpp_is_referenceable<_Tp>::value,
                             is_swappable_with<__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<_Tp> >,
                             false_type> {};

template <class _Tp, class _Up>
struct is_nothrow_swappable_with
    : public integral_constant<bool, __detail::__nothrow_swappable_with<_Tp, _Up>::value> {};

template <class _Tp>
struct is_nothrow_swappable
    : public __conditional_t<__libcpp_is_referenceable<_Tp>::value,
                             is_nothrow_swappable_with<__add_lvalue_reference_t<_Tp>, __add_lvalue_reference_t<_Tp> >,
                             false_type> {};

template <class _Tp, class _Up>
inline constexpr bool is_swappable_with_v = is_swappable_with<_Tp, _Up>::value;

template <class _Tp>
inline constexpr bool is_swappable_v = is_swappable<_Tp>::value;

template <class _Tp, class _Up>
inline constexpr bool is_nothrow_swappable_with_v = is_nothrow_swappable_with<_Tp, _Up>::value;

template <class _Tp>
inline constexpr bool is_nothrow_swappable_v = is_nothrow_swappable<_Tp>::value;



}}
# 503 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_assignable.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class _Arg>
struct is_trivially_assignable : integral_constant<bool, __is_trivially_assignable(_Tp, _Arg)> {};


template <class _Tp, class _Arg>
inline constexpr bool is_trivially_assignable_v = __is_trivially_assignable(_Tp, _Arg);


}}
# 505 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_constructible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp, class... _Args>
struct is_trivially_constructible
    : integral_constant<bool, __is_trivially_constructible(_Tp, _Args...)> {};


template <class _Tp, class... _Args>
inline constexpr bool is_trivially_constructible_v = __is_trivially_constructible(_Tp, _Args...);


}}
# 506 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copy_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copy_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_copy_assignable
    : public integral_constant<bool,
                               __is_trivially_assignable(__add_lvalue_reference_t<_Tp>,
                                                         __add_lvalue_reference_t<typename add_const<_Tp>::type>)> {};


template <class _Tp>
inline constexpr bool is_trivially_copy_assignable_v = is_trivially_copy_assignable<_Tp>::value;


}}
# 507 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copy_constructible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copy_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_copy_constructible
    : public integral_constant<bool, __is_trivially_constructible(_Tp, __add_lvalue_reference_t<const _Tp>)> {};


template <class _Tp>
inline constexpr bool is_trivially_copy_constructible_v = is_trivially_copy_constructible<_Tp>::value;


}}
# 508 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copyable.h" 1 3
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copyable.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/cstdint" 1 3
# 158 "/data/data/com.termux/files/usr/include/c++/v1/cstdint" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

using ::int8_t __attribute__((__using_if_exists__));
using ::int16_t __attribute__((__using_if_exists__));
using ::int32_t __attribute__((__using_if_exists__));
using ::int64_t __attribute__((__using_if_exists__));

using ::uint8_t __attribute__((__using_if_exists__));
using ::uint16_t __attribute__((__using_if_exists__));
using ::uint32_t __attribute__((__using_if_exists__));
using ::uint64_t __attribute__((__using_if_exists__));

using ::int_least8_t __attribute__((__using_if_exists__));
using ::int_least16_t __attribute__((__using_if_exists__));
using ::int_least32_t __attribute__((__using_if_exists__));
using ::int_least64_t __attribute__((__using_if_exists__));

using ::uint_least8_t __attribute__((__using_if_exists__));
using ::uint_least16_t __attribute__((__using_if_exists__));
using ::uint_least32_t __attribute__((__using_if_exists__));
using ::uint_least64_t __attribute__((__using_if_exists__));

using ::int_fast8_t __attribute__((__using_if_exists__));
using ::int_fast16_t __attribute__((__using_if_exists__));
using ::int_fast32_t __attribute__((__using_if_exists__));
using ::int_fast64_t __attribute__((__using_if_exists__));

using ::uint_fast8_t __attribute__((__using_if_exists__));
using ::uint_fast16_t __attribute__((__using_if_exists__));
using ::uint_fast32_t __attribute__((__using_if_exists__));
using ::uint_fast64_t __attribute__((__using_if_exists__));

using ::intptr_t __attribute__((__using_if_exists__));
using ::uintptr_t __attribute__((__using_if_exists__));

using ::intmax_t __attribute__((__using_if_exists__));
using ::uintmax_t __attribute__((__using_if_exists__));

}}
# 15 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copyable.h" 2 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_copyable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_copyable : public integral_constant<bool, __is_trivially_copyable(_Tp)> {};


template <class _Tp>
inline constexpr bool is_trivially_copyable_v = __is_trivially_copyable(_Tp);







}}
# 509 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_default_constructible.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_default_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_default_constructible
    : public integral_constant<bool, __is_trivially_constructible(_Tp)> {};


template <class _Tp>
inline constexpr bool is_trivially_default_constructible_v = __is_trivially_constructible(_Tp);


}}
# 510 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_destructible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_destructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_trivially_destructible
    : public integral_constant<bool, __is_trivially_destructible(_Tp)> {};
# 41 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_destructible.h" 3
template <class _Tp>
inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<_Tp>::value;


}}
# 511 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_move_assignable.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_move_assignable.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_move_assignable
    : public integral_constant<
          bool,
          __is_trivially_assignable(__add_lvalue_reference_t<_Tp>, __add_rvalue_reference_t<_Tp>)> {};


template <class _Tp>
inline constexpr bool is_trivially_move_assignable_v = is_trivially_move_assignable<_Tp>::value;


}}
# 512 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_move_constructible.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_trivially_move_constructible.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct is_trivially_move_constructible
    : public integral_constant<bool, __is_trivially_constructible(_Tp, __add_rvalue_reference_t<_Tp>)> {};


template <class _Tp>
inline constexpr bool is_trivially_move_constructible_v = is_trivially_move_constructible<_Tp>::value;


}}
# 513 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unbounded_array.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unbounded_array.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class>
struct __libcpp_is_unbounded_array : false_type {};
template <class _Tp>
struct __libcpp_is_unbounded_array<_Tp[]> : true_type {};
# 38 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unbounded_array.h" 3
}}
# 514 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unsigned.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unsigned.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
struct is_unsigned : _BoolConstant<__is_unsigned(_Tp)> {};


template <class _Tp>
inline constexpr bool is_unsigned_v = __is_unsigned(_Tp);
# 57 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/is_unsigned.h" 3
}}
# 516 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_const_lvalue_ref.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_const_lvalue_ref.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
using __make_const_lvalue_ref = const __libcpp_remove_reference_t<_Tp>&;

}}
# 519 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_signed.h" 1 3
# 22 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_signed.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
using __make_signed_t = __make_signed(_Tp);
# 77 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_signed.h" 3
template <class _Tp>
struct make_signed {
  using type __attribute__((__nodebug__)) = __make_signed_t<_Tp>;
};


template <class _Tp>
using make_signed_t = __make_signed_t<_Tp>;


}}
# 520 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_unsigned.h" 1 3
# 24 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_unsigned.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Tp>
using __make_unsigned_t = __make_unsigned(_Tp);
# 79 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/make_unsigned.h" 3
template <class _Tp>
struct make_unsigned {
  using type __attribute__((__nodebug__)) = __make_unsigned_t<_Tp>;
};


template <class _Tp>
using make_unsigned_t = __make_unsigned_t<_Tp>;



template <class _Tp>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) constexpr __make_unsigned_t<_Tp> __to_unsigned_like(_Tp __x) noexcept {
  return static_cast<__make_unsigned_t<_Tp> >(__x);
}


template <class _Tp, class _Up>
using __copy_unsigned_t = __conditional_t<is_unsigned<_Tp>::value, __make_unsigned_t<_Up>, _Up>;

}}
# 521 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/maybe_const.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/maybe_const.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <bool _Const, class _Tp>
using __maybe_const = __conditional_t<_Const, const _Tp, _Tp>;

}}
# 522 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/negation.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/negation.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Pred>
struct _Not : _BoolConstant<!_Pred::value> {};


template <class _Tp>
struct negation : _Not<_Tp> {};
template <class _Tp>
inline constexpr bool negation_v = !_Tp::value;


}}
# 523 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/rank.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/rank.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {
# 30 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/rank.h" 3
template <class _Tp>
struct rank : public integral_constant<size_t, 0> {};
template <class _Tp>
struct rank<_Tp[]> : public integral_constant<size_t, rank<_Tp>::value + 1> {};
template <class _Tp, size_t _Np>
struct rank<_Tp[_Np]> : public integral_constant<size_t, rank<_Tp>::value + 1> {};




template <class _Tp>
inline constexpr size_t rank_v = rank<_Tp>::value;


}}
# 524 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3





# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_pointer.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_pointer.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {


template <class _Tp>
struct remove_pointer {
  using type __attribute__((__nodebug__)) = __remove_pointer(_Tp);
};

template <class _Tp>
using __remove_pointer_t = __remove_pointer(_Tp);
# 42 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/remove_pointer.h" 3
template <class _Tp>
using remove_pointer_t = __remove_pointer_t<_Tp>;


}}
# 530 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3


# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/result_of.h" 1 3
# 13 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/result_of.h" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__functional/invoke.h" 1 3
# 19 "/data/data/com.termux/files/usr/include/c++/v1/__functional/invoke.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {



template <class _Fn, class... _Args>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) invoke_result_t<_Fn, _Args...>
invoke(_Fn&& __f, _Args&&... __args) noexcept(is_nothrow_invocable_v<_Fn, _Args...>) {
  return std::__invoke(std::forward<_Fn>(__f), std::forward<_Args>(__args)...);
}
# 52 "/data/data/com.termux/files/usr/include/c++/v1/__functional/invoke.h" 3
}}
# 14 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/result_of.h" 2 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/result_of.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {




template <class _Callable>
class __attribute__((__deprecated__)) result_of;

template <class _Fp, class... _Args>
class result_of<_Fp(_Args...)> : public __invoke_of<_Fp, _Args...> {};


template <class _Tp>
using result_of_t __attribute__((__deprecated__)) = typename result_of<_Tp>::type;



}}
# 533 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/type_identity.h" 1 3
# 16 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/type_identity.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __type_identity {
  typedef _Tp type;
};

template <class _Tp>
using __type_identity_t __attribute__((__nodebug__)) = typename __type_identity<_Tp>::type;
# 37 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/type_identity.h" 3
}}
# 534 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3

# 1 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/unwrap_ref.h" 1 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/unwrap_ref.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

template <class _Tp>
struct __unwrap_reference {
  typedef __attribute__((__nodebug__)) _Tp type;
};

template <class _Tp>
class reference_wrapper;

template <class _Tp>
struct __unwrap_reference<reference_wrapper<_Tp> > {
  typedef __attribute__((__nodebug__)) _Tp& type;
};

template <class _Tp>
struct decay;
# 51 "/data/data/com.termux/files/usr/include/c++/v1/__type_traits/unwrap_ref.h" 3
template <class _Tp>
struct __unwrap_ref_decay



    : __unwrap_reference<__decay_t<_Tp> >

{
};

}}
# 536 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 2 3
# 544 "/data/data/com.termux/files/usr/include/c++/v1/type_traits" 3
# 820 "/data/data/com.termux/files/usr/include/c++/v1/limits" 2 3
# 17 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 2 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/copysign.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float copysign(float __x, float __y) noexcept {
  return ::__builtin_copysignf(__x, __y);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double copysign(long double __x, long double __y) noexcept {
  return ::__builtin_copysignl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type
copysign(_A1 __x, _A2 __y) noexcept {
  return ::__builtin_copysign(__x, __y);
}

}

}}
# 360 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/error_functions.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/error_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float erf(float __x) noexcept { return __builtin_erff(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double erf(double __x) noexcept {
  return __builtin_erf(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double erf(long double __x) noexcept { return __builtin_erfl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double erf(_A1 __x) noexcept {
  return __builtin_erf((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float erfc(float __x) noexcept { return __builtin_erfcf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double erfc(double __x) noexcept {
  return __builtin_erfc(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double erfc(long double __x) noexcept { return __builtin_erfcl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double erfc(_A1 __x) noexcept {
  return __builtin_erfc((double)__x);
}

}

}}
# 361 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/exponential_functions.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__math/exponential_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float exp(float __x) noexcept { return __builtin_expf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double exp(double __x) noexcept {
  return __builtin_exp(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double exp(long double __x) noexcept { return __builtin_expl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double exp(_A1 __x) noexcept {
  return __builtin_exp((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float frexp(float __x, int* __e) noexcept { return __builtin_frexpf(__x, __e); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double frexp(double __x, int* __e) noexcept {
  return __builtin_frexp(__x, __e);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double frexp(long double __x, int* __e) noexcept {
  return __builtin_frexpl(__x, __e);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double frexp(_A1 __x, int* __e) noexcept {
  return __builtin_frexp((double)__x, __e);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float ldexp(float __x, int __e) noexcept { return __builtin_ldexpf(__x, __e); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double ldexp(double __x, int __e) noexcept {
  return __builtin_ldexp(__x, __e);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double ldexp(long double __x, int __e) noexcept {
  return __builtin_ldexpl(__x, __e);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double ldexp(_A1 __x, int __e) noexcept {
  return __builtin_ldexp((double)__x, __e);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float exp2(float __x) noexcept { return __builtin_exp2f(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double exp2(double __x) noexcept {
  return __builtin_exp2(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double exp2(long double __x) noexcept { return __builtin_exp2l(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double exp2(_A1 __x) noexcept {
  return __builtin_exp2((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float expm1(float __x) noexcept { return __builtin_expm1f(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double expm1(double __x) noexcept {
  return __builtin_expm1(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double expm1(long double __x) noexcept { return __builtin_expm1l(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double expm1(_A1 __x) noexcept {
  return __builtin_expm1((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float scalbln(float __x, long __y) noexcept { return __builtin_scalblnf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double scalbln(double __x, long __y) noexcept {
  return __builtin_scalbln(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double scalbln(long double __x, long __y) noexcept {
  return __builtin_scalblnl(__x, __y);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double scalbln(_A1 __x, long __y) noexcept {
  return __builtin_scalbln((double)__x, __y);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float scalbn(float __x, int __y) noexcept { return __builtin_scalbnf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double scalbn(double __x, int __y) noexcept {
  return __builtin_scalbn(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double scalbn(long double __x, int __y) noexcept {
  return __builtin_scalbnl(__x, __y);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double scalbn(_A1 __x, int __y) noexcept {
  return __builtin_scalbn((double)__x, __y);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float pow(float __x, float __y) noexcept { return __builtin_powf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double pow(double __x, double __y) noexcept {
  return __builtin_pow(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double pow(long double __x, long double __y) noexcept {
  return __builtin_powl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type pow(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::pow((__result_type)__x, (__result_type)__y);
}

}

}}
# 362 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/fdim.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/fdim.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fdim(float __x, float __y) noexcept { return __builtin_fdimf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fdim(double __x, double __y) noexcept {
  return __builtin_fdim(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fdim(long double __x, long double __y) noexcept {
  return __builtin_fdiml(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type fdim(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::fdim((__result_type)__x, (__result_type)__y);
}

}

}}
# 363 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/fma.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/fma.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fma(float __x, float __y, float __z) noexcept {
  return __builtin_fmaf(__x, __y, __z);
}

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fma(double __x, double __y, double __z) noexcept {
  return __builtin_fma(__x, __y, __z);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fma(long double __x, long double __y, long double __z) noexcept {
  return __builtin_fmal(__x, __y, __z);
}

template <class _A1,
          class _A2,
          class _A3,
          __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value && is_arithmetic<_A3>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2, _A3>::type fma(_A1 __x, _A2 __y, _A3 __z) noexcept {
  using __result_type = typename __promote<_A1, _A2, _A3>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value &&
                   _IsSame<_A3, __result_type>::value)),
                "");
  return __builtin_fma((__result_type)__x, (__result_type)__y, (__result_type)__z);
}

}

}}
# 364 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/gamma.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/gamma.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float lgamma(float __x) noexcept { return __builtin_lgammaf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double lgamma(double __x) noexcept {
  return __builtin_lgamma(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double lgamma(long double __x) noexcept { return __builtin_lgammal(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double lgamma(_A1 __x) noexcept {
  return __builtin_lgamma((double)__x);
}





inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float tgamma(float __x) noexcept { return __builtin_tgammaf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tgamma(double __x) noexcept {
  return __builtin_tgamma(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double tgamma(long double __x) noexcept { return __builtin_tgammal(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tgamma(_A1 __x) noexcept {
  return __builtin_tgamma((double)__x);
}

}

}}
# 365 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/hyperbolic_functions.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/hyperbolic_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float cosh(float __x) noexcept { return __builtin_coshf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cosh(double __x) noexcept {
  return __builtin_cosh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double cosh(long double __x) noexcept { return __builtin_coshl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cosh(_A1 __x) noexcept {
  return __builtin_cosh((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float sinh(float __x) noexcept { return __builtin_sinhf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sinh(double __x) noexcept {
  return __builtin_sinh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double sinh(long double __x) noexcept { return __builtin_sinhl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sinh(_A1 __x) noexcept {
  return __builtin_sinh((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float tanh(float __x) noexcept { return __builtin_tanhf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tanh(double __x) noexcept {
  return __builtin_tanh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double tanh(long double __x) noexcept { return __builtin_tanhl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tanh(_A1 __x) noexcept {
  return __builtin_tanh((double)__x);
}

}

}}
# 366 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/hypot.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/hypot.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float hypot(float __x, float __y) noexcept { return __builtin_hypotf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double hypot(double __x, double __y) noexcept {
  return __builtin_hypot(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double hypot(long double __x, long double __y) noexcept {
  return __builtin_hypotl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type hypot(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::hypot((__result_type)__x, (__result_type)__y);
}

}

}}
# 367 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/inverse_hyperbolic_functions.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/inverse_hyperbolic_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float acosh(float __x) noexcept { return __builtin_acoshf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double acosh(double __x) noexcept {
  return __builtin_acosh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double acosh(long double __x) noexcept { return __builtin_acoshl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double acosh(_A1 __x) noexcept {
  return __builtin_acosh((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float asinh(float __x) noexcept { return __builtin_asinhf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double asinh(double __x) noexcept {
  return __builtin_asinh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double asinh(long double __x) noexcept { return __builtin_asinhl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double asinh(_A1 __x) noexcept {
  return __builtin_asinh((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float atanh(float __x) noexcept { return __builtin_atanhf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double atanh(double __x) noexcept {
  return __builtin_atanh(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double atanh(long double __x) noexcept { return __builtin_atanhl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double atanh(_A1 __x) noexcept {
  return __builtin_atanh((double)__x);
}

}

}}
# 368 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/inverse_trigonometric_functions.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__math/inverse_trigonometric_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float acos(float __x) noexcept { return __builtin_acosf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double acos(double __x) noexcept {
  return __builtin_acos(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double acos(long double __x) noexcept { return __builtin_acosl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double acos(_A1 __x) noexcept {
  return __builtin_acos((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float asin(float __x) noexcept { return __builtin_asinf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double asin(double __x) noexcept {
  return __builtin_asin(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double asin(long double __x) noexcept { return __builtin_asinl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double asin(_A1 __x) noexcept {
  return __builtin_asin((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float atan(float __x) noexcept { return __builtin_atanf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double atan(double __x) noexcept {
  return __builtin_atan(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double atan(long double __x) noexcept { return __builtin_atanl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double atan(_A1 __x) noexcept {
  return __builtin_atan((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float atan2(float __y, float __x) noexcept { return __builtin_atan2f(__y, __x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double atan2(double __x, double __y) noexcept {
  return __builtin_atan2(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double atan2(long double __y, long double __x) noexcept {
  return __builtin_atan2l(__y, __x);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type atan2(_A1 __y, _A2 __x) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::atan2((__result_type)__y, (__result_type)__x);
}

}

}}
# 369 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/logarithms.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/logarithms.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float log(float __x) noexcept { return __builtin_logf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log(double __x) noexcept {
  return __builtin_log(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double log(long double __x) noexcept { return __builtin_logl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log(_A1 __x) noexcept {
  return __builtin_log((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float log10(float __x) noexcept { return __builtin_log10f(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log10(double __x) noexcept {
  return __builtin_log10(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double log10(long double __x) noexcept { return __builtin_log10l(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log10(_A1 __x) noexcept {
  return __builtin_log10((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int ilogb(float __x) noexcept { return __builtin_ilogbf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double ilogb(double __x) noexcept {
  return __builtin_ilogb(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int ilogb(long double __x) noexcept { return __builtin_ilogbl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int ilogb(_A1 __x) noexcept {
  return __builtin_ilogb((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float log1p(float __x) noexcept { return __builtin_log1pf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log1p(double __x) noexcept {
  return __builtin_log1p(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double log1p(long double __x) noexcept { return __builtin_log1pl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log1p(_A1 __x) noexcept {
  return __builtin_log1p((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float log2(float __x) noexcept { return __builtin_log2f(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log2(double __x) noexcept {
  return __builtin_log2(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double log2(long double __x) noexcept { return __builtin_log2l(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double log2(_A1 __x) noexcept {
  return __builtin_log2((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float logb(float __x) noexcept { return __builtin_logbf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double logb(double __x) noexcept {
  return __builtin_logb(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double logb(long double __x) noexcept { return __builtin_logbl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double logb(_A1 __x) noexcept {
  return __builtin_logb((double)__x);
}

}

}}
# 370 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/min_max.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/min_max.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fmax(float __x, float __y) noexcept {
  return __builtin_fmaxf(__x, __y);
}

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fmax(double __x, double __y) noexcept {
  return __builtin_fmax(__x, __y);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fmax(long double __x, long double __y) noexcept {
  return __builtin_fmaxl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type fmax(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::fmax((__result_type)__x, (__result_type)__y);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fmin(float __x, float __y) noexcept {
  return __builtin_fminf(__x, __y);
}

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fmin(double __x, double __y) noexcept {
  return __builtin_fmin(__x, __y);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fmin(long double __x, long double __y) noexcept {
  return __builtin_fminl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type fmin(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::fmin((__result_type)__x, (__result_type)__y);
}

}

}}
# 371 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/modulo.h" 1 3
# 20 "/data/data/com.termux/files/usr/include/c++/v1/__math/modulo.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float fmod(float __x, float __y) noexcept { return __builtin_fmodf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double fmod(double __x, double __y) noexcept {
  return __builtin_fmod(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double fmod(long double __x, long double __y) noexcept {
  return __builtin_fmodl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type fmod(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::fmod((__result_type)__x, (__result_type)__y);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float modf(float __x, float* __y) noexcept { return __builtin_modff(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double modf(double __x, double* __y) noexcept {
  return __builtin_modf(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double modf(long double __x, long double* __y) noexcept {
  return __builtin_modfl(__x, __y);
}

}

}}
# 372 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/remainder.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__math/remainder.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float remainder(float __x, float __y) noexcept { return __builtin_remainderf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double remainder(double __x, double __y) noexcept {
  return __builtin_remainder(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double remainder(long double __x, long double __y) noexcept {
  return __builtin_remainderl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type remainder(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::remainder((__result_type)__x, (__result_type)__y);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float remquo(float __x, float __y, int* __z) noexcept {
  return __builtin_remquof(__x, __y, __z);
}

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double remquo(double __x, double __y, int* __z) noexcept {
  return __builtin_remquo(__x, __y, __z);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double remquo(long double __x, long double __y, int* __z) noexcept {
  return __builtin_remquol(__x, __y, __z);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type remquo(_A1 __x, _A2 __y, int* __z) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::remquo((__result_type)__x, (__result_type)__y, __z);
}

}

}}
# 373 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/roots.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/roots.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float sqrt(float __x) noexcept { return __builtin_sqrtf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sqrt(double __x) noexcept {
  return __builtin_sqrt(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double sqrt(long double __x) noexcept { return __builtin_sqrtl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sqrt(_A1 __x) noexcept {
  return __builtin_sqrt((double)__x);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float cbrt(float __x) noexcept { return __builtin_cbrtf(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cbrt(double __x) noexcept {
  return __builtin_cbrt(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double cbrt(long double __x) noexcept {
  return __builtin_cbrtl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cbrt(_A1 __x) noexcept {
  return __builtin_cbrt((double)__x);
}

}

}}
# 374 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/rounding_functions.h" 1 3
# 21 "/data/data/com.termux/files/usr/include/c++/v1/__math/rounding_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float ceil(float __x) noexcept { return __builtin_ceilf(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double ceil(double __x) noexcept {
  return __builtin_ceil(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double ceil(long double __x) noexcept {
  return __builtin_ceill(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double ceil(_A1 __x) noexcept {
  return __builtin_ceil((double)__x);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float floor(float __x) noexcept { return __builtin_floorf(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double floor(double __x) noexcept {
  return __builtin_floor(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double floor(long double __x) noexcept {
  return __builtin_floorl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double floor(_A1 __x) noexcept {
  return __builtin_floor((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llrint(float __x) noexcept { return __builtin_llrintf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llrint(double __x) noexcept {
  return __builtin_llrint(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llrint(long double __x) noexcept { return __builtin_llrintl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llrint(_A1 __x) noexcept {
  return __builtin_llrint((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llround(float __x) noexcept { return __builtin_llroundf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llround(double __x) noexcept {
  return __builtin_llround(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llround(long double __x) noexcept { return __builtin_llroundl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long long llround(_A1 __x) noexcept {
  return __builtin_llround((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lrint(float __x) noexcept { return __builtin_lrintf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lrint(double __x) noexcept {
  return __builtin_lrint(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lrint(long double __x) noexcept { return __builtin_lrintl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lrint(_A1 __x) noexcept {
  return __builtin_lrint((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lround(float __x) noexcept { return __builtin_lroundf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lround(double __x) noexcept {
  return __builtin_lround(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lround(long double __x) noexcept { return __builtin_lroundl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long lround(_A1 __x) noexcept {
  return __builtin_lround((double)__x);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float nearbyint(float __x) noexcept {
  return __builtin_nearbyintf(__x);
}

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double nearbyint(double __x) noexcept {
  return __builtin_nearbyint(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double nearbyint(long double __x) noexcept {
  return __builtin_nearbyintl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double nearbyint(_A1 __x) noexcept {
  return __builtin_nearbyint((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float nextafter(float __x, float __y) noexcept { return __builtin_nextafterf(__x, __y); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double nextafter(double __x, double __y) noexcept {
  return __builtin_nextafter(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double nextafter(long double __x, long double __y) noexcept {
  return __builtin_nextafterl(__x, __y);
}

template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) typename __promote<_A1, _A2>::type nextafter(_A1 __x, _A2 __y) noexcept {
  using __result_type = typename __promote<_A1, _A2>::type;
  static_assert((!(_IsSame<_A1, __result_type>::value && _IsSame<_A2, __result_type>::value)), "");
  return __math::nextafter((__result_type)__x, (__result_type)__y);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float nexttoward(float __x, long double __y) noexcept {
  return __builtin_nexttowardf(__x, __y);
}

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double nexttoward(double __x, long double __y) noexcept {
  return __builtin_nexttoward(__x, __y);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double nexttoward(long double __x, long double __y) noexcept {
  return __builtin_nexttowardl(__x, __y);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double nexttoward(_A1 __x, long double __y) noexcept {
  return __builtin_nexttoward((double)__x, __y);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float rint(float __x) noexcept { return __builtin_rintf(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double rint(double __x) noexcept {
  return __builtin_rint(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double rint(long double __x) noexcept {
  return __builtin_rintl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double rint(_A1 __x) noexcept {
  return __builtin_rint((double)__x);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float round(float __x) noexcept { return __builtin_round(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double round(double __x) noexcept {
  return __builtin_round(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double round(long double __x) noexcept {
  return __builtin_roundl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double round(_A1 __x) noexcept {
  return __builtin_round((double)__x);
}



[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float trunc(float __x) noexcept { return __builtin_trunc(__x); }

template <class = int>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double trunc(double __x) noexcept {
  return __builtin_trunc(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double trunc(long double __x) noexcept {
  return __builtin_truncl(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double trunc(_A1 __x) noexcept {
  return __builtin_trunc((double)__x);
}

}

}}
# 375 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/traits.h" 1 3
# 23 "/data/data/com.termux/files/usr/include/c++/v1/__math/traits.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



template <class _A1, __enable_if_t<is_floating_point<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool signbit(_A1 __x) noexcept {
  return __builtin_signbit(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value && is_signed<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool signbit(_A1 __x) noexcept {
  return __x < 0;
}

template <class _A1, __enable_if_t<is_integral<_A1>::value && !is_signed<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool signbit(_A1) noexcept {
  return false;
}



template <class _A1, __enable_if_t<is_arithmetic<_A1>::value && numeric_limits<_A1>::has_infinity, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isfinite(_A1 __x) noexcept {
  return __builtin_isfinite((typename __promote<_A1>::type)__x);
}

template <class _A1, __enable_if_t<is_arithmetic<_A1>::value && !numeric_limits<_A1>::has_infinity, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isfinite(_A1) noexcept {
  return true;
}



template <class _A1, __enable_if_t<is_arithmetic<_A1>::value && numeric_limits<_A1>::has_infinity, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isinf(_A1 __x) noexcept {
  return __builtin_isinf((typename __promote<_A1>::type)__x);
}

template <class _A1, __enable_if_t<is_arithmetic<_A1>::value && !numeric_limits<_A1>::has_infinity, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isinf(_A1) noexcept {
  return false;
}


[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isinf(float __x) noexcept {
  return __builtin_isinf(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) bool
isinf(double __x) noexcept {
  return __builtin_isinf(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isinf(long double __x) noexcept {
  return __builtin_isinf(__x);
}




template <class _A1, __enable_if_t<is_floating_point<_A1>::value, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnan(_A1 __x) noexcept {
  return __builtin_isnan(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnan(_A1) noexcept {
  return false;
}


[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnan(float __x) noexcept {
  return __builtin_isnan(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) __attribute__((__enable_if__(true, ""))) bool
isnan(double __x) noexcept {
  return __builtin_isnan(__x);
}

[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnan(long double __x) noexcept {
  return __builtin_isnan(__x);
}




template <class _A1, __enable_if_t<is_floating_point<_A1>::value, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnormal(_A1 __x) noexcept {
  return __builtin_isnormal(__x);
}

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isnormal(_A1 __x) noexcept {
  return __x != 0;
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isgreater(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_isgreater((type)__x, (type)__y);
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isgreaterequal(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_isgreaterequal((type)__x, (type)__y);
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isless(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_isless((type)__x, (type)__y);
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool islessequal(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_islessequal((type)__x, (type)__y);
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool islessgreater(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_islessgreater((type)__x, (type)__y);
}



template <class _A1, class _A2, __enable_if_t<is_arithmetic<_A1>::value && is_arithmetic<_A2>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) bool isunordered(_A1 __x, _A2 __y) noexcept {
  using type = typename __promote<_A1, _A2>::type;
  return __builtin_isunordered((type)__x, (type)__y);
}

}

}}
# 376 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/__math/trigonometric_functions.h" 1 3
# 18 "/data/data/com.termux/files/usr/include/c++/v1/__math/trigonometric_functions.h" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float cos(float __x) noexcept { return __builtin_cosf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cos(double __x) noexcept {
  return __builtin_cos(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double cos(long double __x) noexcept { return __builtin_cosl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double cos(_A1 __x) noexcept {
  return __builtin_cos((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float sin(float __x) noexcept { return __builtin_sinf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sin(double __x) noexcept {
  return __builtin_sin(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double sin(long double __x) noexcept { return __builtin_sinl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double sin(_A1 __x) noexcept {
  return __builtin_sin((double)__x);
}



inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) float tan(float __x) noexcept { return __builtin_tanf(__x); }

template <class = int>
__attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tan(double __x) noexcept {
  return __builtin_tan(__x);
}

inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) long double tan(long double __x) noexcept { return __builtin_tanl(__x); }

template <class _A1, __enable_if_t<is_integral<_A1>::value, int> = 0>
inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) double tan(_A1 __x) noexcept {
  return __builtin_tan((double)__x);
}

}

}}
# 377 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3



# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 1 3
# 381 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 2 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

namespace __math {




template <class = int>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int fpclassify(float __x) noexcept {
  return __builtin_fpclassify(0x02, 0x01, 0x04, 0x08, 0x10, __x);
}

template <class = int>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int fpclassify(double __x) noexcept {
  return __builtin_fpclassify(0x02, 0x01, 0x04, 0x08, 0x10, __x);
}

template <class = int>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int fpclassify(long double __x) noexcept {
  return __builtin_fpclassify(0x02, 0x01, 0x04, 0x08, 0x10, __x);
}

template <class _A1, std::__enable_if_t<std::is_integral<_A1>::value, int> = 0>
[[__nodiscard__]] inline __attribute__((__visibility__("hidden"))) __attribute__((__exclude_from_explicit_instantiation__)) __attribute__((__abi_tag__("ne180000"))) int fpclassify(_A1 __x) noexcept {
  return __x == 0 ? 0x10 : 0x04;
}

}

}}

using std::__math::fpclassify;
using std::__math::signbit;



using std::__math::isfinite;
using std::__math::isgreater;
using std::__math::isgreaterequal;
using std::__math::isinf;
using std::__math::isless;
using std::__math::islessequal;
using std::__math::islessgreater;
using std::__math::isnan;
using std::__math::isnormal;
using std::__math::isunordered;
# 444 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 3
using std::__math::acos;
using std::__math::acosh;
using std::__math::asin;
using std::__math::asinh;
using std::__math::atan;
using std::__math::atan2;
using std::__math::atanh;
using std::__math::cbrt;
using std::__math::ceil;
using std::__math::copysign;
using std::__math::cos;
using std::__math::cosh;
using std::__math::erf;
using std::__math::erfc;
using std::__math::exp;
using std::__math::exp2;
using std::__math::expm1;
using std::__math::fabs;
using std::__math::fdim;
using std::__math::floor;
using std::__math::fma;
using std::__math::fmax;
using std::__math::fmin;
using std::__math::fmod;
using std::__math::frexp;
using std::__math::hypot;
using std::__math::ilogb;
using std::__math::ldexp;
using std::__math::lgamma;
using std::__math::llrint;
using std::__math::llround;
using std::__math::log;
using std::__math::log10;
using std::__math::log1p;
using std::__math::log2;
using std::__math::logb;
using std::__math::lrint;
using std::__math::lround;
using std::__math::modf;
using std::__math::nearbyint;
using std::__math::nextafter;
using std::__math::nexttoward;
using std::__math::pow;
using std::__math::remainder;
using std::__math::remquo;
using std::__math::rint;
using std::__math::round;
using std::__math::scalbln;
using std::__math::scalbn;
using std::__math::signbit;
using std::__math::sin;
using std::__math::sinh;
using std::__math::sqrt;
using std::__math::tan;
using std::__math::tanh;
using std::__math::tgamma;
using std::__math::trunc;

}
# 196 "/data/data/com.termux/files/usr/include/python3.12/pyport.h" 2
# 221 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
# 1 "/data/data/com.termux/files/usr/include/sys/stat.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/stat.h" 1 3 4
# 42 "/data/data/com.termux/files/usr/include/linux/stat.h" 3 4
struct statx_timestamp {
  __s64 tv_sec;
  __u32 tv_nsec;
  __s32 __reserved;
};
struct statx {
  __u32 stx_mask;
  __u32 stx_blksize;
  __u64 stx_attributes;
  __u32 stx_nlink;
  __u32 stx_uid;
  __u32 stx_gid;
  __u16 stx_mode;
  __u16 __spare0[1];
  __u64 stx_ino;
  __u64 stx_size;
  __u64 stx_blocks;
  __u64 stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  __u32 stx_rdev_major;
  __u32 stx_rdev_minor;
  __u32 stx_dev_major;
  __u32 stx_dev_minor;
  __u64 stx_mnt_id;
  __u32 stx_dio_mem_align;
  __u32 stx_dio_offset_align;
  __u64 __spare3[12];
};
# 38 "/data/data/com.termux/files/usr/include/sys/stat.h" 2 3 4



extern "C" {
# 102 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; ino_t st_ino; mode_t st_mode; nlink_t st_nlink; uid_t st_uid; gid_t st_gid; dev_t st_rdev; unsigned long __pad1; off_t st_size; int st_blksize; int __pad2; long st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim; unsigned int __unused4; unsigned int __unused5; };
struct stat64 { dev_t st_dev; ino_t st_ino; mode_t st_mode; nlink_t st_nlink; uid_t st_uid; gid_t st_gid; dev_t st_rdev; unsigned long __pad1; off_t st_size; int st_blksize; int __pad2; long st_blocks; struct timespec st_atim; struct timespec st_mtim; struct timespec st_ctim; unsigned int __unused4; unsigned int __unused5; };
# 139 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
int chmod(const char* _Nonnull __path, mode_t __mode);
int fchmod(int __fd, mode_t __mode);
int mkdir(const char* _Nonnull __path, mode_t __mode);

int fstat(int __fd, struct stat* _Nonnull __buf);
int fstat64(int __fd, struct stat64* _Nonnull __buf);
int fstatat(int __dir_fd, const char* _Nonnull __path, struct stat* _Nonnull __buf, int __flags);
int fstatat64(int __dir_fd, const char* _Nonnull __path, struct stat64* _Nonnull __buf, int __flags);
int lstat(const char* _Nonnull __path, struct stat* _Nonnull __buf);
int lstat64(const char* _Nonnull __path, struct stat64* _Nonnull __buf);
int stat(const char* _Nonnull __path, struct stat* _Nonnull __buf);
int stat64(const char* _Nonnull __path, struct stat64* _Nonnull __buf);

int mknod(const char* _Nonnull __path, mode_t __mode, dev_t __dev);
mode_t umask(mode_t __mask);





int mkfifo(const char* _Nonnull __path, mode_t __mode);


int mkfifoat(int __dir_fd, const char* _Nonnull __path, mode_t __mode) __attribute__((__availability__(android,strict,introduced=23 )));



int fchmodat(int __dir_fd, const char* _Nonnull __path, mode_t __mode, int __flags);
int mkdirat(int __dir_fd, const char* _Nonnull __path, mode_t __mode);
int mknodat(int __dir_fd, const char* _Nonnull __path, mode_t __mode, dev_t __dev);
# 196 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
int utimensat(int __dir_fd, const char* _Null_unspecified __path, const struct timespec __times[_Nullable 2], int __flags);
# 208 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
int futimens(int __fd, const struct timespec __times[_Nullable 2]);
# 226 "/data/data/com.termux/files/usr/include/sys/stat.h" 3 4
}
# 222 "/data/data/com.termux/files/usr/include/python3.12/pyport.h" 2
# 256 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
extern "C" {
# 506 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/exports.h" 1
# 507 "/data/data/com.termux/files/usr/include/python3.12/pyport.h" 2
# 590 "/data/data/com.termux/files/usr/include/python3.12/pyport.h"
}
# 39 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pymacro.h" 1
# 40 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pymath.h" 1
# 41 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pymem.h" 1
# 11 "/data/data/com.termux/files/usr/include/python3.12/pymem.h"
extern "C" {
# 52 "/data/data/com.termux/files/usr/include/python3.12/pymem.h"
__attribute__ ((visibility ("default"))) void * PyMem_Malloc(size_t size);
__attribute__ ((visibility ("default"))) void * PyMem_Calloc(size_t nelem, size_t elsize);
__attribute__ ((visibility ("default"))) void * PyMem_Realloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyMem_Free(void *ptr);
# 96 "/data/data/com.termux/files/usr/include/python3.12/pymem.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pymem.h" 1




__attribute__ ((visibility ("default"))) void * PyMem_RawMalloc(size_t size);
__attribute__ ((visibility ("default"))) void * PyMem_RawCalloc(size_t nelem, size_t elsize);
__attribute__ ((visibility ("default"))) void * PyMem_RawRealloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyMem_RawFree(void *ptr);


__attribute__ ((visibility ("default"))) const char* _PyMem_GetCurrentAllocatorName(void);


__attribute__ ((visibility ("default"))) char * _PyMem_RawStrdup(const char *str);


__attribute__ ((visibility ("default"))) char * _PyMem_Strdup(const char *str);


__attribute__ ((visibility ("default"))) wchar_t* _PyMem_RawWcsdup(const wchar_t *str);


typedef enum {

    PYMEM_DOMAIN_RAW,


    PYMEM_DOMAIN_MEM,


    PYMEM_DOMAIN_OBJ
} PyMemAllocatorDomain;

typedef enum {
    PYMEM_ALLOCATOR_NOT_SET = 0,
    PYMEM_ALLOCATOR_DEFAULT = 1,
    PYMEM_ALLOCATOR_DEBUG = 2,
    PYMEM_ALLOCATOR_MALLOC = 3,
    PYMEM_ALLOCATOR_MALLOC_DEBUG = 4,

    PYMEM_ALLOCATOR_PYMALLOC = 5,
    PYMEM_ALLOCATOR_PYMALLOC_DEBUG = 6,

} PyMemAllocatorName;


typedef struct {

    void *ctx;


    void* (*malloc) (void *ctx, size_t size);


    void* (*calloc) (void *ctx, size_t nelem, size_t elsize);


    void* (*realloc) (void *ctx, void *ptr, size_t new_size);


    void (*free) (void *ctx, void *ptr);
} PyMemAllocatorEx;


__attribute__ ((visibility ("default"))) void PyMem_GetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
# 79 "/data/data/com.termux/files/usr/include/python3.12/cpython/pymem.h"
__attribute__ ((visibility ("default"))) void PyMem_SetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
# 98 "/data/data/com.termux/files/usr/include/python3.12/cpython/pymem.h"
__attribute__ ((visibility ("default"))) void PyMem_SetupDebugHooks(void);
# 97 "/data/data/com.termux/files/usr/include/python3.12/pymem.h" 2




}
# 42 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pytypedefs.h" 1








extern "C" {


typedef struct PyModuleDef PyModuleDef;
typedef struct PyModuleDef_Slot PyModuleDef_Slot;
typedef struct PyMethodDef PyMethodDef;
typedef struct PyGetSetDef PyGetSetDef;
typedef struct PyMemberDef PyMemberDef;

typedef struct _object PyObject;
typedef struct _longobject PyLongObject;
typedef struct _typeobject PyTypeObject;
typedef struct PyCodeObject PyCodeObject;
typedef struct _frame PyFrameObject;

typedef struct _ts PyThreadState;
typedef struct _is PyInterpreterState;


}
# 43 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pybuffer.h" 1





extern "C" {
# 20 "/data/data/com.termux/files/usr/include/python3.12/pybuffer.h"
typedef struct {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;

    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);


__attribute__ ((visibility ("default"))) int PyObject_CheckBuffer(PyObject *obj);






__attribute__ ((visibility ("default"))) int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                   int flags);



__attribute__ ((visibility ("default"))) void * PyBuffer_GetPointer(const Py_buffer *view, const Py_ssize_t *indices);



__attribute__ ((visibility ("default"))) Py_ssize_t PyBuffer_SizeFromFormat(const char *format);


__attribute__ ((visibility ("default"))) int PyBuffer_ToContiguous(void *buf, const Py_buffer *view,
                                      Py_ssize_t len, char order);

__attribute__ ((visibility ("default"))) int PyBuffer_FromContiguous(const Py_buffer *view, const void *buf,
                                        Py_ssize_t len, char order);
# 77 "/data/data/com.termux/files/usr/include/python3.12/pybuffer.h"
__attribute__ ((visibility ("default"))) int PyObject_CopyData(PyObject *dest, PyObject *src);


__attribute__ ((visibility ("default"))) int PyBuffer_IsContiguous(const Py_buffer *view, char fort);





__attribute__ ((visibility ("default"))) void PyBuffer_FillContiguousStrides(int ndims,
                                               Py_ssize_t *shape,
                                               Py_ssize_t *strides,
                                               int itemsize,
                                               char fort);






__attribute__ ((visibility ("default"))) int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                  Py_ssize_t len, int readonly,
                                  int flags);


__attribute__ ((visibility ("default"))) void PyBuffer_Release(Py_buffer *view);
# 143 "/data/data/com.termux/files/usr/include/python3.12/pybuffer.h"
}
# 44 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/object.h" 1



extern "C" {
# 54 "/data/data/com.termux/files/usr/include/python3.12/object.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/pystats.h" 1





extern "C" {
# 108 "/data/data/com.termux/files/usr/include/python3.12/pystats.h"
}
# 55 "/data/data/com.termux/files/usr/include/python3.12/object.h" 2
# 166 "/data/data/com.termux/files/usr/include/python3.12/object.h"
struct _object {





    __extension__







    union {
       Py_ssize_t ob_refcnt;

       uint32_t ob_refcnt_split[2];

    };




    PyTypeObject *ob_type;
};




typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;






__attribute__ ((visibility ("default"))) int Py_Is(PyObject *x, PyObject *y);



static inline Py_ssize_t Py_REFCNT(PyObject *ob) {
    return ob->ob_refcnt;
}






static inline PyTypeObject* Py_TYPE(PyObject *ob) {
    return ob->ob_type;
}




extern __attribute__ ((visibility ("default"))) PyTypeObject PyLong_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBool_Type;


static inline Py_ssize_t Py_SIZE(PyObject *ob) {
    ((ob->ob_type != &PyLong_Type) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/object.h", 231, __PRETTY_FUNCTION__, "ob->ob_type != &PyLong_Type"));
    ((ob->ob_type != &PyBool_Type) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/object.h", 232, __PRETTY_FUNCTION__, "ob->ob_type != &PyBool_Type"));
    return ((PyVarObject*)((ob)))->ob_size;
}




static inline __attribute__((always_inline)) int _Py_IsImmortal(PyObject *op)
{

    return ((int32_t)(op->ob_refcnt)) < 0;



}


static inline int Py_IS_TYPE(PyObject *ob, PyTypeObject *type) {
    return Py_TYPE(((PyObject*)((ob)))) == type;
}





static inline void Py_SET_REFCNT(PyObject *ob, Py_ssize_t refcnt) {




    if (_Py_IsImmortal(((PyObject*)((ob))))) {
        return;
    }
    ob->ob_refcnt = refcnt;
}





static inline void Py_SET_TYPE(PyObject *ob, PyTypeObject *type) {
    ob->ob_type = type;
}




static inline void Py_SET_SIZE(PyVarObject *ob, Py_ssize_t size) {
    ((ob->ob_base.ob_type != &PyLong_Type) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/object.h", 280, __PRETTY_FUNCTION__, "ob->ob_base.ob_type != &PyLong_Type"));
    ((ob->ob_base.ob_type != &PyBool_Type) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/object.h", 281, __PRETTY_FUNCTION__, "ob->ob_base.ob_type != &PyBool_Type"));
    ob->ob_size = size;
}
# 304 "/data/data/com.termux/files/usr/include/python3.12/object.h"
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);

typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);


typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef Py_hash_t (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(PyTypeObject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(PyTypeObject *, Py_ssize_t);


typedef PyObject *(*vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                    size_t nargsf, PyObject *kwnames);


typedef struct{
    int slot;
    void *pfunc;
} PyType_Slot;

typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots;
} PyType_Spec;

__attribute__ ((visibility ("default"))) PyObject* PyType_FromSpec(PyType_Spec*);

__attribute__ ((visibility ("default"))) PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);


__attribute__ ((visibility ("default"))) void* PyType_GetSlot(PyTypeObject*, int);


__attribute__ ((visibility ("default"))) PyObject* PyType_FromModuleAndSpec(PyObject *, PyType_Spec *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetModule(PyTypeObject *);
__attribute__ ((visibility ("default"))) void * PyType_GetModuleState(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyType_GetName(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetQualName(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyType_FromMetaclass(PyTypeObject*, PyObject*, PyType_Spec*, PyObject*);
__attribute__ ((visibility ("default"))) void * PyObject_GetTypeData(PyObject *obj, PyTypeObject *cls);
__attribute__ ((visibility ("default"))) Py_ssize_t PyType_GetTypeDataSize(PyTypeObject *cls);



__attribute__ ((visibility ("default"))) int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);

static inline int PyObject_TypeCheck(PyObject *ob, PyTypeObject *type) {
    return Py_IS_TYPE(((PyObject*)((ob))), (type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((ob)))), type);
}




extern __attribute__ ((visibility ("default"))) PyTypeObject PyType_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBaseObject_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PySuper_Type;

__attribute__ ((visibility ("default"))) unsigned long PyType_GetFlags(PyTypeObject*);

__attribute__ ((visibility ("default"))) int PyType_Ready(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) unsigned int PyType_ClearCache(void);
__attribute__ ((visibility ("default"))) void PyType_Modified(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyObject_Repr(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_Str(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_ASCII(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_Bytes(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int PyObject_RichCompareBool(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAttrString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_HasAttrString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_HasAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_SelfIter(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_GenericSetAttr(PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) int PyObject_GenericSetDict(PyObject *, PyObject *, void *);

__attribute__ ((visibility ("default"))) Py_hash_t PyObject_Hash(PyObject *);
__attribute__ ((visibility ("default"))) Py_hash_t PyObject_HashNotImplemented(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_IsTrue(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_Not(PyObject *);
__attribute__ ((visibility ("default"))) int PyCallable_Check(PyObject *);
__attribute__ ((visibility ("default"))) void PyObject_ClearWeakRefs(PyObject *);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Dir(PyObject *);



__attribute__ ((visibility ("default"))) PyObject * _PyObject_GetState(PyObject *);




__attribute__ ((visibility ("default"))) int Py_ReprEnter(PyObject *);
__attribute__ ((visibility ("default"))) void Py_ReprLeave(PyObject *);
# 610 "/data/data/com.termux/files/usr/include/python3.12/object.h"
__attribute__ ((visibility ("default"))) void _Py_Dealloc(PyObject *);





__attribute__ ((visibility ("default"))) void Py_IncRef(PyObject *);
__attribute__ ((visibility ("default"))) void Py_DecRef(PyObject *);



__attribute__ ((visibility ("default"))) void _Py_IncRef(PyObject *);
__attribute__ ((visibility ("default"))) void _Py_DecRef(PyObject *);

static inline __attribute__((always_inline)) void Py_INCREF(PyObject *op)
{
# 641 "/data/data/com.termux/files/usr/include/python3.12/object.h"
    uint32_t cur_refcnt = op->ob_refcnt_split[0];
    uint32_t new_refcnt = cur_refcnt + 1;
    if (new_refcnt == 0) {
        return;
    }
    op->ob_refcnt_split[0] = new_refcnt;







    ((void)0);




}
# 696 "/data/data/com.termux/files/usr/include/python3.12/object.h"
static inline __attribute__((always_inline)) void Py_DECREF(PyObject *op)
{


    if (_Py_IsImmortal(((PyObject*)((op))))) {
        return;
    }
    ((void)0);
    if (--op->ob_refcnt == 0) {
        _Py_Dealloc(op);
    }
}
# 785 "/data/data/com.termux/files/usr/include/python3.12/object.h"
static inline void Py_XINCREF(PyObject *op)
{
    if (op != nullptr) {
        Py_INCREF(((PyObject*)((op))));
    }
}




static inline void Py_XDECREF(PyObject *op)
{
    if (op != nullptr) {
        Py_DECREF(((PyObject*)((op))));
    }
}






__attribute__ ((visibility ("default"))) PyObject* Py_NewRef(PyObject *obj);


__attribute__ ((visibility ("default"))) PyObject* Py_XNewRef(PyObject *obj);

static inline PyObject* _Py_NewRef(PyObject *obj)
{
    Py_INCREF(((PyObject*)((obj))));
    return obj;
}

static inline PyObject* _Py_XNewRef(PyObject *obj)
{
    Py_XINCREF(((PyObject*)((obj))));
    return obj;
}
# 842 "/data/data/com.termux/files/usr/include/python3.12/object.h"
extern __attribute__ ((visibility ("default"))) PyObject _Py_NoneStruct;



__attribute__ ((visibility ("default"))) int Py_IsNone(PyObject *x);
# 856 "/data/data/com.termux/files/usr/include/python3.12/object.h"
extern __attribute__ ((visibility ("default"))) PyObject _Py_NotImplementedStruct;
# 872 "/data/data/com.termux/files/usr/include/python3.12/object.h"
typedef enum {
    PYGEN_RETURN = 0,
    PYGEN_ERROR = -1,
    PYGEN_NEXT = 1,
} PySendResult;
# 953 "/data/data/com.termux/files/usr/include/python3.12/object.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h" 1




__attribute__ ((visibility ("default"))) void _Py_NewReference(PyObject *op);
__attribute__ ((visibility ("default"))) void _Py_NewReferenceNoTotal(PyObject *op);
# 42 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
typedef struct _Py_Identifier {
    const char* string;


    Py_ssize_t index;
} _Py_Identifier;
# 59 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
typedef struct {




    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_bool;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    unaryfunc nb_int;
    void *nb_reserved;
    unaryfunc nb_float;

    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;

    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;

    unaryfunc nb_index;

    binaryfunc nb_matrix_multiply;
    binaryfunc nb_inplace_matrix_multiply;
} PyNumberMethods;

typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    void *was_sq_slice;
    ssizeobjargproc sq_ass_item;
    void *was_sq_ass_slice;
    objobjproc sq_contains;

    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;

typedef PySendResult (*sendfunc)(PyObject *iter, PyObject *value, PyObject **result);

typedef struct {
    unaryfunc am_await;
    unaryfunc am_aiter;
    unaryfunc am_anext;
    sendfunc am_send;
} PyAsyncMethods;

typedef struct {
     getbufferproc bf_getbuffer;
     releasebufferproc bf_releasebuffer;
} PyBufferProcs;



typedef Py_ssize_t printfunc;



struct _typeobject {
    PyVarObject ob_base;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;



    destructor tp_dealloc;
    Py_ssize_t tp_vectorcall_offset;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    PyAsyncMethods *tp_as_async;

    reprfunc tp_repr;



    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;



    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;


    PyBufferProcs *tp_as_buffer;


    unsigned long tp_flags;

    const char *tp_doc;



    traverseproc tp_traverse;


    inquiry tp_clear;



    richcmpfunc tp_richcompare;


    Py_ssize_t tp_weaklistoffset;


    getiterfunc tp_iter;
    iternextfunc tp_iternext;


    PyMethodDef *tp_methods;
    PyMemberDef *tp_members;
    PyGetSetDef *tp_getset;

    PyTypeObject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    void *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;


    unsigned int tp_version_tag;

    destructor tp_finalize;
    vectorcallfunc tp_vectorcall;


    unsigned char tp_watched;
};




struct _specialization_cache {
# 247 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
    PyObject *getitem;
    uint32_t getitem_version;
};


typedef struct _heaptypeobject {


    PyTypeObject ht_type;
    PyAsyncMethods as_async;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;




    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots, *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;
    PyObject *ht_module;
    char *_ht_tpname;
    struct _specialization_cache _spec_cache;

} PyHeapTypeObject;

__attribute__ ((visibility ("default"))) const char * _PyType_Name(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_LookupId(PyTypeObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_LookupSpecialId(PyObject *, _Py_Identifier *);





__attribute__ ((visibility ("default"))) PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_GetDocFromInternalDoc(const char *, const char *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_GetTextSignatureFromInternalDoc(const char *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetModuleByDef(PyTypeObject *, PyModuleDef *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetDict(PyTypeObject *);

__attribute__ ((visibility ("default"))) int PyObject_Print(PyObject *, FILE *, int);
__attribute__ ((visibility ("default"))) void _Py_BreakPoint(void);
__attribute__ ((visibility ("default"))) void _PyObject_Dump(PyObject *);
__attribute__ ((visibility ("default"))) int _PyObject_IsFreed(PyObject *);

__attribute__ ((visibility ("default"))) int _PyObject_IsAbstract(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_GetAttrId(PyObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) int _PyObject_SetAttrId(PyObject *, _Py_Identifier *, PyObject *);
# 305 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyObject_LookupAttr(PyObject *, PyObject *, PyObject **);
__attribute__ ((visibility ("default"))) int _PyObject_LookupAttrId(PyObject *, _Py_Identifier *, PyObject **);

__attribute__ ((visibility ("default"))) int _PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

__attribute__ ((visibility ("default"))) PyObject ** _PyObject_GetDictPtr(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_NextNotImplemented(PyObject *);
__attribute__ ((visibility ("default"))) void PyObject_CallFinalizer(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_CallFinalizerFromDealloc(PyObject *);



__attribute__ ((visibility ("default"))) PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_FunctionStr(PyObject *);
# 390 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyNone_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyNotImplemented_Type;




extern __attribute__ ((visibility ("default"))) int _Py_SwappedOp[];

__attribute__ ((visibility ("default"))) void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
__attribute__ ((visibility ("default"))) void
_PyObject_DebugTypeStats(FILE *out);
# 444 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _PyObject_AssertFailed(
    PyObject *obj,
    const char *expr,
    const char *msg,
    const char *file,
    int line,
    const char *function);
# 463 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyObject_CheckConsistency(
    PyObject *op,
    int check_content);
# 516 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyTrash_begin(PyThreadState *tstate, PyObject *op);
__attribute__ ((visibility ("default"))) void _PyTrash_end(PyThreadState *tstate);

__attribute__ ((visibility ("default"))) int _PyTrash_cond(PyObject *op, destructor dealloc);
# 548 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__((__deprecated__)) typedef int UsingDeprecatedTrashcanMacro;
# 557 "/data/data/com.termux/files/usr/include/python3.12/cpython/object.h"
__attribute__ ((visibility ("default"))) void * PyObject_GetItemData(PyObject *obj);

__attribute__ ((visibility ("default"))) int _PyObject_VisitManagedDict(PyObject *obj, visitproc visit, void *arg);
__attribute__ ((visibility ("default"))) void _PyObject_ClearManagedDict(PyObject *obj);



typedef int(*PyType_WatchCallback)(PyTypeObject *);
__attribute__ ((visibility ("default"))) int PyType_AddWatcher(PyType_WatchCallback callback);
__attribute__ ((visibility ("default"))) int PyType_ClearWatcher(int watcher_id);
__attribute__ ((visibility ("default"))) int PyType_Watch(int watcher_id, PyObject *type);
__attribute__ ((visibility ("default"))) int PyType_Unwatch(int watcher_id, PyObject *type);






__attribute__ ((visibility ("default"))) int PyUnstable_Type_AssignVersionTag(PyTypeObject *type);
# 954 "/data/data/com.termux/files/usr/include/python3.12/object.h" 2




static inline int
PyType_HasFeature(PyTypeObject *type, unsigned long feature)
{
    unsigned long flags;




    flags = type->tp_flags;

    return ((flags & feature) != 0);
}



static inline int PyType_Check(PyObject *op) {
    return PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 31)));
}







static inline int PyType_CheckExact(PyObject *op) {
    return Py_IS_TYPE(((PyObject*)((op))), (&PyType_Type));
}





}
# 45 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h" 1
# 11 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
extern "C" {
# 97 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
__attribute__ ((visibility ("default"))) void * PyObject_Malloc(size_t size);

__attribute__ ((visibility ("default"))) void * PyObject_Calloc(size_t nelem, size_t elsize);

__attribute__ ((visibility ("default"))) void * PyObject_Realloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyObject_Free(void *ptr);
# 121 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Init(PyObject *, PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * PyObject_InitVar(PyVarObject *,
                                           PyTypeObject *, Py_ssize_t);







__attribute__ ((visibility ("default"))) PyObject * _PyObject_New(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
# 154 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyGC_Collect(void);

__attribute__ ((visibility ("default"))) int PyGC_Enable(void);
__attribute__ ((visibility ("default"))) int PyGC_Disable(void);
__attribute__ ((visibility ("default"))) int PyGC_IsEnabled(void);
# 175 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
typedef int (*gcvisitobjects_t)(PyObject*, void*);
__attribute__ ((visibility ("default"))) void PyUnstable_GC_VisitObjects(gcvisitobjects_t callback, void* arg);





__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);





__attribute__ ((visibility ("default"))) PyObject * _PyObject_GC_New(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);




__attribute__ ((visibility ("default"))) void PyObject_GC_Track(void *);




__attribute__ ((visibility ("default"))) void PyObject_GC_UnTrack(void *);

__attribute__ ((visibility ("default"))) void PyObject_GC_Del(void *);






__attribute__ ((visibility ("default"))) int PyObject_GC_IsTracked(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_GC_IsFinalized(PyObject *);
# 227 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/objimpl.h" 1




static inline size_t _PyObject_SIZE(PyTypeObject *type) {
    return static_cast<size_t>(type->tp_basicsize);
}
# 23 "/data/data/com.termux/files/usr/include/python3.12/cpython/objimpl.h"
static inline size_t _PyObject_VAR_SIZE(PyTypeObject *type, Py_ssize_t nitems) {
    size_t size = static_cast<size_t>(type->tp_basicsize);
    size += static_cast<size_t>(nitems) * static_cast<size_t>(type->tp_itemsize);
    return (((size_t)(size) + (size_t)((8) - 1)) & ~(size_t)((8) - 1));
}
# 59 "/data/data/com.termux/files/usr/include/python3.12/cpython/objimpl.h"
typedef struct {

    void *ctx;


    void* (*alloc) (void *ctx, size_t size);


    void (*free) (void *ctx, void *ptr, size_t size);
} PyObjectArenaAllocator;


__attribute__ ((visibility ("default"))) void PyObject_GetArenaAllocator(PyObjectArenaAllocator *allocator);


__attribute__ ((visibility ("default"))) void PyObject_SetArenaAllocator(PyObjectArenaAllocator *allocator);



__attribute__ ((visibility ("default"))) int PyObject_IS_GC(PyObject *obj);
# 90 "/data/data/com.termux/files/usr/include/python3.12/cpython/objimpl.h"
__attribute__ ((visibility ("default"))) int PyType_SUPPORTS_WEAKREFS(PyTypeObject *type);

__attribute__ ((visibility ("default"))) PyObject ** PyObject_GET_WEAKREFS_LISTPTR(PyObject *op);

__attribute__ ((visibility ("default"))) PyObject * PyUnstable_Object_GC_NewWithExtraData(PyTypeObject *,
                                                             size_t);
# 228 "/data/data/com.termux/files/usr/include/python3.12/objimpl.h" 2




}
# 46 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/typeslots.h" 1
# 47 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pyhash.h" 1




extern "C" {




__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashDouble(PyObject *, double);
__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashPointer(const void*);

__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashPointerRaw(const void*);
__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashBytes(const void*, Py_ssize_t);
# 55 "/data/data/com.termux/files/usr/include/python3.12/pyhash.h"
typedef union {

    unsigned char uc[24];

    struct {
        Py_hash_t prefix;
        Py_hash_t suffix;
    } fnv;

    struct {
        uint64_t k0;
        uint64_t k1;
    } siphash;

    struct {
        unsigned char padding[16];
        Py_hash_t suffix;
    } djbx33a;
    struct {
        unsigned char padding[16];
        Py_hash_t hashsalt;
    } expat;
} _Py_HashSecret_t;
extern __attribute__ ((visibility ("default"))) _Py_HashSecret_t _Py_HashSecret;







typedef struct {
    Py_hash_t (*const hash)(const void *, Py_ssize_t);
    const char *name;
    const int hash_bits;
    const int seed_bits;
} PyHash_FuncDef;

__attribute__ ((visibility ("default"))) PyHash_FuncDef* PyHash_GetFuncDef(void);
# 141 "/data/data/com.termux/files/usr/include/python3.12/pyhash.h"
}
# 48 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pydebug.h" 1




extern "C" {


__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_DebugFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_VerboseFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_QuietFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_InteractiveFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_InspectFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_OptimizeFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_NoSiteFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_BytesWarningFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_FrozenFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_IgnoreEnvironmentFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_DontWriteBytecodeFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_NoUserSiteDirectory;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_UnbufferedStdioFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_HashRandomizationFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_IsolatedFlag;
# 32 "/data/data/com.termux/files/usr/include/python3.12/cpython/pydebug.h"
__attribute__ ((visibility ("default"))) char* Py_GETENV(const char *name);


}
# 49 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/bytearrayobject.h" 1





extern "C" {
# 20 "/data/data/com.termux/files/usr/include/python3.12/bytearrayobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyByteArray_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyByteArrayIter_Type;






__attribute__ ((visibility ("default"))) PyObject * PyByteArray_FromObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyByteArray_Concat(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) Py_ssize_t PyByteArray_Size(PyObject *);
__attribute__ ((visibility ("default"))) char * PyByteArray_AsString(PyObject *);
__attribute__ ((visibility ("default"))) int PyByteArray_Resize(PyObject *, Py_ssize_t);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/bytearrayobject.h" 1





typedef struct {
    PyVarObject ob_base;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;
    Py_ssize_t ob_exports;
} PyByteArrayObject;

extern __attribute__ ((visibility ("default"))) char _PyByteArray_empty_string[];





static inline char* PyByteArray_AS_STRING(PyObject *op)
{
    PyByteArrayObject *self = (((PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/bytearrayobject.h", 22, __PRETTY_FUNCTION__, "PyByteArray_Check(op)")), ((PyByteArrayObject*)(op)));
    if (Py_SIZE(((PyObject*)((self))))) {
        return self->ob_start;
    }
    return _PyByteArray_empty_string;
}


static inline Py_ssize_t PyByteArray_GET_SIZE(PyObject *op) {
    PyByteArrayObject *self = (((PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/bytearrayobject.h", 31, __PRETTY_FUNCTION__, "PyByteArray_Check(op)")), ((PyByteArrayObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}
# 38 "/data/data/com.termux/files/usr/include/python3.12/bytearrayobject.h" 2




}
# 50 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/bytesobject.h" 1






extern "C" {


# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3
# 11 "/data/data/com.termux/files/usr/include/python3.12/bytesobject.h" 2
# 27 "/data/data/com.termux/files/usr/include/python3.12/bytesobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBytes_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBytesIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromString(const char *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromFormatV(const char*, va_list)
                                __attribute__((format(printf, 1, 0)));
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromFormat(const char*, ...)
                                __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) Py_ssize_t PyBytes_Size(PyObject *);
__attribute__ ((visibility ("default"))) char * PyBytes_AsString(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_Repr(PyObject *, int);
__attribute__ ((visibility ("default"))) void PyBytes_Concat(PyObject **, PyObject *);
__attribute__ ((visibility ("default"))) void PyBytes_ConcatAndDel(PyObject **, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                            const char *, Py_ssize_t,
                                            const char *);





__attribute__ ((visibility ("default"))) int PyBytes_AsStringAndSize(
    PyObject *obj,
    char **s,
    Py_ssize_t *len
    );



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/bytesobject.h" 1




typedef struct {
    PyVarObject ob_base;
    __attribute__((__deprecated__)) Py_hash_t ob_shash;
    char ob_sval[1];






} PyBytesObject;

__attribute__ ((visibility ("default"))) int _PyBytes_Resize(PyObject **, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject* _PyBytes_FormatEx(
    const char *format,
    Py_ssize_t format_len,
    PyObject *args,
    int use_bytearray);
__attribute__ ((visibility ("default"))) PyObject* _PyBytes_FromHex(
    PyObject *string,
    int use_bytearray);


__attribute__ ((visibility ("default"))) PyObject * _PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                             const char *, const char **);





static inline char* PyBytes_AS_STRING(PyObject *op)
{
    return (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/bytesobject.h", 37, __PRETTY_FUNCTION__, "PyBytes_Check(op)")), ((PyBytesObject*)(op)))->ob_sval;
}


static inline Py_ssize_t PyBytes_GET_SIZE(PyObject *op) {
    PyBytesObject *self = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/bytesobject.h", 42, __PRETTY_FUNCTION__, "PyBytes_Check(op)")), ((PyBytesObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}




__attribute__ ((visibility ("default"))) PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);





typedef struct {

    PyObject *buffer;


    Py_ssize_t allocated;



    Py_ssize_t min_size;


    int use_bytearray;



    int overallocate;


    int use_small_buffer;
    char small_buffer[512];
} _PyBytesWriter;





__attribute__ ((visibility ("default"))) void _PyBytesWriter_Init(_PyBytesWriter *writer);




__attribute__ ((visibility ("default"))) PyObject * _PyBytesWriter_Finish(_PyBytesWriter *writer,
    void *str);


__attribute__ ((visibility ("default"))) void _PyBytesWriter_Dealloc(_PyBytesWriter *writer);




__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Alloc(_PyBytesWriter *writer,
    Py_ssize_t size);







__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Prepare(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);
# 120 "/data/data/com.termux/files/usr/include/python3.12/cpython/bytesobject.h"
__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Resize(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) void* _PyBytesWriter_WriteBytes(_PyBytesWriter *writer,
    void *str,
    const void *bytes,
    Py_ssize_t size);
# 63 "/data/data/com.termux/files/usr/include/python3.12/bytesobject.h" 2




}
# 51 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h" 1



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3
# 5 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h" 2
# 58 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/ctype.h" 1 3
# 36 "/data/data/com.termux/files/usr/include/c++/v1/ctype.h" 3



# 1 "/data/data/com.termux/files/usr/include/ctype.h" 1 3 4
# 71 "/data/data/com.termux/files/usr/include/ctype.h" 3 4
extern "C" {


extern const char* _ctype_;


static __inline__ int isalpha(int __ch) {
  return (__ch >= 'A' && __ch <= 'Z') || (__ch >= 'a' && __ch <= 'z');
}


static __inline__ int isblank(int __ch) {
  return __ch == ' ' || __ch == '\t';
}


static __inline__ int iscntrl(int __ch) {
  return ((static_cast<unsigned>(__ch)) < ' ') || __ch == 0x7f;
}


static __inline__ int isdigit(int __ch) {
  return (__ch >= '0' && __ch <= '9');
}


static __inline__ int isgraph(int __ch) {
  return (__ch >= '!' && __ch <= '~');
}


static __inline__ int islower(int __ch) {
  return (__ch >= 'a' && __ch <= 'z');
}


static __inline__ int isprint(int __ch) {
  return (__ch >= ' ' && __ch <= '~');
}


static __inline__ int isspace(int __ch) {
  return __ch == ' ' || (__ch >= '\t' && __ch <= '\r');
}


static __inline__ int isupper(int __ch) {
  return (__ch >= 'A' && __ch <= 'Z');
}


static __inline__ int isxdigit(int __ch) {
  return (__ch >= '0' && __ch <= '9') || (__ch >= 'a' && __ch <= 'f') || (__ch >= 'A' && __ch <= 'F');
}


static __inline__ int isalnum(int __ch) {
  return isalpha(__ch) || isdigit(__ch);
}


static __inline__ int ispunct(int __ch) {
  return isgraph(__ch) && !isalnum(__ch);
}






static __inline__ int _tolower(int __ch) {
  return __ch | 0x20;
}


static __inline__ int tolower(int __ch) {
  if (__ch >= 'A' && __ch <= 'Z') return _tolower(__ch);
  return __ch;
}






static __inline__ int _toupper(int __ch) {


  return __ch ^ 0x20;
}


static __inline__ int toupper(int __ch) {
  if (__ch >= 'a' && __ch <= 'z') return _toupper(__ch);
  return __ch;
}


static __inline__ int isascii(int __ch) {
  return (static_cast<unsigned>(__ch)) < 0x80;
}


static __inline__ int toascii(int __ch) {
  return __ch & 0x7f;
}


static __inline__ int isalnum_l(int __ch, locale_t __l) {
  return isalnum(__ch);
}


static __inline__ int isalpha_l(int __ch, locale_t __l) {
  return isalpha(__ch);
}


static __inline__ int isblank_l(int __ch, locale_t __l) {
  return isblank(__ch);
}


static __inline__ int iscntrl_l(int __ch, locale_t __l) {
  return iscntrl(__ch);
}


static __inline__ int isdigit_l(int __ch, locale_t __l) {
  return isdigit(__ch);
}


static __inline__ int isgraph_l(int __ch, locale_t __l) {
  return isgraph(__ch);
}


static __inline__ int islower_l(int __ch, locale_t __l) {
  return islower(__ch);
}


static __inline__ int isprint_l(int __ch, locale_t __l) {
  return isprint(__ch);
}


static __inline__ int ispunct_l(int __ch, locale_t __l) {
  return ispunct(__ch);
}


static __inline__ int isspace_l(int __ch, locale_t __l) {
  return isspace(__ch);
}


static __inline__ int isupper_l(int __ch, locale_t __l) {
  return isupper(__ch);
}


static __inline__ int isxdigit_l(int __ch, locale_t __l) {
  return isxdigit(__ch);
}


static __inline__ int tolower_l(int __ch, locale_t __l) {
  return tolower(__ch);
}


static __inline__ int toupper_l(int __ch, locale_t __l) {
  return toupper(__ch);
}

}
# 40 "/data/data/com.termux/files/usr/include/c++/v1/ctype.h" 2 3
# 59 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h" 2
# 97 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/wchar.h" 1 3
# 98 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h" 2




typedef uint32_t Py_UCS4;
typedef uint16_t Py_UCS2;
typedef uint8_t Py_UCS1;


extern "C" {



extern __attribute__ ((visibility ("default"))) PyTypeObject PyUnicode_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyUnicodeIter_Type;
# 130 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromString(
    const char *u
    );


__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);
# 154 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);




__attribute__ ((visibility ("default"))) Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);





__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);





__attribute__ ((visibility ("default"))) Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );






__attribute__ ((visibility ("default"))) int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );
# 208 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
# 226 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromEncodedObject(
    PyObject *obj,
    const char *encoding,
    const char *errors
    );
# 241 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromObject(
    PyObject *obj
    );

__attribute__ ((visibility ("default"))) PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );

__attribute__ ((visibility ("default"))) void PyUnicode_InternInPlace(PyObject **);
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_InternFromString(
    const char *u
    );
# 268 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromWideChar(
    const wchar_t *w,
    Py_ssize_t size
    );
# 285 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    wchar_t *w,
    Py_ssize_t size
    );
# 299 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );
# 315 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromOrdinal(int ordinal);
# 338 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char* PyUnicode_GetDefaultEncoding(void);






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );
# 359 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 372 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 386 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 408 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );
# 466 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
# 496 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
# 563 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );





__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );







__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );
# 660 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping
    );
# 723 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );







__attribute__ ((visibility ("default"))) int PyUnicode_FSConverter(PyObject*, void*);




__attribute__ ((visibility ("default"))) int PyUnicode_FSDecoder(PyObject*, void*);





__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );


__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
# 786 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );




__attribute__ ((visibility ("default"))) void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );




__attribute__ ((visibility ("default"))) void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
# 818 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
# 862 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
# 880 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );




__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );




__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );





__attribute__ ((visibility ("default"))) int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );







__attribute__ ((visibility ("default"))) int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
# 980 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );







__attribute__ ((visibility ("default"))) int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );



__attribute__ ((visibility ("default"))) int PyUnicode_IsIdentifier(PyObject *s);





# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h" 1
# 10 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
                         typedef wchar_t Py_UNICODE;




static inline int Py_UNICODE_IS_SURROGATE(Py_UCS4 ch) {
    return (0xD800 <= ch && ch <= 0xDFFF);
}
static inline int Py_UNICODE_IS_HIGH_SURROGATE(Py_UCS4 ch) {
    return (0xD800 <= ch && ch <= 0xDBFF);
}
static inline int Py_UNICODE_IS_LOW_SURROGATE(Py_UCS4 ch) {
    return (0xDC00 <= ch && ch <= 0xDFFF);
}


static inline Py_UCS4 Py_UNICODE_JOIN_SURROGATES(Py_UCS4 high, Py_UCS4 low) {
    ((Py_UNICODE_IS_HIGH_SURROGATE(high)) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 27, __PRETTY_FUNCTION__, "Py_UNICODE_IS_HIGH_SURROGATE(high)"));
    ((Py_UNICODE_IS_LOW_SURROGATE(low)) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 28, __PRETTY_FUNCTION__, "Py_UNICODE_IS_LOW_SURROGATE(low)"));
    return 0x10000 + (((high & 0x03FF) << 10) | (low & 0x03FF));
}



static inline Py_UCS4 Py_UNICODE_HIGH_SURROGATE(Py_UCS4 ch) {
    ((0x10000 <= ch && ch <= 0x10ffff) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 35, __PRETTY_FUNCTION__, "0x10000 <= ch && ch <= 0x10ffff"));
    return (0xD800 - (0x10000 >> 10) + (ch >> 10));
}



static inline Py_UCS4 Py_UNICODE_LOW_SURROGATE(Py_UCS4 ch) {
    ((0x10000 <= ch && ch <= 0x10ffff) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 42, __PRETTY_FUNCTION__, "0x10000 <= ch && ch <= 0x10ffff"));
    return (0xDC00 + (ch & 0x3FF));
}







typedef struct {
# 97 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
# 110 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
        unsigned int interned:2;
# 133 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
        unsigned int kind:3;




        unsigned int compact:1;



        unsigned int ascii:1;

        unsigned int statically_allocated:1;


        unsigned int :24;
    } state;
} PyASCIIObject;




typedef struct {
    PyASCIIObject _base;
    Py_ssize_t utf8_length;

    char *utf8;
} PyCompactUnicodeObject;


typedef struct {
    PyCompactUnicodeObject _base;
    union {
        void *any;
        Py_UCS1 *latin1;
        Py_UCS2 *ucs2;
        Py_UCS4 *ucs4;
    } data;
} PyUnicodeObject;

__attribute__ ((visibility ("default"))) int _PyUnicode_CheckConsistency(
    PyObject *op,
    int check_content);
# 199 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
static inline unsigned int PyUnicode_CHECK_INTERNED(PyObject *op) {
    return (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 200, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->state.interned;
}



static inline unsigned int PyUnicode_IS_READY(PyObject* _unused_op __attribute__((unused))) {
    return 1;
}





static inline unsigned int PyUnicode_IS_ASCII(PyObject *op) {
    return (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 214, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->state.ascii;
}




static inline unsigned int PyUnicode_IS_COMPACT(PyObject *op) {
    return (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 221, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->state.compact;
}




static inline int PyUnicode_IS_COMPACT_ASCII(PyObject *op) {
    return ((((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 228, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->state.ascii && PyUnicode_IS_COMPACT(((PyObject*)((op)))));
}


enum PyUnicode_Kind {

    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
# 248 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
static inline void* _PyUnicode_COMPACT_DATA(PyObject *op) {
    if (PyUnicode_IS_ASCII(((PyObject*)((op))))) {
        return static_cast<void*>(((((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 250, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op)))) + 1));
    }
    return static_cast<void*>(((((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 252, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyCompactUnicodeObject*)((op)))) + 1));
}

static inline void* _PyUnicode_NONCOMPACT_DATA(PyObject *op) {
    void *data;
    ((!PyUnicode_IS_COMPACT(((PyObject*)((op))))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 257, __PRETTY_FUNCTION__, "!PyUnicode_IS_COMPACT(op)"));
    data = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 258, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyUnicodeObject*)((op))))->data.any;
    ((data != __null) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 259, __PRETTY_FUNCTION__, "data != NULL"));
    return data;
}

static inline void* PyUnicode_DATA(PyObject *op) {
    if (PyUnicode_IS_COMPACT(((PyObject*)((op))))) {
        return _PyUnicode_COMPACT_DATA(op);
    }
    return _PyUnicode_NONCOMPACT_DATA(op);
}
# 281 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
static inline Py_ssize_t PyUnicode_GET_LENGTH(PyObject *op) {
    return (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 282, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->length;
}







static inline void PyUnicode_WRITE(int kind, void *data,
                                   Py_ssize_t index, Py_UCS4 value)
{
    ((index >= 0) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 294, __PRETTY_FUNCTION__, "index >= 0"));
    if (kind == PyUnicode_1BYTE_KIND) {
        ((value <= 0xffU) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 296, __PRETTY_FUNCTION__, "value <= 0xffU"));
        static_cast<Py_UCS1*>(data)[index] = static_cast<Py_UCS1>(value);
    }
    else if (kind == PyUnicode_2BYTE_KIND) {
        ((value <= 0xffffU) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 300, __PRETTY_FUNCTION__, "value <= 0xffffU"));
        static_cast<Py_UCS2*>(data)[index] = static_cast<Py_UCS2>(value);
    }
    else {
        ((kind == PyUnicode_4BYTE_KIND) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 304, __PRETTY_FUNCTION__, "kind == PyUnicode_4BYTE_KIND"));
        ((value <= 0x10ffffU) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 305, __PRETTY_FUNCTION__, "value <= 0x10ffffU"));
        static_cast<Py_UCS4*>(data)[index] = value;
    }
}






static inline Py_UCS4 PyUnicode_READ(int kind,
                                     const void *data, Py_ssize_t index)
{
    ((index >= 0) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 318, __PRETTY_FUNCTION__, "index >= 0"));
    if (kind == PyUnicode_1BYTE_KIND) {
        return static_cast<const Py_UCS1*>(data)[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return static_cast<const Py_UCS2*>(data)[index];
    }
    ((kind == PyUnicode_4BYTE_KIND) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 325, __PRETTY_FUNCTION__, "kind == PyUnicode_4BYTE_KIND"));
    return static_cast<const Py_UCS4*>(data)[index];
}
# 337 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
static inline Py_UCS4 PyUnicode_READ_CHAR(PyObject *unicode, Py_ssize_t index)
{
    int kind;

    ((index >= 0) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 341, __PRETTY_FUNCTION__, "index >= 0"));

    ((index <= PyUnicode_GET_LENGTH(((PyObject*)((unicode))))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 343, __PRETTY_FUNCTION__, "index <= PyUnicode_GET_LENGTH(unicode)"));

    kind = ((void)0, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((unicode))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 345, __PRETTY_FUNCTION__, "PyUnicode_Check(unicode)")), ((PyASCIIObject*)((unicode))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
        return static_cast<Py_UCS1*>(PyUnicode_DATA(((PyObject*)((unicode)))))[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return static_cast<Py_UCS2*>(PyUnicode_DATA(((PyObject*)((unicode)))))[index];
    }
    ((kind == PyUnicode_4BYTE_KIND) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 352, __PRETTY_FUNCTION__, "kind == PyUnicode_4BYTE_KIND"));
    return static_cast<Py_UCS4*>(PyUnicode_DATA(((PyObject*)((unicode)))))[index];
}






static inline Py_UCS4 PyUnicode_MAX_CHAR_VALUE(PyObject *op)
{
    int kind;

    if (PyUnicode_IS_ASCII(((PyObject*)((op))))) {
        return 0x7fU;
    }

    kind = ((void)0, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 369, __PRETTY_FUNCTION__, "PyUnicode_Check(op)")), ((PyASCIIObject*)((op))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
       return 0xffU;
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return 0xffffU;
    }
    ((kind == PyUnicode_4BYTE_KIND) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h", 376, __PRETTY_FUNCTION__, "kind == PyUnicode_4BYTE_KIND"));
    return 0x10ffffU;
}
# 389 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );


static inline int PyUnicode_READY(PyObject* _unused_op __attribute__((unused)))
{
    return 0;
}



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
# 424 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );




__attribute__ ((visibility ("default"))) void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
# 451 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



__attribute__ ((visibility ("default"))) void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_FindMaxChar (
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t end);



typedef struct {
    PyObject *buffer;
    void *data;
    int kind;
    Py_UCS4 maxchar;
    Py_ssize_t size;
    Py_ssize_t pos;


    Py_ssize_t min_length;


    Py_UCS4 min_char;


    unsigned char overallocate;



    unsigned char readonly;
} _PyUnicodeWriter ;






__attribute__ ((visibility ("default"))) void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer);
# 533 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);
# 549 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_PrepareKindInternal(_PyUnicodeWriter *writer,
                                     int kind);



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteChar(_PyUnicodeWriter *writer,
    Py_UCS4 ch
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer,
    PyObject *str
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteSubstring(_PyUnicodeWriter *writer,
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteASCIIString(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteLatin1String(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );




__attribute__ ((visibility ("default"))) PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);


__attribute__ ((visibility ("default"))) void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);




__attribute__ ((visibility ("default"))) int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 627 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char * PyUnicode_AsUTF8(PyObject *unicode);





__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
# 670 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);


__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeUnicodeEscapeInternal(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed,
        const char **first_invalid_escape


);




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeRawUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);
# 731 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,
    const char *errors
    );
# 746 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject * _PyUnicode_JoinArray(
    PyObject *separator,
    PyObject *const *items,
    Py_ssize_t seqlen
    );




__attribute__ ((visibility ("default"))) int _PyUnicode_EqualToASCIIId(
    PyObject *left,
    _Py_Identifier *right
    );




__attribute__ ((visibility ("default"))) int _PyUnicode_EqualToASCIIString(
    PyObject *left,
    const char *right
    );


__attribute__ ((visibility ("default"))) PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );




__attribute__ ((visibility ("default"))) Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    _PyUnicodeWriter *writer,
    Py_ssize_t n_buffer,
    PyObject *digits,
    Py_ssize_t d_pos,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);
# 804 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );

                         __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );

                         __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsCased(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );


extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ascii_whitespace[];





static inline int Py_UNICODE_ISSPACE(Py_UCS4 ch) {
    if (ch < 128) {
        return _Py_ascii_whitespace[ch];
    }
    return _PyUnicode_IsWhitespace(ch);
}
# 938 "/data/data/com.termux/files/usr/include/python3.12/cpython/unicodeobject.h"
static inline int Py_UNICODE_ISALNUM(Py_UCS4 ch) {
   return (_PyUnicode_IsAlpha(ch)
           || _PyUnicode_IsDecimalDigit(ch)
           || _PyUnicode_IsDigit(ch)
           || _PyUnicode_IsNumeric(ch));
}




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FormatLong(PyObject *, int, int, int);


__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FromId(_Py_Identifier*);



__attribute__ ((visibility ("default"))) int _PyUnicode_EQ(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) int _PyUnicode_Equal(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) int _PyUnicode_WideCharString_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyUnicode_WideCharString_Opt_Converter(PyObject *, void *);

__attribute__ ((visibility ("default"))) Py_ssize_t _PyUnicode_ScanIdentifier(PyObject *);
# 1014 "/data/data/com.termux/files/usr/include/python3.12/unicodeobject.h" 2




}
# 52 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/initconfig.h" 1




extern "C" {




typedef struct {
    enum {
        _PyStatus_TYPE_OK=0,
        _PyStatus_TYPE_ERROR=1,
        _PyStatus_TYPE_EXIT=2
    } _type;
    const char *func;
    const char *err_msg;
    int exitcode;
} PyStatus;

__attribute__ ((visibility ("default"))) PyStatus PyStatus_Ok(void);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_Error(const char *err_msg);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_NoMemory(void);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_Exit(int exitcode);
__attribute__ ((visibility ("default"))) int PyStatus_IsError(PyStatus err);
__attribute__ ((visibility ("default"))) int PyStatus_IsExit(PyStatus err);
__attribute__ ((visibility ("default"))) int PyStatus_Exception(PyStatus err);
__attribute__ ((visibility ("default"))) PyObject * _PyErr_SetFromPyStatus(PyStatus status);



typedef struct {


    Py_ssize_t length;
    wchar_t **items;
} PyWideStringList;

__attribute__ ((visibility ("default"))) PyStatus PyWideStringList_Append(PyWideStringList *list,
    const wchar_t *item);
__attribute__ ((visibility ("default"))) PyStatus PyWideStringList_Insert(PyWideStringList *list,
    Py_ssize_t index,
    const wchar_t *item);




typedef struct PyPreConfig {
    int _config_init;



    int parse_argv;






    int isolated;




    int use_environment;



    int configure_locale;
# 82 "/data/data/com.termux/files/usr/include/python3.12/cpython/initconfig.h"
    int coerce_c_locale;







    int coerce_c_locale_warn;
# 115 "/data/data/com.termux/files/usr/include/python3.12/cpython/initconfig.h"
    int utf8_mode;





    int dev_mode;



    int allocator;
} PyPreConfig;

__attribute__ ((visibility ("default"))) void PyPreConfig_InitPythonConfig(PyPreConfig *config);
__attribute__ ((visibility ("default"))) void PyPreConfig_InitIsolatedConfig(PyPreConfig *config);





typedef struct PyConfig {
    int _config_init;

    int isolated;
    int use_environment;
    int dev_mode;
    int install_signal_handlers;
    int use_hash_seed;
    unsigned long hash_seed;
    int faulthandler;
    int tracemalloc;
    int perf_profiling;
    int import_time;
    int code_debug_ranges;
    int show_ref_count;
    int dump_refs;
    wchar_t *dump_refs_file;
    int malloc_stats;
    wchar_t *filesystem_encoding;
    wchar_t *filesystem_errors;
    wchar_t *pycache_prefix;
    int parse_argv;
    PyWideStringList orig_argv;
    PyWideStringList argv;
    PyWideStringList xoptions;
    PyWideStringList warnoptions;
    int site_import;
    int bytes_warning;
    int warn_default_encoding;
    int inspect;
    int interactive;
    int optimization_level;
    int parser_debug;
    int write_bytecode;
    int verbose;
    int quiet;
    int user_site_directory;
    int configure_c_stdio;
    int buffered_stdio;
    wchar_t *stdio_encoding;
    wchar_t *stdio_errors;



    wchar_t *check_hash_pycs_mode;
    int use_frozen_modules;
    int safe_path;
    int int_max_str_digits;


    int pathconfig_warnings;
    wchar_t *program_name;
    wchar_t *pythonpath_env;
    wchar_t *home;
    wchar_t *platlibdir;


    int module_search_paths_set;
    PyWideStringList module_search_paths;
    wchar_t *stdlib_dir;
    wchar_t *executable;
    wchar_t *base_executable;
    wchar_t *prefix;
    wchar_t *base_prefix;
    wchar_t *exec_prefix;
    wchar_t *base_exec_prefix;


    int skip_source_first_line;
    wchar_t *run_command;
    wchar_t *run_module;
    wchar_t *run_filename;





    int _install_importlib;


    int _init_main;


    int _is_python_build;
} PyConfig;

__attribute__ ((visibility ("default"))) void PyConfig_InitPythonConfig(PyConfig *config);
__attribute__ ((visibility ("default"))) void PyConfig_InitIsolatedConfig(PyConfig *config);
__attribute__ ((visibility ("default"))) void PyConfig_Clear(PyConfig *);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetString(
    PyConfig *config,
    wchar_t **config_str,
    const wchar_t *str);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetBytesString(
    PyConfig *config,
    wchar_t **config_str,
    const char *str);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_Read(PyConfig *config);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetBytesArgv(
    PyConfig *config,
    Py_ssize_t argc,
    char * const *argv);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetArgv(PyConfig *config,
    Py_ssize_t argc,
    wchar_t * const *argv);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetWideStringList(PyConfig *config,
    PyWideStringList *list,
    Py_ssize_t length, wchar_t **items);







__attribute__ ((visibility ("default"))) void Py_GetArgcArgv(int *argc, wchar_t ***argv);


}
# 53 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pystate.h" 1






extern "C" {






__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_New(void);
__attribute__ ((visibility ("default"))) void PyInterpreterState_Clear(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void PyInterpreterState_Delete(PyInterpreterState *);
# 26 "/data/data/com.termux/files/usr/include/python3.12/pystate.h"
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Get(void);




__attribute__ ((visibility ("default"))) PyObject * PyInterpreterState_GetDict(PyInterpreterState *);




__attribute__ ((visibility ("default"))) int64_t PyInterpreterState_GetID(PyInterpreterState *);






__attribute__ ((visibility ("default"))) int PyState_AddModule(PyObject*, PyModuleDef*);
__attribute__ ((visibility ("default"))) int PyState_RemoveModule(PyModuleDef*);

__attribute__ ((visibility ("default"))) PyObject* PyState_FindModule(PyModuleDef*);

__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_New(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void PyThreadState_Clear(PyThreadState *);
__attribute__ ((visibility ("default"))) void PyThreadState_Delete(PyThreadState *);
# 60 "/data/data/com.termux/files/usr/include/python3.12/pystate.h"
__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Get(void);




__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Swap(PyThreadState *);
__attribute__ ((visibility ("default"))) PyObject * PyThreadState_GetDict(void);
__attribute__ ((visibility ("default"))) int PyThreadState_SetAsyncExc(unsigned long, PyObject *);



__attribute__ ((visibility ("default"))) PyInterpreterState* PyThreadState_GetInterpreter(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) PyFrameObject* PyThreadState_GetFrame(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) uint64_t PyThreadState_GetID(PyThreadState *tstate);


typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
# 102 "/data/data/com.termux/files/usr/include/python3.12/pystate.h"
__attribute__ ((visibility ("default"))) PyGILState_STATE PyGILState_Ensure(void);
# 112 "/data/data/com.termux/files/usr/include/python3.12/pystate.h"
__attribute__ ((visibility ("default"))) void PyGILState_Release(PyGILState_STATE);







__attribute__ ((visibility ("default"))) PyThreadState * PyGILState_GetThisThreadState(void);




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h" 1
# 34 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_HasFeature(PyInterpreterState *interp,
                                               unsigned long feature);




__attribute__ ((visibility ("default"))) int _PyInterpreterState_RequiresIDRef(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void _PyInterpreterState_RequireIDRef(PyInterpreterState *, int);

__attribute__ ((visibility ("default"))) PyObject * _PyInterpreterState_GetMainModule(PyInterpreterState *);





typedef int (*Py_tracefunc)(PyObject *, PyFrameObject *, int, PyObject *);
# 67 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
typedef struct _PyCFrame {
# 79 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    struct _PyInterpreterFrame *current_frame;
    struct _PyCFrame *previous;
} _PyCFrame;

typedef struct _err_stackitem {
# 97 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    PyObject *exc_value;

    struct _err_stackitem *previous_item;

} _PyErr_StackItem;

typedef struct _stack_chunk {
    struct _stack_chunk *previous;
    size_t size;
    size_t top;
    PyObject * data[1];
} _PyStackChunk;

struct _py_trashcan {
    int delete_nesting;
    PyObject *delete_later;
};

struct _ts {


    PyThreadState *prev;
    PyThreadState *next;
    PyInterpreterState *interp;

    struct {




        unsigned int initialized:1;


        unsigned int bound:1;

        unsigned int unbound:1;

        unsigned int bound_gilstate:1;

        unsigned int active:1;


        unsigned int finalizing:1;
        unsigned int cleared:1;
        unsigned int finalized:1;


        unsigned int :24;
    } _status;

    int py_recursion_remaining;
    int py_recursion_limit;

    int c_recursion_remaining;
    int recursion_headroom;




    int tracing;
    int what_event;



    _PyCFrame *cframe;

    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;


    PyObject *current_exception;




    _PyErr_StackItem *exc_info;

    PyObject *dict;

    int gilstate_counter;

    PyObject *async_exc;
    unsigned long thread_id;





    unsigned long native_thread_id;

    struct _py_trashcan trash;
# 214 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    void (*on_delete)(void *);
    void *on_delete_data;

    int coroutine_origin_tracking_depth;

    PyObject *async_gen_firstiter;
    PyObject *async_gen_finalizer;

    PyObject *context;
    uint64_t context_ver;


    uint64_t id;

    _PyStackChunk *datastack_chunk;
    PyObject **datastack_top;
    PyObject **datastack_limit;
# 245 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    _PyErr_StackItem exc_state;


    _PyCFrame root_cframe;
};
# 282 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
__attribute__ ((visibility ("default"))) PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);



__attribute__ ((visibility ("default"))) PyThreadState * _PyThreadState_UncheckedGet(void);

__attribute__ ((visibility ("default"))) PyObject * _PyThreadState_GetDict(PyThreadState *tstate);


__attribute__ ((visibility ("default"))) void PyThreadState_EnterTracing(PyThreadState *tstate);



__attribute__ ((visibility ("default"))) void PyThreadState_LeaveTracing(PyThreadState *tstate);







__attribute__ ((visibility ("default"))) int PyGILState_Check(void);
# 312 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
__attribute__ ((visibility ("default"))) PyInterpreterState * _PyGILState_GetInterpreterStateUnsafe(void);




__attribute__ ((visibility ("default"))) PyObject * _PyThread_CurrentFrames(void);




__attribute__ ((visibility ("default"))) PyObject * _PyThread_CurrentExceptions(void);



__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Main(void);
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Head(void);
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
__attribute__ ((visibility ("default"))) PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Next(PyThreadState *);
__attribute__ ((visibility ("default"))) void PyThreadState_DeleteCurrent(void);



typedef PyObject* (*_PyFrameEvalFunction)(PyThreadState *tstate, struct _PyInterpreterFrame *, int);

__attribute__ ((visibility ("default"))) _PyFrameEvalFunction _PyInterpreterState_GetEvalFrameFunc(
    PyInterpreterState *interp);
__attribute__ ((visibility ("default"))) void _PyInterpreterState_SetEvalFrameFunc(
    PyInterpreterState *interp,
    _PyFrameEvalFunction eval_frame);

__attribute__ ((visibility ("default"))) const PyConfig* _PyInterpreterState_GetConfig(PyInterpreterState *interp);
# 357 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_GetConfigCopy(
    struct PyConfig *config);
# 375 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_SetConfig(
    const struct PyConfig *config);



__attribute__ ((visibility ("default"))) const PyConfig* _Py_GetConfig(void);







typedef struct _xid _PyCrossInterpreterData;

typedef PyObject *(*xid_newobjectfunc)(_PyCrossInterpreterData *);
typedef void (*xid_freefunc)(void *);

struct _xid {



    void *data;






    PyObject *obj;
# 414 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    int64_t interp;




    xid_newobjectfunc new_object;
# 429 "/data/data/com.termux/files/usr/include/python3.12/cpython/pystate.h"
    xid_freefunc free;
};

__attribute__ ((visibility ("default"))) void _PyCrossInterpreterData_Init(
        _PyCrossInterpreterData *data,
        PyInterpreterState *interp, void *shared, PyObject *obj,
        xid_newobjectfunc new_object);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_InitWithSize(
        _PyCrossInterpreterData *,
        PyInterpreterState *interp, const size_t, PyObject *,
        xid_newobjectfunc);
__attribute__ ((visibility ("default"))) void _PyCrossInterpreterData_Clear(
        PyInterpreterState *, _PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyObject_GetCrossInterpreterData(PyObject *, _PyCrossInterpreterData *);
__attribute__ ((visibility ("default"))) PyObject * _PyCrossInterpreterData_NewObject(_PyCrossInterpreterData *);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_Release(_PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyObject_CheckCrossInterpreterData(PyObject *);



typedef int (*crossinterpdatafunc)(PyThreadState *tstate, PyObject *,
                                   _PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_RegisterClass(PyTypeObject *, crossinterpdatafunc);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_UnregisterClass(PyTypeObject *);
__attribute__ ((visibility ("default"))) crossinterpdatafunc _PyCrossInterpreterData_Lookup(PyObject *);
# 126 "/data/data/com.termux/files/usr/include/python3.12/pystate.h" 2




}
# 54 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h" 1



extern "C" {


# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3
# 8 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h" 2



__attribute__ ((visibility ("default"))) void PyErr_SetNone(PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_SetObject(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
__attribute__ ((visibility ("default"))) PyObject * PyErr_Occurred(void);
__attribute__ ((visibility ("default"))) void PyErr_Clear(void);
__attribute__ ((visibility ("default"))) void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
__attribute__ ((visibility ("default"))) void PyErr_Restore(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyErr_GetRaisedException(void);
__attribute__ ((visibility ("default"))) void PyErr_SetRaisedException(PyObject *);

__attribute__ ((visibility ("default"))) PyObject* PyErr_GetHandledException(void);
__attribute__ ((visibility ("default"))) void PyErr_SetHandledException(PyObject *);


__attribute__ ((visibility ("default"))) void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
__attribute__ ((visibility ("default"))) void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);







__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_FatalError(const char *message);


__attribute__ ((visibility ("default"))) int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyErr_ExceptionMatches(PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);


__attribute__ ((visibility ("default"))) int PyException_SetTraceback(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyException_GetTraceback(PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetCause(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetCause(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetContext(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetContext(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetArgs(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetArgs(PyObject *, PyObject *);
# 69 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h"
__attribute__ ((visibility ("default"))) const char * PyExceptionClass_Name(PyObject *);
# 78 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h"
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BaseException;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_Exception;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BaseExceptionGroup;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_StopAsyncIteration;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_StopIteration;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_GeneratorExit;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ArithmeticError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_LookupError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_AssertionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_AttributeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BufferError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EOFError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FloatingPointError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_OSError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ImportError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ModuleNotFoundError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IndexError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_KeyError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_KeyboardInterrupt;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_MemoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NameError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_OverflowError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RuntimeError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RecursionError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NotImplementedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SyntaxError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IndentationError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TabError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ReferenceError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SystemError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SystemExit;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TypeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnboundLocalError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeEncodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeDecodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeTranslateError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ValueError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ZeroDivisionError;


extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BlockingIOError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BrokenPipeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ChildProcessError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionAbortedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionRefusedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionResetError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FileExistsError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FileNotFoundError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_InterruptedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IsADirectoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NotADirectoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_PermissionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ProcessLookupError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TimeoutError;




extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EnvironmentError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IOError;





extern __attribute__ ((visibility ("default"))) PyObject * PyExc_Warning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UserWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_DeprecationWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_PendingDeprecationWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SyntaxWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RuntimeWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FutureWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ImportWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BytesWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EncodingWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ResourceWarning;




__attribute__ ((visibility ("default"))) int PyErr_BadArgument(void);
__attribute__ ((visibility ("default"))) PyObject * PyErr_NoMemory(void);
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrno(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilenameObjects(
    PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );

__attribute__ ((visibility ("default"))) PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );

__attribute__ ((visibility ("default"))) PyObject * PyErr_FormatV(
    PyObject *exception,
    const char *format,
    va_list vargs);
# 215 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h"
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetImportErrorSubclass(PyObject *, PyObject *,
    PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);



__attribute__ ((visibility ("default"))) void PyErr_BadInternalCall(void);
__attribute__ ((visibility ("default"))) void _PyErr_BadInternalCall(const char *filename, int lineno);





__attribute__ ((visibility ("default"))) PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
__attribute__ ((visibility ("default"))) PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
__attribute__ ((visibility ("default"))) void PyErr_WriteUnraisable(PyObject *);



__attribute__ ((visibility ("default"))) int PyErr_CheckSignals(void);
__attribute__ ((visibility ("default"))) void PyErr_SetInterrupt(void);

__attribute__ ((visibility ("default"))) int PyErr_SetInterruptEx(int signum);



__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);
__attribute__ ((visibility ("default"))) PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);





__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );

__attribute__ ((visibility ("default"))) int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
__attribute__ ((visibility ("default"))) int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyerrors.h" 1
# 13 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyerrors.h"
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
} PyBaseExceptionObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *excs;
} PyBaseExceptionGroupObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *end_lineno;
    PyObject *end_offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *name;
    PyObject *path;
    PyObject *name_from;
} PyImportErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *code;
} PySystemExitObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;
    PyObject *filename2;



    Py_ssize_t written;
} PyOSErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *value;
} PyStopIterationObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *name;
} PyNameErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *obj;
    PyObject *name;
} PyAttributeErrorObject;


typedef PyOSErrorObject PyEnvironmentErrorObject;






__attribute__ ((visibility ("default"))) void _PyErr_SetKeyError(PyObject *);
__attribute__ ((visibility ("default"))) _PyErr_StackItem* _PyErr_GetTopmostException(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) PyObject* _PyErr_GetHandledException(PyThreadState *);
__attribute__ ((visibility ("default"))) void _PyErr_SetHandledException(PyThreadState *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyErr_GetExcInfo(PyThreadState *, PyObject **, PyObject **, PyObject **);



__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void _PyErr_ChainExceptions(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyErr_ChainExceptions1(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * _PyErr_FormatFromCause(
    PyObject *exception,
    const char *format,
    ...
    );



__attribute__ ((visibility ("default"))) int _PyException_AddNote(
     PyObject *exc,
     PyObject *note);

__attribute__ ((visibility ("default"))) PyObject* PyUnstable_Exc_PrepReraiseStar(
     PyObject *orig,
     PyObject *excs);



int PySignal_SetWakeupFd(int fd);
__attribute__ ((visibility ("default"))) int _PyErr_CheckSignals(void);



__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset);

__attribute__ ((visibility ("default"))) void PyErr_RangedSyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset,
    int end_lineno,
    int end_col_offset);

__attribute__ ((visibility ("default"))) PyObject * PyErr_ProgramTextObject(
    PyObject *filename,
    int lineno);

__attribute__ ((visibility ("default"))) PyObject * _PyErr_ProgramDecodedTextObject(
    PyObject *filename,
    int lineno,
    const char* encoding);

__attribute__ ((visibility ("default"))) PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );

__attribute__ ((visibility ("default"))) void _PyErr_WriteUnraisableMsg(
    const char *err_msg,
    PyObject *obj);

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _Py_FatalErrorFunc(
    const char *func,
    const char *message);

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _Py_FatalErrorFormat(
    const char *func,
    const char *format,
    ...);

extern PyObject *_PyErr_SetImportErrorWithNameFrom(
        PyObject *,
        PyObject *,
        PyObject *,
        PyObject *);
# 331 "/data/data/com.termux/files/usr/include/python3.12/pyerrors.h" 2




}
# 55 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/longobject.h" 1



extern "C" {
# 16 "/data/data/com.termux/files/usr/include/python3.12/longobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromLong(long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnsignedLong(unsigned long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromSize_t(size_t);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromSsize_t(Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromDouble(double);
__attribute__ ((visibility ("default"))) long PyLong_AsLong(PyObject *);
__attribute__ ((visibility ("default"))) long PyLong_AsLongAndOverflow(PyObject *, int *);
__attribute__ ((visibility ("default"))) Py_ssize_t PyLong_AsSsize_t(PyObject *);
__attribute__ ((visibility ("default"))) size_t PyLong_AsSize_t(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long PyLong_AsUnsignedLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long PyLong_AsUnsignedLongMask(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyLong_GetInfo(void);
# 80 "/data/data/com.termux/files/usr/include/python3.12/longobject.h"
__attribute__ ((visibility ("default"))) double PyLong_AsDouble(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromVoidPtr(void *);
__attribute__ ((visibility ("default"))) void * PyLong_AsVoidPtr(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromLongLong(long long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
__attribute__ ((visibility ("default"))) long long PyLong_AsLongLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
__attribute__ ((visibility ("default"))) long long PyLong_AsLongLongAndOverflow(PyObject *, int *);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromString(const char *, char **, int);




__attribute__ ((visibility ("default"))) unsigned long PyOS_strtoul(const char *, char **, int);
__attribute__ ((visibility ("default"))) long PyOS_strtol(const char *, char **, int);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/longobject.h" 1




__attribute__ ((visibility ("default"))) int _PyLong_AsInt(PyObject *);

__attribute__ ((visibility ("default"))) int _PyLong_UnsignedShort_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedInt_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedLong_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedLongLong_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_Size_t_Converter(PyObject *, void *);







__attribute__ ((visibility ("default"))) double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);
__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromBytes(const char *, Py_ssize_t, int);





__attribute__ ((visibility ("default"))) int _PyLong_Sign(PyObject *v);
# 37 "/data/data/com.termux/files/usr/include/python3.12/cpython/longobject.h"
__attribute__ ((visibility ("default"))) size_t _PyLong_NumBits(PyObject *v);







__attribute__ ((visibility ("default"))) PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
# 60 "/data/data/com.termux/files/usr/include/python3.12/cpython/longobject.h"
__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
# 83 "/data/data/com.termux/files/usr/include/python3.12/cpython/longobject.h"
__attribute__ ((visibility ("default"))) int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);



__attribute__ ((visibility ("default"))) PyObject * _PyLong_Format(PyObject *obj, int base);


__attribute__ ((visibility ("default"))) PyObject * _PyLong_GCD(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyLong_Rshift(PyObject *, size_t);
__attribute__ ((visibility ("default"))) PyObject * _PyLong_Lshift(PyObject *, size_t);


__attribute__ ((visibility ("default"))) int PyUnstable_Long_IsCompact(const PyLongObject* op);
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnstable_Long_CompactValue(const PyLongObject* op);
# 102 "/data/data/com.termux/files/usr/include/python3.12/longobject.h" 2




}
# 56 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h" 1




extern "C" {
# 43 "/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h"
typedef uint32_t digit;
typedef int32_t sdigit;
typedef uint64_t twodigits;
typedef int64_t stwodigits;
# 82 "/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h"
typedef struct _PyLongValue {
    uintptr_t lv_tag;
    digit ob_digit[1];
} _PyLongValue;

struct _longobject {
    PyObject ob_base;
    _PyLongValue long_value;
};

__attribute__ ((visibility ("default"))) PyLongObject * _PyLong_New(Py_ssize_t);


__attribute__ ((visibility ("default"))) PyObject * _PyLong_Copy(PyLongObject *src);

__attribute__ ((visibility ("default"))) PyLongObject *
_PyLong_FromDigits(int negative, Py_ssize_t digit_count, digit *digits);
# 108 "/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h"
static inline int
_PyLong_IsCompact(const PyLongObject* op) {
    ((PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h", 110, __PRETTY_FUNCTION__, "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"));
    return op->long_value.lv_tag < (2 << 3);
}



static inline Py_ssize_t
_PyLong_CompactValue(const PyLongObject *op)
{
    Py_ssize_t sign;
    ((PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h", 120, __PRETTY_FUNCTION__, "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"));
    ((_PyLong_IsCompact(op)) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/longintrepr.h", 121, __PRETTY_FUNCTION__, "PyUnstable_Long_IsCompact(op)"));
    sign = 1 - (op->long_value.lv_tag & 3);
    return sign * (Py_ssize_t)op->long_value.ob_digit[0];
}





}
# 57 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/boolobject.h" 1





extern "C" {
# 17 "/data/data/com.termux/files/usr/include/python3.12/boolobject.h"
extern __attribute__ ((visibility ("default"))) PyLongObject _Py_FalseStruct;
extern __attribute__ ((visibility ("default"))) PyLongObject _Py_TrueStruct;






__attribute__ ((visibility ("default"))) int Py_IsTrue(PyObject *x);



__attribute__ ((visibility ("default"))) int Py_IsFalse(PyObject *x);







__attribute__ ((visibility ("default"))) PyObject * PyBool_FromLong(long);


}
# 58 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/floatobject.h" 1
# 11 "/data/data/com.termux/files/usr/include/python3.12/floatobject.h"
extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyFloat_Type;
# 31 "/data/data/com.termux/files/usr/include/python3.12/floatobject.h"
__attribute__ ((visibility ("default"))) double PyFloat_GetMax(void);
__attribute__ ((visibility ("default"))) double PyFloat_GetMin(void);
__attribute__ ((visibility ("default"))) PyObject* PyFloat_GetInfo(void);


__attribute__ ((visibility ("default"))) PyObject* PyFloat_FromString(PyObject*);


__attribute__ ((visibility ("default"))) PyObject* PyFloat_FromDouble(double);



__attribute__ ((visibility ("default"))) double PyFloat_AsDouble(PyObject*);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/floatobject.h" 1




typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;






static inline double PyFloat_AS_DOUBLE(PyObject *op) {
    return (((PyObject_TypeCheck(((PyObject*)((op))), (&PyFloat_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/floatobject.h", 16, __PRETTY_FUNCTION__, "PyFloat_Check(op)")), ((PyFloatObject*)(op)))->ob_fval;
}



__attribute__ ((visibility ("default"))) int PyFloat_Pack2(double x, char *p, int le);
__attribute__ ((visibility ("default"))) int PyFloat_Pack4(double x, char *p, int le);
__attribute__ ((visibility ("default"))) int PyFloat_Pack8(double x, char *p, int le);

__attribute__ ((visibility ("default"))) double PyFloat_Unpack2(const char *p, int le);
__attribute__ ((visibility ("default"))) double PyFloat_Unpack4(const char *p, int le);
__attribute__ ((visibility ("default"))) double PyFloat_Unpack8(const char *p, int le);
# 48 "/data/data/com.termux/files/usr/include/python3.12/floatobject.h" 2




}
# 59 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/complexobject.h" 1





extern "C" {




extern __attribute__ ((visibility ("default"))) PyTypeObject PyComplex_Type;




__attribute__ ((visibility ("default"))) PyObject * PyComplex_FromDoubles(double real, double imag);

__attribute__ ((visibility ("default"))) double PyComplex_RealAsDouble(PyObject *op);
__attribute__ ((visibility ("default"))) double PyComplex_ImagAsDouble(PyObject *op);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/complexobject.h" 1




typedef struct {
    double real;
    double imag;
} Py_complex;



__attribute__ ((visibility ("default"))) Py_complex _Py_c_sum(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_diff(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_neg(Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_prod(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_quot(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_pow(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) double _Py_c_abs(Py_complex);







typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;

__attribute__ ((visibility ("default"))) PyObject * PyComplex_FromCComplex(Py_complex);

__attribute__ ((visibility ("default"))) Py_complex PyComplex_AsCComplex(PyObject *op);
# 24 "/data/data/com.termux/files/usr/include/python3.12/complexobject.h" 2




}
# 60 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/rangeobject.h" 1






extern "C" {
# 18 "/data/data/com.termux/files/usr/include/python3.12/rangeobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyRange_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyRangeIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyLongRangeIter_Type;




}
# 61 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/memoryobject.h" 1





extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyMemoryView_Type;



__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromObject(PyObject *base);

__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);


__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromBuffer(const Py_buffer *info);

__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/memoryobject.h" 1




extern __attribute__ ((visibility ("default"))) PyTypeObject _PyManagedBuffer_Type;







typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
# 29 "/data/data/com.termux/files/usr/include/python3.12/cpython/memoryobject.h"
typedef struct {
    PyVarObject ob_base;
    _PyManagedBufferObject *mbuf;
    Py_hash_t hash;
    int flags;
    Py_ssize_t exports;
    Py_buffer view;
    PyObject *weakreflist;
    Py_ssize_t ob_array[1];
} PyMemoryViewObject;




static inline Py_buffer* PyMemoryView_GET_BUFFER(PyObject *op) {
    return (&((PyMemoryViewObject*)(op))->view);
}



static inline PyObject* PyMemoryView_GET_BASE(PyObject *op) {
    return ((PyMemoryViewObject*)(op))->view.obj;
}
# 28 "/data/data/com.termux/files/usr/include/python3.12/memoryobject.h" 2




}
# 62 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/tupleobject.h" 1





extern "C" {
# 23 "/data/data/com.termux/files/usr/include/python3.12/tupleobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyTuple_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyTupleIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyTuple_New(Py_ssize_t size);
__attribute__ ((visibility ("default"))) Py_ssize_t PyTuple_Size(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_Pack(Py_ssize_t, ...);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/tupleobject.h" 1




typedef struct {
    PyVarObject ob_base;



    PyObject *ob_item[1];
} PyTupleObject;

__attribute__ ((visibility ("default"))) int _PyTuple_Resize(PyObject **, Py_ssize_t);
__attribute__ ((visibility ("default"))) void _PyTuple_MaybeUntrack(PyObject *);







static inline Py_ssize_t PyTuple_GET_SIZE(PyObject *op) {
    PyTupleObject *tuple = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/tupleobject.h", 23, __PRETTY_FUNCTION__, "PyTuple_Check(op)")), ((PyTupleObject*)((op))));
    return Py_SIZE(((PyObject*)((tuple))));
}





static inline void
PyTuple_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyTupleObject *tuple = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/tupleobject.h", 33, __PRETTY_FUNCTION__, "PyTuple_Check(op)")), ((PyTupleObject*)((op))));
    tuple->ob_item[index] = value;
}



__attribute__ ((visibility ("default"))) void _PyTuple_DebugMallocStats(FILE *out);
# 40 "/data/data/com.termux/files/usr/include/python3.12/tupleobject.h" 2




}
# 63 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/listobject.h" 1
# 17 "/data/data/com.termux/files/usr/include/python3.12/listobject.h"
extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyList_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyListIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyListRevIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyList_New(Py_ssize_t size);
__attribute__ ((visibility ("default"))) Py_ssize_t PyList_Size(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Append(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);

__attribute__ ((visibility ("default"))) int PyList_Sort(PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Reverse(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyList_AsTuple(PyObject *);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/listobject.h" 1




typedef struct {
    PyVarObject ob_base;

    PyObject **ob_item;
# 21 "/data/data/com.termux/files/usr/include/python3.12/cpython/listobject.h"
    Py_ssize_t allocated;
} PyListObject;

__attribute__ ((visibility ("default"))) PyObject * _PyList_Extend(PyListObject *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyList_DebugMallocStats(FILE *out);







static inline Py_ssize_t PyList_GET_SIZE(PyObject *op) {
    PyListObject *list = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/listobject.h", 34, __PRETTY_FUNCTION__, "PyList_Check(op)")), ((PyListObject*)((op))));
    return Py_SIZE(((PyObject*)((list))));
}




static inline void
PyList_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyListObject *list = (((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/listobject.h", 43, __PRETTY_FUNCTION__, "PyList_Check(op)")), ((PyListObject*)((op))));
    list->ob_item[index] = value;
}
# 46 "/data/data/com.termux/files/usr/include/python3.12/listobject.h" 2




}
# 64 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/dictobject.h" 1



extern "C" {
# 15 "/data/data/com.termux/files/usr/include/python3.12/dictobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDict_Type;





__attribute__ ((visibility ("default"))) PyObject * PyDict_New(void);
__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyDict_DelItem(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) void PyDict_Clear(PyObject *mp);
__attribute__ ((visibility ("default"))) int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Keys(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Values(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Items(PyObject *mp);
__attribute__ ((visibility ("default"))) Py_ssize_t PyDict_Size(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Copy(PyObject *mp);
__attribute__ ((visibility ("default"))) int PyDict_Contains(PyObject *mp, PyObject *key);


__attribute__ ((visibility ("default"))) int PyDict_Update(PyObject *mp, PyObject *other);






__attribute__ ((visibility ("default"))) int PyDict_Merge(PyObject *mp,
                             PyObject *other,
                             int override);






__attribute__ ((visibility ("default"))) int PyDict_MergeFromSeq2(PyObject *d,
                                     PyObject *seq2,
                                     int override);

__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
__attribute__ ((visibility ("default"))) int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyDict_DelItemString(PyObject *dp, const char *key);

__attribute__ ((visibility ("default"))) PyObject * PyObject_GenericGetDict(PyObject *, void *);




extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictKeys_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictValues_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictItems_Type;
# 79 "/data/data/com.termux/files/usr/include/python3.12/dictobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterKey_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterValue_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterItem_Type;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterKey_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterItem_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterValue_Type;




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/dictobject.h" 1




typedef struct _dictkeysobject PyDictKeysObject;
typedef struct _dictvalues PyDictValues;




typedef struct {
    PyObject ob_base;


    Py_ssize_t ma_used;






    __attribute__((__deprecated__)) uint64_t ma_version_tag;


    PyDictKeysObject *ma_keys;






    PyDictValues *ma_values;
} PyDictObject;

__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItem_KnownHash(PyObject *mp, PyObject *key,
                                       Py_hash_t hash);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemWithError(PyObject *dp, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  _Py_Identifier *key);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemStringWithError(PyObject *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyDict_SetDefault(
    PyObject *mp, PyObject *key, PyObject *defaultobj);
__attribute__ ((visibility ("default"))) int _PyDict_SetItem_KnownHash(PyObject *mp, PyObject *key,
                                          PyObject *item, Py_hash_t hash);
__attribute__ ((visibility ("default"))) int _PyDict_DelItem_KnownHash(PyObject *mp, PyObject *key,
                                          Py_hash_t hash);
__attribute__ ((visibility ("default"))) int _PyDict_DelItemIf(PyObject *mp, PyObject *key,
                                  int (*predicate)(PyObject *value));
__attribute__ ((visibility ("default"))) int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);


static inline Py_ssize_t PyDict_GET_SIZE(PyObject *op) {
    PyDictObject *mp;
    ((PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 29)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/dictobject.h", 55, __PRETTY_FUNCTION__, "PyDict_Check(op)"));
    mp = ((PyDictObject*)(op));
    return mp->ma_used;
}


__attribute__ ((visibility ("default"))) int _PyDict_Contains_KnownHash(PyObject *, PyObject *, Py_hash_t);
__attribute__ ((visibility ("default"))) int _PyDict_ContainsId(PyObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_NewPresized(Py_ssize_t minused);
__attribute__ ((visibility ("default"))) void _PyDict_MaybeUntrack(PyObject *mp);
__attribute__ ((visibility ("default"))) int _PyDict_HasOnlyStringKeys(PyObject *mp);
__attribute__ ((visibility ("default"))) Py_ssize_t _PyDict_SizeOf(PyDictObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_Pop(PyObject *, PyObject *, PyObject *);







__attribute__ ((visibility ("default"))) int _PyDict_MergeEx(PyObject *mp, PyObject *other, int override);
__attribute__ ((visibility ("default"))) int _PyDict_SetItemId(PyObject *dp, _Py_Identifier *key, PyObject *item);

__attribute__ ((visibility ("default"))) int _PyDict_DelItemId(PyObject *mp, _Py_Identifier *key);
__attribute__ ((visibility ("default"))) void _PyDict_DebugMallocStats(FILE *out);



typedef struct {
    PyObject ob_base;
    PyDictObject *dv_dict;
} _PyDictViewObject;

__attribute__ ((visibility ("default"))) PyObject * _PyDictView_New(PyObject *, PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyDictView_Intersect(PyObject* self, PyObject *other);
# 101 "/data/data/com.termux/files/usr/include/python3.12/cpython/dictobject.h"
typedef enum {

    PyDict_EVENT_ADDED, PyDict_EVENT_MODIFIED, PyDict_EVENT_DELETED, PyDict_EVENT_CLONED, PyDict_EVENT_CLEARED, PyDict_EVENT_DEALLOCATED,

} PyDict_WatchEvent;




typedef int(*PyDict_WatchCallback)(PyDict_WatchEvent event, PyObject* dict, PyObject* key, PyObject* new_value);


__attribute__ ((visibility ("default"))) int PyDict_AddWatcher(PyDict_WatchCallback callback);
__attribute__ ((visibility ("default"))) int PyDict_ClearWatcher(int watcher_id);


__attribute__ ((visibility ("default"))) int PyDict_Watch(int watcher_id, PyObject* dict);
__attribute__ ((visibility ("default"))) int PyDict_Unwatch(int watcher_id, PyObject* dict);
# 91 "/data/data/com.termux/files/usr/include/python3.12/dictobject.h" 2




}
# 65 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/odictobject.h" 1



extern "C" {
# 13 "/data/data/com.termux/files/usr/include/python3.12/cpython/odictobject.h"
typedef struct _odictobject PyODictObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyODict_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictKeys_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictItems_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictValues_Type;





__attribute__ ((visibility ("default"))) PyObject * PyODict_New(void);
__attribute__ ((visibility ("default"))) int PyODict_SetItem(PyObject *od, PyObject *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyODict_DelItem(PyObject *od, PyObject *key);
# 41 "/data/data/com.termux/files/usr/include/python3.12/cpython/odictobject.h"
}
# 66 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/enumobject.h" 1






extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyEnum_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyReversed_Type;


}
# 67 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/setobject.h" 1





extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PySet_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyFrozenSet_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PySetIter_Type;

__attribute__ ((visibility ("default"))) PyObject * PySet_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFrozenSet_New(PyObject *);

__attribute__ ((visibility ("default"))) int PySet_Add(PyObject *set, PyObject *key);
__attribute__ ((visibility ("default"))) int PySet_Clear(PyObject *set);
__attribute__ ((visibility ("default"))) int PySet_Contains(PyObject *anyset, PyObject *key);
__attribute__ ((visibility ("default"))) int PySet_Discard(PyObject *set, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * PySet_Pop(PyObject *set);
__attribute__ ((visibility ("default"))) Py_ssize_t PySet_Size(PyObject *anyset);
# 42 "/data/data/com.termux/files/usr/include/python3.12/setobject.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/setobject.h" 1
# 20 "/data/data/com.termux/files/usr/include/python3.12/cpython/setobject.h"
typedef struct {
    PyObject *key;
    Py_hash_t hash;
} setentry;
# 36 "/data/data/com.termux/files/usr/include/python3.12/cpython/setobject.h"
typedef struct {
    PyObject ob_base;

    Py_ssize_t fill;
    Py_ssize_t used;





    Py_ssize_t mask;






    setentry *table;
    Py_hash_t hash;
    Py_ssize_t finger;

    setentry smalltable[8];
    PyObject *weakreflist;
} PySetObject;




static inline Py_ssize_t PySet_GET_SIZE(PyObject *so) {
    return ((((Py_IS_TYPE(((PyObject*)(((so)))), (&PySet_Type)) || Py_IS_TYPE(((PyObject*)(((so)))), (&PyFrozenSet_Type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PySet_Type) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PyFrozenSet_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/setobject.h", 65, __PRETTY_FUNCTION__, "PyAnySet_Check(so)")), ((PySetObject*)(so)))->used;
}


extern __attribute__ ((visibility ("default"))) PyObject * _PySet_Dummy;

__attribute__ ((visibility ("default"))) int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);
__attribute__ ((visibility ("default"))) int _PySet_Update(PyObject *set, PyObject *iterable);
# 43 "/data/data/com.termux/files/usr/include/python3.12/setobject.h" 2




}
# 68 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/methodobject.h" 1






extern "C" {






extern __attribute__ ((visibility ("default"))) PyTypeObject PyCFunction_Type;




typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*_PyCFunctionFast) (PyObject *, PyObject *const *, Py_ssize_t);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*_PyCFunctionFastWithKeywords) (PyObject *,
                                                   PyObject *const *, Py_ssize_t,
                                                   PyObject *);
typedef PyObject *(*PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *,
                               size_t, PyObject *);
# 48 "/data/data/com.termux/files/usr/include/python3.12/methodobject.h"
__attribute__ ((visibility ("default"))) PyCFunction PyCFunction_GetFunction(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyCFunction_GetSelf(PyObject *);
__attribute__ ((visibility ("default"))) int PyCFunction_GetFlags(PyObject *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};




__attribute__ ((visibility ("default"))) PyObject * PyCFunction_New(PyMethodDef *, PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyCMethod_New(PyMethodDef *, PyObject *,
                                     PyObject *, PyTypeObject *);
# 125 "/data/data/com.termux/files/usr/include/python3.12/methodobject.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h" 1






typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
    PyObject *m_weakreflist;
    vectorcallfunc vectorcall;
} PyCFunctionObject;
# 23 "/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h"
typedef struct {
    PyCFunctionObject func;
    PyTypeObject *mm_class;
} PyCMethodObject;





extern __attribute__ ((visibility ("default"))) PyTypeObject PyCMethod_Type;







static inline PyCFunction PyCFunction_GET_FUNCTION(PyObject *func) {
    return (((PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h", 41, __PRETTY_FUNCTION__, "PyCFunction_Check(func)")), ((PyCFunctionObject*)((func))))->m_ml->ml_meth;
}


static inline PyObject* PyCFunction_GET_SELF(PyObject *func_obj) {
    PyCFunctionObject *func = (((PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h", 46, __PRETTY_FUNCTION__, "PyCFunction_Check(func_obj)")), ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0020) {
        return nullptr;
    }
    return func->m_self;
}


static inline int PyCFunction_GET_FLAGS(PyObject *func) {
    return (((PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h", 55, __PRETTY_FUNCTION__, "PyCFunction_Check(func)")), ((PyCFunctionObject*)((func))))->m_ml->ml_flags;
}


static inline PyTypeObject* PyCFunction_GET_CLASS(PyObject *func_obj) {
    PyCFunctionObject *func = (((PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h", 60, __PRETTY_FUNCTION__, "PyCFunction_Check(func_obj)")), ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0200) {
        return (((PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCMethod_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/methodobject.h", 62, __PRETTY_FUNCTION__, "PyCMethod_Check(func)")), ((PyCMethodObject*)((func))))->mm_class;
    }
    return nullptr;
}
# 126 "/data/data/com.termux/files/usr/include/python3.12/methodobject.h" 2




}
# 69 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/moduleobject.h" 1






extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyModule_Type;





__attribute__ ((visibility ("default"))) PyObject * PyModule_NewObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) PyObject * PyModule_New(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyModule_GetDict(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyModule_GetNameObject(PyObject *);

__attribute__ ((visibility ("default"))) const char * PyModule_GetName(PyObject *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) const char * PyModule_GetFilename(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyModule_GetFilenameObject(PyObject *);

__attribute__ ((visibility ("default"))) void _PyModule_Clear(PyObject *);
__attribute__ ((visibility ("default"))) void _PyModule_ClearDict(PyObject *);
__attribute__ ((visibility ("default"))) int _PyModuleSpec_IsInitializing(PyObject *);

__attribute__ ((visibility ("default"))) PyModuleDef* PyModule_GetDef(PyObject*);
__attribute__ ((visibility ("default"))) void* PyModule_GetState(PyObject*);



__attribute__ ((visibility ("default"))) PyObject * PyModuleDef_Init(PyModuleDef*);
extern __attribute__ ((visibility ("default"))) PyTypeObject PyModuleDef_Type;


typedef struct PyModuleDef_Base {
  PyObject ob_base;






  PyObject* (*m_init)(void);




  Py_ssize_t m_index;




  PyObject* m_copy;
} PyModuleDef_Base;
# 74 "/data/data/com.termux/files/usr/include/python3.12/moduleobject.h"
struct PyModuleDef_Slot {
    int slot;
    void *value;
};
# 98 "/data/data/com.termux/files/usr/include/python3.12/moduleobject.h"
struct PyModuleDef {
  PyModuleDef_Base m_base;
  const char* m_name;
  const char* m_doc;
  Py_ssize_t m_size;
  PyMethodDef *m_methods;
  PyModuleDef_Slot *m_slots;
  traverseproc m_traverse;
  inquiry m_clear;
  freefunc m_free;
};
# 117 "/data/data/com.termux/files/usr/include/python3.12/moduleobject.h"
}
# 70 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h" 1






extern "C" {
# 21 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
typedef struct {
    PyObject *fc_globals; PyObject *fc_builtins; PyObject *fc_name; PyObject *fc_qualname; PyObject *fc_code; PyObject *fc_defaults; PyObject *fc_kwdefaults; PyObject *fc_closure;
} PyFrameConstructor;
# 36 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *func_globals; PyObject *func_builtins; PyObject *func_name; PyObject *func_qualname; PyObject *func_code; PyObject *func_defaults; PyObject *func_kwdefaults; PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;
    PyObject *func_annotations;
    PyObject *func_typeparams;
    vectorcallfunc vectorcall;
# 54 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
    uint32_t func_version;






} PyFunctionObject;



extern __attribute__ ((visibility ("default"))) PyTypeObject PyFunction_Type;



__attribute__ ((visibility ("default"))) PyObject * PyFunction_New(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetCode(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetGlobals(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetModule(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetDefaults(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetDefaults(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void PyFunction_SetVectorcall(PyFunctionObject *, vectorcallfunc);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetKwDefaults(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetKwDefaults(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetClosure(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetClosure(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetAnnotations(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetAnnotations(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyFunction_Vectorcall(
    PyObject *func,
    PyObject *const *stack,
    size_t nargsf,
    PyObject *kwnames);






static inline PyObject* PyFunction_GET_CODE(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 96, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_code;
}


static inline PyObject* PyFunction_GET_GLOBALS(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 101, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_globals;
}


static inline PyObject* PyFunction_GET_MODULE(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 106, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_module;
}


static inline PyObject* PyFunction_GET_DEFAULTS(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 111, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_defaults;
}


static inline PyObject* PyFunction_GET_KW_DEFAULTS(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 116, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_kwdefaults;
}


static inline PyObject* PyFunction_GET_CLOSURE(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 121, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_closure;
}


static inline PyObject* PyFunction_GET_ANNOTATIONS(PyObject *func) {
    return (((Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h", 126, __PRETTY_FUNCTION__, "PyFunction_Check(func)")), ((PyFunctionObject*)(func)))->func_annotations;
}



extern __attribute__ ((visibility ("default"))) PyTypeObject PyClassMethod_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyStaticMethod_Type;

__attribute__ ((visibility ("default"))) PyObject * PyClassMethod_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyStaticMethod_New(PyObject *);
# 144 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
typedef enum {

    PyFunction_EVENT_CREATE, PyFunction_EVENT_DESTROY, PyFunction_EVENT_MODIFY_CODE, PyFunction_EVENT_MODIFY_DEFAULTS, PyFunction_EVENT_MODIFY_KWDEFAULTS,

} PyFunction_WatchEvent;
# 165 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
typedef int (*PyFunction_WatchCallback)(
  PyFunction_WatchEvent event,
  PyFunctionObject *func,
  PyObject *new_value);
# 177 "/data/data/com.termux/files/usr/include/python3.12/cpython/funcobject.h"
__attribute__ ((visibility ("default"))) int PyFunction_AddWatcher(PyFunction_WatchCallback callback);






__attribute__ ((visibility ("default"))) int PyFunction_ClearWatcher(int watcher_id);


}
# 71 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/classobject.h" 1








extern "C" {


typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
    vectorcallfunc vectorcall;
} PyMethodObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyMethod_Type;



__attribute__ ((visibility ("default"))) PyObject * PyMethod_New(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyMethod_Function(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyMethod_Self(PyObject *);






static inline PyObject* PyMethod_GET_FUNCTION(PyObject *meth) {
    return (((Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/classobject.h", 35, __PRETTY_FUNCTION__, "PyMethod_Check(meth)")), ((PyMethodObject*)(meth)))->im_func;
}


static inline PyObject* PyMethod_GET_SELF(PyObject *meth) {
    return (((Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/classobject.h", 40, __PRETTY_FUNCTION__, "PyMethod_Check(meth)")), ((PyMethodObject*)(meth)))->im_self;
}


typedef struct {
    PyObject ob_base;
    PyObject *func;
} PyInstanceMethodObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyInstanceMethod_Type;



__attribute__ ((visibility ("default"))) PyObject * PyInstanceMethod_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyInstanceMethod_Function(PyObject *);







static inline PyObject* PyInstanceMethod_GET_FUNCTION(PyObject *meth) {
    return (((Py_IS_TYPE(((PyObject*)(((meth)))), (&PyInstanceMethod_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/classobject.h", 63, __PRETTY_FUNCTION__, "PyInstanceMethod_Check(meth)")), ((PyInstanceMethodObject*)(meth)))->func;
}



}
# 72 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/fileobject.h" 1





extern "C" {




__attribute__ ((visibility ("default"))) PyObject * PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
__attribute__ ((visibility ("default"))) PyObject * PyFile_GetLine(PyObject *, int);
__attribute__ ((visibility ("default"))) int PyFile_WriteObject(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int PyFile_WriteString(const char *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_AsFileDescriptor(PyObject *);




__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) const char * Py_FileSystemDefaultEncoding;

__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) const char * Py_FileSystemDefaultEncodeErrors;

__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_HasFileSystemDefaultEncoding;


__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_UTF8Mode;
# 42 "/data/data/com.termux/files/usr/include/python3.12/fileobject.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/fileobject.h" 1




__attribute__ ((visibility ("default"))) char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
__attribute__ ((visibility ("default"))) char * _Py_UniversalNewlineFgetsWithSize(char *, int, FILE*, PyObject *, size_t*);



__attribute__ ((visibility ("default"))) PyObject * PyFile_NewStdPrinter(int);
extern __attribute__ ((visibility ("default"))) PyTypeObject PyStdPrinter_Type;

typedef PyObject * (*Py_OpenCodeHookFunction)(PyObject *, void *);

__attribute__ ((visibility ("default"))) PyObject * PyFile_OpenCode(const char *utf8path);
__attribute__ ((visibility ("default"))) PyObject * PyFile_OpenCodeObject(PyObject *path);
__attribute__ ((visibility ("default"))) int PyFile_SetOpenCodeHook(Py_OpenCodeHookFunction hook, void *userData);

__attribute__ ((visibility ("default"))) int _PyLong_FileDescriptor_Converter(PyObject *, void *);
# 43 "/data/data/com.termux/files/usr/include/python3.12/fileobject.h" 2




}
# 73 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pycapsule.h" 1
# 18 "/data/data/com.termux/files/usr/include/python3.12/pycapsule.h"
extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

__attribute__ ((visibility ("default"))) void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

__attribute__ ((visibility ("default"))) const char * PyCapsule_GetName(PyObject *capsule);

__attribute__ ((visibility ("default"))) void * PyCapsule_GetContext(PyObject *capsule);

__attribute__ ((visibility ("default"))) int PyCapsule_IsValid(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

__attribute__ ((visibility ("default"))) int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

__attribute__ ((visibility ("default"))) int PyCapsule_SetName(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) int PyCapsule_SetContext(PyObject *capsule, void *context);

__attribute__ ((visibility ("default"))) void * PyCapsule_Import(
    const char *name,
    int no_block);



}
# 74 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h" 1







extern "C" {
# 20 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
typedef struct _Py_LocalMonitors {

    uint8_t tools[15];
} _Py_LocalMonitors;

typedef struct _Py_GlobalMonitors {
    uint8_t tools[15];
} _Py_GlobalMonitors;
# 38 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
typedef union {
    uint16_t cache;
    struct {
        uint8_t code;
        uint8_t arg;
    } op;
} _Py_CODEUNIT;






static inline _Py_CODEUNIT
_py_make_codeunit(uint8_t opcode, uint8_t oparg)
{

    _Py_CODEUNIT word;
    word.op.code = opcode;
    word.op.arg = oparg;
    return word;
}

static inline void
_py_set_opcode(_Py_CODEUNIT *word, uint8_t opcode)
{
    word->op.code = opcode;
}





typedef struct {
    PyObject *_co_code;
    PyObject *_co_varnames;
    PyObject *_co_cellvars;
    PyObject *_co_freevars;
} _PyCoCached;




typedef struct {
    uint8_t original_opcode;
    int8_t line_delta;
} _PyCoLineInstrumentationData;




typedef struct {

    _Py_LocalMonitors local_monitors;

    _Py_LocalMonitors active_monitors;

    uint8_t *tools;

    _PyCoLineInstrumentationData *lines;

    uint8_t *line_tools;


    uint8_t *per_instruction_opcodes;

    uint8_t *per_instruction_tools;
} _PyCoMonitoringData;
# 175 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
struct PyCodeObject { PyVarObject ob_base; PyObject *co_consts; PyObject *co_names; PyObject *co_exceptiontable; int co_flags; int co_argcount; int co_posonlyargcount; int co_kwonlyargcount; int co_stacksize; int co_firstlineno; int co_nlocalsplus; int co_framesize; int co_nlocals; int co_ncellvars; int co_nfreevars; uint32_t co_version; PyObject *co_localsplusnames; PyObject *co_localspluskinds; PyObject *co_filename; PyObject *co_name; PyObject *co_qualname; PyObject *co_linetable; PyObject *co_weakreflist; _PyCoCached *_co_cached; uint64_t _co_instrumentation_version; _PyCoMonitoringData *_co_monitoring; int _co_firsttraceable; void *co_extra; char co_code_adaptive[(1)]; };
# 212 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCode_Type;



static inline Py_ssize_t PyCode_GetNumFree(PyCodeObject *op) {
    ((Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/code.h", 217, __PRETTY_FUNCTION__, "PyCode_Check(op)"));
    return op->co_nfreevars;
}

static inline int PyCode_GetFirstFree(PyCodeObject *op) {
    ((Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/code.h", 222, __PRETTY_FUNCTION__, "PyCode_Check(op)"));
    return op->co_nlocalsplus - op->co_nfreevars;
}





__attribute__ ((visibility ("default"))) PyCodeObject * PyUnstable_Code_New(
        int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);

__attribute__ ((visibility ("default"))) PyCodeObject * PyUnstable_Code_NewWithPosOnlyArgs(
        int, int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);


__attribute__((__deprecated__)) static inline PyCodeObject *
PyCode_New(
        int a, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_New(
        a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}
__attribute__((__deprecated__)) static inline PyCodeObject *
PyCode_NewWithPosOnlyArgs(
        int a, int poac, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_NewWithPosOnlyArgs(
        a, poac, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}


__attribute__ ((visibility ("default"))) PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




__attribute__ ((visibility ("default"))) int PyCode_Addr2Line(PyCodeObject *, int);

__attribute__ ((visibility ("default"))) int PyCode_Addr2Location(PyCodeObject *, int, int *, int *, int *, int *);





typedef enum {

    PY_CODE_EVENT_CREATE, PY_CODE_EVENT_DESTROY,

} PyCodeEvent;
# 295 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
typedef int (*PyCode_WatchCallback)(
  PyCodeEvent event,
  PyCodeObject* co);
# 306 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
__attribute__ ((visibility ("default"))) int PyCode_AddWatcher(PyCode_WatchCallback callback);






__attribute__ ((visibility ("default"))) int PyCode_ClearWatcher(int watcher_id);


struct _opaque {
    int computed_line;
    const uint8_t *lo_next;
    const uint8_t *limit;
};

typedef struct _line_offsets {
    int ar_start;
    int ar_end;
    int ar_line;
    struct _opaque opaque;
} PyCodeAddressRange;




__attribute__ ((visibility ("default"))) int _PyCode_CheckLineNumber(int lasti, PyCodeAddressRange *bounds);
# 341 "/data/data/com.termux/files/usr/include/python3.12/cpython/code.h"
__attribute__ ((visibility ("default"))) PyObject* _PyCode_ConstantKey(PyObject *obj);

__attribute__ ((visibility ("default"))) PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lnotab);

__attribute__ ((visibility ("default"))) int PyUnstable_Code_GetExtra(
    PyObject *code, Py_ssize_t index, void **extra);
__attribute__ ((visibility ("default"))) int PyUnstable_Code_SetExtra(
    PyObject *code, Py_ssize_t index, void *extra);

__attribute__((__deprecated__)) static inline int
_PyCode_GetExtra(PyObject *code, Py_ssize_t index, void **extra)
{
    return PyUnstable_Code_GetExtra(code, index, extra);
}
__attribute__((__deprecated__)) static inline int
_PyCode_SetExtra(PyObject *code, Py_ssize_t index, void *extra)
{
    return PyUnstable_Code_SetExtra(code, index, extra);
}



__attribute__ ((visibility ("default"))) PyObject * PyCode_GetCode(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetVarnames(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetCellvars(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetFreevars(PyCodeObject *code);

typedef enum _PyCodeLocationInfoKind {

    PY_CODE_LOCATION_INFO_SHORT0 = 0,

    PY_CODE_LOCATION_INFO_ONE_LINE0 = 10,
    PY_CODE_LOCATION_INFO_ONE_LINE1 = 11,
    PY_CODE_LOCATION_INFO_ONE_LINE2 = 12,

    PY_CODE_LOCATION_INFO_NO_COLUMNS = 13,
    PY_CODE_LOCATION_INFO_LONG = 14,
    PY_CODE_LOCATION_INFO_NONE = 15
} _PyCodeLocationInfoKind;


}
# 75 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pyframe.h" 1








extern "C" {



__attribute__ ((visibility ("default"))) int PyFrame_GetLineNumber(PyFrameObject *);

__attribute__ ((visibility ("default"))) PyCodeObject * PyFrame_GetCode(PyFrameObject *frame);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyframe.h" 1




extern __attribute__ ((visibility ("default"))) PyTypeObject PyFrame_Type;



__attribute__ ((visibility ("default"))) PyFrameObject * PyFrame_GetBack(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetLocals(PyFrameObject *frame);

__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetGlobals(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetBuiltins(PyFrameObject *frame);

__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetGenerator(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) int PyFrame_GetLasti(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject* PyFrame_GetVar(PyFrameObject *frame, PyObject *name);
__attribute__ ((visibility ("default"))) PyObject* PyFrame_GetVarString(PyFrameObject *frame, const char *name);




struct _PyInterpreterFrame;



__attribute__ ((visibility ("default"))) PyObject * PyUnstable_InterpreterFrame_GetCode(struct _PyInterpreterFrame *frame);



__attribute__ ((visibility ("default"))) int PyUnstable_InterpreterFrame_GetLasti(struct _PyInterpreterFrame *frame);



__attribute__ ((visibility ("default"))) int PyUnstable_InterpreterFrame_GetLine(struct _PyInterpreterFrame *frame);
# 20 "/data/data/com.termux/files/usr/include/python3.12/pyframe.h" 2




}
# 76 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/traceback.h" 1



extern "C" {




__attribute__ ((visibility ("default"))) int PyTraceBack_Here(PyFrameObject *);
__attribute__ ((visibility ("default"))) int PyTraceBack_Print(PyObject *, PyObject *);


extern __attribute__ ((visibility ("default"))) PyTypeObject PyTraceBack_Type;





# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/traceback.h" 1




typedef struct _traceback PyTracebackObject;

struct _traceback {
    PyObject ob_base;
    PyTracebackObject *tb_next;
    PyFrameObject *tb_frame;
    int tb_lasti;
    int tb_lineno;
};

__attribute__ ((visibility ("default"))) int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int, int *, PyObject **);
__attribute__ ((visibility ("default"))) void _PyTraceback_Add(const char *, const char *, int);
# 20 "/data/data/com.termux/files/usr/include/python3.12/traceback.h" 2




}
# 77 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/sliceobject.h" 1



extern "C" {




extern __attribute__ ((visibility ("default"))) PyObject _Py_EllipsisObject;
# 22 "/data/data/com.termux/files/usr/include/python3.12/sliceobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;


extern __attribute__ ((visibility ("default"))) PyTypeObject PySlice_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyEllipsis_Type;



__attribute__ ((visibility ("default"))) PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);

__attribute__ ((visibility ("default"))) PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
__attribute__ ((visibility ("default"))) int _PySlice_GetLongIndices(PySliceObject *self, PyObject *length,
                                 PyObject **start_ptr, PyObject **stop_ptr,
                                 PyObject **step_ptr);

__attribute__ ((visibility ("default"))) int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
                                     Py_ssize_t *start, Py_ssize_t *stop,
                                     Py_ssize_t *step,
                                     Py_ssize_t *slicelength);







__attribute__ ((visibility ("default"))) int PySlice_Unpack(PyObject *slice,
                               Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__ ((visibility ("default"))) Py_ssize_t PySlice_AdjustIndices(Py_ssize_t length,
                                             Py_ssize_t *start, Py_ssize_t *stop,
                                             Py_ssize_t step);



}
# 78 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/cellobject.h" 1






extern "C" {


typedef struct {
    PyObject ob_base;

    PyObject *ob_ref;
} PyCellObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyCell_Type;



__attribute__ ((visibility ("default"))) PyObject * PyCell_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyCell_Get(PyObject *);
__attribute__ ((visibility ("default"))) int PyCell_Set(PyObject *, PyObject *);

static inline PyObject* PyCell_GET(PyObject *op) {
    PyCellObject *cell;
    ((Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/cellobject.h", 26, __PRETTY_FUNCTION__, "PyCell_Check(op)"));
    cell = ((PyCellObject*)(op));
    return cell->ob_ref;
}


static inline void PyCell_SET(PyObject *op, PyObject *value) {
    PyCellObject *cell;
    ((Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/cellobject.h", 34, __PRETTY_FUNCTION__, "PyCell_Check(op)"));
    cell = ((PyCellObject*)(op));
    cell->ob_ref = value;
}



}
# 79 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/iterobject.h" 1




extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PySeqIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCallIter_Type;






__attribute__ ((visibility ("default"))) PyObject * PySeqIter_New(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyCallIter_New(PyObject *, PyObject *);


}
# 80 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/genobject.h" 1






extern "C" {
# 31 "/data/data/com.termux/files/usr/include/python3.12/cpython/genobject.h"
typedef struct {

    PyObject ob_base; PyObject *gi_weakreflist; PyObject *gi_name; PyObject *gi_qualname; _PyErr_StackItem gi_exc_state; PyObject *gi_origin_or_finalizer; char gi_hooks_inited; char gi_closed; char gi_running_async; int8_t gi_frame_state; PyObject *gi_iframe[1];
} PyGenObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyGen_Type;




__attribute__ ((visibility ("default"))) PyObject * PyGen_New(PyFrameObject *);
__attribute__ ((visibility ("default"))) PyObject * PyGen_NewWithQualName(PyFrameObject *,
    PyObject *name, PyObject *qualname);
__attribute__ ((visibility ("default"))) int _PyGen_SetStopIterationValue(PyObject *);
__attribute__ ((visibility ("default"))) int _PyGen_FetchStopIterationValue(PyObject **);
__attribute__ ((visibility ("default"))) void _PyGen_Finalize(PyObject *self);
__attribute__ ((visibility ("default"))) PyCodeObject * PyGen_GetCode(PyGenObject *gen);




typedef struct {
    PyObject ob_base; PyObject *cr_weakreflist; PyObject *cr_name; PyObject *cr_qualname; _PyErr_StackItem cr_exc_state; PyObject *cr_origin_or_finalizer; char cr_hooks_inited; char cr_closed; char cr_running_async; int8_t cr_frame_state; PyObject *cr_iframe[1];
} PyCoroObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyCoro_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyCoroWrapper_Type;


__attribute__ ((visibility ("default"))) PyObject * PyCoro_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);




typedef struct {
    PyObject ob_base; PyObject *ag_weakreflist; PyObject *ag_name; PyObject *ag_qualname; _PyErr_StackItem ag_exc_state; PyObject *ag_origin_or_finalizer; char ag_hooks_inited; char ag_closed; char ag_running_async; int8_t ag_frame_state; PyObject *ag_iframe[1];
} PyAsyncGenObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyAsyncGen_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenASend_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenWrappedValue_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenAThrow_Type;

__attribute__ ((visibility ("default"))) PyObject * PyAsyncGen_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);
# 86 "/data/data/com.termux/files/usr/include/python3.12/cpython/genobject.h"
}
# 81 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/descrobject.h" 1




extern "C" {


typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

struct PyGetSetDef {
    const char *name;
    getter get;
    setter set;
    const char *doc;
    void *closure;
};

extern __attribute__ ((visibility ("default"))) PyTypeObject PyClassMethodDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyGetSetDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMemberDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMethodDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyWrapperDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictProxy_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyProperty_Type;

__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewMember(PyTypeObject *, PyMemberDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewGetSet(PyTypeObject *, PyGetSetDef *);

__attribute__ ((visibility ("default"))) PyObject * PyDictProxy_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyWrapper_New(PyObject *, PyObject *);







struct PyMemberDef {
    const char *name;
    int type;
    Py_ssize_t offset;
    int flags;
    const char *doc;
};
# 88 "/data/data/com.termux/files/usr/include/python3.12/descrobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyMember_GetOne(const char *, PyMemberDef *);
__attribute__ ((visibility ("default"))) int PyMember_SetOne(char *, PyMemberDef *, PyObject *);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/descrobject.h" 1




typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);

struct wrapperbase {
    const char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    const char *doc;
    int flags;
    PyObject *name_strobj;
};






typedef struct {
    PyObject ob_base;
    PyTypeObject *d_type;
    PyObject *d_name;
    PyObject *d_qualname;
} PyDescrObject;






typedef struct {
    PyDescrObject d_common;
    PyMethodDef *d_method;
    vectorcallfunc vectorcall;
} PyMethodDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject _PyMethodWrapper_Type;

__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);
__attribute__ ((visibility ("default"))) int PyDescr_IsData(PyObject *);
# 94 "/data/data/com.termux/files/usr/include/python3.12/descrobject.h" 2




}
# 82 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/genericaliasobject.h" 1




extern "C" {


__attribute__ ((visibility ("default"))) PyObject * Py_GenericAlias(PyObject *, PyObject *);
extern __attribute__ ((visibility ("default"))) PyTypeObject Py_GenericAliasType;


}
# 83 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/warnings.h" 1



extern "C" {


__attribute__ ((visibility ("default"))) int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);

__attribute__ ((visibility ("default"))) int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);



__attribute__ ((visibility ("default"))) int PyErr_ResourceWarning(
    PyObject *source,
    Py_ssize_t stack_level,
    const char *format,
    ...);


__attribute__ ((visibility ("default"))) int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/warnings.h" 1




__attribute__ ((visibility ("default"))) int PyErr_WarnExplicitObject(
    PyObject *category,
    PyObject *message,
    PyObject *filename,
    int lineno,
    PyObject *module,
    PyObject *registry);

__attribute__ ((visibility ("default"))) int PyErr_WarnExplicitFormat(
    PyObject *category,
    const char *filename, int lineno,
    const char *module, PyObject *registry,
    const char *format, ...);
# 38 "/data/data/com.termux/files/usr/include/python3.12/warnings.h" 2




}
# 84 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/weakrefobject.h" 1





extern "C" {


typedef struct _PyWeakReference PyWeakReference;

extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_RefType;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_ProxyType;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_CallableProxyType;
# 26 "/data/data/com.termux/files/usr/include/python3.12/weakrefobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_NewRef(PyObject *ob,
                                        PyObject *callback);
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_NewProxy(PyObject *ob,
                                          PyObject *callback);
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_GetObject(PyObject *ref);




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/weakrefobject.h" 1







struct _PyWeakReference {
    PyObject ob_base;





    PyObject *wr_object;


    PyObject *wr_callback;




    Py_hash_t hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
    vectorcallfunc vectorcall;
};

__attribute__ ((visibility ("default"))) Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

__attribute__ ((visibility ("default"))) void _PyWeakref_ClearRef(PyWeakReference *self);

static inline PyObject* PyWeakref_GET_OBJECT(PyObject *ref_obj) {
    PyWeakReference *ref;
    PyObject *obj;
    (((PyObject_TypeCheck(((PyObject*)(((ref_obj)))), (&_PyWeakref_RefType)) || (Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_ProxyType)) || Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_CallableProxyType))))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/weakrefobject.h", 42, __PRETTY_FUNCTION__, "PyWeakref_Check(ref_obj)"));
    ref = ((PyWeakReference*)(ref_obj));
    obj = ref->wr_object;






    if (Py_REFCNT(((PyObject*)((obj)))) > 0) {
        return obj;
    }
    return (&_Py_NoneStruct);
}
# 36 "/data/data/com.termux/files/usr/include/python3.12/weakrefobject.h" 2




}
# 85 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/structseq.h" 1






extern "C" {


typedef struct PyStructSequence_Field {
    const char *name;
    const char *doc;
} PyStructSequence_Field;

typedef struct PyStructSequence_Desc {
    const char *name;
    const char *doc;
    PyStructSequence_Field *fields;
    int n_in_sequence;
} PyStructSequence_Desc;

extern __attribute__ ((visibility ("default"))) const char * const PyStructSequence_UnnamedField;


__attribute__ ((visibility ("default"))) void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
__attribute__ ((visibility ("default"))) int PyStructSequence_InitType2(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);

__attribute__ ((visibility ("default"))) PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);

__attribute__ ((visibility ("default"))) PyObject * PyStructSequence_New(PyTypeObject* type);


typedef PyTupleObject PyStructSequence;







__attribute__ ((visibility ("default"))) void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
__attribute__ ((visibility ("default"))) PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);


}
# 86 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/picklebufobject.h" 1







extern "C" {




extern __attribute__ ((visibility ("default"))) PyTypeObject PyPickleBuffer_Type;




__attribute__ ((visibility ("default"))) PyObject * PyPickleBuffer_FromObject(PyObject *);



__attribute__ ((visibility ("default"))) const Py_buffer * PyPickleBuffer_GetBuffer(PyObject *);

__attribute__ ((visibility ("default"))) int PyPickleBuffer_Release(PyObject *);




}
# 87 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h" 1
# 53 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
extern "C" {



struct timeval;





typedef int64_t _PyTime_t;






typedef enum {


    _PyTime_ROUND_FLOOR=0,


    _PyTime_ROUND_CEILING=1,


    _PyTime_ROUND_HALF_EVEN=2,






    _PyTime_ROUND_UP=3,


    _PyTime_ROUND_TIMEOUT = _PyTime_ROUND_UP
} _PyTime_round_t;



__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromTime_t(
    time_t sec);


__attribute__ ((visibility ("default"))) time_t _PyLong_AsTime_t(
    PyObject *obj);


__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec,
    _PyTime_round_t);




__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec,
    _PyTime_round_t);




__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec,
    _PyTime_round_t);



__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromSeconds(int seconds);







__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromNanoseconds(_PyTime_t ns);



__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromMicrosecondsClamp(_PyTime_t us);


__attribute__ ((visibility ("default"))) int _PyTime_FromNanosecondsObject(_PyTime_t *t,
    PyObject *obj);



__attribute__ ((visibility ("default"))) int _PyTime_FromSecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);



__attribute__ ((visibility ("default"))) int _PyTime_FromMillisecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) double _PyTime_AsSecondsDouble(_PyTime_t t);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsMilliseconds(_PyTime_t t,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsMicroseconds(_PyTime_t t,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsNanoseconds(_PyTime_t t);
# 179 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
__attribute__ ((visibility ("default"))) PyObject * _PyTime_AsNanosecondsObject(_PyTime_t t);




__attribute__ ((visibility ("default"))) int _PyTime_FromTimeval(_PyTime_t *tp, struct timeval *tv);






__attribute__ ((visibility ("default"))) int _PyTime_AsTimeval(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);



__attribute__ ((visibility ("default"))) void _PyTime_AsTimeval_clamp(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);







__attribute__ ((visibility ("default"))) int _PyTime_AsTimevalTime_t(
    _PyTime_t t,
    time_t *secs,
    int *us,
    _PyTime_round_t round);




__attribute__ ((visibility ("default"))) int _PyTime_FromTimespec(_PyTime_t *tp, struct timespec *ts);




__attribute__ ((visibility ("default"))) int _PyTime_AsTimespec(_PyTime_t t, struct timespec *ts);



__attribute__ ((visibility ("default"))) void _PyTime_AsTimespec_clamp(_PyTime_t t, struct timespec *ts);




__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_Add(_PyTime_t t1, _PyTime_t t2);




__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_MulDiv(_PyTime_t ticks,
    _PyTime_t mul,
    _PyTime_t div);


typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;
# 254 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetSystemClock(void);





__attribute__ ((visibility ("default"))) int _PyTime_GetSystemClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
# 274 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetMonotonicClock(void);
# 284 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
__attribute__ ((visibility ("default"))) int _PyTime_GetMonotonicClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




__attribute__ ((visibility ("default"))) int _PyTime_localtime(time_t t, struct tm *tm);



__attribute__ ((visibility ("default"))) int _PyTime_gmtime(time_t t, struct tm *tm);
# 305 "/data/data/com.termux/files/usr/include/python3.12/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetPerfCounter(void);







__attribute__ ((visibility ("default"))) int _PyTime_GetPerfCounterWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




__attribute__ ((visibility ("default"))) _PyTime_t _PyDeadline_Init(_PyTime_t timeout);



__attribute__ ((visibility ("default"))) _PyTime_t _PyDeadline_Get(_PyTime_t deadline);


}
# 88 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/codecs.h" 1



extern "C" {
# 26 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_Register(
       PyObject *search_function
       );





__attribute__ ((visibility ("default"))) int PyCodec_Unregister(
       PyObject *search_function
       );
# 57 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * _PyCodec_Lookup(
       const char *encoding
       );

__attribute__ ((visibility ("default"))) int _PyCodec_Forget(
       const char *encoding
       );
# 73 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_KnownEncoding(
       const char *encoding
       );
# 87 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 103 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 123 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );




__attribute__ ((visibility ("default"))) PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
# 166 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Encoder(
       const char *encoding
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_Decoder(
       const char *encoding
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
# 214 "/data/data/com.termux/files/usr/include/python3.12/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_RegisterError(const char *name, PyObject *error);




__attribute__ ((visibility ("default"))) PyObject * PyCodec_LookupError(const char *name);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_StrictErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_IgnoreErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_ReplaceErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);



__attribute__ ((visibility ("default"))) PyObject * PyCodec_NameReplaceErrors(PyObject *exc);



extern __attribute__ ((visibility ("default"))) const char * Py_hexdigits;



}
# 89 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pythread.h" 1



typedef void *PyThread_type_lock;


extern "C" {




typedef enum PyLockStatus {
    PY_LOCK_FAILURE = 0,
    PY_LOCK_ACQUIRED = 1,
    PY_LOCK_INTR
} PyLockStatus;

__attribute__ ((visibility ("default"))) void PyThread_init_thread(void);
__attribute__ ((visibility ("default"))) unsigned long PyThread_start_new_thread(void (*)(void *), void *);
__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) PyThread_exit_thread(void);
__attribute__ ((visibility ("default"))) unsigned long PyThread_get_thread_ident(void);





__attribute__ ((visibility ("default"))) unsigned long PyThread_get_thread_native_id(void);


__attribute__ ((visibility ("default"))) PyThread_type_lock PyThread_allocate_lock(void);
__attribute__ ((visibility ("default"))) void PyThread_free_lock(PyThread_type_lock);
__attribute__ ((visibility ("default"))) int PyThread_acquire_lock(PyThread_type_lock, int);
# 77 "/data/data/com.termux/files/usr/include/python3.12/pythread.h"
__attribute__ ((visibility ("default"))) PyLockStatus PyThread_acquire_lock_timed(PyThread_type_lock,
                                                     long long microseconds,
                                                     int intr_flag);

__attribute__ ((visibility ("default"))) void PyThread_release_lock(PyThread_type_lock);

__attribute__ ((visibility ("default"))) size_t PyThread_get_stacksize(void);
__attribute__ ((visibility ("default"))) int PyThread_set_stacksize(size_t);


__attribute__ ((visibility ("default"))) PyObject* PyThread_GetInfo(void);
# 98 "/data/data/com.termux/files/usr/include/python3.12/pythread.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyThread_create_key(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_delete_key(int key);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyThread_set_key_value(int key,
                                                          void *value);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void * PyThread_get_key_value(int key);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_delete_key_value(int key);


__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_ReInitTLS(void);






typedef struct _Py_tss_t Py_tss_t;

__attribute__ ((visibility ("default"))) Py_tss_t * PyThread_tss_alloc(void);
__attribute__ ((visibility ("default"))) void PyThread_tss_free(Py_tss_t *key);


__attribute__ ((visibility ("default"))) int PyThread_tss_is_created(Py_tss_t *key);
__attribute__ ((visibility ("default"))) int PyThread_tss_create(Py_tss_t *key);
__attribute__ ((visibility ("default"))) void PyThread_tss_delete(Py_tss_t *key);
__attribute__ ((visibility ("default"))) int PyThread_tss_set(Py_tss_t *key, void *value);
__attribute__ ((visibility ("default"))) void * PyThread_tss_get(Py_tss_t *key);




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythread.h" 1
# 11 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythread.h"
__attribute__ ((visibility ("default"))) int _PyThread_at_fork_reinit(PyThread_type_lock *lock);




# 1 "/data/data/com.termux/files/usr/include/pthread.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/sched.h" 1 3 4
# 37 "/data/data/com.termux/files/usr/include/sched.h" 3 4
# 1 "/data/data/com.termux/files/usr/include/linux/sched.h" 1 3 4
# 39 "/data/data/com.termux/files/usr/include/linux/sched.h" 3 4
struct clone_args {
  __u64 __attribute__((aligned(8))) flags;
  __u64 __attribute__((aligned(8))) pidfd;
  __u64 __attribute__((aligned(8))) child_tid;
  __u64 __attribute__((aligned(8))) parent_tid;
  __u64 __attribute__((aligned(8))) exit_signal;
  __u64 __attribute__((aligned(8))) stack;
  __u64 __attribute__((aligned(8))) stack_size;
  __u64 __attribute__((aligned(8))) tls;
  __u64 __attribute__((aligned(8))) set_tid;
  __u64 __attribute__((aligned(8))) set_tid_size;
  __u64 __attribute__((aligned(8))) cgroup;
};
# 38 "/data/data/com.termux/files/usr/include/sched.h" 2 3 4


extern "C" {
# 97 "/data/data/com.termux/files/usr/include/sched.h" 3 4
struct sched_param {
  int sched_priority;
};







int sched_setscheduler(pid_t __pid, int __policy, const struct sched_param* _Nonnull __param);
# 116 "/data/data/com.termux/files/usr/include/sched.h" 3 4
int sched_getscheduler(pid_t __pid);







int sched_yield(void);







int sched_get_priority_max(int __policy);







int sched_get_priority_min(int __policy);







int sched_setparam(pid_t __pid, const struct sched_param* _Nonnull __param);







int sched_getparam(pid_t __pid, struct sched_param* _Nonnull __param);







int sched_rr_get_interval(pid_t __pid, struct timespec* _Nonnull __quantum);
# 175 "/data/data/com.termux/files/usr/include/sched.h" 3 4
int clone(int (* _Null_unspecified __fn)(void* _Null_unspecified ), void* _Null_unspecified __child_stack, int __flags, void* _Nullable __arg, ...);







int unshare(int __flags);







int setns(int __fd, int __ns_type);
# 200 "/data/data/com.termux/files/usr/include/sched.h" 3 4
int sched_getcpu(void);
# 217 "/data/data/com.termux/files/usr/include/sched.h" 3 4
typedef struct {
  unsigned long int __bits[ 1024 / (8 * sizeof(unsigned long int)) ];
} cpu_set_t;







int sched_setaffinity(pid_t __pid, size_t __set_size, const cpu_set_t* _Nonnull __set);







int sched_getaffinity(pid_t __pid, size_t __set_size, cpu_set_t* _Nonnull __set);
# 307 "/data/data/com.termux/files/usr/include/sched.h" 3 4
int __sched_cpucount(size_t __set_size, const cpu_set_t* _Nonnull __set);
# 378 "/data/data/com.termux/files/usr/include/sched.h" 3 4
cpu_set_t* _Nullable __sched_cpualloc(size_t __count);






void __sched_cpufree(cpu_set_t* _Nonnull __set);



}
# 40 "/data/data/com.termux/files/usr/include/pthread.h" 2 3 4




extern "C" {

enum {
  PTHREAD_MUTEX_NORMAL = 0,
  PTHREAD_MUTEX_RECURSIVE = 1,
  PTHREAD_MUTEX_ERRORCHECK = 2,

  PTHREAD_MUTEX_ERRORCHECK_NP = PTHREAD_MUTEX_ERRORCHECK,
  PTHREAD_MUTEX_RECURSIVE_NP = PTHREAD_MUTEX_RECURSIVE,

  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
};
# 66 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
enum {
  PTHREAD_RWLOCK_PREFER_READER_NP = 0,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP = 1,
};
# 98 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_atfork(void (* _Nullable __prepare)(void), void (* _Nullable __parent)(void), void (* _Nullable __child)(void));

int pthread_attr_destroy(pthread_attr_t* _Nonnull __attr);
int pthread_attr_getdetachstate(const pthread_attr_t* _Nonnull __attr, int* _Nonnull __state);
int pthread_attr_getguardsize(const pthread_attr_t* _Nonnull __attr, size_t* _Nonnull __size);





int pthread_attr_getschedparam(const pthread_attr_t* _Nonnull __attr, struct sched_param* _Nonnull __param);
int pthread_attr_getschedpolicy(const pthread_attr_t* _Nonnull __attr, int* _Nonnull __policy);
int pthread_attr_getscope(const pthread_attr_t* _Nonnull __attr, int* _Nonnull __scope);
int pthread_attr_getstack(const pthread_attr_t* _Nonnull __attr, void* _Nullable * _Nonnull __addr, size_t* _Nonnull __size);
int pthread_attr_getstacksize(const pthread_attr_t* _Nonnull __attr, size_t* _Nonnull __size);
int pthread_attr_init(pthread_attr_t* _Nonnull __attr);
int pthread_attr_setdetachstate(pthread_attr_t* _Nonnull __attr, int __state);
int pthread_attr_setguardsize(pthread_attr_t* _Nonnull __attr, size_t __size);





int pthread_attr_setschedparam(pthread_attr_t* _Nonnull __attr, const struct sched_param* _Nonnull __param);
int pthread_attr_setschedpolicy(pthread_attr_t* _Nonnull __attr, int __policy);
int pthread_attr_setscope(pthread_attr_t* _Nonnull __attr, int __scope);
int pthread_attr_setstack(pthread_attr_t* _Nonnull __attr, void* _Nonnull __addr, size_t __size);
int pthread_attr_setstacksize(pthread_attr_t* _Nonnull __addr, size_t __size);

int pthread_condattr_destroy(pthread_condattr_t* _Nonnull __attr);
int pthread_condattr_getclock(const pthread_condattr_t* _Nonnull __attr, clockid_t* _Nonnull __clock);
int pthread_condattr_getpshared(const pthread_condattr_t* _Nonnull __attr, int* _Nonnull __shared);
int pthread_condattr_init(pthread_condattr_t* _Nonnull __attr);
int pthread_condattr_setclock(pthread_condattr_t* _Nonnull __attr, clockid_t __clock);
int pthread_condattr_setpshared(pthread_condattr_t* _Nonnull __attr, int __shared);

int pthread_cond_broadcast(pthread_cond_t* _Nonnull __cond);






int pthread_cond_destroy(pthread_cond_t* _Nonnull __cond);
int pthread_cond_init(pthread_cond_t* _Nonnull __cond, const pthread_condattr_t* _Nullable __attr);
int pthread_cond_signal(pthread_cond_t* _Nonnull __cond);
int pthread_cond_timedwait(pthread_cond_t* _Nonnull __cond, pthread_mutex_t* _Nonnull __mutex, const struct timespec* _Nullable __timeout);
# 161 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_cond_wait(pthread_cond_t* _Nonnull __cond, pthread_mutex_t* _Nonnull __mutex);








#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wbuiltin-requires-header"

int pthread_create(pthread_t* _Nonnull __pthread_ptr, pthread_attr_t const* _Nullable __attr, void* _Nonnull (* _Nonnull __start_routine)(void* _Nonnull), void* _Nullable);

#pragma clang diagnostic pop


int pthread_detach(pthread_t __pthread);
void pthread_exit(void* _Nullable __return_value) __attribute__((__noreturn__));

int pthread_equal(pthread_t __lhs, pthread_t __rhs);

int pthread_getattr_np(pthread_t __pthread, pthread_attr_t* _Nonnull __attr);

int pthread_getcpuclockid(pthread_t __pthread, clockid_t* _Nonnull __clock);

void* _Nullable pthread_getspecific(pthread_key_t __key);

pid_t pthread_gettid_np(pthread_t __pthread);

int pthread_join(pthread_t __pthread, void* _Nullable * _Nullable __return_value_ptr);
# 208 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_key_create(pthread_key_t* _Nonnull __key_ptr, void (* _Nullable __key_destructor)(void* _Nullable));







int pthread_key_delete(pthread_key_t __key);

int pthread_mutexattr_destroy(pthread_mutexattr_t* _Nonnull __attr);
int pthread_mutexattr_getpshared(const pthread_mutexattr_t* _Nonnull __attr, int* _Nonnull __shared);
int pthread_mutexattr_gettype(const pthread_mutexattr_t* _Nonnull __attr, int* _Nonnull __type);





int pthread_mutexattr_init(pthread_mutexattr_t* _Nonnull __attr);
int pthread_mutexattr_setpshared(pthread_mutexattr_t* _Nonnull __attr, int __shared);
int pthread_mutexattr_settype(pthread_mutexattr_t* _Nonnull __attr, int __type);
# 241 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_mutex_destroy(pthread_mutex_t* _Nonnull __mutex);
int pthread_mutex_init(pthread_mutex_t* _Nonnull __mutex, const pthread_mutexattr_t* _Nullable __attr);
int pthread_mutex_lock(pthread_mutex_t* _Nonnull __mutex);
int pthread_mutex_timedlock(pthread_mutex_t* _Nonnull __mutex, const struct timespec* _Nullable __timeout);
# 261 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_mutex_trylock(pthread_mutex_t* _Nonnull __mutex);
int pthread_mutex_unlock(pthread_mutex_t* _Nonnull __mutex);

int pthread_once(pthread_once_t* _Nonnull __once, void (* _Nonnull __init_routine)(void));

int pthread_rwlockattr_init(pthread_rwlockattr_t* _Nonnull __attr);
int pthread_rwlockattr_destroy(pthread_rwlockattr_t* _Nonnull __attr);
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t* _Nonnull __attr, int* _Nonnull __shared);
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t* _Nonnull __attr, int __shared);


int pthread_rwlockattr_getkind_np(const pthread_rwlockattr_t* _Nonnull __attr, int* _Nonnull __kind)
  __attribute__((__availability__(android,strict,introduced=23 )));
int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t* _Nonnull __attr, int __kind) __attribute__((__availability__(android,strict,introduced=23 )));
# 286 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_rwlock_destroy(pthread_rwlock_t* _Nonnull __rwlock);
int pthread_rwlock_init(pthread_rwlock_t* _Nonnull __rwlock, const pthread_rwlockattr_t* _Nullable __attr);
int pthread_rwlock_rdlock(pthread_rwlock_t* _Nonnull __rwlock);
int pthread_rwlock_timedrdlock(pthread_rwlock_t* _Nonnull __rwlock, const struct timespec* _Nullable __timeout);







int pthread_rwlock_timedwrlock(pthread_rwlock_t* _Nonnull __rwlock, const struct timespec* _Nullable __timeout);







int pthread_rwlock_tryrdlock(pthread_rwlock_t* _Nonnull __rwlock);
int pthread_rwlock_trywrlock(pthread_rwlock_t* _Nonnull __rwlock);
int pthread_rwlock_unlock(pthread_rwlock_t* _Nonnull __rwlock);
int pthread_rwlock_wrlock(pthread_rwlock_t* _Nonnull __rwlock);


int pthread_barrierattr_init(pthread_barrierattr_t* _Nonnull __attr) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_barrierattr_destroy(pthread_barrierattr_t* _Nonnull __attr) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_barrierattr_getpshared(const pthread_barrierattr_t* _Nonnull __attr, int* _Nonnull __shared) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_barrierattr_setpshared(pthread_barrierattr_t* _Nonnull __attr, int __shared) __attribute__((__availability__(android,strict,introduced=24 )));



int pthread_barrier_init(pthread_barrier_t* _Nonnull __barrier, const pthread_barrierattr_t* _Nullable __attr, unsigned __count) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_barrier_destroy(pthread_barrier_t* _Nonnull __barrier) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_barrier_wait(pthread_barrier_t* _Nonnull __barrier) __attribute__((__availability__(android,strict,introduced=24 )));



int pthread_spin_destroy(pthread_spinlock_t* _Nonnull __spinlock) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_spin_init(pthread_spinlock_t* _Nonnull __spinlock, int __shared) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_spin_lock(pthread_spinlock_t* _Nonnull __spinlock) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_spin_trylock(pthread_spinlock_t* _Nonnull __spinlock) __attribute__((__availability__(android,strict,introduced=24 )));
int pthread_spin_unlock(pthread_spinlock_t* _Nonnull __spinlock) __attribute__((__availability__(android,strict,introduced=24 )));


pthread_t pthread_self(void) __attribute__((__const__));
# 341 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_setname_np(pthread_t __pthread, const char* _Nonnull __name);
# 354 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_setschedparam(pthread_t __pthread, int __policy, const struct sched_param* _Nonnull __param);







int pthread_getschedparam(pthread_t __pthread, int* _Nonnull __policy, struct sched_param* _Nonnull __param);
# 383 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
int pthread_setspecific(pthread_key_t __key, const void* _Nullable __value);

typedef void (* _Nullable __pthread_cleanup_func_t)(void* _Nullable);

typedef struct __pthread_cleanup_t {
  struct __pthread_cleanup_t* _Nullable __cleanup_prev;
  __pthread_cleanup_func_t _Nullable __cleanup_routine;
  void* _Nullable __cleanup_arg;
} __pthread_cleanup_t;

void __pthread_cleanup_push(__pthread_cleanup_t* _Nonnull c, __pthread_cleanup_func_t _Nullable, void* _Nullable);
void __pthread_cleanup_pop(__pthread_cleanup_t* _Nonnull, int);
# 411 "/data/data/com.termux/files/usr/include/pthread.h" 3 4
}
# 17 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythread.h" 2
# 34 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythread.h"
struct _Py_tss_t {
    int _is_initialized;
    pthread_key_t _key;
};
# 129 "/data/data/com.termux/files/usr/include/python3.12/pythread.h" 2




}
# 90 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/context.h" 1




extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyContext_Type;
typedef struct _pycontextobject PyContext;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyContextVar_Type;
typedef struct _pycontextvarobject PyContextVar;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyContextToken_Type;
typedef struct _pycontexttokenobject PyContextToken;







__attribute__ ((visibility ("default"))) PyObject * PyContext_New(void);
__attribute__ ((visibility ("default"))) PyObject * PyContext_Copy(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyContext_CopyCurrent(void);

__attribute__ ((visibility ("default"))) int PyContext_Enter(PyObject *);
__attribute__ ((visibility ("default"))) int PyContext_Exit(PyObject *);






__attribute__ ((visibility ("default"))) PyObject * PyContextVar_New(
    const char *name, PyObject *default_value);
# 54 "/data/data/com.termux/files/usr/include/python3.12/cpython/context.h"
__attribute__ ((visibility ("default"))) int PyContextVar_Get(
    PyObject *var, PyObject *default_value, PyObject **value);





__attribute__ ((visibility ("default"))) PyObject * PyContextVar_Set(PyObject *var, PyObject *value);





__attribute__ ((visibility ("default"))) int PyContextVar_Reset(PyObject *var, PyObject *token);



__attribute__ ((visibility ("default"))) PyObject * _PyContext_NewHamtForTests(void);



}
# 91 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h" 1




extern "C" {




# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdarg.h" 1 3
# 11 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h" 2
# 26 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h"
__attribute__ ((visibility ("default"))) int _PyArg_Parse_SizeT(PyObject *, const char *, ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseTuple_SizeT(PyObject *, const char *, ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseTupleAndKeywords_SizeT(PyObject *, PyObject *,
                                                  const char *, char **, ...);
__attribute__ ((visibility ("default"))) int _PyArg_VaParse_SizeT(PyObject *, const char *, va_list);
__attribute__ ((visibility ("default"))) int _PyArg_VaParseTupleAndKeywords_SizeT(PyObject *, PyObject *,
                                                  const char *, char **, va_list);

__attribute__ ((visibility ("default"))) int PyArg_ValidateKeywordArguments(PyObject *);
__attribute__ ((visibility ("default"))) int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
__attribute__ ((visibility ("default"))) PyObject * _Py_BuildValue_SizeT(const char *, ...);
__attribute__ ((visibility ("default"))) PyObject * _Py_BuildValue_SizeT(const char *, ...);


__attribute__ ((visibility ("default"))) PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);





__attribute__ ((visibility ("default"))) int PyModule_AddObjectRef(PyObject *mod, const char *name, PyObject *value);




__attribute__ ((visibility ("default"))) int PyModule_AddObject(PyObject *mod, const char *, PyObject *value);

__attribute__ ((visibility ("default"))) int PyModule_AddIntConstant(PyObject *, const char *, long);
__attribute__ ((visibility ("default"))) int PyModule_AddStringConstant(PyObject *, const char *, const char *);



__attribute__ ((visibility ("default"))) int PyModule_AddType(PyObject *module, PyTypeObject *type);







__attribute__ ((visibility ("default"))) int PyModule_SetDocString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) int PyModule_AddFunctions(PyObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) int PyModule_ExecDef(PyObject *module, PyModuleDef *def);
# 133 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h"
__attribute__ ((visibility ("default"))) PyObject * PyModule_Create2(PyModuleDef*, int apiver);
# 145 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h"
__attribute__ ((visibility ("default"))) PyObject * PyModule_FromDefAndSpec2(PyModuleDef *def,
                                                PyObject *spec,
                                                int module_api_version);
# 161 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/modsupport.h" 1
# 19 "/data/data/com.termux/files/usr/include/python3.12/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) int _PyArg_UnpackStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *name,
    Py_ssize_t min,
    Py_ssize_t max,
    ...);

__attribute__ ((visibility ("default"))) int _PyArg_NoKeywords(const char *funcname, PyObject *kwargs);
__attribute__ ((visibility ("default"))) int _PyArg_NoKwnames(const char *funcname, PyObject *kwnames);
__attribute__ ((visibility ("default"))) int _PyArg_NoPositional(const char *funcname, PyObject *args);
# 39 "/data/data/com.termux/files/usr/include/python3.12/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) void _PyArg_BadArgument(const char *, const char *, const char *, PyObject *);
__attribute__ ((visibility ("default"))) int _PyArg_CheckPositional(const char *, Py_ssize_t,
                                       Py_ssize_t, Py_ssize_t);




__attribute__ ((visibility ("default"))) PyObject ** _Py_VaBuildStack_SizeT(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);

typedef struct _PyArg_Parser {
    int initialized;
    const char *format;
    const char * const *keywords;
    const char *fname;
    const char *custom_msg;
    int pos;
    int min;
    int max;
    PyObject *kwtuple;
    struct _PyArg_Parser *next;
} _PyArg_Parser;
# 73 "/data/data/com.termux/files/usr/include/python3.12/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) int _PyArg_ParseTupleAndKeywordsFast_SizeT(PyObject *, PyObject *,
                                                 struct _PyArg_Parser *, ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseStack_SizeT(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *format,
    ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseStackAndKeywords_SizeT(
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwnames,
    struct _PyArg_Parser *,
    ...);
__attribute__ ((visibility ("default"))) int _PyArg_VaParseTupleAndKeywordsFast_SizeT(PyObject *, PyObject *,
                                                   struct _PyArg_Parser *, va_list);
__attribute__ ((visibility ("default"))) PyObject * const * _PyArg_UnpackKeywords(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        PyObject **buf);

__attribute__ ((visibility ("default"))) PyObject * const * _PyArg_UnpackKeywordsWithVararg(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        int vararg, PyObject **buf);







__attribute__ ((visibility ("default"))) PyObject * _PyModule_CreateInitialized(PyModuleDef*, int apiver);
__attribute__ ((visibility ("default"))) int _PyModule_Add(PyObject *, const char *, PyObject *);
# 162 "/data/data/com.termux/files/usr/include/python3.12/modsupport.h" 2




}
# 92 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/compile.h" 1



extern "C" {
# 15 "/data/data/com.termux/files/usr/include/python3.12/compile.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/compile.h" 1
# 26 "/data/data/com.termux/files/usr/include/python3.12/cpython/compile.h"
typedef struct {
    int cf_flags;
    int cf_feature_version;
} PyCompilerFlags;





typedef struct {
    int lineno;
    int end_lineno;
    int col_offset;
    int end_col_offset;
} _PyCompilerSrcLocation;
# 51 "/data/data/com.termux/files/usr/include/python3.12/cpython/compile.h"
typedef struct {
    int ff_features;
    _PyCompilerSrcLocation ff_location;
} PyFutureFeatures;
# 68 "/data/data/com.termux/files/usr/include/python3.12/cpython/compile.h"
__attribute__ ((visibility ("default"))) int PyCompile_OpcodeStackEffect(int opcode, int oparg);
__attribute__ ((visibility ("default"))) int PyCompile_OpcodeStackEffectWithJump(int opcode, int oparg, int jump);
# 16 "/data/data/com.termux/files/usr/include/python3.12/compile.h" 2




}
# 93 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pythonrun.h" 1






extern "C" {


__attribute__ ((visibility ("default"))) PyObject * Py_CompileString(const char *, const char *, int);

__attribute__ ((visibility ("default"))) void PyErr_Print(void);
__attribute__ ((visibility ("default"))) void PyErr_PrintEx(int);
__attribute__ ((visibility ("default"))) void PyErr_Display(PyObject *, PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) void PyErr_DisplayException(PyObject *);




extern __attribute__ ((visibility ("default"))) int (*PyOS_InputHook)(void);
# 42 "/data/data/com.termux/files/usr/include/python3.12/pythonrun.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythonrun.h" 1




__attribute__ ((visibility ("default"))) int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
__attribute__ ((visibility ("default"))) int _PyRun_SimpleFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int _PyRun_AnyFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOneObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int _PyRun_InteractiveLoopObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);


__attribute__ ((visibility ("default"))) PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

__attribute__ ((visibility ("default"))) PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);


__attribute__ ((visibility ("default"))) PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);
__attribute__ ((visibility ("default"))) PyObject * Py_CompileStringObject(
    const char *str,
    PyObject *filename, int start,
    PyCompilerFlags *flags,
    int optimize);





__attribute__ ((visibility ("default"))) const char * _Py_SourceAsString(
    PyObject *cmd,
    const char *funcname,
    const char *what,
    PyCompilerFlags *cf,
    PyObject **cmd_copy);






__attribute__ ((visibility ("default"))) PyObject * PyRun_String(const char *str, int s, PyObject *g, PyObject *l);
__attribute__ ((visibility ("default"))) int PyRun_AnyFile(FILE *fp, const char *name);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileEx(FILE *fp, const char *name, int closeit);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
__attribute__ ((visibility ("default"))) int PyRun_SimpleString(const char *s);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFile(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFileEx(FILE *f, const char *p, int c);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOne(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveLoop(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) PyObject * PyRun_File(FILE *fp, const char *p, int s, PyObject *g, PyObject *l);
__attribute__ ((visibility ("default"))) PyObject * PyRun_FileEx(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, int c);
__attribute__ ((visibility ("default"))) PyObject * PyRun_FileFlags(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, PyCompilerFlags *flags);
# 119 "/data/data/com.termux/files/usr/include/python3.12/cpython/pythonrun.h"
__attribute__ ((visibility ("default"))) char * PyOS_Readline(FILE *, FILE *, const char *);
extern __attribute__ ((visibility ("default"))) PyThreadState* _PyOS_ReadlineTState;
extern __attribute__ ((visibility ("default"))) char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, const char *);
# 43 "/data/data/com.termux/files/usr/include/python3.12/pythonrun.h" 2




}
# 94 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pylifecycle.h" 1






extern "C" {




__attribute__ ((visibility ("default"))) void Py_Initialize(void);
__attribute__ ((visibility ("default"))) void Py_InitializeEx(int);
__attribute__ ((visibility ("default"))) void Py_Finalize(void);

__attribute__ ((visibility ("default"))) int Py_FinalizeEx(void);

__attribute__ ((visibility ("default"))) int Py_IsInitialized(void);


__attribute__ ((visibility ("default"))) PyThreadState * Py_NewInterpreter(void);
__attribute__ ((visibility ("default"))) void Py_EndInterpreter(PyThreadState *);





__attribute__ ((visibility ("default"))) int Py_AtExit(void (*func)(void));

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_Exit(int);


__attribute__ ((visibility ("default"))) int Py_Main(int argc, wchar_t **argv);
__attribute__ ((visibility ("default"))) int Py_BytesMain(int argc, char **argv);


__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetProgramName(const wchar_t *);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetProgramName(void);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetPythonHome(const wchar_t *);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetPythonHome(void);

__attribute__ ((visibility ("default"))) wchar_t * Py_GetProgramFullPath(void);

__attribute__ ((visibility ("default"))) wchar_t * Py_GetPrefix(void);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetExecPrefix(void);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetPath(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetPath(const wchar_t *);





__attribute__ ((visibility ("default"))) const char * Py_GetVersion(void);
__attribute__ ((visibility ("default"))) const char * Py_GetPlatform(void);
__attribute__ ((visibility ("default"))) const char * Py_GetCopyright(void);
__attribute__ ((visibility ("default"))) const char * Py_GetCompiler(void);
__attribute__ ((visibility ("default"))) const char * Py_GetBuildInfo(void);


typedef void (*PyOS_sighandler_t)(int);
__attribute__ ((visibility ("default"))) PyOS_sighandler_t PyOS_getsig(int);
__attribute__ ((visibility ("default"))) PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


extern __attribute__ ((visibility ("default"))) const unsigned long Py_Version;




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pylifecycle.h" 1






__attribute__ ((visibility ("default"))) int Py_FrozenMain(int argc, char **argv);




__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int Py_SetStandardStreamEncoding(
    const char *encoding,
    const char *errors);



__attribute__ ((visibility ("default"))) PyStatus Py_PreInitialize(
    const PyPreConfig *src_config);
__attribute__ ((visibility ("default"))) PyStatus Py_PreInitializeFromBytesArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    char **argv);
__attribute__ ((visibility ("default"))) PyStatus Py_PreInitializeFromArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    wchar_t **argv);

__attribute__ ((visibility ("default"))) int _Py_IsCoreInitialized(void);




__attribute__ ((visibility ("default"))) PyStatus Py_InitializeFromConfig(
    const PyConfig *config);
__attribute__ ((visibility ("default"))) PyStatus _Py_InitializeMain(void);

__attribute__ ((visibility ("default"))) int Py_RunMain(void);


__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_ExitStatusException(PyStatus err);


__attribute__ ((visibility ("default"))) void _Py_RestoreSignals(void);

__attribute__ ((visibility ("default"))) int Py_FdIsInteractive(FILE *, const char *);
__attribute__ ((visibility ("default"))) int _Py_FdIsInteractive(FILE *fp, PyObject *filename);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void _Py_SetProgramFullPath(const wchar_t *);

__attribute__ ((visibility ("default"))) const char * _Py_gitidentifier(void);
__attribute__ ((visibility ("default"))) const char * _Py_gitversion(void);

__attribute__ ((visibility ("default"))) int _Py_IsFinalizing(void);
__attribute__ ((visibility ("default"))) int _Py_IsInterpreterFinalizing(PyInterpreterState *interp);


__attribute__ ((visibility ("default"))) int _PyOS_URandom(void *buffer, Py_ssize_t size);
__attribute__ ((visibility ("default"))) int _PyOS_URandomNonblock(void *buffer, Py_ssize_t size);


__attribute__ ((visibility ("default"))) int _Py_CoerceLegacyLocale(int warn);
__attribute__ ((visibility ("default"))) int _Py_LegacyLocaleDetected(int warn);
__attribute__ ((visibility ("default"))) char * _Py_SetLocaleFromEnv(int category);







typedef struct {

    int use_main_obmalloc;
    int allow_fork;
    int allow_exec;
    int allow_threads;
    int allow_daemon_threads;
    int check_multi_interp_extensions;
    int gil;
} PyInterpreterConfig;
# 105 "/data/data/com.termux/files/usr/include/python3.12/cpython/pylifecycle.h"
__attribute__ ((visibility ("default"))) PyStatus Py_NewInterpreterFromConfig(
    PyThreadState **tstate_p,
    const PyInterpreterConfig *config);

typedef void (*atexit_datacallbackfunc)(void *);
__attribute__ ((visibility ("default"))) int _Py_AtExit(
        PyInterpreterState *, atexit_datacallbackfunc, void *);
# 72 "/data/data/com.termux/files/usr/include/python3.12/pylifecycle.h" 2




}
# 95 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/ceval.h" 1





extern "C" {



__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalCodeEx(PyObject *co,
                                         PyObject *globals,
                                         PyObject *locals,
                                         PyObject *const *args, int argc,
                                         PyObject *const *kwds, int kwdc,
                                         PyObject *const *defs, int defc,
                                         PyObject *kwdefs, PyObject *closure);
# 27 "/data/data/com.termux/files/usr/include/python3.12/ceval.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallObjectWithKeywords(
    PyObject *callable,
    PyObject *args,
    PyObject *kwargs);





__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallFunction(
    PyObject *callable, const char *format, ...);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallMethod(
    PyObject *obj, const char *name, const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * PyEval_GetBuiltins(void);
__attribute__ ((visibility ("default"))) PyObject * PyEval_GetGlobals(void);
__attribute__ ((visibility ("default"))) PyObject * PyEval_GetLocals(void);
__attribute__ ((visibility ("default"))) PyFrameObject * PyEval_GetFrame(void);

__attribute__ ((visibility ("default"))) int Py_AddPendingCall(int (*func)(void *), void *arg);
__attribute__ ((visibility ("default"))) int Py_MakePendingCalls(void);
# 74 "/data/data/com.termux/files/usr/include/python3.12/ceval.h"
__attribute__ ((visibility ("default"))) void Py_SetRecursionLimit(int);
__attribute__ ((visibility ("default"))) int Py_GetRecursionLimit(void);

__attribute__ ((visibility ("default"))) int Py_EnterRecursiveCall(const char *where);
__attribute__ ((visibility ("default"))) void Py_LeaveRecursiveCall(void);

__attribute__ ((visibility ("default"))) const char * PyEval_GetFuncName(PyObject *);
__attribute__ ((visibility ("default"))) const char * PyEval_GetFuncDesc(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalFrame(PyFrameObject *);
__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalFrameEx(PyFrameObject *f, int exc);
# 128 "/data/data/com.termux/files/usr/include/python3.12/ceval.h"
__attribute__ ((visibility ("default"))) PyThreadState * PyEval_SaveThread(void);
__attribute__ ((visibility ("default"))) void PyEval_RestoreThread(PyThreadState *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyEval_ThreadsInitialized(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_InitThreads(void);




__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_AcquireLock(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_ReleaseLock(void);
__attribute__ ((visibility ("default"))) void PyEval_AcquireThread(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) void PyEval_ReleaseThread(PyThreadState *tstate);
# 161 "/data/data/com.termux/files/usr/include/python3.12/ceval.h"
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/ceval.h" 1




__attribute__ ((visibility ("default"))) void PyEval_SetProfile(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) void PyEval_SetProfileAllThreads(Py_tracefunc, PyObject *);
extern __attribute__ ((visibility ("default"))) int _PyEval_SetProfile(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);
__attribute__ ((visibility ("default"))) void PyEval_SetTrace(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) void PyEval_SetTraceAllThreads(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) int _PyEval_SetTrace(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);


__attribute__ ((visibility ("default"))) PyObject * _PyEval_GetBuiltin(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyEval_GetBuiltinId(_Py_Identifier *);



__attribute__ ((visibility ("default"))) int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);

__attribute__ ((visibility ("default"))) PyObject * _PyEval_EvalFrameDefault(PyThreadState *tstate, struct _PyInterpreterFrame *f, int exc);

__attribute__ ((visibility ("default"))) void _PyEval_SetSwitchInterval(unsigned long microseconds);
__attribute__ ((visibility ("default"))) unsigned long _PyEval_GetSwitchInterval(void);

__attribute__ ((visibility ("default"))) int _PyEval_MakePendingCalls(PyThreadState *);

__attribute__ ((visibility ("default"))) Py_ssize_t PyUnstable_Eval_RequestCodeExtraIndex(freefunc);

__attribute__((__deprecated__)) static inline Py_ssize_t
_PyEval_RequestCodeExtraIndex(freefunc f) {
    return PyUnstable_Eval_RequestCodeExtraIndex(f);
}

__attribute__ ((visibility ("default"))) int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int _PyEval_SliceIndexNotNone(PyObject *, Py_ssize_t *);
# 162 "/data/data/com.termux/files/usr/include/python3.12/ceval.h" 2




}
# 96 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/sysmodule.h" 1






extern "C" {


__attribute__ ((visibility ("default"))) PyObject * PySys_GetObject(const char *);
__attribute__ ((visibility ("default"))) int PySys_SetObject(const char *, PyObject *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetArgv(int, wchar_t **);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetArgvEx(int, wchar_t **, int);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetPath(const wchar_t *);

__attribute__ ((visibility ("default"))) void PySys_WriteStdout(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) void PySys_WriteStderr(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) void PySys_FormatStdout(const char *format, ...);
__attribute__ ((visibility ("default"))) void PySys_FormatStderr(const char *format, ...);

__attribute__ ((visibility ("default"))) void PySys_ResetWarnOptions(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddWarnOption(const wchar_t *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddWarnOptionUnicode(PyObject *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PySys_HasWarnOptions(void);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddXOption(const wchar_t *);
__attribute__ ((visibility ("default"))) PyObject * PySys_GetXOptions(void);


typedef struct {
    FILE* perf_map;
    PyThread_type_lock map_lock;
} PerfMapState;

__attribute__ ((visibility ("default"))) int PyUnstable_PerfMapState_Init(void);

__attribute__ ((visibility ("default"))) int PyUnstable_WritePerfMapEntry(const void *code_addr, unsigned int code_size, const char *entry_name);

__attribute__ ((visibility ("default"))) void PyUnstable_PerfMapState_Fini(void);




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/sysmodule.h" 1




__attribute__ ((visibility ("default"))) PyObject * _PySys_GetAttr(PyThreadState *tstate,
                                      PyObject *name);

__attribute__ ((visibility ("default"))) size_t _PySys_GetSizeOf(PyObject *);

typedef int(*Py_AuditHookFunction)(const char *, PyObject *, void *);

__attribute__ ((visibility ("default"))) int PySys_Audit(
    const char *event,
    const char *argFormat,
    ...);
__attribute__ ((visibility ("default"))) int PySys_AddAuditHook(Py_AuditHookFunction, void*);
# 48 "/data/data/com.termux/files/usr/include/python3.12/sysmodule.h" 2




}
# 97 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/osmodule.h" 1






extern "C" {



__attribute__ ((visibility ("default"))) PyObject * PyOS_FSPath(PyObject *path);



}
# 98 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/intrcheck.h" 1



extern "C" {


__attribute__ ((visibility ("default"))) int PyOS_InterruptOccurred(void);


__attribute__ ((visibility ("default"))) void PyOS_BeforeFork(void);
__attribute__ ((visibility ("default"))) void PyOS_AfterFork_Parent(void);
__attribute__ ((visibility ("default"))) void PyOS_AfterFork_Child(void);



__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyOS_AfterFork(void);


__attribute__ ((visibility ("default"))) int _PyOS_IsMainThread(void);
# 28 "/data/data/com.termux/files/usr/include/python3.12/intrcheck.h"
}
# 99 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/import.h" 1





extern "C" {


__attribute__ ((visibility ("default"))) long PyImport_GetMagicNumber(void);
__attribute__ ((visibility ("default"))) const char * PyImport_GetMagicTag(void);
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModule(
    const char *name,
    PyObject *co
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleEx(
    const char *name,
    PyObject *co,
    const char *pathname
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleWithPathnames(
    const char *name,
    PyObject *co,
    const char *pathname,
    const char *cpathname
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_GetModuleDict(void);

__attribute__ ((visibility ("default"))) PyObject * PyImport_GetModule(PyObject *name);


__attribute__ ((visibility ("default"))) PyObject * PyImport_AddModuleObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_AddModule(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModule(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );





__attribute__ ((visibility ("default"))) PyObject * PyImport_GetImporter(PyObject *path);
__attribute__ ((visibility ("default"))) PyObject * PyImport_Import(PyObject *name);
__attribute__ ((visibility ("default"))) PyObject * PyImport_ReloadModule(PyObject *m);

__attribute__ ((visibility ("default"))) int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) int PyImport_ImportFrozenModule(
    const char *name
    );

__attribute__ ((visibility ("default"))) int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/import.h" 1




extern "C" __attribute__ ((visibility ("default"))) PyObject* PyInit__imp(void);

__attribute__ ((visibility ("default"))) int _PyImport_IsInitialized(PyInterpreterState *);

__attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleId(_Py_Identifier *name);
__attribute__ ((visibility ("default"))) int _PyImport_SetModule(PyObject *name, PyObject *module);
__attribute__ ((visibility ("default"))) int _PyImport_SetModuleString(const char *name, PyObject* module);

__attribute__ ((visibility ("default"))) void _PyImport_AcquireLock(PyInterpreterState *interp);
__attribute__ ((visibility ("default"))) int _PyImport_ReleaseLock(PyInterpreterState *interp);

__attribute__ ((visibility ("default"))) int _PyImport_FixupBuiltin(
    PyObject *mod,
    const char *name,
    PyObject *modules
    );
__attribute__ ((visibility ("default"))) int _PyImport_FixupExtensionObject(PyObject*, PyObject *,
                                               PyObject *, PyObject *);

struct _inittab {
    const char *name;
    PyObject* (*initfunc)(void);
};

extern __attribute__ ((visibility ("default"))) struct _inittab * PyImport_Inittab;
__attribute__ ((visibility ("default"))) int PyImport_ExtendInittab(struct _inittab *newtab);

struct _frozen {
    const char *name;
    const unsigned char *code;
    int size;
    int is_package;
    PyObject *(*get_code)(void);
};




extern __attribute__ ((visibility ("default"))) const struct _frozen * PyImport_FrozenModules;

extern __attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleAttr(PyObject *, PyObject *);
extern __attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleAttrString(const char *, const char *);
# 92 "/data/data/com.termux/files/usr/include/python3.12/import.h" 2




}
# 100 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/abstract.h" 1





extern "C" {
# 146 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallNoArgs(PyObject *func);
# 158 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Call(PyObject *callable,
                                     PyObject *args, PyObject *kwargs);
# 169 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallObject(PyObject *callable,
                                           PyObject *args);
# 182 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                             const char *format, ...);
# 194 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethod_SizeT(PyObject *obj,
                                           const char *name,
                                           const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                    const char *format,
                                                    ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethod_SizeT(PyObject *obj,
                                                  const char *name,
                                                  const char *format,
                                                  ...);
# 215 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                    ...);
# 226 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallMethodObjArgs(
    PyObject *obj,
    PyObject *name,
    ...);





__attribute__ ((visibility ("default"))) Py_ssize_t PyVectorcall_NARGS(size_t nargsf);



__attribute__ ((visibility ("default"))) PyObject * PyVectorcall_Call(PyObject *callable, PyObject *tuple, PyObject *dict);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Vectorcall(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwnames);


__attribute__ ((visibility ("default"))) PyObject * PyObject_VectorcallMethod(
    PyObject *name, PyObject *const *args,
    size_t nargsf, PyObject *kwnames);
# 294 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Type(PyObject *o);
# 303 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_Size(PyObject *o);




__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_Length(PyObject *o);






__attribute__ ((visibility ("default"))) PyObject * PyObject_GetItem(PyObject *o, PyObject *key);







__attribute__ ((visibility ("default"))) int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);





__attribute__ ((visibility ("default"))) int PyObject_DelItemString(PyObject *o, const char *key);





__attribute__ ((visibility ("default"))) int PyObject_DelItem(PyObject *o, PyObject *key);
# 351 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsCharBuffer(PyObject *obj,
                                      const char **buffer,
                                      Py_ssize_t *buffer_len);





__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyObject_CheckReadBuffer(PyObject *obj);







__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsReadBuffer(PyObject *obj,
                                      const void **buffer,
                                      Py_ssize_t *buffer_len);







__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsWriteBuffer(PyObject *obj,
                                       void **buffer,
                                       Py_ssize_t *buffer_len);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Format(PyObject *obj,
                                       PyObject *format_spec);







__attribute__ ((visibility ("default"))) PyObject * PyObject_GetIter(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAIter(PyObject *);




__attribute__ ((visibility ("default"))) int PyIter_Check(PyObject *);




__attribute__ ((visibility ("default"))) int PyAIter_Check(PyObject *);
# 422 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyIter_Next(PyObject *);
# 434 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PySendResult PyIter_Send(PyObject *, PyObject *, PyObject **);
# 443 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) int PyNumber_Check(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_MatrixMultiply(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                      PyObject *o3);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Negative(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Positive(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Absolute(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Invert(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_And(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) int PyIndex_Check(PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_Index(PyObject *o);







__attribute__ ((visibility ("default"))) Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Long(PyObject *o);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Float(PyObject *o);
# 579 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceMatrixMultiply(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                   PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                  PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                             PyObject *o3);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_ToBase(PyObject *n, int base);
# 669 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) int PySequence_Check(PyObject *o);


__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Size(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Length(PyObject *o);






__attribute__ ((visibility ("default"))) PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);




__attribute__ ((visibility ("default"))) PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);




__attribute__ ((visibility ("default"))) PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);





__attribute__ ((visibility ("default"))) int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);




__attribute__ ((visibility ("default"))) int PySequence_DelItem(PyObject *o, Py_ssize_t i);





__attribute__ ((visibility ("default"))) int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                    PyObject *v);





__attribute__ ((visibility ("default"))) int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);




__attribute__ ((visibility ("default"))) PyObject * PySequence_Tuple(PyObject *o);



__attribute__ ((visibility ("default"))) PyObject * PySequence_List(PyObject *o);
# 741 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PySequence_Fast(PyObject *o, const char* m);
# 764 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);





__attribute__ ((visibility ("default"))) int PySequence_Contains(PyObject *seq, PyObject *ob);







__attribute__ ((visibility ("default"))) int PySequence_In(PyObject *o, PyObject *value);
# 788 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
# 797 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);







__attribute__ ((visibility ("default"))) int PyMapping_Check(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PyMapping_Size(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PyMapping_Length(PyObject *o);
# 849 "/data/data/com.termux/files/usr/include/python3.12/abstract.h"
__attribute__ ((visibility ("default"))) int PyMapping_HasKeyString(PyObject *o, const char *key);






__attribute__ ((visibility ("default"))) int PyMapping_HasKey(PyObject *o, PyObject *key);



__attribute__ ((visibility ("default"))) PyObject * PyMapping_Keys(PyObject *o);



__attribute__ ((visibility ("default"))) PyObject * PyMapping_Values(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyMapping_Items(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyMapping_GetItemString(PyObject *o,
                                               const char *key);





__attribute__ ((visibility ("default"))) int PyMapping_SetItemString(PyObject *o, const char *key,
                                        PyObject *value);


__attribute__ ((visibility ("default"))) int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


__attribute__ ((visibility ("default"))) int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);



# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h" 1
# 21 "/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _PyStack_AsDict(
    PyObject *const *values,
    PyObject *kwnames);
# 36 "/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _Py_CheckFunctionResult(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *result,
    const char *where);






__attribute__ ((visibility ("default"))) PyObject * _PyObject_MakeTpCall(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *const *args, Py_ssize_t nargs,
    PyObject *keywords);





static inline Py_ssize_t
_PyVectorcall_NARGS(size_t n)
{
    return n & ~(static_cast<size_t>(1) << (8 * sizeof(size_t) - 1));
}

__attribute__ ((visibility ("default"))) vectorcallfunc PyVectorcall_Function(PyObject *callable);
# 76 "/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_VectorcallDict(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwargs);


__attribute__ ((visibility ("default"))) PyObject * _PyObject_FastCall(
    PyObject *func,
    PyObject *const *args,
    Py_ssize_t nargs);

__attribute__ ((visibility ("default"))) PyObject * PyObject_CallOneArg(PyObject *func, PyObject *arg);

static inline PyObject *
PyObject_CallMethodNoArgs(PyObject *self, PyObject *name)
{
    size_t nargsf = 1 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1));
    return PyObject_VectorcallMethod(name, &self, nargsf, nullptr);
}

static inline PyObject *
PyObject_CallMethodOneArg(PyObject *self, PyObject *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1));
    ((arg != __null) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h", 102, __PRETTY_FUNCTION__, "arg != NULL"));
    return PyObject_VectorcallMethod(name, args, nargsf, nullptr);
}

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethod(PyObject *obj,
                                            PyObject *name,
                                            const char *format, ...);



__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodId_SizeT(PyObject *obj,
                                              _Py_Identifier *name,
                                              const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodId_SizeT(PyObject *obj,
                                                    _Py_Identifier *name,
                                                    const char *format,
                                                    ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodIdObjArgs(
    PyObject *obj,
    _Py_Identifier *name,
    ...);

static inline PyObject *
_PyObject_VectorcallMethodId(
    _Py_Identifier *name, PyObject *const *args,
    size_t nargsf, PyObject *kwnames)
{
    PyObject *oname = _PyUnicode_FromId(name);
    if (!oname) {
        return nullptr;
    }
    return PyObject_VectorcallMethod(oname, args, nargsf, kwnames);
}

static inline PyObject *
_PyObject_CallMethodIdNoArgs(PyObject *self, _Py_Identifier *name)
{
    size_t nargsf = 1 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1));
    return _PyObject_VectorcallMethodId(name, &self, nargsf, nullptr);
}

static inline PyObject *
_PyObject_CallMethodIdOneArg(PyObject *self, _Py_Identifier *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1));
    ((arg != __null) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h", 150, __PRETTY_FUNCTION__, "arg != NULL"));
    return _PyObject_VectorcallMethodId(name, args, nargsf, nullptr);
}

__attribute__ ((visibility ("default"))) int _PyObject_HasLen(PyObject *o);




__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_LengthHint(PyObject *o, Py_ssize_t);
# 183 "/data/data/com.termux/files/usr/include/python3.12/cpython/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                              PyObject *obj, int operation);



__attribute__ ((visibility ("default"))) int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

__attribute__ ((visibility ("default"))) int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);

__attribute__ ((visibility ("default"))) char *const * _PySequence_BytesToCharpArray(PyObject* self);

__attribute__ ((visibility ("default"))) void _Py_FreeCharPArray(char *const array[]);


__attribute__ ((visibility ("default"))) void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
__attribute__ ((visibility ("default"))) void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);


__attribute__ ((visibility ("default"))) int _Py_convert_optional_to_ssize_t(PyObject *, void *);


__attribute__ ((visibility ("default"))) PyObject * _PyNumber_Index(PyObject *o);
# 893 "/data/data/com.termux/files/usr/include/python3.12/abstract.h" 2




}
# 101 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/bltinmodule.h" 1



extern "C" {


extern __attribute__ ((visibility ("default"))) PyTypeObject PyFilter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMap_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyZip_Type;


}
# 102 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyctype.h" 1




extern "C" {
# 16 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyctype.h"
extern __attribute__ ((visibility ("default"))) const unsigned int _Py_ctype_table[256];
# 29 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyctype.h"
extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ctype_tolower[256];
extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ctype_toupper[256];





}
# 103 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pystrtod.h" 1




extern "C" {



__attribute__ ((visibility ("default"))) double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



__attribute__ ((visibility ("default"))) char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);


__attribute__ ((visibility ("default"))) PyObject * _Py_string_to_number_with_underscores(
    const char *str, Py_ssize_t len, const char *what, PyObject *obj, void *arg,
    PyObject *(*innerfunc)(const char *, Py_ssize_t, void *));

__attribute__ ((visibility ("default"))) double _Py_parse_inf_or_nan(const char *p, char **endptr);
# 43 "/data/data/com.termux/files/usr/include/python3.12/pystrtod.h"
}
# 104 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/pystrcmp.h" 1




extern "C" {


__attribute__ ((visibility ("default"))) int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyOS_mystricmp(const char *, const char *);
# 20 "/data/data/com.termux/files/usr/include/python3.12/pystrcmp.h"
}
# 105 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/fileutils.h" 1



extern "C" {



__attribute__ ((visibility ("default"))) wchar_t * Py_DecodeLocale(
    const char *arg,
    size_t *size);

__attribute__ ((visibility ("default"))) char* Py_EncodeLocale(
    const wchar_t *text,
    size_t *error_pos);




# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/fileutils.h" 1





__attribute__ ((visibility ("default"))) FILE* _Py_fopen_obj(
    PyObject *path,
    const char *mode);
# 20 "/data/data/com.termux/files/usr/include/python3.12/fileutils.h" 2




}
# 106 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/pyfpe.h" 1
# 107 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/tracemalloc.h" 1




extern "C" {
# 15 "/data/data/com.termux/files/usr/include/python3.12/tracemalloc.h"
__attribute__ ((visibility ("default"))) int PyTraceMalloc_Track(
    unsigned int domain,
    uintptr_t ptr,
    size_t size);





__attribute__ ((visibility ("default"))) int PyTraceMalloc_Untrack(
    unsigned int domain,
    uintptr_t ptr);
# 36 "/data/data/com.termux/files/usr/include/python3.12/tracemalloc.h"
__attribute__ ((visibility ("default"))) PyObject* _PyTraceMalloc_GetTraceback(
    unsigned int domain,
    uintptr_t ptr);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_IsTracing(void);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_ClearTraces(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetTraces(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetObjectTraceback(PyObject *obj);


__attribute__ ((visibility ("default"))) PyStatus _PyTraceMalloc_Init(void);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_Start(int max_nframe);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_Stop(void);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_GetTracebackLimit(void);


__attribute__ ((visibility ("default"))) size_t _PyTraceMalloc_GetMemory(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetTracedMemory(void);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_ResetPeak(void);


}
# 108 "/data/data/com.termux/files/usr/include/python3.12/Python.h" 2
# 17 "yxdfb/Password.cpp" 2
# 32 "yxdfb/Password.cpp"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3
# 33 "yxdfb/Password.cpp" 2
# 426 "yxdfb/Password.cpp"
    enum { __pyx_check_sizeof_voidp = 1 / (int)(8 == sizeof(void*)) };
# 472 "yxdfb/Password.cpp"
     template<class T> void CYTHON_UNUSED_VAR( const T& ) { }
# 523 "yxdfb/Password.cpp"
    typedef uintptr_t __pyx_uintptr_t;
# 557 "yxdfb/Password.cpp"
  template <typename T>
  struct __PYX_IS_UNSIGNED_IMPL {static const bool value = T(0) < T(-1);};
# 580 "yxdfb/Password.cpp"
template<typename T>
void __Pyx_call_destructor(T& x) {
    x.~T();
}
template<typename T>
class __Pyx_FakeReference {
  public:
    __Pyx_FakeReference() : ptr(__null) { }
    __Pyx_FakeReference(const T& ref) : ptr(const_cast<T*>(&ref)) { }
    T *operator->() { return ptr; }
    T *operator&() { return ptr; }
    operator T&() { return *ptr; }
    template<typename U> bool operator ==(const U& other) const { return *ptr == other; }
    template<typename U> bool operator !=(const U& other) const { return *ptr != other; }
    template<typename U> bool operator==(const __Pyx_FakeReference<U>& other) const { return *ptr == *other.ptr; }
    template<typename U> bool operator!=(const __Pyx_FakeReference<U>& other) const { return *ptr != *other.ptr; }
  private:
    T *ptr;
};
# 678 "yxdfb/Password.cpp"
  static __inline__ __attribute__ ((__unused__)) PyCodeObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
    PyCodeObject *result;
    PyObject *empty_bytes = PyBytes_FromStringAndSize("", 0);
    if (!empty_bytes) return __null;
    result =

        PyUnstable_Code_NewWithPosOnlyArgs



        (a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, name, fline, lnos, empty_bytes);
    Py_DECREF(((PyObject*)((empty_bytes))));
    return result;
  }
# 812 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_CyOrPyCFunction_GET_SELF(PyObject *func) {
    return ((((PyCFunctionObject*)(func))->m_ml->ml_flags) & 0x0020) ? __null : ((PyCFunctionObject*)func)->m_self;
}

static __inline__ __attribute__ ((__unused__)) int __Pyx__IsSameCFunction(PyObject *func, void *cfunc) {



    return PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type)) && PyCFunction_GET_FUNCTION(((PyObject*)((func)))) == (PyCFunction) cfunc;

}
# 941 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_PyDict_GetItemStr(PyObject *dict, PyObject *name) {
    PyObject *res = _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash);
    if (res == __null) PyErr_Clear();
    return res;
}
# 1130 "yxdfb/Password.cpp"
  static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_PyImport_AddModuleRef(const char *name) {
      PyObject *module = PyImport_AddModule(name);
      Py_XINCREF(((PyObject*)((module))));
      return module;
  }
# 1197 "yxdfb/Password.cpp"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/math.h" 1 3
# 1198 "yxdfb/Password.cpp" 2
# 1242 "yxdfb/Password.cpp"
typedef struct {PyObject **p; const char *s; const Py_ssize_t n; const char* encoding;
                const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry;
# 1263 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t) i < (size_t) limit;
}

# 1 "/data/data/com.termux/files/usr/include/c++/v1/cstdlib" 1 3
# 87 "/data/data/com.termux/files/usr/include/c++/v1/cstdlib" 3
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdlib.h" 1 3
# 88 "/data/data/com.termux/files/usr/include/c++/v1/cstdlib" 2 3
# 99 "/data/data/com.termux/files/usr/include/c++/v1/cstdlib" 3


namespace __attribute__((__type_visibility__("default"))) std { inline namespace __ndk1 {

using ::size_t __attribute__((__using_if_exists__));
using ::div_t __attribute__((__using_if_exists__));
using ::ldiv_t __attribute__((__using_if_exists__));
using ::lldiv_t __attribute__((__using_if_exists__));
using ::atof __attribute__((__using_if_exists__));
using ::atoi __attribute__((__using_if_exists__));
using ::atol __attribute__((__using_if_exists__));
using ::atoll __attribute__((__using_if_exists__));
using ::strtod __attribute__((__using_if_exists__));
using ::strtof __attribute__((__using_if_exists__));
using ::strtold __attribute__((__using_if_exists__));
using ::strtol __attribute__((__using_if_exists__));
using ::strtoll __attribute__((__using_if_exists__));
using ::strtoul __attribute__((__using_if_exists__));
using ::strtoull __attribute__((__using_if_exists__));
using ::rand __attribute__((__using_if_exists__));
using ::srand __attribute__((__using_if_exists__));
using ::calloc __attribute__((__using_if_exists__));
using ::free __attribute__((__using_if_exists__));
using ::malloc __attribute__((__using_if_exists__));
using ::realloc __attribute__((__using_if_exists__));
using ::abort __attribute__((__using_if_exists__));
using ::atexit __attribute__((__using_if_exists__));
using ::exit __attribute__((__using_if_exists__));
using ::_Exit __attribute__((__using_if_exists__));
using ::getenv __attribute__((__using_if_exists__));
using ::system __attribute__((__using_if_exists__));
using ::bsearch __attribute__((__using_if_exists__));
using ::qsort __attribute__((__using_if_exists__));
using ::abs __attribute__((__using_if_exists__));
using ::labs __attribute__((__using_if_exists__));
using ::llabs __attribute__((__using_if_exists__));
using ::div __attribute__((__using_if_exists__));
using ::ldiv __attribute__((__using_if_exists__));
using ::lldiv __attribute__((__using_if_exists__));
using ::mblen __attribute__((__using_if_exists__));

using ::mbtowc __attribute__((__using_if_exists__));
using ::wctomb __attribute__((__using_if_exists__));
using ::mbstowcs __attribute__((__using_if_exists__));
using ::wcstombs __attribute__((__using_if_exists__));


using ::at_quick_exit __attribute__((__using_if_exists__));
using ::quick_exit __attribute__((__using_if_exists__));


using ::aligned_alloc __attribute__((__using_if_exists__));


}}
# 1268 "yxdfb/Password.cpp" 2
# 1282 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) Py_ssize_t __Pyx_ssize_strlen(const char *s);
static __inline__ __attribute__ ((__unused__)) const char* __Pyx_PyObject_AsString(PyObject*);
static __inline__ __attribute__ ((__unused__)) const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyByteArray_FromString(const char*);



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyUnicode_FromString(const char*);
# 1317 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_PyBool_FromLong(long b);
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyObject_IsTrue(PyObject*);
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);


static __inline__ __attribute__ ((__unused__)) Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_PyInt_FromSize_t(size_t);
static __inline__ __attribute__ ((__unused__)) Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
# 1361 "yxdfb/Password.cpp"
  typedef Py_ssize_t __Pyx_compact_pylong;
  typedef size_t __Pyx_compact_upylong;
# 1469 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }


static PyObject *__pyx_m = __null;

static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm = "yxdfb/Password.cpp";
static const char *__pyx_filename;



static const char *__pyx_f[] = {
  "yxdfb/Password.py",
};
# 1495 "yxdfb/Password.cpp"
struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords;
# 1504 "yxdfb/Password.cpp"
struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords {
  PyObject ob_base;
  PyObject *__pyx_v_pasw;
};
# 1593 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n);
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n);






static __inline__ __attribute__ ((__unused__)) int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);


static __inline__ __attribute__ ((__unused__)) int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);
# 1629 "yxdfb/Password.cpp"
    static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s);
# 1656 "yxdfb/Password.cpp"
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);


static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);


static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,
    const char* function_name);



static __inline__ __attribute__ ((__unused__)) int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(((PyObject*)((list))));
    if (__builtin_expect(!!(L->allocated > len), 1) & __builtin_expect(!!(len > (L->allocated >> 1)), 1)) {
        Py_INCREF(((PyObject*)((x))));



        PyList_SET_ITEM(((PyObject*)((list))), (len), ((PyObject*)((x))));

        Py_SET_SIZE(((PyVarObject*)((list))), (len + 1));
        return 0;
    }
    return PyList_Append(list, x);
}





static __inline__ __attribute__ ((__unused__)) void __Pyx_RaiseClosureNameError(const char *varname);



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
# 1736 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);






static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);




static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs);
# 1760 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);




static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j);
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i,
                                                     int is_list, int wraparound, int boundscheck);


# 1 "/data/data/com.termux/files/usr/include/python3.12/structmember.h" 1



extern "C" {
# 21 "/data/data/com.termux/files/usr/include/python3.12/structmember.h"
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3
# 22 "/data/data/com.termux/files/usr/include/python3.12/structmember.h" 2
# 54 "/data/data/com.termux/files/usr/include/python3.12/structmember.h"
}
# 1774 "yxdfb/Password.cpp" 2







static PyObject *__Pyx_FetchSharedCythonABIModule(void);



static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);
# 1807 "yxdfb/Password.cpp"
static PyObject *__Pyx_PyMethod_New(PyObject *func, PyObject *self, PyObject *typ) {
    CYTHON_UNUSED_VAR(typ);
    if (!self)
        return (Py_INCREF(((PyObject*)((func)))), func);
    return PyMethod_New(func, self);
}






static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw);
# 1843 "yxdfb/Password.cpp"
typedef struct {






    PyCMethodObject func;







    PyObject *func_dict;
    PyObject *func_name;
    PyObject *func_qualname;
    PyObject *func_doc;
    PyObject *func_globals;
    PyObject *func_code;
    PyObject *func_closure;



    void *defaults;
    int defaults_pyobjects;
    size_t defaults_size;
    int flags;
    PyObject *defaults_tuple;
    PyObject *defaults_kwdict;
    PyObject *(*defaults_getter)(PyObject *);
    PyObject *func_annotations;
    PyObject *func_is_coroutine;
} __pyx_CyFunctionObject;




static __inline__ __attribute__ ((__unused__)) int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc);


static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);
static __inline__ __attribute__ ((__unused__)) void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj);
static __inline__ __attribute__ ((__unused__)) void *__Pyx_CyFunction_InitDefaults(PyObject *m,
                                                         size_t size,
                                                         int pyobjects);
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
                                                            PyObject *tuple);
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *m,
                                                             PyObject *dict);
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetAnnotationsDict(PyObject *m,
                                                              PyObject *dict);
static int __pyx_CyFunction_init(PyObject *module);

static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
# 1914 "yxdfb/Password.cpp"
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyFrozenSet_New(PyObject* it);


static __inline__ __attribute__ ((__unused__)) int __Pyx_PySet_ContainsTF(PyObject* key, PyObject* set, int eq);



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyList_GetSlice(PyObject* src, Py_ssize_t start, Py_ssize_t stop);
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyTuple_GetSlice(PyObject* src, Py_ssize_t start, Py_ssize_t stop);






static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);


static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);


static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name);



static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases);



[[maybe_unused]] static int __Pyx_PyType_Ready(PyTypeObject *t);
# 1974 "yxdfb/Password.cpp"
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);




static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
# 2009 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static __inline__ __attribute__ ((__unused__)) void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
# 2028 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name);


static PyObject *__Pyx_GetBuiltinName(PyObject *name);


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);





static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error);






static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name, PyObject *qualname,
                                           PyObject *mkw, PyObject *modname, PyObject *doc);
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases, PyObject *dict,
                                      PyObject *mkw, int calculate_metaclass, int allow_py2_metaclass);
# 2082 "yxdfb/Password.cpp"
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);




typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,__null};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);



static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);







static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyInt_From_long(long value);
# 2121 "yxdfb/Password.cpp"
typedef const char *__Pyx_TypeName;






static __inline__ __attribute__ ((__unused__)) long __Pyx_PyInt_As_long(PyObject *);


static __inline__ __attribute__ ((__unused__)) int __Pyx_PyInt_As_int(PyObject *);





static __inline__ __attribute__ ((__unused__)) int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static __inline__ __attribute__ ((__unused__)) int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b);
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
# 2151 "yxdfb/Password.cpp"
static unsigned long __Pyx_get_runtime_version(void);
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer);


static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);







extern int __pyx_module_is_main_Password;
int __pyx_module_is_main_Password = 0;




static const char __pyx_k_[] = "";
static const char __pyx_k_p[] = "p";
static const char __pyx_k__6[] = "?";
static const char __pyx_k_gc[] = "gc";
static const char __pyx_k_123[] = "123";
static const char __pyx_k_Pws[] = "Pws";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_2023[] = "2023";
static const char __pyx_k_2024[] = "2024";
static const char __pyx_k_asal[] = "asal";
static const char __pyx_k_dict[] = "__dict__";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_nama[] = "nama";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_pasw[] = "pasw";
static const char __pyx_k_seen[] = "seen";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_12345[] = "12345";
static const char __pyx_k_depan[] = "depan";
static const char __pyx_k_lower[] = "lower";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_super[] = "super";
static const char __pyx_k_enable[] = "enable";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_disable[] = "disable";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_unknown[] = "unknown";
static const char __pyx_k_Password[] = "Password";
static const char __pyx_k_belakang[] = "belakang";
static const char __pyx_k_password[] = "password";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_set_name[] = "__set_name__";
static const char __pyx_k_isenabled[] = "isenabled";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_nama_split[] = "nama_split";
static const char __pyx_k_pw_tambahan[] = "pw_tambahan";
static const char __pyx_k_unique_pasw[] = "unique_pasw";
static const char __pyx_k_add_password[] = "add_password";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_init_subclass[] = "__init_subclass__";
static const char __pyx_k_yxdfb_Password_py[] = "yxdfb/Password.py";
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_generate_passwords[] = "generate_passwords";
static const char __pyx_k_Pws_generate_passwords[] = "Pws.generate_passwords";
static const char __pyx_k_Pws_generate_passwords_locals_ad[] = "Pws.generate_passwords.<locals>.add_password";

static PyObject *__pyx_pf_8Password_3Pws_18generate_passwords_add_password(PyObject *__pyx_self, PyObject *__pyx_v_password);
static PyObject *__pyx_pf_8Password_3Pws_generate_passwords([[maybe_unused]] PyObject *__pyx_self, [[maybe_unused]] PyObject *__pyx_v_self, PyObject *__pyx_v_nama, PyObject *__pyx_v_asal, PyObject *__pyx_v_pw_tambahan);
static PyObject *__pyx_tp_new_8Password___pyx_scope_struct__generate_passwords(PyTypeObject *t, PyObject *a, PyObject *k);


typedef struct {
  PyObject *__pyx_d;
  PyObject *__pyx_b;
  PyObject *__pyx_cython_runtime;
  PyObject *__pyx_empty_tuple;
  PyObject *__pyx_empty_bytes;
  PyObject *__pyx_empty_unicode;

  PyTypeObject *__pyx_CyFunctionType;
# 2250 "yxdfb/Password.cpp"
  PyTypeObject *__pyx_ptype_8Password___pyx_scope_struct__generate_passwords;
  PyObject *__pyx_kp_s_;
  PyObject *__pyx_kp_s_123;
  PyObject *__pyx_kp_s_12345;
  PyObject *__pyx_kp_s_2023;
  PyObject *__pyx_kp_s_2024;
  PyObject *__pyx_n_s_Password;
  PyObject *__pyx_n_s_Pws;
  PyObject *__pyx_n_s_Pws_generate_passwords;
  PyObject *__pyx_n_s_Pws_generate_passwords_locals_ad;
  PyObject *__pyx_n_s__6;
  PyObject *__pyx_n_s_add_password;
  PyObject *__pyx_n_s_asal;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_s_belakang;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_depan;
  PyObject *__pyx_n_s_dict;
  PyObject *__pyx_kp_u_disable;
  PyObject *__pyx_n_s_doc;
  PyObject *__pyx_kp_u_enable;
  PyObject *__pyx_kp_u_gc;
  PyObject *__pyx_n_s_generate_passwords;
  PyObject *__pyx_n_s_init_subclass;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_kp_u_isenabled;
  PyObject *__pyx_n_s_lower;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_n_s_metaclass;
  PyObject *__pyx_n_s_module;
  PyObject *__pyx_n_s_nama;
  PyObject *__pyx_n_s_nama_split;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_s_p;
  PyObject *__pyx_n_s_password;
  PyObject *__pyx_n_s_pasw;
  PyObject *__pyx_n_s_prepare;
  PyObject *__pyx_n_s_pw_tambahan;
  PyObject *__pyx_n_s_qualname;
  PyObject *__pyx_n_s_seen;
  PyObject *__pyx_n_s_self;
  PyObject *__pyx_n_s_set_name;
  PyObject *__pyx_n_s_split;
  PyObject *__pyx_n_s_super;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_n_s_unique_pasw;
  PyObject *__pyx_n_s_unknown;
  PyObject *__pyx_kp_s_yxdfb_Password_py;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__4;
  PyObject *__pyx_codeobj__3;
  PyObject *__pyx_codeobj__5;
} __pyx_mstate;
# 2319 "yxdfb/Password.cpp"
static __pyx_mstate __pyx_mstate_global_static =

    {};



static __pyx_mstate *__pyx_mstate_global = &__pyx_mstate_global_static;
# 2564 "yxdfb/Password.cpp"
static PyObject *__pyx_pw_8Password_3Pws_1generate_passwords(PyObject *__pyx_self,

PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds



);
static PyMethodDef __pyx_mdef_8Password_3Pws_1generate_passwords = {"generate_passwords", (PyCFunction)(void*)(_PyCFunctionFastWithKeywords)__pyx_pw_8Password_3Pws_1generate_passwords, 0x0080|0x0002, 0};
static PyObject *__pyx_pw_8Password_3Pws_1generate_passwords(PyObject *__pyx_self,

PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds



) {
  [[maybe_unused]] PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_nama = 0;
  PyObject *__pyx_v_asal = 0;
  PyObject *__pyx_v_pw_tambahan = 0;



  [[maybe_unused]] PyObject *const *__pyx_kwvalues;
  PyObject* values[4] = {0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;

                                                               ;







  __pyx_kwvalues = ((__pyx_args) + (__pyx_nargs));
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_mstate_global->__pyx_n_s_self,&__pyx_mstate_global->__pyx_n_s_nama,&__pyx_mstate_global->__pyx_n_s_asal,&__pyx_mstate_global->__pyx_n_s_pw_tambahan,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case 4: values[3] = __pyx_args[3];
        [[fallthrough]];
        case 3: values[2] = __pyx_args[2];
        [[fallthrough]];
        case 2: values[1] = __pyx_args[1];
        [[fallthrough]];
        case 1: values[0] = __pyx_args[0];
        [[fallthrough]];
        case 0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyTuple_GET_SIZE(((PyObject*)((__pyx_kwds))));
      switch (__pyx_nargs) {
        case 0:
        if (__builtin_expect(!!((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_mstate_global->__pyx_n_s_self)) != 0), 1)) {
          (void)values[0];
          kw_args--;
        }
        else if (__builtin_expect(!!(PyErr_Occurred()), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2625; (void)__pyx_clineno; } goto __pyx_L3_error; }
        else goto __pyx_L5_argtuple_error;
        [[fallthrough]];
        case 1:
        if (__builtin_expect(!!((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_mstate_global->__pyx_n_s_nama)) != 0), 1)) {
          (void)values[1];
          kw_args--;
        }
        else if (__builtin_expect(!!(PyErr_Occurred()), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2633; (void)__pyx_clineno; } goto __pyx_L3_error; }
        else {
          __Pyx_RaiseArgtupleInvalid("generate_passwords", 1, 4, 4, 1); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2635; (void)__pyx_clineno; } goto __pyx_L3_error; }
        }
        [[fallthrough]];
        case 2:
        if (__builtin_expect(!!((values[2] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_mstate_global->__pyx_n_s_asal)) != 0), 1)) {
          (void)values[2];
          kw_args--;
        }
        else if (__builtin_expect(!!(PyErr_Occurred()), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2643; (void)__pyx_clineno; } goto __pyx_L3_error; }
        else {
          __Pyx_RaiseArgtupleInvalid("generate_passwords", 1, 4, 4, 2); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2645; (void)__pyx_clineno; } goto __pyx_L3_error; }
        }
        [[fallthrough]];
        case 3:
        if (__builtin_expect(!!((values[3] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_mstate_global->__pyx_n_s_pw_tambahan)) != 0), 1)) {
          (void)values[3];
          kw_args--;
        }
        else if (__builtin_expect(!!(PyErr_Occurred()), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2653; (void)__pyx_clineno; } goto __pyx_L3_error; }
        else {
          __Pyx_RaiseArgtupleInvalid("generate_passwords", 1, 4, 4, 3); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2655; (void)__pyx_clineno; } goto __pyx_L3_error; }
        }
      }
      if (__builtin_expect(!!(kw_args > 0), 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (__builtin_expect(!!(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "generate_passwords") < 0), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2660; (void)__pyx_clineno; } goto __pyx_L3_error; }
      }
    } else if (__builtin_expect(!!(__pyx_nargs != 4), 0)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __pyx_args[0];
      values[1] = __pyx_args[1];
      values[2] = __pyx_args[2];
      values[3] = __pyx_args[3];
    }
    __pyx_v_self = values[0];
    __pyx_v_nama = values[1];
    __pyx_v_asal = values[2];
    __pyx_v_pw_tambahan = values[3];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("generate_passwords", 1, 4, 4, __pyx_nargs); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2677; (void)__pyx_clineno; } goto __pyx_L3_error; }
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
                                                    ;
    }
  }
  __Pyx_AddTraceback("Password.Pws.generate_passwords", __pyx_clineno, __pyx_lineno, __pyx_filename);
                               ;
  return __null;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_8Password_3Pws_generate_passwords(__pyx_self, __pyx_v_self, __pyx_v_nama, __pyx_v_asal, __pyx_v_pw_tambahan);


  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
                                                    ;
    }
  }
                               ;
  return __pyx_r;
}
# 2713 "yxdfb/Password.cpp"
static PyObject *__pyx_pw_8Password_3Pws_18generate_passwords_1add_password(PyObject *__pyx_self,

PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds



);
static PyMethodDef __pyx_mdef_8Password_3Pws_18generate_passwords_1add_password = {"add_password", (PyCFunction)(void*)(_PyCFunctionFastWithKeywords)__pyx_pw_8Password_3Pws_18generate_passwords_1add_password, 0x0080|0x0002, 0};
static PyObject *__pyx_pw_8Password_3Pws_18generate_passwords_1add_password(PyObject *__pyx_self,

PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds



) {
  PyObject *__pyx_v_password = 0;



  [[maybe_unused]] PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;

                                                         ;







  __pyx_kwvalues = ((__pyx_args) + (__pyx_nargs));
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_mstate_global->__pyx_n_s_password,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case 1: values[0] = __pyx_args[0];
        [[fallthrough]];
        case 0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyTuple_GET_SIZE(((PyObject*)((__pyx_kwds))));
      switch (__pyx_nargs) {
        case 0:
        if (__builtin_expect(!!((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_mstate_global->__pyx_n_s_password)) != 0), 1)) {
          (void)values[0];
          kw_args--;
        }
        else if (__builtin_expect(!!(PyErr_Occurred()), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 2765; (void)__pyx_clineno; } goto __pyx_L3_error; }
        else goto __pyx_L5_argtuple_error;
      }
      if (__builtin_expect(!!(kw_args > 0), 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (__builtin_expect(!!(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "add_password") < 0), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 2770; (void)__pyx_clineno; } goto __pyx_L3_error; }
      }
    } else if (__builtin_expect(!!(__pyx_nargs != 1), 0)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __pyx_args[0];
    }
    __pyx_v_password = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("add_password", 1, 1, 1, __pyx_nargs); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 2781; (void)__pyx_clineno; } goto __pyx_L3_error; }
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
                                                    ;
    }
  }
  __Pyx_AddTraceback("Password.Pws.generate_passwords.add_password", __pyx_clineno, __pyx_lineno, __pyx_filename);
                               ;
  return __null;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_self, __pyx_v_password);


  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
                                                    ;
    }
  }
                               ;
  return __pyx_r;
}

static PyObject *__pyx_pf_8Password_3Pws_18generate_passwords_add_password(PyObject *__pyx_self, PyObject *__pyx_v_password) {
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *__pyx_cur_scope;
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *__pyx_outer_scope;
  PyObject *__pyx_r = __null;

  Py_ssize_t __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;
                                               ;
  __pyx_outer_scope = (struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *) (((__pyx_CyFunctionObject *) (__pyx_self))->func_closure);
  __pyx_cur_scope = __pyx_outer_scope;
# 2830 "yxdfb/Password.cpp"
  __pyx_t_1 = PyObject_Size(__pyx_v_password); if (__builtin_expect(!!(__pyx_t_1 == ((Py_ssize_t)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 12; (void)__pyx_lineno; __pyx_clineno = 2830; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_t_2 = (__pyx_t_1 >= 6);
  if (__pyx_t_2) {
# 2841 "yxdfb/Password.cpp"
    if (__builtin_expect(!!(!__pyx_cur_scope->__pyx_v_pasw), 0)) { __Pyx_RaiseClosureNameError("pasw"); { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 13; (void)__pyx_lineno; __pyx_clineno = 2841; (void)__pyx_clineno; } goto __pyx_L1_error; } }
    if (__builtin_expect(!!(__pyx_cur_scope->__pyx_v_pasw == (&_Py_NoneStruct)), 0)) {
      PyErr_Format(PyExc_AttributeError, "'NoneType' object has no attribute '%.30s'", "append");
      { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 13; (void)__pyx_lineno; __pyx_clineno = 2844; (void)__pyx_clineno; } goto __pyx_L1_error; }
    }
    __pyx_t_3 = __Pyx_PyList_Append(__pyx_cur_scope->__pyx_v_pasw, __pyx_v_password); if (__builtin_expect(!!(__pyx_t_3 == ((int)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 13; (void)__pyx_lineno; __pyx_clineno = 2846; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 2855 "yxdfb/Password.cpp"
  }
# 2866 "yxdfb/Password.cpp"
  __pyx_r = (&_Py_NoneStruct); Py_INCREF(((PyObject*)(((&_Py_NoneStruct)))));
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("Password.Pws.generate_passwords.add_password", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = __null;
  __pyx_L0:;
                         ;
                               ;
  return __pyx_r;
}
# 2885 "yxdfb/Password.cpp"
static PyObject *__pyx_pf_8Password_3Pws_generate_passwords([[maybe_unused]] PyObject *__pyx_self, [[maybe_unused]] PyObject *__pyx_v_self, PyObject *__pyx_v_nama, PyObject *__pyx_v_asal, PyObject *__pyx_v_pw_tambahan) {
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *__pyx_cur_scope;
  PyObject *__pyx_v_nama_split = __null;
  PyObject *__pyx_v_depan = __null;
  PyObject *__pyx_v_belakang = __null;
  PyObject *__pyx_v_add_password = 0;
  PyObject *__pyx_v_p = __null;
  PyObject *__pyx_v_seen = __null;
  PyObject *__pyx_v_unique_pasw = __null;
  PyObject *__pyx_r = __null;

  PyObject *__pyx_t_1 = __null;
  int __pyx_t_2;
  PyObject *__pyx_t_3 = __null;
  PyObject *__pyx_t_4 = __null;
  PyObject *__pyx_t_5 = __null;
  PyObject *__pyx_t_6 = __null;
  unsigned int __pyx_t_7;
  Py_ssize_t __pyx_t_8;
  PyObject *(*__pyx_t_9)(PyObject *);
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;
                                                     ;
  __pyx_cur_scope = (struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)__pyx_tp_new_8Password___pyx_scope_struct__generate_passwords(__pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords, __pyx_mstate_global->__pyx_empty_tuple, __null);
  if (__builtin_expect(!!(!__pyx_cur_scope), 0)) {
    __pyx_cur_scope = ((struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)(&_Py_NoneStruct));
    Py_INCREF(((PyObject*)(((&_Py_NoneStruct)))));
    { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 2914; (void)__pyx_clineno; } goto __pyx_L1_error; }
  } else {
                                             ;
  }
  Py_INCREF(((PyObject*)((__pyx_v_asal))));
# 2927 "yxdfb/Password.cpp"
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_v_nama); if (__builtin_expect(!!((__pyx_t_2 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2927; (void)__pyx_clineno; } goto __pyx_L1_error; }
  if (__pyx_t_2) {
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_nama, __pyx_mstate_global->__pyx_n_s_lower); if (__builtin_expect(!!(!__pyx_t_5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2929; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    __pyx_t_6 = __null;
    __pyx_t_7 = 0;

    if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_5)))), (&PyMethod_Type))), 1)) {
      __pyx_t_6 = PyMethod_GET_SELF(((PyObject*)((__pyx_t_5))));
      if (__builtin_expect(!!(__pyx_t_6), 1)) {
        PyObject* function = PyMethod_GET_FUNCTION(((PyObject*)((__pyx_t_5))));
        Py_INCREF(((PyObject*)((__pyx_t_6))));
        Py_INCREF(((PyObject*)((function))));
        do { PyObject *tmp = (PyObject *) __pyx_t_5; __pyx_t_5 = function; Py_DECREF(((PyObject*)((tmp)))); } while (0);
        __pyx_t_7 = 1;
      }
    }

    {
      PyObject *__pyx_callargs[2] = {__pyx_t_6, __null};
      __pyx_t_4 = __Pyx_PyObject_FastCallDict(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, (size_t)(0+__pyx_t_7), __null);
      Py_XDECREF(((PyObject*)((__pyx_t_6)))); __pyx_t_6 = 0;
      if (__builtin_expect(!!(!__pyx_t_4), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2949; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
    }
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_mstate_global->__pyx_n_s_split); if (__builtin_expect(!!(!__pyx_t_5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2953; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    Py_DECREF(((PyObject*)((__pyx_t_4)))); __pyx_t_4 = 0;
    __pyx_t_4 = __null;
    __pyx_t_7 = 0;

    if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_5)))), (&PyMethod_Type))), 1)) {
      __pyx_t_4 = PyMethod_GET_SELF(((PyObject*)((__pyx_t_5))));
      if (__builtin_expect(!!(__pyx_t_4), 1)) {
        PyObject* function = PyMethod_GET_FUNCTION(((PyObject*)((__pyx_t_5))));
        Py_INCREF(((PyObject*)((__pyx_t_4))));
        Py_INCREF(((PyObject*)((function))));
        do { PyObject *tmp = (PyObject *) __pyx_t_5; __pyx_t_5 = function; Py_DECREF(((PyObject*)((tmp)))); } while (0);
        __pyx_t_7 = 1;
      }
    }

    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __null};
      __pyx_t_3 = __Pyx_PyObject_FastCallDict(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, (size_t)(0+__pyx_t_7), __null);
      Py_XDECREF(((PyObject*)((__pyx_t_4)))); __pyx_t_4 = 0;
      if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2974; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
    }
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = 0;
  } else {
    __pyx_t_3 = PyList_New(1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2981; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    Py_INCREF(((PyObject*)((__pyx_mstate_global->__pyx_n_s_unknown))));
                                    ;
    if ((PyList_SET_ITEM(((PyObject*)((__pyx_t_3))), (0), ((PyObject*)((__pyx_mstate_global->__pyx_n_s_unknown)))), (0))) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 4; (void)__pyx_lineno; __pyx_clineno = 2985; (void)__pyx_clineno; } goto __pyx_L1_error; };
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = 0;
  }
  __pyx_v_nama_split = __pyx_t_1;
  __pyx_t_1 = 0;
# 2999 "yxdfb/Password.cpp"
  __pyx_t_1 = (( (sizeof(long) < sizeof(Py_ssize_t)) || (sizeof(long) > sizeof(Py_ssize_t) && __builtin_expect(!!(0 < (long)9223372036854775807L || 0 == (long)9223372036854775807L), 1) && (!1 || __builtin_expect(!!(0 > (long)(-9223372036854775807L -1) || 0 == (long)(-9223372036854775807L -1)), 1))) || (sizeof(long) == sizeof(Py_ssize_t) && (1 || __builtin_expect(!!(0 < (long)9223372036854775807L || 0 == (long)9223372036854775807L), 1))) ) ? __Pyx_GetItemInt_Fast(__pyx_v_nama_split, (Py_ssize_t)0, 0, 0, 1) : (0 ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)__null) : __Pyx_GetItemInt_Generic(__pyx_v_nama_split, __Pyx_PyInt_From_long(0)))); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 5; (void)__pyx_lineno; __pyx_clineno = 2999; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_v_depan = __pyx_t_1;
  __pyx_t_1 = 0;
# 3011 "yxdfb/Password.cpp"
  __pyx_t_8 = PyObject_Size(__pyx_v_nama_split); if (__builtin_expect(!!(__pyx_t_8 == ((Py_ssize_t)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 6; (void)__pyx_lineno; __pyx_clineno = 3011; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_t_2 = (__pyx_t_8 > 1);
  if (__pyx_t_2) {
    __pyx_t_3 = (( (sizeof(long) < sizeof(Py_ssize_t)) || (sizeof(long) > sizeof(Py_ssize_t) && __builtin_expect(!!(-1L < (long)9223372036854775807L || -1L == (long)9223372036854775807L), 1) && (!1 || __builtin_expect(!!(-1L > (long)(-9223372036854775807L -1) || -1L == (long)(-9223372036854775807L -1)), 1))) || (sizeof(long) == sizeof(Py_ssize_t) && (1 || __builtin_expect(!!(-1L < (long)9223372036854775807L || -1L == (long)9223372036854775807L), 1))) ) ? __Pyx_GetItemInt_Fast(__pyx_v_nama_split, (Py_ssize_t)-1L, 0, 1, 1) : (0 ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)__null) : __Pyx_GetItemInt_Generic(__pyx_v_nama_split, __Pyx_PyInt_From_long(-1L)))); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 6; (void)__pyx_lineno; __pyx_clineno = 3014; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = 0;
  } else {
    Py_INCREF(((PyObject*)((__pyx_mstate_global->__pyx_kp_s_))));
    __pyx_t_1 = __pyx_mstate_global->__pyx_kp_s_;
  }
  __pyx_v_belakang = __pyx_t_1;
  __pyx_t_1 = 0;
# 3032 "yxdfb/Password.cpp"
  __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_v_asal); if (__builtin_expect(!!((__pyx_t_2 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 8; (void)__pyx_lineno; __pyx_clineno = 3032; (void)__pyx_clineno; } goto __pyx_L1_error; }
  if (__pyx_t_2) {
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_asal, __pyx_mstate_global->__pyx_n_s_lower); if (__builtin_expect(!!(!__pyx_t_5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 8; (void)__pyx_lineno; __pyx_clineno = 3034; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    __pyx_t_4 = __null;
    __pyx_t_7 = 0;

    if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_5)))), (&PyMethod_Type))), 1)) {
      __pyx_t_4 = PyMethod_GET_SELF(((PyObject*)((__pyx_t_5))));
      if (__builtin_expect(!!(__pyx_t_4), 1)) {
        PyObject* function = PyMethod_GET_FUNCTION(((PyObject*)((__pyx_t_5))));
        Py_INCREF(((PyObject*)((__pyx_t_4))));
        Py_INCREF(((PyObject*)((function))));
        do { PyObject *tmp = (PyObject *) __pyx_t_5; __pyx_t_5 = function; Py_DECREF(((PyObject*)((tmp)))); } while (0);
        __pyx_t_7 = 1;
      }
    }

    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __null};
      __pyx_t_3 = __Pyx_PyObject_FastCallDict(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, (size_t)(0+__pyx_t_7), __null);
      Py_XDECREF(((PyObject*)((__pyx_t_4)))); __pyx_t_4 = 0;
      if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 8; (void)__pyx_lineno; __pyx_clineno = 3054; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
    }
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = 0;
  } else {
    Py_INCREF(((PyObject*)((__pyx_mstate_global->__pyx_kp_s_))));
    __pyx_t_1 = __pyx_mstate_global->__pyx_kp_s_;
  }
  do { PyObject *tmp = (PyObject *) __pyx_v_asal; __pyx_v_asal = __pyx_t_1; Py_DECREF(((PyObject*)((tmp)))); } while (0);
  __pyx_t_1 = 0;
# 3074 "yxdfb/Password.cpp"
  __pyx_t_1 = PyList_New(0); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 9; (void)__pyx_lineno; __pyx_clineno = 3074; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
                          ;
  __pyx_cur_scope->__pyx_v_pasw = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;
# 3087 "yxdfb/Password.cpp"
  __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_8Password_3Pws_18generate_passwords_1add_password, 0, __pyx_mstate_global->__pyx_n_s_Pws_generate_passwords_locals_ad, ((PyObject*)__pyx_cur_scope), __pyx_mstate_global->__pyx_n_s_Password, __pyx_mstate_global->__pyx_d, ((PyObject *)__pyx_mstate_global->__pyx_codeobj__3)); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 3087; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_v_add_password = __pyx_t_1;
  __pyx_t_1 = 0;
# 3099 "yxdfb/Password.cpp"
  __pyx_t_8 = PyObject_Size(__pyx_v_nama); if (__builtin_expect(!!(__pyx_t_8 == ((Py_ssize_t)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 15; (void)__pyx_lineno; __pyx_clineno = 3099; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_t_2 = (__pyx_t_8 < 6);
  if (__pyx_t_2) {
# 3110 "yxdfb/Password.cpp"
    __pyx_t_8 = PyObject_Size(__pyx_v_depan); if (__builtin_expect(!!(__pyx_t_8 == ((Py_ssize_t)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 16; (void)__pyx_lineno; __pyx_clineno = 3110; (void)__pyx_clineno; } goto __pyx_L1_error; }
    __pyx_t_2 = (__pyx_t_8 >= 3);
    if (__pyx_t_2) {
# 3121 "yxdfb/Password.cpp"
      __pyx_t_1 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_123); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 17; (void)__pyx_lineno; __pyx_clineno = 3121; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 17; (void)__pyx_lineno; __pyx_clineno = 3123; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3135 "yxdfb/Password.cpp"
      __pyx_t_3 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_12345); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 18; (void)__pyx_lineno; __pyx_clineno = 3135; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_3); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 18; (void)__pyx_lineno; __pyx_clineno = 3137; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3149 "yxdfb/Password.cpp"
      __pyx_t_1 = PyNumber_Add(__pyx_v_depan, __pyx_v_belakang); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 19; (void)__pyx_lineno; __pyx_clineno = 3149; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 19; (void)__pyx_lineno; __pyx_clineno = 3151; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3163 "yxdfb/Password.cpp"
      __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_v_asal); if (__builtin_expect(!!((__pyx_t_2 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 20; (void)__pyx_lineno; __pyx_clineno = 3163; (void)__pyx_clineno; } goto __pyx_L1_error; }
      if (__pyx_t_2) {
# 3173 "yxdfb/Password.cpp"
        __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_v_asal); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 21; (void)__pyx_lineno; __pyx_clineno = 3173; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3184 "yxdfb/Password.cpp"
        __pyx_t_3 = PyNumber_Add(__pyx_v_asal, __pyx_mstate_global->__pyx_kp_s_123); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 22; (void)__pyx_lineno; __pyx_clineno = 3184; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_3); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 22; (void)__pyx_lineno; __pyx_clineno = 3186; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
        Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3198 "yxdfb/Password.cpp"
      }
# 3207 "yxdfb/Password.cpp"
    }
# 3216 "yxdfb/Password.cpp"
    goto __pyx_L3;
  }
# 3226 "yxdfb/Password.cpp"
           {
    __pyx_t_8 = PyObject_Size(__pyx_v_depan); if (__builtin_expect(!!(__pyx_t_8 == ((Py_ssize_t)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 24; (void)__pyx_lineno; __pyx_clineno = 3227; (void)__pyx_clineno; } goto __pyx_L1_error; }
    __pyx_t_2 = (__pyx_t_8 >= 3);
    if (__pyx_t_2) {
# 3238 "yxdfb/Password.cpp"
      __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_nama, __pyx_mstate_global->__pyx_n_s_lower); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 25; (void)__pyx_lineno; __pyx_clineno = 3238; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_5 = __null;
      __pyx_t_7 = 0;

      if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_3)))), (&PyMethod_Type))), 1)) {
        __pyx_t_5 = PyMethod_GET_SELF(((PyObject*)((__pyx_t_3))));
        if (__builtin_expect(!!(__pyx_t_5), 1)) {
          PyObject* function = PyMethod_GET_FUNCTION(((PyObject*)((__pyx_t_3))));
          Py_INCREF(((PyObject*)((__pyx_t_5))));
          Py_INCREF(((PyObject*)((function))));
          do { PyObject *tmp = (PyObject *) __pyx_t_3; __pyx_t_3 = function; Py_DECREF(((PyObject*)((tmp)))); } while (0);
          __pyx_t_7 = 1;
        }
      }

      {
        PyObject *__pyx_callargs[2] = {__pyx_t_5, __null};
        __pyx_t_1 = __Pyx_PyObject_FastCallDict(__pyx_t_3, __pyx_callargs+1-__pyx_t_7, (size_t)(0+__pyx_t_7), __null);
        Py_XDECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
        if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 25; (void)__pyx_lineno; __pyx_clineno = 3258; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
      }
      __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 25; (void)__pyx_lineno; __pyx_clineno = 3262; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3274 "yxdfb/Password.cpp"
      __pyx_t_3 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_123); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 26; (void)__pyx_lineno; __pyx_clineno = 3274; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_3); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 26; (void)__pyx_lineno; __pyx_clineno = 3276; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3288 "yxdfb/Password.cpp"
      __pyx_t_1 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_12345); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 27; (void)__pyx_lineno; __pyx_clineno = 3288; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 27; (void)__pyx_lineno; __pyx_clineno = 3290; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3302 "yxdfb/Password.cpp"
      __pyx_t_3 = PyNumber_Add(__pyx_v_depan, __pyx_v_belakang); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 28; (void)__pyx_lineno; __pyx_clineno = 3302; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_3); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 28; (void)__pyx_lineno; __pyx_clineno = 3304; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
      Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3316 "yxdfb/Password.cpp"
      __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_v_asal); if (__builtin_expect(!!((__pyx_t_2 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 29; (void)__pyx_lineno; __pyx_clineno = 3316; (void)__pyx_clineno; } goto __pyx_L1_error; }
      if (__pyx_t_2) {
# 3326 "yxdfb/Password.cpp"
        __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_v_asal); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 30; (void)__pyx_lineno; __pyx_clineno = 3326; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3337 "yxdfb/Password.cpp"
        __pyx_t_1 = PyNumber_Add(__pyx_v_asal, __pyx_mstate_global->__pyx_kp_s_123); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 31; (void)__pyx_lineno; __pyx_clineno = 3337; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 31; (void)__pyx_lineno; __pyx_clineno = 3339; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
        Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
        Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3351 "yxdfb/Password.cpp"
      }
# 3360 "yxdfb/Password.cpp"
    }
  }
  __pyx_L3:;
# 3371 "yxdfb/Password.cpp"
  __pyx_t_3 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_2023); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 33; (void)__pyx_lineno; __pyx_clineno = 3371; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_t_1 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_3); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 33; (void)__pyx_lineno; __pyx_clineno = 3373; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
  Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
# 3385 "yxdfb/Password.cpp"
  __pyx_t_1 = PyNumber_Add(__pyx_v_depan, __pyx_mstate_global->__pyx_kp_s_2024); if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 34; (void)__pyx_lineno; __pyx_clineno = 3385; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_t_3 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 34; (void)__pyx_lineno; __pyx_clineno = 3387; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3399 "yxdfb/Password.cpp"
  if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_v_pw_tambahan)))), (&PyList_Type))), 1) || Py_IS_TYPE(((PyObject*)(((__pyx_v_pw_tambahan)))), (&PyTuple_Type))) {
    __pyx_t_3 = __pyx_v_pw_tambahan; Py_INCREF(((PyObject*)((__pyx_t_3))));
    __pyx_t_8 = 0;
    __pyx_t_9 = __null;
  } else {
    __pyx_t_8 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_v_pw_tambahan); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 36; (void)__pyx_lineno; __pyx_clineno = 3404; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    __pyx_t_9 = (Py_TYPE(((PyObject*)((__pyx_t_3))))->tp_iternext); if (__builtin_expect(!!(!__pyx_t_9), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 36; (void)__pyx_lineno; __pyx_clineno = 3406; (void)__pyx_clineno; } goto __pyx_L1_error; }
  }
  for (;;) {
    if (__builtin_expect(!!(!__pyx_t_9), 1)) {
      if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_3)))), (&PyList_Type))), 1)) {
        {
          Py_ssize_t __pyx_temp = PyList_GET_SIZE(((PyObject*)((__pyx_t_3))));



          if (__pyx_t_8 >= __pyx_temp) break;
        }

        __pyx_t_1 = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((__pyx_t_3))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 3419, __PRETTY_FUNCTION__, "PyList_Check(__pyx_t_3)")), ((PyListObject*)((__pyx_t_3))))->ob_item[(__pyx_t_8)]); Py_INCREF(((PyObject*)((__pyx_t_1)))); __pyx_t_8++; if (__builtin_expect(!!((0 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 36; (void)__pyx_lineno; __pyx_clineno = 3419; (void)__pyx_clineno; } goto __pyx_L1_error; }




      } else {
        {
          Py_ssize_t __pyx_temp = PyTuple_GET_SIZE(((PyObject*)((__pyx_t_3))));



          if (__pyx_t_8 >= __pyx_temp) break;
        }

        __pyx_t_1 = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((__pyx_t_3))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 3433, __PRETTY_FUNCTION__, "PyTuple_Check(__pyx_t_3)")), ((PyTupleObject*)((__pyx_t_3))))->ob_item[(__pyx_t_8)]); Py_INCREF(((PyObject*)((__pyx_t_1)))); __pyx_t_8++; if (__builtin_expect(!!((0 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 36; (void)__pyx_lineno; __pyx_clineno = 3433; (void)__pyx_clineno; } goto __pyx_L1_error; }




      }
    } else {
      __pyx_t_1 = __pyx_t_9(__pyx_t_3);
      if (__builtin_expect(!!(!__pyx_t_1), 0)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (__builtin_expect(!!(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration)), 1)) PyErr_Clear();
          else { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 36; (void)__pyx_lineno; __pyx_clineno = 3445; (void)__pyx_clineno; } goto __pyx_L1_error; }
        }
        break;
      }
                             ;
    }
    do { PyObject *tmp = (PyObject *) __pyx_v_p; __pyx_v_p = __pyx_t_1; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    __pyx_t_1 = 0;
# 3461 "yxdfb/Password.cpp"
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_p, __pyx_mstate_global->__pyx_n_s_lower); if (__builtin_expect(!!(!__pyx_t_5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 37; (void)__pyx_lineno; __pyx_clineno = 3461; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    __pyx_t_4 = __null;
    __pyx_t_7 = 0;

    if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_5)))), (&PyMethod_Type))), 1)) {
      __pyx_t_4 = PyMethod_GET_SELF(((PyObject*)((__pyx_t_5))));
      if (__builtin_expect(!!(__pyx_t_4), 1)) {
        PyObject* function = PyMethod_GET_FUNCTION(((PyObject*)((__pyx_t_5))));
        Py_INCREF(((PyObject*)((__pyx_t_4))));
        Py_INCREF(((PyObject*)((function))));
        do { PyObject *tmp = (PyObject *) __pyx_t_5; __pyx_t_5 = function; Py_DECREF(((PyObject*)((tmp)))); } while (0);
        __pyx_t_7 = 1;
      }
    }

    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, __null};
      __pyx_t_1 = __Pyx_PyObject_FastCallDict(__pyx_t_5, __pyx_callargs+1-__pyx_t_7, (size_t)(0+__pyx_t_7), __null);
      Py_XDECREF(((PyObject*)((__pyx_t_4)))); __pyx_t_4 = 0;
      if (__builtin_expect(!!(!__pyx_t_1), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 37; (void)__pyx_lineno; __pyx_clineno = 3481; (void)__pyx_clineno; } goto __pyx_L1_error; }
                             ;
      Py_DECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
    }
    __pyx_t_5 = __pyx_pf_8Password_3Pws_18generate_passwords_add_password(__pyx_v_add_password, __pyx_t_1); if (__builtin_expect(!!(!__pyx_t_5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 37; (void)__pyx_lineno; __pyx_clineno = 3485; (void)__pyx_clineno; } goto __pyx_L1_error; }
                           ;
    Py_DECREF(((PyObject*)((__pyx_t_1)))); __pyx_t_1 = 0;
    Py_DECREF(((PyObject*)((__pyx_t_5)))); __pyx_t_5 = 0;
# 3497 "yxdfb/Password.cpp"
  }
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
# 3507 "yxdfb/Password.cpp"
  __pyx_t_3 = PySet_New(0); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 39; (void)__pyx_lineno; __pyx_clineno = 3507; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_v_seen = ((PyObject*)__pyx_t_3);
  __pyx_t_3 = 0;
# 3519 "yxdfb/Password.cpp"
  __pyx_t_3 = PyList_New(0); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 40; (void)__pyx_lineno; __pyx_clineno = 3519; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_v_unique_pasw = ((PyObject*)__pyx_t_3);
  __pyx_t_3 = 0;
# 3531 "yxdfb/Password.cpp"
  __pyx_t_3 = __pyx_cur_scope->__pyx_v_pasw; Py_INCREF(((PyObject*)((__pyx_t_3))));
  __pyx_t_8 = 0;
  for (;;) {
    {
      Py_ssize_t __pyx_temp = PyList_GET_SIZE(((PyObject*)((__pyx_t_3))));



      if (__pyx_t_8 >= __pyx_temp) break;
    }

    __pyx_t_5 = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((__pyx_t_3))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 3542, __PRETTY_FUNCTION__, "PyList_Check(__pyx_t_3)")), ((PyListObject*)((__pyx_t_3))))->ob_item[(__pyx_t_8)]); Py_INCREF(((PyObject*)((__pyx_t_5)))); __pyx_t_8++; if (__builtin_expect(!!((0 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 41; (void)__pyx_lineno; __pyx_clineno = 3542; (void)__pyx_clineno; } goto __pyx_L1_error; }




    do { PyObject *tmp = (PyObject *) __pyx_v_p; __pyx_v_p = __pyx_t_5; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    __pyx_t_5 = 0;
# 3557 "yxdfb/Password.cpp"
    __pyx_t_2 = (__Pyx_PySet_ContainsTF(__pyx_v_p, __pyx_v_seen, 3)); if (__builtin_expect(!!((__pyx_t_2 < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 42; (void)__pyx_lineno; __pyx_clineno = 3557; (void)__pyx_clineno; } goto __pyx_L1_error; }
    if (__pyx_t_2) {
# 3567 "yxdfb/Password.cpp"
      __pyx_t_10 = PySet_Add(__pyx_v_seen, __pyx_v_p); if (__builtin_expect(!!(__pyx_t_10 == ((int)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 43; (void)__pyx_lineno; __pyx_clineno = 3567; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 3576 "yxdfb/Password.cpp"
      __pyx_t_10 = __Pyx_PyList_Append(__pyx_v_unique_pasw, __pyx_v_p); if (__builtin_expect(!!(__pyx_t_10 == ((int)-1)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 44; (void)__pyx_lineno; __pyx_clineno = 3576; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 3585 "yxdfb/Password.cpp"
    }
# 3594 "yxdfb/Password.cpp"
  }
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;






  Py_XDECREF(((PyObject*)((__pyx_r))));
  __pyx_t_3 = __Pyx_PyList_GetSlice(__pyx_v_unique_pasw, 0, 10); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 46; (void)__pyx_lineno; __pyx_clineno = 3603; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = 0;
  goto __pyx_L0;
# 3618 "yxdfb/Password.cpp"
  __pyx_L1_error:;
  Py_XDECREF(((PyObject*)((__pyx_t_1))));
  Py_XDECREF(((PyObject*)((__pyx_t_3))));
  Py_XDECREF(((PyObject*)((__pyx_t_4))));
  Py_XDECREF(((PyObject*)((__pyx_t_5))));
  Py_XDECREF(((PyObject*)((__pyx_t_6))));
  __Pyx_AddTraceback("Password.Pws.generate_passwords", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = __null;
  __pyx_L0:;
  Py_XDECREF(((PyObject*)((__pyx_v_nama_split))));
  Py_XDECREF(((PyObject*)((__pyx_v_depan))));
  Py_XDECREF(((PyObject*)((__pyx_v_belakang))));
  Py_XDECREF(((PyObject*)((__pyx_v_add_password))));
  Py_XDECREF(((PyObject*)((__pyx_v_p))));
  Py_XDECREF(((PyObject*)((__pyx_v_seen))));
  Py_XDECREF(((PyObject*)((__pyx_v_unique_pasw))));
  Py_XDECREF(((PyObject*)((__pyx_v_asal))));
  Py_DECREF(((PyObject*)(((PyObject *)__pyx_cur_scope))));
                         ;
                               ;
  return __pyx_r;
}


static struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *__pyx_freelist_8Password___pyx_scope_struct__generate_passwords[8];
static int __pyx_freecount_8Password___pyx_scope_struct__generate_passwords = 0;


static PyObject *__pyx_tp_new_8Password___pyx_scope_struct__generate_passwords(PyTypeObject *t, [[maybe_unused]] PyObject *a, [[maybe_unused]] PyObject *k) {
  PyObject *o;





  if (__builtin_expect(!!((int)(__pyx_freecount_8Password___pyx_scope_struct__generate_passwords > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords))), 1)) {
    o = (PyObject*)__pyx_freelist_8Password___pyx_scope_struct__generate_passwords[--__pyx_freecount_8Password___pyx_scope_struct__generate_passwords];
    memset(o, 0, sizeof(struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords));
    (void) PyObject_Init(((PyObject*)((o))), (t));
    PyObject_GC_Track(o);
  } else

  {
    o = (*t->tp_alloc)(t, 0);
    if (__builtin_expect(!!(!o), 0)) return 0;
  }

  return o;
}

static void __pyx_tp_dealloc_8Password___pyx_scope_struct__generate_passwords(PyObject *o) {
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *p = (struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)o;

  if (__builtin_expect(!!((((3 << 24) | (12 << 16) | (9 << 8) | (0xF << 4) | (0 << 0)) >= 0x03080000 || (((((PyTypeObject *)Py_TYPE(((PyObject*)((o)))))->tp_flags) & ((1UL << 0))) != 0)) && ((Py_TYPE(((PyObject*)((o)))))->tp_finalize)), 0) && !PyObject_GC_IsFinalized(o)) {
    if (((Py_TYPE(((PyObject*)((o)))))->tp_dealloc) == __pyx_tp_dealloc_8Password___pyx_scope_struct__generate_passwords) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }

  PyObject_GC_UnTrack(o);
  do { __typeof__(p->__pyx_v_pasw)* _tmp_op_ptr = &(p->__pyx_v_pasw); __typeof__(p->__pyx_v_pasw) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);

  if (((int)(__pyx_freecount_8Password___pyx_scope_struct__generate_passwords < 8) & (int)(Py_TYPE(((PyObject*)((o))))->tp_basicsize == sizeof(struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords)))) {
    __pyx_freelist_8Password___pyx_scope_struct__generate_passwords[__pyx_freecount_8Password___pyx_scope_struct__generate_passwords++] = ((struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)o);
  } else

  {

    (*Py_TYPE(((PyObject*)((o))))->tp_free)(o);






  }
}

static int __pyx_tp_traverse_8Password___pyx_scope_struct__generate_passwords(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *p = (struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)o;
  if (p->__pyx_v_pasw) {
    e = (*v)(p->__pyx_v_pasw, a); if (e) return e;
  }
  return 0;
}

static int __pyx_tp_clear_8Password___pyx_scope_struct__generate_passwords(PyObject *o) {
  PyObject* tmp;
  struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *p = (struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords *)o;
  tmp = ((PyObject*)p->__pyx_v_pasw);
  p->__pyx_v_pasw = ((PyObject*)(&_Py_NoneStruct)); Py_INCREF(((PyObject*)(((&_Py_NoneStruct)))));
  Py_XDECREF(((PyObject*)((tmp))));
  return 0;
}
# 3730 "yxdfb/Password.cpp"
static PyTypeObject __pyx_type_8Password___pyx_scope_struct__generate_passwords = {
  { { { 1 }, (0) }, (0) },
  "Password.""__pyx_scope_struct__generate_passwords",
  sizeof(struct __pyx_obj_8Password___pyx_scope_struct__generate_passwords),
  0,
  __pyx_tp_dealloc_8Password___pyx_scope_struct__generate_passwords,




  0,

  0,
  0,




  0,

  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  ( 0 | 0)|(1UL << 18)|0|0|(1UL << 14)|(1UL << 0),
  0,
  __pyx_tp_traverse_8Password___pyx_scope_struct__generate_passwords,
  __pyx_tp_clear_8Password___pyx_scope_struct__generate_passwords,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,

  0,

  0,
  0,
  __pyx_tp_new_8Password___pyx_scope_struct__generate_passwords,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,


  0,





  0,





  0,







};


static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};
# 3829 "yxdfb/Password.cpp"
static int __Pyx_CreateStringTabAndInitStrings(void) {
  __Pyx_StringTabEntry __pyx_string_tab[] = {
    {&__pyx_mstate_global->__pyx_kp_s_, __pyx_k_, sizeof(__pyx_k_), 0, 0, 1, 0},
    {&__pyx_mstate_global->__pyx_kp_s_123, __pyx_k_123, sizeof(__pyx_k_123), 0, 0, 1, 0},
    {&__pyx_mstate_global->__pyx_kp_s_12345, __pyx_k_12345, sizeof(__pyx_k_12345), 0, 0, 1, 0},
    {&__pyx_mstate_global->__pyx_kp_s_2023, __pyx_k_2023, sizeof(__pyx_k_2023), 0, 0, 1, 0},
    {&__pyx_mstate_global->__pyx_kp_s_2024, __pyx_k_2024, sizeof(__pyx_k_2024), 0, 0, 1, 0},
    {&__pyx_mstate_global->__pyx_n_s_Password, __pyx_k_Password, sizeof(__pyx_k_Password), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_Pws, __pyx_k_Pws, sizeof(__pyx_k_Pws), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_Pws_generate_passwords, __pyx_k_Pws_generate_passwords, sizeof(__pyx_k_Pws_generate_passwords), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_Pws_generate_passwords_locals_ad, __pyx_k_Pws_generate_passwords_locals_ad, sizeof(__pyx_k_Pws_generate_passwords_locals_ad), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_add_password, __pyx_k_add_password, sizeof(__pyx_k_add_password), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_asal, __pyx_k_asal, sizeof(__pyx_k_asal), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_belakang, __pyx_k_belakang, sizeof(__pyx_k_belakang), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_depan, __pyx_k_depan, sizeof(__pyx_k_depan), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_dict, __pyx_k_dict, sizeof(__pyx_k_dict), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_kp_u_disable, __pyx_k_disable, sizeof(__pyx_k_disable), 0, 1, 0, 0},
    {&__pyx_mstate_global->__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_kp_u_enable, __pyx_k_enable, sizeof(__pyx_k_enable), 0, 1, 0, 0},
    {&__pyx_mstate_global->__pyx_kp_u_gc, __pyx_k_gc, sizeof(__pyx_k_gc), 0, 1, 0, 0},
    {&__pyx_mstate_global->__pyx_n_s_generate_passwords, __pyx_k_generate_passwords, sizeof(__pyx_k_generate_passwords), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_init_subclass, __pyx_k_init_subclass, sizeof(__pyx_k_init_subclass), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_kp_u_isenabled, __pyx_k_isenabled, sizeof(__pyx_k_isenabled), 0, 1, 0, 0},
    {&__pyx_mstate_global->__pyx_n_s_lower, __pyx_k_lower, sizeof(__pyx_k_lower), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_nama, __pyx_k_nama, sizeof(__pyx_k_nama), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_nama_split, __pyx_k_nama_split, sizeof(__pyx_k_nama_split), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_p, __pyx_k_p, sizeof(__pyx_k_p), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_password, __pyx_k_password, sizeof(__pyx_k_password), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_pasw, __pyx_k_pasw, sizeof(__pyx_k_pasw), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_pw_tambahan, __pyx_k_pw_tambahan, sizeof(__pyx_k_pw_tambahan), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_seen, __pyx_k_seen, sizeof(__pyx_k_seen), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_set_name, __pyx_k_set_name, sizeof(__pyx_k_set_name), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_super, __pyx_k_super, sizeof(__pyx_k_super), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_unique_pasw, __pyx_k_unique_pasw, sizeof(__pyx_k_unique_pasw), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_n_s_unknown, __pyx_k_unknown, sizeof(__pyx_k_unknown), 0, 0, 1, 1},
    {&__pyx_mstate_global->__pyx_kp_s_yxdfb_Password_py, __pyx_k_yxdfb_Password_py, sizeof(__pyx_k_yxdfb_Password_py), 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}

static int __Pyx_InitCachedBuiltins(void) {
  return 0;
}


static int __Pyx_InitCachedConstants(void) {

                                                            ;
# 3899 "yxdfb/Password.cpp"
  __pyx_mstate_global->__pyx_tuple__2 = PyTuple_Pack(1, __pyx_mstate_global->__pyx_n_s_password); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_tuple__2), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 3899; (void)__pyx_clineno; } goto __pyx_L1_error; }
                              ;
                               ;
  __pyx_mstate_global->__pyx_codeobj__3 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 1, 0, 0x0001|0x0002, __pyx_mstate_global->__pyx_empty_bytes, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_tuple__2, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_kp_s_yxdfb_Password_py, __pyx_mstate_global->__pyx_n_s_add_password, 11, __pyx_mstate_global->__pyx_empty_bytes); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_codeobj__3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 11; (void)__pyx_lineno; __pyx_clineno = 3902; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 3911 "yxdfb/Password.cpp"
  __pyx_mstate_global->__pyx_tuple__4 = PyTuple_Pack(13, __pyx_mstate_global->__pyx_n_s_self, __pyx_mstate_global->__pyx_n_s_nama, __pyx_mstate_global->__pyx_n_s_asal, __pyx_mstate_global->__pyx_n_s_pw_tambahan, __pyx_mstate_global->__pyx_n_s_nama_split, __pyx_mstate_global->__pyx_n_s_depan, __pyx_mstate_global->__pyx_n_s_belakang, __pyx_mstate_global->__pyx_n_s_pasw, __pyx_mstate_global->__pyx_n_s_add_password, __pyx_mstate_global->__pyx_n_s_add_password, __pyx_mstate_global->__pyx_n_s_p, __pyx_mstate_global->__pyx_n_s_seen, __pyx_mstate_global->__pyx_n_s_unique_pasw); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_tuple__4), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 3911; (void)__pyx_clineno; } goto __pyx_L1_error; }
                              ;
                               ;
  __pyx_mstate_global->__pyx_codeobj__5 = (PyObject*)__Pyx_PyCode_New(4, 0, 0, 13, 0, 0x0001|0x0002, __pyx_mstate_global->__pyx_empty_bytes, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_tuple__4, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_kp_s_yxdfb_Password_py, __pyx_mstate_global->__pyx_n_s_generate_passwords, 3, __pyx_mstate_global->__pyx_empty_bytes); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_codeobj__5), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 3914; (void)__pyx_clineno; } goto __pyx_L1_error; }
                               ;
  return 0;
  __pyx_L1_error:;
                               ;
  return -1;
}


static int __Pyx_InitConstants(void) {
  if (__Pyx_CreateStringTabAndInitStrings() < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 3924; (void)__pyx_clineno; } goto __pyx_L1_error; };
  return 0;
  __pyx_L1_error:;
  return -1;
}


static int __Pyx_InitGlobals(void) {
  return 0;
}


static int __Pyx_modinit_global_init_code(void);
static int __Pyx_modinit_variable_export_code(void);
static int __Pyx_modinit_function_export_code(void);
static int __Pyx_modinit_type_init_code(void);
static int __Pyx_modinit_type_import_code(void);
static int __Pyx_modinit_variable_import_code(void);
static int __Pyx_modinit_function_import_code(void);

static int __Pyx_modinit_global_init_code(void) {

                                                                 ;

                               ;
  return 0;
}

static int __Pyx_modinit_variable_export_code(void) {

                                                                     ;

                               ;
  return 0;
}

static int __Pyx_modinit_function_export_code(void) {

                                                                     ;

                               ;
  return 0;
}

static int __Pyx_modinit_type_init_code(void) {

  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;
                                                               ;





  __pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords = &__pyx_type_8Password___pyx_scope_struct__generate_passwords;




  if (__Pyx_PyType_Ready(__pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 3984; (void)__pyx_clineno; } goto __pyx_L1_error; }





  if ((1 && 1) && __builtin_expect(!!(!__pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords->tp_dictoffset && __pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords->tp_getattro == PyObject_GenericGetAttr), 1)) {
    __pyx_mstate_global->__pyx_ptype_8Password___pyx_scope_struct__generate_passwords->tp_getattro = PyObject_GenericGetAttr;
  }

                               ;
  return 0;
  __pyx_L1_error:;
                               ;
  return -1;
}

static int __Pyx_modinit_type_import_code(void) {

                                                                 ;

                               ;
  return 0;
}

static int __Pyx_modinit_variable_import_code(void) {

                                                                     ;

                               ;
  return 0;
}

static int __Pyx_modinit_function_import_code(void) {

                                                                     ;

                               ;
  return 0;
}




static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def);
static int __pyx_pymod_exec_Password(PyObject* module);
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {1, (void*)__pyx_pymod_create},
  {2, (void*)__pyx_pymod_exec_Password},
  {0, __null}
};



namespace {
  struct PyModuleDef __pyx_moduledef =



  {
      { { { 1 }, (nullptr) }, nullptr, 0, nullptr, },
      "Password",
      0,

      0,





      __pyx_methods ,

      __pyx_moduledef_slots,
# 4065 "yxdfb/Password.cpp"
      __null,
      __null,
      __null

  };

}
# 4096 "yxdfb/Password.cpp"
extern "C" __attribute__ ((visibility ("default"))) PyObject* PyInit_Password(void) ;
extern "C" __attribute__ ((visibility ("default"))) PyObject* PyInit_Password(void)

{
  return PyModuleDef_Init(&__pyx_moduledef);
}
static int __Pyx_check_single_interpreter(void) {

    static int64_t main_interpreter_id = -1;
    int64_t current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (__builtin_expect(!!(current_id == -1), 0)) ? -1 : 0;
    } else if (__builtin_expect(!!(main_interpreter_id != current_id), 0))







    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}



static int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none)

{
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (__builtin_expect(!!(value), 1)) {
        if (allow_none || value != (&_Py_NoneStruct)) {



            result = PyDict_SetItemString(moddict, to_name, value);

        }
        Py_DECREF(((PyObject*)((value))));
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def) {
    PyObject *module = __null, *moddict, *modname;
    CYTHON_UNUSED_VAR(def);
    if (__Pyx_check_single_interpreter())
        return __null;
    if (__pyx_m)
        return (Py_INCREF(((PyObject*)((__pyx_m)))), __pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (__builtin_expect(!!(!modname), 0)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(((PyObject*)((modname))));
    if (__builtin_expect(!!(!module), 0)) goto bad;



    moddict = PyModule_GetDict(module);
    if (__builtin_expect(!!(!moddict), 0)) goto bad;

    if (__builtin_expect(!!(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0), 0)) goto bad;
    if (__builtin_expect(!!(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0), 0)) goto bad;
    if (__builtin_expect(!!(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0), 0)) goto bad;
    if (__builtin_expect(!!(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0), 0)) goto bad;
    return module;
bad:
    Py_XDECREF(((PyObject*)((module))));
    return __null;
}


static int __pyx_pymod_exec_Password(PyObject *__pyx_pyinit_module)


{
  int stringtab_initialized = 0;



  PyObject *__pyx_t_1 = __null;
  PyObject *__pyx_t_2 = __null;
  PyObject *__pyx_t_3 = __null;
  int __pyx_lineno = 0;
  const char *__pyx_filename = __null;
  int __pyx_clineno = 0;


  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'Password' has already been imported. Re-initialisation is not supported.");
    return -1;
  }





  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(((PyObject*)((__pyx_m))));
# 4223 "yxdfb/Password.cpp"
  CYTHON_UNUSED_VAR(__pyx_t_1);
  __pyx_mstate_global->__pyx_d = PyModule_GetDict(__pyx_m); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_d), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4224; (void)__pyx_clineno; } goto __pyx_L1_error; }
  Py_INCREF(((PyObject*)((__pyx_mstate_global->__pyx_d))));
  __pyx_mstate_global->__pyx_b = __Pyx_PyImport_AddModuleRef("builtins"); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_b), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4226; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_mstate_global->__pyx_cython_runtime = __Pyx_PyImport_AddModuleRef((const char *) "cython_runtime"); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_cython_runtime), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4227; (void)__pyx_clineno; } goto __pyx_L1_error; }
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_mstate_global->__pyx_b) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4228; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 4238 "yxdfb/Password.cpp"
                                                                             ;
  if (__Pyx_check_binary_version(((3 << 24) | (12 << 16) | (9 << 8) | (0xF << 4) | (0 << 0)), __Pyx_get_runtime_version(), 0) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4239; (void)__pyx_clineno; } goto __pyx_L1_error; }



  __pyx_mstate_global->__pyx_empty_tuple = PyTuple_New(0); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_empty_tuple), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4243; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_mstate_global->__pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_empty_bytes), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4244; (void)__pyx_clineno; } goto __pyx_L1_error; }
  __pyx_mstate_global->__pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_empty_unicode), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4245; (void)__pyx_clineno; } goto __pyx_L1_error; }

  if (__pyx_CyFunction_init(__pyx_m) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4247; (void)__pyx_clineno; } goto __pyx_L1_error; }
# 4270 "yxdfb/Password.cpp"
  if (__Pyx_InitConstants() < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4270; (void)__pyx_clineno; } goto __pyx_L1_error; }
  stringtab_initialized = 1;
  if (__Pyx_InitGlobals() < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4272; (void)__pyx_clineno; } goto __pyx_L1_error; }



  if (__pyx_module_is_main_Password) {
    if (PyObject_SetAttr(__pyx_m, __pyx_mstate_global->__pyx_n_s_name, __pyx_mstate_global->__pyx_n_s_main) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4277; (void)__pyx_clineno; } goto __pyx_L1_error; }
  }

  {
    PyObject *modules = PyImport_GetModuleDict(); if (__builtin_expect(!!(!modules), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4281; (void)__pyx_clineno; } goto __pyx_L1_error; }
    if (!PyDict_GetItemString(modules, "Password")) {
      if (__builtin_expect(!!((PyDict_SetItemString(modules, "Password", __pyx_m) < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4283; (void)__pyx_clineno; } goto __pyx_L1_error; }
    }
  }


  if (__Pyx_InitCachedBuiltins() < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4288; (void)__pyx_clineno; } goto __pyx_L1_error; }

  if (__Pyx_InitCachedConstants() < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4290; (void)__pyx_clineno; } goto __pyx_L1_error; }

  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  if (__builtin_expect(!!((__Pyx_modinit_type_init_code() < 0)), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4295; (void)__pyx_clineno; } goto __pyx_L1_error; }
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
# 4309 "yxdfb/Password.cpp"
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) __null, __pyx_mstate_global->__pyx_empty_tuple, __pyx_mstate_global->__pyx_n_s_Pws, __pyx_mstate_global->__pyx_n_s_Pws, (PyObject *) __null, __pyx_mstate_global->__pyx_n_s_Password, (PyObject *) __null); if (__builtin_expect(!!(!__pyx_t_2), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4309; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
# 4319 "yxdfb/Password.cpp"
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_8Password_3Pws_1generate_passwords, 0, __pyx_mstate_global->__pyx_n_s_Pws_generate_passwords, __null, __pyx_mstate_global->__pyx_n_s_Password, __pyx_mstate_global->__pyx_d, ((PyObject *)__pyx_mstate_global->__pyx_codeobj__5)); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 4319; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  if ((__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((__pyx_t_2)))), (&PyDict_Type))), 1) ? _PyDict_SetItem_KnownHash(__pyx_t_2, __pyx_mstate_global->__pyx_n_s_generate_passwords, __pyx_t_3, ((PyASCIIObject *) __pyx_mstate_global->__pyx_n_s_generate_passwords)->hash) : PyObject_SetItem(__pyx_t_2, __pyx_mstate_global->__pyx_n_s_generate_passwords, __pyx_t_3)) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 3; (void)__pyx_lineno; __pyx_clineno = 4321; (void)__pyx_clineno; } goto __pyx_L1_error; }
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;






  __pyx_t_3 = __Pyx_Py3ClassCreate(((PyObject*)&PyType_Type), __pyx_mstate_global->__pyx_n_s_Pws, __pyx_mstate_global->__pyx_empty_tuple, __pyx_t_2, __null, 0, 0); if (__builtin_expect(!!(!__pyx_t_3), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4329; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  if (PyDict_SetItem(__pyx_mstate_global->__pyx_d, __pyx_mstate_global->__pyx_n_s_Pws, __pyx_t_3) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4331; (void)__pyx_clineno; } goto __pyx_L1_error; }
  Py_DECREF(((PyObject*)((__pyx_t_3)))); __pyx_t_3 = 0;
  Py_DECREF(((PyObject*)((__pyx_t_2)))); __pyx_t_2 = 0;
  __pyx_t_2 = ((0 <= 8) ? PyDict_New() : _PyDict_NewPresized(0)); if (__builtin_expect(!!(!__pyx_t_2), 0)) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4334; (void)__pyx_clineno; } goto __pyx_L1_error; }
                         ;
  if (PyDict_SetItem(__pyx_mstate_global->__pyx_d, __pyx_mstate_global->__pyx_n_s_test, __pyx_t_2) < 0) { { __pyx_filename = __pyx_f[0]; (void)__pyx_filename; __pyx_lineno = 1; (void)__pyx_lineno; __pyx_clineno = 4336; (void)__pyx_clineno; } goto __pyx_L1_error; }
  Py_DECREF(((PyObject*)((__pyx_t_2)))); __pyx_t_2 = 0;



  goto __pyx_L0;
  __pyx_L1_error:;
  Py_XDECREF(((PyObject*)((__pyx_t_2))));
  Py_XDECREF(((PyObject*)((__pyx_t_3))));
  if (__pyx_m) {
    if (__pyx_mstate_global->__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init Password", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }

    do { __typeof__(__pyx_m)* _tmp_op_ptr = &(__pyx_m); __typeof__(__pyx_m) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
# 4360 "yxdfb/Password.cpp"
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init Password");
  }
  __pyx_L0:;
                               ;

  return (__pyx_m != __null) ? 0 : -1;





}
# 4410 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) void __Pyx_copy_object_array(PyObject *const *__restrict__ src, PyObject** __restrict__ dest, Py_ssize_t length) {
    PyObject *v;
    Py_ssize_t i;
    for (i = 0; i < length; i++) {
        v = dest[i] = src[i];
        Py_INCREF(((PyObject*)((v))));
    }
}
static __inline__ __attribute__ ((__unused__)) PyObject *
__Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        Py_INCREF(((PyObject*)((__pyx_mstate_global->__pyx_empty_tuple))));
        return __pyx_mstate_global->__pyx_empty_tuple;
    }
    res = PyTuple_New(n);
    if (__builtin_expect(!!(res == __null), 0)) return __null;
    __Pyx_copy_object_array(src, ((PyTupleObject*)res)->ob_item, n);
    return res;
}
static __inline__ __attribute__ ((__unused__)) PyObject *
__Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        return PyList_New(0);
    }
    res = PyList_New(n);
    if (__builtin_expect(!!(res == __null), 0)) return __null;
    __Pyx_copy_object_array(src, ((PyListObject*)res)->ob_item, n);
    return res;
}



static __inline__ __attribute__ ((__unused__)) int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {



    if (s1 == s2) {
        return (equals == 2);
    } else if (Py_IS_TYPE(((PyObject*)(((s1)))), (&PyBytes_Type)) & Py_IS_TYPE(((PyObject*)(((s2)))), (&PyBytes_Type))) {
        const char *ps1, *ps2;
        Py_ssize_t length = PyBytes_GET_SIZE(((PyObject*)((s1))));
        if (length != PyBytes_GET_SIZE(((PyObject*)((s2)))))
            return (equals == 3);
        ps1 = PyBytes_AS_STRING(((PyObject*)((s1))));
        ps2 = PyBytes_AS_STRING(((PyObject*)((s2))));
        if (ps1[0] != ps2[0]) {
            return (equals == 3);
        } else if (length == 1) {
            return (equals == 2);
        } else {
            int result;
# 4473 "yxdfb/Password.cpp"
            result = memcmp(ps1, ps2, (size_t)length);
            return (equals == 2) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == (&_Py_NoneStruct)) & Py_IS_TYPE(((PyObject*)(((s2)))), (&PyBytes_Type))) {
        return (equals == 3);
    } else if ((s2 == (&_Py_NoneStruct)) & Py_IS_TYPE(((PyObject*)(((s1)))), (&PyBytes_Type))) {
        return (equals == 3);
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(((PyObject*)((py_result))));
        return result;
    }

}


static __inline__ __attribute__ ((__unused__)) int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {






    int s1_is_unicode, s2_is_unicode;
    if (s1 == s2) {
        goto return_eq;
    }
    s1_is_unicode = Py_IS_TYPE(((PyObject*)(((s1)))), (&PyUnicode_Type));
    s2_is_unicode = Py_IS_TYPE(((PyObject*)(((s2)))), (&PyUnicode_Type));
# 4523 "yxdfb/Password.cpp"
    if (s1_is_unicode & s2_is_unicode) {
        Py_ssize_t length;
        int kind;
        void *data1, *data2;
        if (__builtin_expect(!!((0) < 0), 0) || __builtin_expect(!!((0) < 0), 0))
            return -1;
        length = PyUnicode_GET_LENGTH(((PyObject*)((s1))));
        if (length != PyUnicode_GET_LENGTH(((PyObject*)((s2))))) {
            goto return_ne;
        }

        {
            Py_hash_t hash1, hash2;

            hash1 = ((PyASCIIObject*)s1)->hash;
            hash2 = ((PyASCIIObject*)s2)->hash;




            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                goto return_ne;
            }
        }

        kind = ((int)((void)0, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((s1))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 4548, __PRETTY_FUNCTION__, "PyUnicode_Check(s1)")), ((PyASCIIObject*)((s1))))->state.kind)));
        if (kind != ((int)((void)0, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((s2))))), ((1UL << 28)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 4549, __PRETTY_FUNCTION__, "PyUnicode_Check(s2)")), ((PyASCIIObject*)((s2))))->state.kind)))) {
            goto return_ne;
        }
        data1 = PyUnicode_DATA(((PyObject*)((s1))));
        data2 = PyUnicode_DATA(((PyObject*)((s2))));
        if (PyUnicode_READ(static_cast<int>(kind), static_cast<const void*>(data1), (0)) != PyUnicode_READ(static_cast<int>(kind), static_cast<const void*>(data2), (0))) {
            goto return_ne;
        } else if (length == 1) {
            goto return_eq;
        } else {
            int result = memcmp(data1, data2, (size_t)(length * kind));



            return (equals == 2) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == (&_Py_NoneStruct)) & s2_is_unicode) {
        goto return_ne;
    } else if ((s2 == (&_Py_NoneStruct)) & s1_is_unicode) {
        goto return_ne;
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);



        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(((PyObject*)((py_result))));
        return result;
    }
return_eq:



    return (equals == 2);
return_ne:



    return (equals == 3);

}



static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s)
{
    Py_ssize_t i, n = PyTuple_GET_SIZE(((PyObject*)((kwnames))));
    for (i = 0; i < n; i++)
    {
        if (s == ((((PyType_HasFeature((Py_TYPE(((PyObject*)((kwnames))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 4601, __PRETTY_FUNCTION__, "PyTuple_Check(kwnames)")), ((PyTupleObject*)((kwnames))))->ob_item[(i)])) return kwvalues[i];
    }
    for (i = 0; i < n; i++)
    {
        int eq = __Pyx_PyUnicode_Equals(s, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((kwnames))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 4605, __PRETTY_FUNCTION__, "PyTuple_Check(kwnames)")), ((PyTupleObject*)((kwnames))))->ob_item[(i)]), 2);
        if (__builtin_expect(!!(eq != 0), 0)) {
            if (__builtin_expect(!!(eq < 0), 0)) return __null;
            return kwvalues[i];
        }
    }
    return __null;
}
# 4634 "yxdfb/Password.cpp"
static void __Pyx_RaiseArgtupleInvalid(
    const char* func_name,
    int exact,
    Py_ssize_t num_min,
    Py_ssize_t num_max,
    Py_ssize_t num_found)
{
    Py_ssize_t num_expected;
    const char *more_or_less;
    if (num_found < num_min) {
        num_expected = num_min;
        more_or_less = "at least";
    } else {
        num_expected = num_max;
        more_or_less = "at most";
    }
    if (exact) {
        more_or_less = "exactly";
    }
    PyErr_Format(PyExc_TypeError,
                 "%.200s() takes %.8s %" "z" "d positional argument%.1s (%" "z" "d given)",
                 func_name, more_or_less, num_expected,
                 (num_expected == 1) ? "" : "s", num_found);
}


static void __Pyx_RaiseDoubleKeywordsError(
    const char* func_name,
    PyObject* kw_name)
{
    PyErr_Format(PyExc_TypeError,

        "%s() got multiple values for keyword argument '%U'", func_name, kw_name);




}


static int __Pyx_ParseOptionalKeywords(
    PyObject *kwds,
    PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2,
    PyObject *values[],
    Py_ssize_t num_pos_args,
    const char* function_name)
{
    PyObject *key = 0, *value = 0;
    Py_ssize_t pos = 0;
    PyObject*** name;
    PyObject*** first_kw_arg = argnames + num_pos_args;
    int kwds_is_tuple = (((3 << 24) | (12 << 16) | (9 << 8) | (0xF << 4) | (0 << 0)) >= 0x030700A1) && __builtin_expect(!!(PyType_HasFeature((Py_TYPE(((PyObject*)((kwds))))), ((1UL << 26)))), 1);
    while (1) {
        Py_XDECREF(((PyObject*)((key)))); key = __null;
        Py_XDECREF(((PyObject*)((value)))); value = __null;
        if (kwds_is_tuple) {
            Py_ssize_t size;

            size = PyTuple_GET_SIZE(((PyObject*)((kwds))));




            if (pos >= size) break;




            key = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((kwds))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 4704, __PRETTY_FUNCTION__, "PyTuple_Check(kwds)")), ((PyTupleObject*)((kwds))))->ob_item[(pos)]);




            value = kwvalues[pos];
            pos++;
        }
        else
        {
            if (!PyDict_Next(kwds, &pos, &key, &value)) break;



        }
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name-argnames] = value;




            key = __null;
            value = __null;
            continue;
        }

        Py_INCREF(((PyObject*)((key))));

        Py_INCREF(((PyObject*)((value))));
        name = first_kw_arg;
# 4763 "yxdfb/Password.cpp"
        if (__builtin_expect(!!(PyType_HasFeature((Py_TYPE(((PyObject*)((key))))), ((1UL << 28)))), 1)) {
            while (*name) {
                int cmp = (

                    (PyUnicode_GET_LENGTH(((PyObject*)((**name)))) != PyUnicode_GET_LENGTH(((PyObject*)((key))))) ? 1 :

                    PyUnicode_Compare(**name, key)
                );
                if (cmp < 0 && __builtin_expect(!!(PyErr_Occurred()), 0)) goto bad;
                if (cmp == 0) {
                    values[name-argnames] = value;



                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    int cmp = (**argname == key) ? 0 :

                        (PyUnicode_GET_LENGTH(((PyObject*)((**argname)))) != PyUnicode_GET_LENGTH(((PyObject*)((key))))) ? 1 :

                        PyUnicode_Compare(**argname, key);
                    if (cmp < 0 && __builtin_expect(!!(PyErr_Occurred()), 0)) goto bad;
                    if (cmp == 0) goto arg_passed_twice;
                    argname++;
                }
            }
        } else
            goto invalid_keyword_type;
        if (kwds2) {
            if (__builtin_expect(!!(PyDict_SetItem(kwds2, key, value)), 0)) goto bad;
        } else {
            goto invalid_keyword;
        }
    }
    Py_XDECREF(((PyObject*)((key))));
    Py_XDECREF(((PyObject*)((value))));
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:





    PyErr_Format(PyExc_TypeError,
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);

bad:
    Py_XDECREF(((PyObject*)((key))));
    Py_XDECREF(((PyObject*)((value))));
    return -1;
}


static __inline__ __attribute__ ((__unused__)) void __Pyx_RaiseClosureNameError(const char *varname) {
    PyErr_Format(PyExc_NameError, "free variable '%s' referenced before assignment in enclosing scope", varname);
}



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(((PyObject*)((obj))));
    if (__builtin_expect(!!(tp->tp_getattro), 1))
        return tp->tp_getattro(obj, attr_name);




    return PyObject_GetAttr(obj, attr_name);
}
# 4973 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *result;
    ternaryfunc call = Py_TYPE(((PyObject*)((func))))->tp_call;
    if (__builtin_expect(!!(!call), 0))
        return PyObject_Call(func, arg, kw);




    if (__builtin_expect(!!(Py_EnterRecursiveCall(" while calling a Python object")), 0))
        return __null;

    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (__builtin_expect(!!(!result), 0) && __builtin_expect(!!(!PyErr_Occurred()), 0)) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}




static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg) {
    PyObject *self, *result;
    PyCFunction cfunc;
    cfunc = (((PyCFunctionObject*)(func))->m_ml->ml_meth);
    self = __Pyx_CyOrPyCFunction_GET_SELF(func);




    if (__builtin_expect(!!(Py_EnterRecursiveCall(" while calling a Python object")), 0))
        return __null;

    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (__builtin_expect(!!(!result), 0) && __builtin_expect(!!(!PyErr_Occurred()), 0)) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
# 5039 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t _nargs, PyObject *kwargs) {
    Py_ssize_t nargs = _PyVectorcall_NARGS((size_t)(_nargs));

    if (nargs == 0 && kwargs == __null) {
        if (__Pyx_IsAnySubtype2(Py_TYPE(((PyObject*)((func)))), (PyTypeObject *)__pyx_mstate_global->__pyx_CyFunctionType, (PyTypeObject *)&PyCFunction_Type) && __builtin_expect(!!((((PyCFunctionObject*)(func))->m_ml->ml_flags) & 0x0004), 1))
            return __Pyx_PyObject_CallMethO(func, __null);
    }
    else if (nargs == 1 && kwargs == __null) {
        if (__Pyx_IsAnySubtype2(Py_TYPE(((PyObject*)((func)))), (PyTypeObject *)__pyx_mstate_global->__pyx_CyFunctionType, (PyTypeObject *)&PyCFunction_Type) && __builtin_expect(!!((((PyCFunctionObject*)(func))->m_ml->ml_flags) & 0x0008), 1))
            return __Pyx_PyObject_CallMethO(func, args[0]);
    }
# 5072 "yxdfb/Password.cpp"
    if (kwargs == __null) {




        vectorcallfunc f = PyVectorcall_Function(func);

        if (f) {
            return f(func, args, (size_t)nargs, __null);
        }






    }
    if (nargs == 0) {
        return __Pyx_PyObject_Call(func, __pyx_mstate_global->__pyx_empty_tuple, kwargs);
    }

    return PyObject_VectorcallDict(func, args, (size_t)nargs, kwargs);



}


static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
    PyObject *r;
    if (__builtin_expect(!!(!j), 0)) return __null;
    r = PyObject_GetItem(o, j);
    Py_DECREF(((PyObject*)((j))));
    return r;
}
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                                                int wraparound,
                                                                                int boundscheck) {

    Py_ssize_t wrapped_i = i;
    if (wraparound & __builtin_expect(!!(i < 0), 0)) {
        wrapped_i += PyList_GET_SIZE(((PyObject*)((o))));
    }
    if ((!boundscheck) || __builtin_expect(!!(__Pyx_is_valid_index(wrapped_i, PyList_GET_SIZE(((PyObject*)((o)))))), 1)) {
        PyObject *r = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((o))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5116, __PRETTY_FUNCTION__, "PyList_Check(o)")), ((PyListObject*)((o))))->ob_item[(wrapped_i)]);
        Py_INCREF(((PyObject*)((r))));
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyLong_FromSsize_t(i));



}
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                                                int wraparound,
                                                                                int boundscheck) {

    Py_ssize_t wrapped_i = i;
    if (wraparound & __builtin_expect(!!(i < 0), 0)) {
        wrapped_i += PyTuple_GET_SIZE(((PyObject*)((o))));
    }
    if ((!boundscheck) || __builtin_expect(!!(__Pyx_is_valid_index(wrapped_i, PyTuple_GET_SIZE(((PyObject*)((o)))))), 1)) {
        PyObject *r = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((o))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5134, __PRETTY_FUNCTION__, "PyTuple_Check(o)")), ((PyTupleObject*)((o))))->ob_item[(wrapped_i)]);
        Py_INCREF(((PyObject*)((r))));
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyLong_FromSsize_t(i));



}
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i, int is_list,
                                                                       int wraparound,
                                                                       int boundscheck) {

    if (is_list || Py_IS_TYPE(((PyObject*)(((o)))), (&PyList_Type))) {
        Py_ssize_t n = ((!wraparound) | __builtin_expect(!!(i >= 0), 1)) ? i : i + PyList_GET_SIZE(((PyObject*)((o))));
        if ((!boundscheck) || (__builtin_expect(!!(__Pyx_is_valid_index(n, PyList_GET_SIZE(((PyObject*)((o)))))), 1))) {
            PyObject *r = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((o))))), ((1UL << 25)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5150, __PRETTY_FUNCTION__, "PyList_Check(o)")), ((PyListObject*)((o))))->ob_item[(n)]);
            Py_INCREF(((PyObject*)((r))));
            return r;
        }
    }
    else if (Py_IS_TYPE(((PyObject*)(((o)))), (&PyTuple_Type))) {
        Py_ssize_t n = ((!wraparound) | __builtin_expect(!!(i >= 0), 1)) ? i : i + PyTuple_GET_SIZE(((PyObject*)((o))));
        if ((!boundscheck) || __builtin_expect(!!(__Pyx_is_valid_index(n, PyTuple_GET_SIZE(((PyObject*)((o)))))), 1)) {
            PyObject *r = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((o))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5158, __PRETTY_FUNCTION__, "PyTuple_Check(o)")), ((PyTupleObject*)((o))))->ob_item[(n)]);
            Py_INCREF(((PyObject*)((r))));
            return r;
        }
    } else {
        PyMappingMethods *mm = Py_TYPE(((PyObject*)((o))))->tp_as_mapping;
        PySequenceMethods *sm = Py_TYPE(((PyObject*)((o))))->tp_as_sequence;
        if (mm && mm->mp_subscript) {
            PyObject *r, *key = PyLong_FromSsize_t(i);
            if (__builtin_expect(!!(!key), 0)) return __null;
            r = mm->mp_subscript(o, key);
            Py_DECREF(((PyObject*)((key))));
            return r;
        }
        if (__builtin_expect(!!(sm && sm->sq_item), 1)) {
            if (wraparound && __builtin_expect(!!(i < 0), 0) && __builtin_expect(!!(sm->sq_length), 1)) {
                Py_ssize_t l = sm->sq_length(o);
                if (__builtin_expect(!!(l >= 0), 1)) {
                    i += l;
                } else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return __null;
                    PyErr_Clear();
                }
            }
            return sm->sq_item(o, i);
        }
    }





    return __Pyx_GetItemInt_Generic(o, PyLong_FromSsize_t(i));
}
# 5268 "yxdfb/Password.cpp"
static PyObject *__Pyx_FetchSharedCythonABIModule(void) {
    return __Pyx_PyImport_AddModuleRef((char*) "_cython_" "3_0_12" "");
}


static int __Pyx_VerifyCachedType(PyObject *cached_type,
                               const char *name,
                               Py_ssize_t basicsize,
                               Py_ssize_t expected_basicsize) {
    if (!PyType_Check(((PyObject*)((cached_type))))) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s is not a type object", name);
        return -1;
    }
    if (basicsize != expected_basicsize) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s has the wrong size, try recompiling",
            name);
        return -1;
    }
    return 0;
}

static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* abi_module;
    const char* object_name;
    PyTypeObject *cached_type = __null;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return __null;
    object_name = strrchr(type->tp_name, '.');
    object_name = object_name ? object_name+1 : type->tp_name;
    cached_type = (PyTypeObject*) PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        if (__Pyx_VerifyCachedType(
              (PyObject *)cached_type,
              object_name,
              cached_type->tp_basicsize,
              type->tp_basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    if (PyType_Ready(type) < 0) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, (PyObject *)type) < 0)
        goto bad;
    Py_INCREF(((PyObject*)((type))));
    cached_type = type;
done:
    Py_DECREF(((PyObject*)((abi_module))));
    return cached_type;
bad:
    Py_XDECREF(((PyObject*)((cached_type))));
    cached_type = __null;
    goto done;
}
# 5375 "yxdfb/Password.cpp"
static PyObject *__Pyx_PyVectorcall_FastCallDict_kw(PyObject *func, vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    PyObject *res = __null;
    PyObject *kwnames;
    PyObject **newargs;
    PyObject **kwvalues;
    Py_ssize_t i, pos;
    size_t j;
    PyObject *key, *value;
    unsigned long keys_are_strings;
    Py_ssize_t nkw = PyDict_GET_SIZE(((PyObject*)((kw))));
    newargs = (PyObject **)PyMem_Malloc((nargs + (size_t)nkw) * sizeof(args[0]));
    if (__builtin_expect(!!(newargs == __null), 0)) {
        PyErr_NoMemory();
        return __null;
    }
    for (j = 0; j < nargs; j++) newargs[j] = args[j];
    kwnames = PyTuple_New(nkw);
    if (__builtin_expect(!!(kwnames == __null), 0)) {
        PyMem_Free(newargs);
        return __null;
    }
    kwvalues = newargs + nargs;
    pos = i = 0;
    keys_are_strings = (1UL << 28);
    while (PyDict_Next(kw, &pos, &key, &value)) {
        keys_are_strings &= Py_TYPE(((PyObject*)((key))))->tp_flags;
        Py_INCREF(((PyObject*)((key))));
        Py_INCREF(((PyObject*)((value))));
        PyTuple_SET_ITEM(((PyObject*)((kwnames))), (i), ((PyObject*)((key))));
        kwvalues[i] = value;
        i++;
    }
    if (__builtin_expect(!!(!keys_are_strings), 0)) {
        PyErr_SetString(PyExc_TypeError, "keywords must be strings");
        goto cleanup;
    }
    res = vc(func, newargs, nargs, kwnames);
cleanup:
    Py_DECREF(((PyObject*)((kwnames))));
    for (i = 0; i < nkw; i++)
        Py_DECREF(((PyObject*)((kwvalues[i]))));
    PyMem_Free(newargs);
    return res;
}
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    if (__builtin_expect(!!(kw == __null), 1) || PyDict_GET_SIZE(((PyObject*)((kw)))) == 0) {
        return vc(func, args, nargs, __null);
    }
    return __Pyx_PyVectorcall_FastCallDict_kw(func, vc, args, nargs, kw);
}
# 5440 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc) {
    return __Pyx_IsAnySubtype2(Py_TYPE(((PyObject*)((func)))), (PyTypeObject *)__pyx_mstate_global->__pyx_CyFunctionType, (PyTypeObject *)&PyCFunction_Type) && (((PyCFunctionObject*)(func))->m_ml->ml_meth) == (PyCFunction) cfunc;
}

static __inline__ __attribute__ ((__unused__)) void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj) {





    do { PyObject *tmp = (PyObject *) ((PyCMethodObject *) (f))->mm_class; ((PyCMethodObject *) (f))->mm_class = (PyTypeObject*)((classobj) ? (Py_INCREF(((PyObject*)((classobj)))), classobj) : __null); Py_XDECREF(((PyObject*)((tmp)))); } while (0);



}
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op, void *closure)
{
    CYTHON_UNUSED_VAR(closure);
    if (__builtin_expect(!!(op->func_doc == __null), 0)) {




        if (((PyCFunctionObject*)op)->m_ml->ml_doc) {

            op->func_doc = PyUnicode_FromString(((PyCFunctionObject*)op)->m_ml->ml_doc);



            if (__builtin_expect(!!(op->func_doc == __null), 0))
                return __null;
        } else {
            Py_INCREF(((PyObject*)(((&_Py_NoneStruct)))));
            return (&_Py_NoneStruct);
        }

    }
    Py_INCREF(((PyObject*)((op->func_doc))));
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (value == __null) {
        value = (&_Py_NoneStruct);
    }
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->func_doc; op->func_doc = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(op->func_name == __null), 0)) {



        op->func_name = PyUnicode_InternFromString(((PyCFunctionObject*)op)->m_ml->ml_name);



        if (__builtin_expect(!!(op->func_name == __null), 0))
            return __null;
    }
    Py_INCREF(((PyObject*)((op->func_name))));
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);

    if (__builtin_expect(!!(value == __null || !PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 28)))), 0))



    {
        PyErr_SetString(PyExc_TypeError,
                        "__name__ must be set to a string object");
        return -1;
    }
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->func_name; op->func_name = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(((PyObject*)((op->func_qualname))));
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);

    if (__builtin_expect(!!(value == __null || !PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 28)))), 0))



    {
        PyErr_SetString(PyExc_TypeError,
                        "__qualname__ must be set to a string object");
        return -1;
    }
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->func_qualname; op->func_qualname = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(op->func_dict == __null), 0)) {
        op->func_dict = PyDict_New();
        if (__builtin_expect(!!(op->func_dict == __null), 0))
            return __null;
    }
    Py_INCREF(((PyObject*)((op->func_dict))));
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(value == __null), 0)) {
        PyErr_SetString(PyExc_TypeError,
               "function's dictionary may not be deleted");
        return -1;
    }
    if (__builtin_expect(!!(!PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 29)))), 0)) {
        PyErr_SetString(PyExc_TypeError,
               "setting function's dictionary to a non-dict");
        return -1;
    }
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->func_dict; op->func_dict = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(((PyObject*)((op->func_globals))));
    return op->func_globals;
}
static PyObject *
__Pyx_CyFunction_get_closure(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(op);
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(((PyObject*)(((&_Py_NoneStruct)))));
    return (&_Py_NoneStruct);
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op, void *context)
{
    PyObject* result = (op->func_code) ? op->func_code : (&_Py_NoneStruct);
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(((PyObject*)((result))));
    return result;
}
static int
__Pyx_CyFunction_init_defaults(__pyx_CyFunctionObject *op) {
    int result = 0;
    PyObject *res = op->defaults_getter((PyObject *) op);
    if (__builtin_expect(!!(!res), 0))
        return -1;

    op->defaults_tuple = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((res))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5613, __PRETTY_FUNCTION__, "PyTuple_Check(res)")), ((PyTupleObject*)((res))))->ob_item[(0)]);
    Py_INCREF(((PyObject*)((op->defaults_tuple))));
    op->defaults_kwdict = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((res))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 5615, __PRETTY_FUNCTION__, "PyTuple_Check(res)")), ((PyTupleObject*)((res))))->ob_item[(1)]);
    Py_INCREF(((PyObject*)((op->defaults_kwdict))));
# 5625 "yxdfb/Password.cpp"
    Py_DECREF(((PyObject*)((res))));
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = (&_Py_NoneStruct);
    } else if (__builtin_expect(!!(value != (&_Py_NoneStruct) && !PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 26)))), 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "__defaults__ must be set to a tuple object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__defaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->defaults_tuple; op->defaults_tuple = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_tuple;
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(!result), 0)) {
        if (op->defaults_getter) {
            if (__builtin_expect(!!(__Pyx_CyFunction_init_defaults(op) < 0), 0)) return __null;
            result = op->defaults_tuple;
        } else {
            result = (&_Py_NoneStruct);
        }
    }
    Py_INCREF(((PyObject*)((result))));
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = (&_Py_NoneStruct);
    } else if (__builtin_expect(!!(value != (&_Py_NoneStruct) && !PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 29)))), 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__kwdefaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->defaults_kwdict; op->defaults_kwdict = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_kwdict;
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(!result), 0)) {
        if (op->defaults_getter) {
            if (__builtin_expect(!!(__Pyx_CyFunction_init_defaults(op) < 0), 0)) return __null;
            result = op->defaults_kwdict;
        } else {
            result = (&_Py_NoneStruct);
        }
    }
    Py_INCREF(((PyObject*)((result))));
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value || value == (&_Py_NoneStruct)) {
        value = __null;
    } else if (__builtin_expect(!!(!PyType_HasFeature((Py_TYPE(((PyObject*)((value))))), ((1UL << 29)))), 0)) {
        PyErr_SetString(PyExc_TypeError,
                        "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(((PyObject*)((value))));
    do { PyObject *tmp = (PyObject *) op->func_annotations; op->func_annotations = value; Py_XDECREF(((PyObject*)((tmp)))); } while (0);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->func_annotations;
    CYTHON_UNUSED_VAR(context);
    if (__builtin_expect(!!(!result), 0)) {
        result = PyDict_New();
        if (__builtin_expect(!!(!result), 0)) return __null;
        op->func_annotations = result;
    }
    Py_INCREF(((PyObject*)((result))));
    return result;
}
static PyObject *
__Pyx_CyFunction_get_is_coroutine(__pyx_CyFunctionObject *op, void *context) {
    int is_coroutine;
    CYTHON_UNUSED_VAR(context);
    if (op->func_is_coroutine) {
        return (Py_INCREF(((PyObject*)((op->func_is_coroutine)))), op->func_is_coroutine);
    }
    is_coroutine = op->flags & 0x08;

    if (is_coroutine) {
        PyObject *module, *fromlist, *marker = __pyx_mstate_global->__pyx_n_s_is_coroutine;
        fromlist = PyList_New(1);
        if (__builtin_expect(!!(!fromlist), 0)) return __null;
        Py_INCREF(((PyObject*)((marker))));

        PyList_SET_ITEM(((PyObject*)((fromlist))), (0), ((PyObject*)((marker))));







        module = PyImport_ImportModuleLevelObject(__pyx_mstate_global->__pyx_n_s_asyncio_coroutines, __null, __null, fromlist, 0);
        Py_DECREF(((PyObject*)((fromlist))));
        if (__builtin_expect(!!(!module), 0)) goto ignore;
        op->func_is_coroutine = __Pyx_PyObject_GetAttrStr(module, marker);
        Py_DECREF(((PyObject*)((module))));
        if (__builtin_expect(!!(op->func_is_coroutine), 1)) {
            return (Py_INCREF(((PyObject*)((op->func_is_coroutine)))), op->func_is_coroutine);
        }
ignore:
        PyErr_Clear();
    }

    op->func_is_coroutine = __Pyx_PyBool_FromLong(is_coroutine);
    return (Py_INCREF(((PyObject*)((op->func_is_coroutine)))), op->func_is_coroutine);
}
# 5766 "yxdfb/Password.cpp"
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "__doc__", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
    {(char *) "func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "func_defaults", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__defaults__", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__kwdefaults__", (getter)__Pyx_CyFunction_get_kwdefaults, (setter)__Pyx_CyFunction_set_kwdefaults, 0, 0},
    {(char *) "__annotations__", (getter)__Pyx_CyFunction_get_annotations, (setter)__Pyx_CyFunction_set_annotations, 0, 0},
    {(char *) "_is_coroutine", (getter)__Pyx_CyFunction_get_is_coroutine, 0, 0, 0},



    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {

    {(char *) "__module__", 6, __builtin_offsetof(PyCFunctionObject, m_module), 0, 0},
# 5811 "yxdfb/Password.cpp"
    {0, 0, 0, 0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m, PyObject *args)
{
    CYTHON_UNUSED_VAR(args);

    Py_INCREF(((PyObject*)((m->func_qualname))));
    return m->func_qualname;



}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, 0x0001, 0},
    {0, 0, 0, 0}
};





static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject *op, PyMethodDef *ml, int flags, PyObject* qualname,
                                       PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {

    PyCFunctionObject *cf = (PyCFunctionObject*) op;

    if (__builtin_expect(!!(op == __null), 0))
        return __null;




    op->flags = flags;
    (((PyCFunctionObject*)op)->m_weakreflist) = __null;

    cf->m_ml = ml;
    cf->m_self = (PyObject *) op;

    Py_XINCREF(((PyObject*)((closure))));
    op->func_closure = closure;

    Py_XINCREF(((PyObject*)((module))));
    cf->m_module = module;

    op->func_dict = __null;
    op->func_name = __null;
    Py_INCREF(((PyObject*)((qualname))));
    op->func_qualname = qualname;
    op->func_doc = __null;



    ((PyCMethodObject*)op)->mm_class = __null;

    op->func_globals = globals;
    Py_INCREF(((PyObject*)((op->func_globals))));
    Py_XINCREF(((PyObject*)((code))));
    op->func_code = code;
    op->defaults_pyobjects = 0;
    op->defaults_size = 0;
    op->defaults = __null;
    op->defaults_tuple = __null;
    op->defaults_kwdict = __null;
    op->defaults_getter = __null;
    op->func_annotations = __null;
    op->func_is_coroutine = __null;

    switch (ml->ml_flags & (0x0001 | 0x0080 | 0x0004 | 0x0008 | 0x0002 | 0x0200)) {
    case 0x0004:
        (((PyCFunctionObject*)op)->vectorcall) = __Pyx_CyFunction_Vectorcall_NOARGS;
        break;
    case 0x0008:
        (((PyCFunctionObject*)op)->vectorcall) = __Pyx_CyFunction_Vectorcall_O;
        break;
    case 0x0200 | 0x0080 | 0x0002:
        (((PyCFunctionObject*)op)->vectorcall) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD;
        break;
    case 0x0080 | 0x0002:
        (((PyCFunctionObject*)op)->vectorcall) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS;
        break;
    case 0x0001 | 0x0002:
        (((PyCFunctionObject*)op)->vectorcall) = __null;
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        Py_DECREF(((PyObject*)((op))));
        return __null;
    }

    return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
    do { __typeof__(m->func_closure)* _tmp_op_ptr = &(m->func_closure); __typeof__(m->func_closure) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);



    do { __typeof__(((PyCFunctionObject*)m)->m_module)* _tmp_op_ptr = &(((PyCFunctionObject*)m)->m_module); __typeof__(((PyCFunctionObject*)m)->m_module) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);

    do { __typeof__(m->func_dict)* _tmp_op_ptr = &(m->func_dict); __typeof__(m->func_dict) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_name)* _tmp_op_ptr = &(m->func_name); __typeof__(m->func_name) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_qualname)* _tmp_op_ptr = &(m->func_qualname); __typeof__(m->func_qualname) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_doc)* _tmp_op_ptr = &(m->func_doc); __typeof__(m->func_doc) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_globals)* _tmp_op_ptr = &(m->func_globals); __typeof__(m->func_globals) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_code)* _tmp_op_ptr = &(m->func_code); __typeof__(m->func_code) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);




    {
        PyObject *cls = (PyObject*) ((PyCMethodObject *) (m))->mm_class;
        ((PyCMethodObject *) (m))->mm_class = __null;
        Py_XDECREF(((PyObject*)((cls))));
    }


    do { __typeof__(m->defaults_tuple)* _tmp_op_ptr = &(m->defaults_tuple); __typeof__(m->defaults_tuple) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->defaults_kwdict)* _tmp_op_ptr = &(m->defaults_kwdict); __typeof__(m->defaults_kwdict) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_annotations)* _tmp_op_ptr = &(m->func_annotations); __typeof__(m->func_annotations) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    do { __typeof__(m->func_is_coroutine)* _tmp_op_ptr = &(m->func_is_coroutine); __typeof__(m->func_is_coroutine) _tmp_old_op = (*_tmp_op_ptr); if (_tmp_old_op != __null) { *_tmp_op_ptr = nullptr; Py_DECREF(((PyObject*)((_tmp_old_op)))); } } while (0);
    if (m->defaults) {
        PyObject **pydefaults = ((PyObject * *)(((__pyx_CyFunctionObject *) (m))->defaults));
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_XDECREF(((PyObject*)((pydefaults[i]))));
        PyObject_Free(m->defaults);
        m->defaults = __null;
    }
    return 0;
}
static void __Pyx__CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    if ((((PyCFunctionObject*)m)->m_weakreflist) != __null)
        PyObject_ClearWeakRefs((PyObject *) m);
    __Pyx_CyFunction_clear(m);
    PyObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
    do { if (m->func_closure) { int vret = visit(((PyObject*)((m->func_closure))), arg); if (vret) return vret; } } while (0);



    do { if (((PyCFunctionObject*)m)->m_module) { int vret = visit(((PyObject*)((((PyCFunctionObject*)m)->m_module))), arg); if (vret) return vret; } } while (0);

    do { if (m->func_dict) { int vret = visit(((PyObject*)((m->func_dict))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_name) { int vret = visit(((PyObject*)((m->func_name))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_qualname) { int vret = visit(((PyObject*)((m->func_qualname))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_doc) { int vret = visit(((PyObject*)((m->func_doc))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_globals) { int vret = visit(((PyObject*)((m->func_globals))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_code) { int vret = visit(((PyObject*)((m->func_code))), arg); if (vret) return vret; } } while (0);

    do { if (((PyObject*) ((PyCMethodObject *) (m))->mm_class)) { int vret = visit(((PyObject*)((((PyObject*) ((PyCMethodObject *) (m))->mm_class)))), arg); if (vret) return vret; } } while (0);

    do { if (m->defaults_tuple) { int vret = visit(((PyObject*)((m->defaults_tuple))), arg); if (vret) return vret; } } while (0);
    do { if (m->defaults_kwdict) { int vret = visit(((PyObject*)((m->defaults_kwdict))), arg); if (vret) return vret; } } while (0);
    do { if (m->func_is_coroutine) { int vret = visit(((PyObject*)((m->func_is_coroutine))), arg); if (vret) return vret; } } while (0);
    if (m->defaults) {
        PyObject **pydefaults = ((PyObject * *)(((__pyx_CyFunctionObject *) (m))->defaults));
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            do { if (pydefaults[i]) { int vret = visit(((PyObject*)((pydefaults[i]))), arg); if (vret) return vret; } } while (0);
    }
    return 0;
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject *op)
{

    return PyUnicode_FromFormat("<cyfunction %U at %p>",
                                op->func_qualname, (void *)op);




}
static PyObject * __Pyx_CyFunction_CallMethod(PyObject *func, PyObject *self, PyObject *arg, PyObject *kw) {
# 6005 "yxdfb/Password.cpp"
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    int flags = f->m_ml->ml_flags;

    Py_ssize_t size;
    switch (flags & (0x0001 | 0x0002 | 0x0004 | 0x0008)) {
    case 0x0001:
        if (__builtin_expect(!!(kw == __null || PyDict_Size(kw) == 0), 1))
            return (*meth)(self, arg);
        break;
    case 0x0001 | 0x0002:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case 0x0004:
        if (__builtin_expect(!!(kw == __null || PyDict_Size(kw) == 0), 1)) {

            size = PyTuple_GET_SIZE(((PyObject*)((arg))));




            if (__builtin_expect(!!(size == 0), 1))
                return (*meth)(self, __null);
# 6035 "yxdfb/Password.cpp"
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" "z" "d given)",
                f->m_ml->ml_name, size);

            return __null;
        }
        break;
    case 0x0008:
        if (__builtin_expect(!!(kw == __null || PyDict_Size(kw) == 0), 1)) {

            size = PyTuple_GET_SIZE(((PyObject*)((arg))));




            if (__builtin_expect(!!(size == 1), 1)) {
                PyObject *result, *arg0;

                arg0 = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((arg))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6053, __PRETTY_FUNCTION__, "PyTuple_Check(arg)")), ((PyTupleObject*)((arg))))->ob_item[(0)]);



                result = (*meth)(self, arg0);



                return result;
            }
# 6071 "yxdfb/Password.cpp"
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" "z" "d given)",
                f->m_ml->ml_name, size);

            return __null;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        return __null;
    }







    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
                 f->m_ml->ml_name);

    return __null;
}
static __inline__ __attribute__ ((__unused__)) PyObject *__Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *self, *result;




    self = ((PyCFunctionObject*)func)->m_self;

    result = __Pyx_CyFunction_CallMethod(func, self, arg, kw);
    return result;
}
static PyObject *__Pyx_CyFunction_CallAsMethod(PyObject *func, PyObject *args, PyObject *kw) {
    PyObject *result;
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *) func;

     vectorcallfunc vc = (((PyCFunctionObject*)cyfunc)->vectorcall);
    if (vc) {

        return __Pyx_PyVectorcall_FastCallDict(func, vc, &((((PyType_HasFeature((Py_TYPE(((PyObject*)((args))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6112, __PRETTY_FUNCTION__, "PyTuple_Check(args)")), ((PyTupleObject*)((args))))->ob_item[(0)]), (size_t)PyTuple_GET_SIZE(((PyObject*)((args)))), kw);




    }

    if ((cyfunc->flags & 0x04) && !(cyfunc->flags & 0x01)) {
        Py_ssize_t argc;
        PyObject *new_args;
        PyObject *self;

        argc = PyTuple_GET_SIZE(((PyObject*)((args))));




        new_args = PyTuple_GetSlice(args, 1, argc);
        if (__builtin_expect(!!(!new_args), 0))
            return __null;
        self = PyTuple_GetItem(args, 0);
        if (__builtin_expect(!!(!self), 0)) {
            Py_DECREF(((PyObject*)((new_args))));

            PyErr_Format(PyExc_TypeError,
                         "unbound method %.200S() needs an argument",
                         cyfunc->func_qualname);




            return __null;
        }
        result = __Pyx_CyFunction_CallMethod(func, self, new_args, kw);
        Py_DECREF(((PyObject*)((new_args))));
    } else {
        result = __Pyx_CyFunction_Call(func, args, kw);
    }
    return result;
}

static __inline__ __attribute__ ((__unused__)) int __Pyx_CyFunction_Vectorcall_CheckArgs(__pyx_CyFunctionObject *cyfunc, Py_ssize_t nargs, PyObject *kwnames)
{
    int ret = 0;
    if ((cyfunc->flags & 0x04) && !(cyfunc->flags & 0x01)) {
        if (__builtin_expect(!!(nargs < 1), 0)) {
            PyErr_Format(PyExc_TypeError, "%.200s() needs an argument",
                         ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
            return -1;
        }
        ret = 1;
    }
    if (__builtin_expect(!!(kwnames), 0) && __builtin_expect(!!(PyTuple_GET_SIZE(((PyObject*)((kwnames))))), 0)) {
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes no keyword arguments", ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
        return -1;
    }
    return ret;
}
static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;



    Py_ssize_t nargs = _PyVectorcall_NARGS(nargsf);

    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return __null;
    }
    if (__builtin_expect(!!(nargs != 0), 0)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes no arguments (%" "z" "d given)",
            def->ml_name, nargs);
        return __null;
    }
    return def->ml_meth(self, __null);
}
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;



    Py_ssize_t nargs = _PyVectorcall_NARGS(nargsf);

    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return __null;
    }
    if (__builtin_expect(!!(nargs != 1), 0)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes exactly one argument (%" "z" "d given)",
            def->ml_name, nargs);
        return __null;
    }
    return def->ml_meth(self, args[0]);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;



    Py_ssize_t nargs = _PyVectorcall_NARGS(nargsf);

    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, __null)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return __null;
    }
    return ((_PyCFunctionFastWithKeywords)(void(*)(void))def->ml_meth)(self, args, nargs, kwnames);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
    PyTypeObject *cls = (PyTypeObject *) ((PyObject*) ((PyCMethodObject *) (cyfunc))->mm_class);



    Py_ssize_t nargs = _PyVectorcall_NARGS(nargsf);

    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, __null)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return __null;
    }
    return ((PyCMethod)(void(*)(void))def->ml_meth)(self, cls, args, (size_t)nargs, kwnames);
}
# 6308 "yxdfb/Password.cpp"
static PyTypeObject __pyx_CyFunctionType_type = {
    { { { 1 }, (0) }, (0) },
    "_cython_" "3_0_12" "" "." "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor) __Pyx_CyFunction_dealloc,





    __builtin_offsetof(PyCFunctionObject, vectorcall),

    0,
    0,



    0,

    (reprfunc) __Pyx_CyFunction_repr,
    0,
    0,
    0,
    0,
    __Pyx_CyFunction_CallAsMethod,
    0,
    0,
    0,
    0,

    (1UL << 17) |


    (1UL << 11) |

    ( 0 | 0) | (1UL << 14) | (1UL << 10),
    0,
    (traverseproc) __Pyx_CyFunction_traverse,
    (inquiry) __Pyx_CyFunction_clear,
    0,



    __builtin_offsetof(PyCFunctionObject, m_weakreflist),

    0,
    0,
    __pyx_CyFunction_methods,
    __pyx_CyFunction_members,
    __pyx_CyFunction_getsets,
    0,
    0,
    __Pyx_PyMethod_New,
    0,
    __builtin_offsetof(__pyx_CyFunctionObject, func_dict),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,

    0,


    0,





    0,







};

static int __pyx_CyFunction_init(PyObject *module) {



    CYTHON_UNUSED_VAR(module);
    __pyx_mstate_global->__pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);

    if (__builtin_expect(!!(__pyx_mstate_global->__pyx_CyFunctionType == __null), 0)) {
        return -1;
    }
    return 0;
}
static __inline__ __attribute__ ((__unused__)) void *__Pyx_CyFunction_InitDefaults(PyObject *func, size_t size, int pyobjects) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults = PyObject_Malloc(size);
    if (__builtin_expect(!!(!m->defaults), 0))
        return PyErr_NoMemory();
    memset(m->defaults, 0, size);
    m->defaults_pyobjects = pyobjects;
    m->defaults_size = size;
    return m->defaults;
}
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetDefaultsTuple(PyObject *func, PyObject *tuple) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_tuple = tuple;
    Py_INCREF(((PyObject*)((tuple))));
}
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_kwdict = dict;
    Py_INCREF(((PyObject*)((dict))));
}
static __inline__ __attribute__ ((__unused__)) void __Pyx_CyFunction_SetAnnotationsDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->func_annotations = dict;
    Py_INCREF(((PyObject*)((dict))));
}


static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml, int flags, PyObject* qualname,
                                      PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    PyObject *op = __Pyx_CyFunction_Init(
        ((__pyx_CyFunctionObject*)(_PyObject_GC_New(__pyx_mstate_global->__pyx_CyFunctionType))),
        ml, flags, qualname, closure, module, globals, code
    );
    if (__builtin_expect(!!(op), 1)) {
        PyObject_GC_Track(op);
    }
    return op;
}


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyFrozenSet_New(PyObject* it) {
    if (it) {
        PyObject* result;
# 6460 "yxdfb/Password.cpp"
        if (Py_IS_TYPE(((PyObject*)(((it)))), (&PyFrozenSet_Type))) {
            Py_INCREF(((PyObject*)((it))));
            return it;
        }
        result = PyFrozenSet_New(it);
        if (__builtin_expect(!!(!result), 0))
            return __null;
        if ((((3 << 24) | (12 << 16) | (9 << 8) | (0xF << 4) | (0 << 0)) >= 0x031000A1) || __builtin_expect(!!(PySet_GET_SIZE(((PyObject*)((result))))), 1))
            return result;
        Py_DECREF(((PyObject*)((result))));

    }

    return PyFrozenSet_Type.tp_new(&PyFrozenSet_Type, __pyx_mstate_global->__pyx_empty_tuple, __null);



}


static int __Pyx_PySet_ContainsUnhashable(PyObject *set, PyObject *key) {
    int result = -1;
    if ((Py_IS_TYPE(((PyObject*)(((key)))), (&PySet_Type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((key)))), &PySet_Type)) && PyErr_ExceptionMatches(PyExc_TypeError)) {
        PyObject *tmpkey;
        PyErr_Clear();
        tmpkey = __Pyx_PyFrozenSet_New(key);
        if (tmpkey != __null) {
            result = PySet_Contains(set, tmpkey);
            Py_DECREF(((PyObject*)((tmpkey))));
        }
    }
    return result;
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PySet_ContainsTF(PyObject* key, PyObject* set, int eq) {
    int result = PySet_Contains(set, key);
    if (__builtin_expect(!!(result < 0), 0)) {
        result = __Pyx_PySet_ContainsUnhashable(set, key);
    }
    return __builtin_expect(!!(result < 0), 0) ? result : (result == (eq == 2));
}



static __inline__ __attribute__ ((__unused__)) void __Pyx_crop_slice(Py_ssize_t* _start, Py_ssize_t* _stop, Py_ssize_t* _length) {
    Py_ssize_t start = *_start, stop = *_stop, length = *_length;
    if (start < 0) {
        start += length;
        if (start < 0)
            start = 0;
    }
    if (stop < 0)
        stop += length;
    else if (stop > length)
        stop = length;
    *_length = stop - start;
    *_start = start;
    *_stop = stop;
}
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyList_GetSlice(
            PyObject* src, Py_ssize_t start, Py_ssize_t stop) {
    Py_ssize_t length = PyList_GET_SIZE(((PyObject*)((src))));
    __Pyx_crop_slice(&start, &stop, &length);
    if (length <= 0) {
        return PyList_New(0);
    }
    return __Pyx_PyList_FromArray(((PyListObject*)src)->ob_item + start, length);
}
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyTuple_GetSlice(
            PyObject* src, Py_ssize_t start, Py_ssize_t stop) {
    Py_ssize_t length = PyTuple_GET_SIZE(((PyObject*)((src))));
    __Pyx_crop_slice(&start, &stop, &length);
    return __Pyx_PyTuple_FromArray(((PyTupleObject*)src)->ob_item + start, length);
}



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg[2] = {__null, __null};
    return __Pyx_PyObject_FastCallDict(func, arg + 1, (size_t)(0 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1))), __null);
}


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {__null, arg};
    return __Pyx_PyObject_FastCallDict(func, args+1, (size_t)(1 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1))), __null);
}


static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method) {
    PyObject *attr;

    __Pyx_TypeName type_name;
    PyTypeObject *tp = Py_TYPE(((PyObject*)((obj))));
    PyObject *descr;
    descrgetfunc f = __null;
    PyObject **dictptr, *dict;
    int meth_found = 0;
    ((*method == __null) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6557, __PRETTY_FUNCTION__, "*method == NULL"));
    if (__builtin_expect(!!(tp->tp_getattro != PyObject_GenericGetAttr), 0)) {
        attr = __Pyx_PyObject_GetAttrStr(obj, name);
        goto try_unpack;
    }
    if (__builtin_expect(!!(tp->tp_dict == __null), 0) && __builtin_expect(!!(PyType_Ready(tp) < 0), 0)) {
        return 0;
    }
    descr = _PyType_Lookup(tp, name);
    if (__builtin_expect(!!(descr != __null), 1)) {
        Py_INCREF(((PyObject*)((descr))));

        if ((((((PyTypeObject *)Py_TYPE(((PyObject*)((descr)))))->tp_flags) & ((1UL << 17))) != 0))
# 6583 "yxdfb/Password.cpp"
        {
            meth_found = 1;
        } else {
            f = Py_TYPE(((PyObject*)((descr))))->tp_descr_get;
            if (f != __null && PyDescr_IsData(descr)) {
                attr = f(descr, obj, (PyObject *)Py_TYPE(((PyObject*)((obj)))));
                Py_DECREF(((PyObject*)((descr))));
                goto try_unpack;
            }
        }
    }
    dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr != __null && (dict = *dictptr) != __null) {
        Py_INCREF(((PyObject*)((dict))));
        attr = __Pyx_PyDict_GetItemStr(dict, name);
        if (attr != __null) {
            Py_INCREF(((PyObject*)((attr))));
            Py_DECREF(((PyObject*)((dict))));
            Py_XDECREF(((PyObject*)((descr))));
            goto try_unpack;
        }
        Py_DECREF(((PyObject*)((dict))));
    }
    if (meth_found) {
        *method = descr;
        return 1;
    }
    if (f != __null) {
        attr = f(descr, obj, (PyObject *)Py_TYPE(((PyObject*)((obj)))));
        Py_DECREF(((PyObject*)((descr))));
        goto try_unpack;
    }
    if (__builtin_expect(!!(descr != __null), 1)) {
        *method = descr;
        return 0;
    }
    type_name = ((tp)->tp_name);
    PyErr_Format(PyExc_AttributeError,

                 "'" "%.200s" "' object has no attribute '%U'",
                 type_name, name);




                                    ;
    return 0;




try_unpack:

    if (__builtin_expect(!!(attr), 1) && Py_IS_TYPE(((PyObject*)(((attr)))), (&PyMethod_Type)) && __builtin_expect(!!(PyMethod_GET_SELF(((PyObject*)((attr)))) == obj), 1)) {
        PyObject *function = PyMethod_GET_FUNCTION(((PyObject*)((attr))));
        Py_INCREF(((PyObject*)((function))));
        Py_DECREF(((PyObject*)((attr))));
        *method = function;
        return 1;
    }

    *method = attr;
    return 0;
}


static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name) {
    PyObject *method = __null, *result = __null;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (__builtin_expect(!!(is_method), 1)) {
        result = __Pyx_PyObject_CallOneArg(method, obj);
        Py_DECREF(((PyObject*)((method))));
        return result;
    }
    if (__builtin_expect(!!(!method), 0)) goto bad;
    result = __Pyx_PyObject_CallNoArg(method);
    Py_DECREF(((PyObject*)((method))));
bad:
    return result;
}



static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases) {
    Py_ssize_t i, n;

    n = PyTuple_GET_SIZE(((PyObject*)((bases))));




    for (i = 1; i < n; i++)
    {




        PyObject *b0 = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((bases))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6680, __PRETTY_FUNCTION__, "PyTuple_Check(bases)")), ((PyTupleObject*)((bases))))->ob_item[(i)]);




        PyTypeObject *b;
# 6697 "yxdfb/Password.cpp"
        b = (PyTypeObject*) b0;
        if (!(((((PyTypeObject *)b)->tp_flags) & ((1UL << 9))) != 0))
        {
            __Pyx_TypeName b_name = ((b)->tp_name);
            PyErr_Format(PyExc_TypeError,
                "base class '" "%.200s" "' is not a heap type", b_name);
                                         ;



            return -1;
        }
        if (dictoffset == 0)
        {
            Py_ssize_t b_dictoffset = 0;

            b_dictoffset = b->tp_dictoffset;







            if (b_dictoffset) {
                {
                    __Pyx_TypeName b_name = ((b)->tp_name);
                    PyErr_Format(PyExc_TypeError,
                        "extension type '%.200s' has no __dict__ slot, "
                        "but base type '" "%.200s" "' has: "
                        "either add 'cdef dict __dict__' to the extension type "
                        "or add '__slots__ = [...]' to the base type",
                        type_name, b_name);
                                                 ;
                }






                return -1;
            }
        }



    }
    return 0;
}



static int __Pyx_PyType_Ready(PyTypeObject *t) {







    int r;
    PyObject *bases = ((t)->tp_bases);
    if (bases && __builtin_expect(!!(__Pyx_validate_bases_tuple(t->tp_name, t->tp_dictoffset, bases) == -1), 0))
        return -1;

    {
        int gc_was_enabled;

        gc_was_enabled = PyGC_Disable();
        (void)__Pyx_PyObject_CallMethod0;
# 6795 "yxdfb/Password.cpp"
        t->tp_flags |= (1UL << 9);

        t->tp_flags |= (1UL << 8);




    r = PyType_Ready(t);

        t->tp_flags &= ~(1UL << 9);

        if (gc_was_enabled)
            PyGC_Enable();
# 6825 "yxdfb/Password.cpp"
    }

    return r;

}
# 6874 "yxdfb/Password.cpp"
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases) {
    Py_ssize_t i, nbases;

    nbases = PyTuple_GET_SIZE(((PyObject*)((bases))));




    for (i=0; i < nbases; i++) {
        PyTypeObject *tmptype;

        PyObject *tmp = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((bases))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6885, __PRETTY_FUNCTION__, "PyTuple_Check(bases)")), ((PyTupleObject*)((bases))))->ob_item[(i)]);




        tmptype = Py_TYPE(((PyObject*)((tmp))));




        if (!metaclass) {
            metaclass = tmptype;
            continue;
        }
        if (PyType_IsSubtype(metaclass, tmptype))
            continue;
        if (PyType_IsSubtype(tmptype, metaclass)) {
            metaclass = tmptype;
            continue;
        }
        PyErr_SetString(PyExc_TypeError,
                        "metaclass conflict: "
                        "the metaclass of a derived class "
                        "must be a (non-strict) subclass "
                        "of the metaclasses of all its bases");
        return __null;
    }
    if (!metaclass) {



        metaclass = &PyType_Type;

    }
    Py_INCREF(((PyObject*)(((PyObject*) metaclass))));
    return (PyObject*) metaclass;
}



static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(((PyObject*)((tuple))));

    for (i=0; i<n; i++) {
        if (exc_type == ((((PyType_HasFeature((Py_TYPE(((PyObject*)((tuple))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6930, __PRETTY_FUNCTION__, "PyTuple_Check(tuple)")), ((PyTupleObject*)((tuple))))->ob_item[(i)])) return 1;
    }

    for (i=0; i<n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, ((((PyType_HasFeature((Py_TYPE(((PyObject*)((tuple))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6934, __PRETTY_FUNCTION__, "PyTuple_Check(tuple)")), ((PyTupleObject*)((tuple))))->ob_item[(i)]))) return 1;
    }
    return 0;
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    int result;
    PyObject *exc_type;

    PyObject *current_exception = tstate->current_exception;
    if (__builtin_expect(!!(!current_exception), 0)) return 0;
    exc_type = (PyObject*) Py_TYPE(((PyObject*)((current_exception))));
    if (exc_type == err) return 1;
# 6954 "yxdfb/Password.cpp"
    if (__builtin_expect(!!(PyType_HasFeature((Py_TYPE(((PyObject*)((err))))), ((1UL << 26)))), 0)) {
        result = __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    } else {
        result = __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
    }



    return result;
}




static __inline__ __attribute__ ((__unused__)) void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {

    PyObject *tmp_value;
    ((type == __null || (value != __null && type == (PyObject*) Py_TYPE(((PyObject*)((value)))))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 6971, __PRETTY_FUNCTION__, "type == NULL || (value != NULL && type == (PyObject*) Py_TYPE(value))"));
    if (value) {

        if (__builtin_expect(!!(((PyBaseExceptionObject*) value)->traceback != tb), 0))

            PyException_SetTraceback(value, tb);
    }
    tmp_value = tstate->current_exception;
    tstate->current_exception = value;
    Py_XDECREF(((PyObject*)((tmp_value))));
    Py_XDECREF(((PyObject*)((type))));
    Py_XDECREF(((PyObject*)((tb))));
# 6995 "yxdfb/Password.cpp"
}
static __inline__ __attribute__ ((__unused__)) void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {

    PyObject* exc_value;
    exc_value = tstate->current_exception;
    tstate->current_exception = 0;
    *value = exc_value;
    *type = __null;
    *tb = __null;
    if (exc_value) {
        *type = (PyObject*) Py_TYPE(((PyObject*)((exc_value))));
        Py_INCREF(((PyObject*)((*type))));

        *tb = ((PyBaseExceptionObject*) exc_value)->traceback;
        Py_XINCREF(((PyObject*)((*tb))));



    }
# 7022 "yxdfb/Password.cpp"
}




static void __Pyx_PyObject_GetAttrStr_ClearAttributeError(void) {
    PyThreadState *__pyx_tstate;
    __pyx_tstate = _PyThreadState_UncheckedGet();
    if (__builtin_expect(!!(__Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, PyExc_AttributeError)), 1))
        __Pyx_ErrRestoreInState(__pyx_tstate, __null, __null, __null);
}

static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name) {
    PyObject *result;





    PyTypeObject* tp = Py_TYPE(((PyObject*)((obj))));
    if (__builtin_expect(!!(tp->tp_getattro == PyObject_GenericGetAttr), 1)) {
        return _PyObject_GenericGetAttrWithDict(obj, attr_name, __null, 1);
    }

    result = __Pyx_PyObject_GetAttrStr(obj, attr_name);
    if (__builtin_expect(!!(!result), 0)) {
        __Pyx_PyObject_GetAttrStr_ClearAttributeError();
    }
    return result;

}


static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStrNoError(__pyx_mstate_global->__pyx_b, name);
    if (__builtin_expect(!!(!result), 0) && !PyErr_Occurred()) {
        PyErr_Format(PyExc_NameError,

            "name '%U' is not defined", name);



    }
    return result;
}


static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args[3] = {__null, arg1, arg2};
    return __Pyx_PyObject_FastCallDict(function, args+1, (size_t)(2 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1))), __null);
}



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error) {
    PyObject *res;
    PyTypeObject *tp = Py_TYPE(((PyObject*)((obj))));




    res = _PyType_Lookup(tp, attr_name);
    if (__builtin_expect(!!(res), 1)) {
        descrgetfunc f = Py_TYPE(((PyObject*)((res))))->tp_descr_get;
        if (!f) {
            Py_INCREF(((PyObject*)((res))));
        } else {
            res = f(res, obj, (PyObject *)tp);
        }
    } else if (with_error) {
        PyErr_SetObject(PyExc_AttributeError, attr_name);
    }
    return res;
}



static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name,
                                           PyObject *qualname, PyObject *mkw, PyObject *modname, PyObject *doc) {
    PyObject *ns;
    if (metaclass) {
        PyObject *prep = __Pyx_PyObject_GetAttrStrNoError(metaclass, __pyx_mstate_global->__pyx_n_s_prepare);
        if (prep) {
            PyObject *pargs[3] = {__null, name, bases};
            ns = __Pyx_PyObject_FastCallDict(prep, pargs+1, 2 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1)), mkw);
            Py_DECREF(((PyObject*)((prep))));
        } else {
            if (__builtin_expect(!!(PyErr_Occurred()), 0))
                return __null;
            ns = PyDict_New();
        }
    } else {
        ns = PyDict_New();
    }
    if (__builtin_expect(!!(!ns), 0))
        return __null;
    if (__builtin_expect(!!(PyObject_SetItem(ns, __pyx_mstate_global->__pyx_n_s_module, modname) < 0), 0)) goto bad;

    if (__builtin_expect(!!(PyObject_SetItem(ns, __pyx_mstate_global->__pyx_n_s_qualname, qualname) < 0), 0)) goto bad;



    if (__builtin_expect(!!(doc && PyObject_SetItem(ns, __pyx_mstate_global->__pyx_n_s_doc, doc) < 0), 0)) goto bad;
    return ns;
bad:
    Py_DECREF(((PyObject*)((ns))));
    return __null;
}
# 7260 "yxdfb/Password.cpp"
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases,
                                      PyObject *dict, PyObject *mkw,
                                      int calculate_metaclass, int allow_py2_metaclass) {
    PyObject *result;
    PyObject *owned_metaclass = __null;
    PyObject *margs[4] = {__null, name, bases, dict};
    if (allow_py2_metaclass) {
        owned_metaclass = PyObject_GetItem(dict, __pyx_mstate_global->__pyx_n_s_metaclass);
        if (owned_metaclass) {
            metaclass = owned_metaclass;
        } else if (__builtin_expect(!!(PyErr_ExceptionMatches(PyExc_KeyError)), 1)) {
            PyErr_Clear();
        } else {
            return __null;
        }
    }
    if (calculate_metaclass && (!metaclass || PyType_Check(((PyObject*)((metaclass)))))) {
        metaclass = __Pyx_CalculateMetaclass((PyTypeObject*) metaclass, bases);
        Py_XDECREF(((PyObject*)((owned_metaclass))));
        if (__builtin_expect(!!(!metaclass), 0))
            return __null;
        owned_metaclass = metaclass;
    }
    result = __Pyx_PyObject_FastCallDict(metaclass, margs+1, 3 | (static_cast<size_t>(1) << (8 * sizeof(size_t) - 1)),



        mkw

    );
    Py_XDECREF(((PyObject*)((owned_metaclass))));
# 7300 "yxdfb/Password.cpp"
    (void) &__Pyx_GetBuiltinName;

    return result;
}
# 7333 "yxdfb/Password.cpp"
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;

    PyObject **cython_runtime_dict;

    CYTHON_UNUSED_VAR(tstate);
    if (__builtin_expect(!!(!__pyx_mstate_global->__pyx_cython_runtime), 0)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);

    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_mstate_global->__pyx_cython_runtime);
    if (__builtin_expect(!!(cython_runtime_dict), 1)) {
        (use_cline) = (__Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_mstate_global->__pyx_n_s_cline_in_traceback));


    } else

    {
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStrNoError(__pyx_mstate_global->__pyx_cython_runtime, __pyx_mstate_global->__pyx_n_s_cline_in_traceback);
      if (use_cline_obj) {
        use_cline = PyObject_Not(use_cline_obj) ? ((PyObject*)((&_Py_FalseStruct))) : ((PyObject*)((&_Py_TrueStruct)));
        Py_DECREF(((PyObject*)((use_cline_obj))));
      } else {
        PyErr_Clear();
        use_cline = __null;
      }
    }
    if (!use_cline) {
        c_line = 0;
        (void) PyObject_SetAttr(__pyx_mstate_global->__pyx_cython_runtime, __pyx_mstate_global->__pyx_n_s_cline_in_traceback, ((PyObject*)((&_Py_FalseStruct))));
    }
    else if (use_cline == ((PyObject*)((&_Py_FalseStruct))) || (use_cline != ((PyObject*)((&_Py_TrueStruct))) && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}




static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        } else if (code_line > entries[mid].code_line) {
             start = mid + 1;
        } else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    } else {
        return mid + 1;
    }
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (__builtin_expect(!!(!code_line), 0) || __builtin_expect(!!(!__pyx_code_cache.entries), 0)) {
        return __null;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (__builtin_expect(!!(pos >= __pyx_code_cache.count), 0) || __builtin_expect(!!(__pyx_code_cache.entries[pos].code_line != code_line), 0)) {
        return __null;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(((PyObject*)((code_object))));
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (__builtin_expect(!!(!code_line), 0)) {
        return;
    }
    if (__builtin_expect(!!(!entries), 0)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
        if (__builtin_expect(!!(entries), 1)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(((PyObject*)((code_object))));
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && __builtin_expect(!!(__pyx_code_cache.entries[pos].code_line == code_line), 0)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(((PyObject*)((tmp))));
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (__builtin_expect(!!(!entries), 0)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i=__pyx_code_cache.count; i>pos; i--) {
        entries[i] = entries[i-1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(((PyObject*)((code_object))));
}




# 1 "/data/data/com.termux/files/usr/include/python3.12/frameobject.h" 1





extern "C" {






# 1 "/data/data/com.termux/files/usr/include/python3.12/cpython/frameobject.h" 1








__attribute__ ((visibility ("default"))) PyFrameObject * PyFrame_New(PyThreadState *, PyCodeObject *,
                                        PyObject *, PyObject *);





__attribute__ ((visibility ("default"))) void PyFrame_LocalsToFast(PyFrameObject *, int);
# 26 "/data/data/com.termux/files/usr/include/python3.12/cpython/frameobject.h"
__attribute__ ((visibility ("default"))) int _PyFrame_IsEntryFrame(PyFrameObject *frame);

__attribute__ ((visibility ("default"))) int PyFrame_FastToLocalsWithError(PyFrameObject *f);
__attribute__ ((visibility ("default"))) void PyFrame_FastToLocals(PyFrameObject *);
# 14 "/data/data/com.termux/files/usr/include/python3.12/frameobject.h" 2




}
# 7459 "yxdfb/Password.cpp" 2





# 1 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h" 1



extern "C" {


# 1 "/data/data/com.termux/files/usr/include/c++/v1/stdbool.h" 1 3
# 26 "/data/data/com.termux/files/usr/include/c++/v1/stdbool.h" 3



# 1 "/data/data/com.termux/files/usr/lib/clang/19/include/stdbool.h" 1 3
# 30 "/data/data/com.termux/files/usr/include/c++/v1/stdbool.h" 2 3
# 8 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h" 2
# 1 "/data/data/com.termux/files/usr/include/c++/v1/stddef.h" 1 3
# 9 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h" 2
# 1 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h" 1



extern "C" {
# 20 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
typedef struct {
    uint16_t counter;
    uint16_t index;
    uint16_t module_keys_version;
    uint16_t builtin_keys_version;
} _PyLoadGlobalCache;



typedef struct {
    uint16_t counter;
} _PyBinaryOpCache;



typedef struct {
    uint16_t counter;
} _PyUnpackSequenceCache;




typedef struct {
    uint16_t counter;
} _PyCompareOpCache;



typedef struct {
    uint16_t counter;
} _PyBinarySubscrCache;



typedef struct {
    uint16_t counter;
} _PySuperAttrCache;



typedef struct {
    uint16_t counter;
    uint16_t version[2];
    uint16_t index;
} _PyAttrCache;

typedef struct {
    uint16_t counter;
    uint16_t type_version[2];
    uint16_t keys_version[2];
    uint16_t descr[4];
} _PyLoadMethodCache;







typedef struct {
    uint16_t counter;
    uint16_t func_version[2];
} _PyCallCache;



typedef struct {
    uint16_t counter;
} _PyStoreSubscrCache;



typedef struct {
    uint16_t counter;
} _PyForIterCache;



typedef struct {
    uint16_t counter;
} _PySendCache;




struct callable_cache {
    PyObject *isinstance;
    PyObject *len;
    PyObject *list_append;
    PyObject *object__getattribute__;
};
# 136 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
typedef unsigned char _PyLocals_Kind;

static inline _PyLocals_Kind
_PyLocals_GetKind(PyObject *kinds, int i)
{
    ((PyType_HasFeature((Py_TYPE(((PyObject*)((kinds))))), ((1UL << 27)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h", 141, __PRETTY_FUNCTION__, "PyBytes_Check(kinds)"));
    ((0 <= i && i < PyBytes_GET_SIZE(((PyObject*)((kinds))))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h", 142, __PRETTY_FUNCTION__, "0 <= i && i < PyBytes_GET_SIZE(kinds)"));
    char *ptr = PyBytes_AS_STRING(((PyObject*)((kinds))));
    return (_PyLocals_Kind)(ptr[i]);
}

static inline void
_PyLocals_SetKind(PyObject *kinds, int i, _PyLocals_Kind kind)
{
    ((PyType_HasFeature((Py_TYPE(((PyObject*)((kinds))))), ((1UL << 27)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h", 150, __PRETTY_FUNCTION__, "PyBytes_Check(kinds)"));
    ((0 <= i && i < PyBytes_GET_SIZE(((PyObject*)((kinds))))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h", 151, __PRETTY_FUNCTION__, "0 <= i && i < PyBytes_GET_SIZE(kinds)"));
    char *ptr = PyBytes_AS_STRING(((PyObject*)((kinds))));
    ptr[i] = (char) kind;
}


struct _PyCodeConstructor {

    PyObject *filename;
    PyObject *name;
    PyObject *qualname;
    int flags;


    PyObject *code;
    int firstlineno;
    PyObject *linetable;


    PyObject *consts;
    PyObject *names;


    PyObject *localsplusnames;
    PyObject *localspluskinds;


    int argcount;
    int posonlyargcount;

    int kwonlyargcount;


    int stacksize;


    PyObject *exceptiontable;
};
# 199 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
__attribute__ ((visibility ("default"))) int _PyCode_Validate(struct _PyCodeConstructor *);
__attribute__ ((visibility ("default"))) PyCodeObject * _PyCode_New(struct _PyCodeConstructor *);





extern PyObject* _PyCode_GetVarnames(PyCodeObject *);
extern PyObject* _PyCode_GetCellvars(PyCodeObject *);
extern PyObject* _PyCode_GetFreevars(PyCodeObject *);
extern PyObject* _PyCode_GetCode(PyCodeObject *);


extern int _PyCode_InitAddressRange(PyCodeObject* co, PyCodeAddressRange *bounds);


extern void _PyLineTable_InitAddressRange(
    const char *linetable,
    Py_ssize_t length,
    int firstlineno,
    PyCodeAddressRange *range);


extern int _PyLineTable_NextAddressRange(PyCodeAddressRange *range);
extern int _PyLineTable_PreviousAddressRange(PyCodeAddressRange *range);



extern void _Py_Specialize_LoadSuperAttr(PyObject *global_super, PyObject *cls,
                                         _Py_CODEUNIT *instr, int load_method);
extern void _Py_Specialize_LoadAttr(PyObject *owner, _Py_CODEUNIT *instr,
                                    PyObject *name);
extern void _Py_Specialize_StoreAttr(PyObject *owner, _Py_CODEUNIT *instr,
                                     PyObject *name);
extern void _Py_Specialize_LoadGlobal(PyObject *globals, PyObject *builtins,
                                      _Py_CODEUNIT *instr, PyObject *name);
extern void _Py_Specialize_BinarySubscr(PyObject *sub, PyObject *container,
                                        _Py_CODEUNIT *instr);
extern void _Py_Specialize_StoreSubscr(PyObject *container, PyObject *sub,
                                       _Py_CODEUNIT *instr);
extern void _Py_Specialize_Call(PyObject *callable, _Py_CODEUNIT *instr,
                                int nargs, PyObject *kwnames);
extern void _Py_Specialize_BinaryOp(PyObject *lhs, PyObject *rhs, _Py_CODEUNIT *instr,
                                    int oparg, PyObject **locals);
extern void _Py_Specialize_CompareOp(PyObject *lhs, PyObject *rhs,
                                     _Py_CODEUNIT *instr, int oparg);
extern void _Py_Specialize_UnpackSequence(PyObject *seq, _Py_CODEUNIT *instr,
                                          int oparg);
extern void _Py_Specialize_ForIter(PyObject *iter, _Py_CODEUNIT *instr, int oparg);
extern void _Py_Specialize_Send(PyObject *receiver, _Py_CODEUNIT *instr);


extern void _PyStaticCode_Fini(PyCodeObject *co);

extern int _PyStaticCode_Init(PyCodeObject *co);
# 292 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
static inline void
write_u32(uint16_t *p, uint32_t val)
{
    memcpy(p, &val, sizeof(val));
}

static inline void
write_u64(uint16_t *p, uint64_t val)
{
    memcpy(p, &val, sizeof(val));
}

static inline void
write_obj(uint16_t *p, PyObject *val)
{
    memcpy(p, &val, sizeof(val));
}

static inline uint16_t
read_u16(uint16_t *p)
{
    return *p;
}

static inline uint32_t
read_u32(uint16_t *p)
{
    uint32_t val;
    memcpy(&val, p, sizeof(val));
    return val;
}

static inline uint64_t
read_u64(uint16_t *p)
{
    uint64_t val;
    memcpy(&val, p, sizeof(val));
    return val;
}

static inline PyObject *
read_obj(uint16_t *p)
{
    PyObject *val;
    memcpy(&val, p, sizeof(val));
    return val;
}



static inline unsigned char *
parse_varint(unsigned char *p, int *result) {
    int val = p[0] & 63;
    while (p[0] & 64) {
        p++;
        val = (val << 6) | (p[0] & 63);
    }
    *result = val;
    return p+1;
}

static inline int
write_varint(uint8_t *ptr, unsigned int val)
{
    int written = 1;
    while (val >= 64) {
        *ptr++ = 64 | (val & 63);
        val >>= 6;
        written++;
    }
    *ptr = (uint8_t)val;
    return written;
}

static inline int
write_signed_varint(uint8_t *ptr, int val)
{
    unsigned int uval;
    if (val < 0) {

        uval = ((0 - (unsigned int)val) << 1) | 1;
    }
    else {
        uval = (unsigned int)val << 1;
    }
    return write_varint(ptr, uval);
}

static inline int
write_location_entry_start(uint8_t *ptr, int code, int length)
{
    (((code & 15) == code) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h", 383, __PRETTY_FUNCTION__, "(code & 15) == code"));
    *ptr = 128 | (uint8_t)(code << 3) | (uint8_t)(length - 1);
    return 1;
}
# 423 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
static inline uint16_t
adaptive_counter_bits(uint16_t value, uint16_t backoff) {
    return ((value << 4)
            | (backoff & ((1 << 4) - 1)));
}

static inline uint16_t
adaptive_counter_warmup(void) {
    return adaptive_counter_bits(1,
                                 1);
}

static inline uint16_t
adaptive_counter_cooldown(void) {
    return adaptive_counter_bits(52,
                                 0);
}

static inline uint16_t
adaptive_counter_backoff(uint16_t counter) {
    uint16_t backoff = counter & ((1 << 4) - 1);
    backoff++;
    if (backoff > (16 - 4)) {
        backoff = (16 - 4);
    }
    uint16_t value = (uint16_t)(1 << backoff) - 1;
    return adaptive_counter_bits(value, backoff);
}




typedef struct _PyShimCodeDef {
    const uint8_t *code;
    int codelen;
    int stacksize;
    const char *cname;
} _PyShimCodeDef;

extern PyCodeObject *
_Py_MakeShimCode(const _PyShimCodeDef *code);

extern uint32_t _Py_next_func_version;
# 488 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_code.h"
extern int _Py_Instrument(PyCodeObject *co, PyInterpreterState *interp);

extern int _Py_GetBaseOpcode(PyCodeObject *code, int offset);



}
# 10 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h" 2






struct _frame {
    PyObject ob_base;
    PyFrameObject *f_back;
    struct _PyInterpreterFrame *f_frame;
    PyObject *f_trace;
    int f_lineno;
    char f_trace_lines;
    char f_trace_opcodes;
    char f_fast_as_locals;

    PyObject *_f_frame_data[1];
};

extern PyFrameObject* _PyFrame_New_NoTrack(PyCodeObject *code);




typedef enum _framestate {
    FRAME_CREATED = -2,
    FRAME_SUSPENDED = -1,
    FRAME_EXECUTING = 0,
    FRAME_COMPLETED = 1,
    FRAME_CLEARED = 4
} PyFrameState;



enum _frameowner {
    FRAME_OWNED_BY_THREAD = 0,
    FRAME_OWNED_BY_GENERATOR = 1,
    FRAME_OWNED_BY_FRAME_OBJECT = 2,
    FRAME_OWNED_BY_CSTACK = 3,
};

typedef struct _PyInterpreterFrame {
    PyCodeObject *f_code;
    struct _PyInterpreterFrame *previous;
    PyObject *f_funcobj;
    PyObject *f_globals;
    PyObject *f_builtins;
    PyObject *f_locals;
    PyFrameObject *frame_obj;




    _Py_CODEUNIT *prev_instr;
    int stacktop;






    uint16_t return_offset;
    char owner;

    PyObject *localsplus[1];
} _PyInterpreterFrame;




static inline PyObject **_PyFrame_Stackbase(_PyInterpreterFrame *f) {
    return f->localsplus + f->f_code->co_nlocalsplus;
}

static inline PyObject *_PyFrame_StackPeek(_PyInterpreterFrame *f) {
    ((f->stacktop > f->f_code->co_nlocalsplus) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 85, __PRETTY_FUNCTION__, "f->stacktop > f->f_code->co_nlocalsplus"));
    ((f->localsplus[f->stacktop-1] != __null) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 86, __PRETTY_FUNCTION__, "f->localsplus[f->stacktop-1] != NULL"));
    return f->localsplus[f->stacktop-1];
}

static inline PyObject *_PyFrame_StackPop(_PyInterpreterFrame *f) {
    ((f->stacktop > f->f_code->co_nlocalsplus) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 91, __PRETTY_FUNCTION__, "f->stacktop > f->f_code->co_nlocalsplus"));
    f->stacktop--;
    return f->localsplus[f->stacktop];
}

static inline void _PyFrame_StackPush(_PyInterpreterFrame *f, PyObject *value) {
    f->localsplus[f->stacktop] = value;
    f->stacktop++;
}



static inline int
_PyFrame_NumSlotsForCodeObject(PyCodeObject *code)
{


    ((code->co_framesize >= ((int)((sizeof(_PyInterpreterFrame)-1)/sizeof(PyObject *)))) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 108, __PRETTY_FUNCTION__, "code->co_framesize >= FRAME_SPECIALS_SIZE"));
    return code->co_framesize - ((int)((sizeof(_PyInterpreterFrame)-1)/sizeof(PyObject *)));
}

void _PyFrame_Copy(_PyInterpreterFrame *src, _PyInterpreterFrame *dest);





static inline void
_PyFrame_Initialize(
    _PyInterpreterFrame *frame, PyFunctionObject *func,
    PyObject *locals, PyCodeObject *code, int null_locals_from)
{
    frame->f_funcobj = (PyObject *)func;
    frame->f_code = (PyCodeObject *)_Py_NewRef(((PyObject*)((code))));
    frame->f_builtins = func->func_builtins;
    frame->f_globals = func->func_globals;
    frame->f_locals = locals;
    frame->stacktop = code->co_nlocalsplus;
    frame->frame_obj = __null;
    frame->prev_instr = ((void)0, ((_Py_CODEUNIT *)(code)->co_code_adaptive)) - 1;
    frame->return_offset = 0;
    frame->owner = FRAME_OWNED_BY_THREAD;

    for (int i = null_locals_from; i < code->co_nlocalsplus; i++) {
        frame->localsplus[i] = __null;
    }
}




static inline PyObject**
_PyFrame_GetLocalsArray(_PyInterpreterFrame *frame)
{
    return frame->localsplus;
}





static inline PyObject**
_PyFrame_GetStackPointer(_PyInterpreterFrame *frame)
{
    PyObject **sp = frame->localsplus + frame->stacktop;
    frame->stacktop = -1;
    return sp;
}

static inline void
_PyFrame_SetStackPointer(_PyInterpreterFrame *frame, PyObject **stack_pointer)
{
    frame->stacktop = (int)(stack_pointer - frame->localsplus);
}
# 174 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h"
static inline bool
_PyFrame_IsIncomplete(_PyInterpreterFrame *frame)
{
    return frame->owner != FRAME_OWNED_BY_GENERATOR &&
    frame->prev_instr < ((void)0, ((_Py_CODEUNIT *)(frame->f_code)->co_code_adaptive)) + frame->f_code->_co_firsttraceable;
}

static inline _PyInterpreterFrame *
_PyFrame_GetFirstComplete(_PyInterpreterFrame *frame)
{
    while (frame && _PyFrame_IsIncomplete(frame)) {
        frame = frame->previous;
    }
    return frame;
}

static inline _PyInterpreterFrame *
_PyThreadState_GetFrame(PyThreadState *tstate)
{
    return _PyFrame_GetFirstComplete(tstate->cframe->current_frame);
}



PyFrameObject *
_PyFrame_MakeAndSetFrameObject(_PyInterpreterFrame *frame);




static inline PyFrameObject *
_PyFrame_GetFrameObject(_PyInterpreterFrame *frame)
{

    ((!_PyFrame_IsIncomplete(frame)) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 208, __PRETTY_FUNCTION__, "!_PyFrame_IsIncomplete(frame)"));
    PyFrameObject *res = frame->frame_obj;
    if (res != __null) {
        return res;
    }
    return _PyFrame_MakeAndSetFrameObject(frame);
}
# 225 "/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h"
void
_PyFrame_ClearExceptCode(_PyInterpreterFrame * frame);

int
_PyFrame_Traverse(_PyInterpreterFrame *frame, visitproc visit, void *arg);

PyObject *
_PyFrame_GetLocals(_PyInterpreterFrame *frame, int include_hidden);

int
_PyFrame_FastToLocalsWithError(_PyInterpreterFrame *frame);

void
_PyFrame_LocalsToFast(_PyInterpreterFrame *frame, int clear);

static inline bool
_PyThreadState_HasStackSpace(PyThreadState *tstate, int size)
{
    (((tstate->datastack_top == __null && tstate->datastack_limit == __null) || (tstate->datastack_top != __null && tstate->datastack_limit != __null)) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 247, __PRETTY_FUNCTION__, "(tstate->datastack_top == NULL && tstate->datastack_limit == NULL) || (tstate->datastack_top != NULL && tstate->datastack_limit != NULL)"));




    return tstate->datastack_top != __null &&
        size < tstate->datastack_limit - tstate->datastack_top;
}

extern _PyInterpreterFrame *
_PyThreadState_PushFrame(PyThreadState *tstate, size_t size);

void _PyThreadState_PopFrame(PyThreadState *tstate, _PyInterpreterFrame *frame);




static inline _PyInterpreterFrame *
_PyFrame_PushUnchecked(PyThreadState *tstate, PyFunctionObject *func, int null_locals_from)
{
    ((void)0);
    PyCodeObject *code = (PyCodeObject *)func->func_code;
    _PyInterpreterFrame *new_frame = (_PyInterpreterFrame *)tstate->datastack_top;
    tstate->datastack_top += code->co_framesize;
    ((tstate->datastack_top < tstate->datastack_limit) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 267, __PRETTY_FUNCTION__, "tstate->datastack_top < tstate->datastack_limit"));
    _PyFrame_Initialize(new_frame, func, __null, code, null_locals_from);
    return new_frame;
}

static inline
PyGenObject *_PyFrame_GetGenerator(_PyInterpreterFrame *frame)
{
    ((frame->owner == FRAME_OWNED_BY_GENERATOR) ? (static_cast<void>(0)) : __assert2("/data/data/com.termux/files/usr/include/python3.12/internal/pycore_frame.h", 275, __PRETTY_FUNCTION__, "frame->owner == FRAME_OWNED_BY_GENERATOR"));
    size_t offset_in_gen = __builtin_offsetof(PyGenObject, gi_iframe);
    return (PyGenObject *)(((char *)frame) - offset_in_gen);
}


}
# 7465 "yxdfb/Password.cpp" 2
# 7549 "yxdfb/Password.cpp"
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
            const char *funcname, int c_line,
            int py_line, const char *filename) {
    PyCodeObject *py_code = __null;
    PyObject *py_funcname = __null;





    if (c_line) {




        py_funcname = PyUnicode_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;

    }
    else {




    }
# 7597 "yxdfb/Password.cpp"
    py_code = PyCode_NewEmpty(filename, funcname, py_line);

    Py_XDECREF(((PyObject*)((py_funcname))));
    return py_code;
bad:
    Py_XDECREF(((PyObject*)((py_funcname))));



    return __null;
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    PyThreadState *tstate = _PyThreadState_UncheckedGet();
    PyObject *ptype, *pvalue, *ptraceback;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) {


            Py_XDECREF(((PyObject*)((ptype))));
            Py_XDECREF(((PyObject*)((pvalue))));
            Py_XDECREF(((PyObject*)((ptraceback))));
            goto bad;
        }
        __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,
        py_code,
        __pyx_mstate_global->__pyx_d,
        0
    );
    if (!py_frame) goto bad;
    (py_frame)->f_lineno = (py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(((PyObject*)((py_code))));
    Py_XDECREF(((PyObject*)((py_frame))));
}



static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyInt_From_long(long value) {




    const long neg_one = (long) -1, const_zero = (long) 0;



    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyLong_FromLong((long) value);
        } else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long) value);

        } else if (sizeof(long) <= sizeof(unsigned long long)) {
            return PyLong_FromUnsignedLongLong((unsigned long long) value);

        }
    } else {
        if (sizeof(long) <= sizeof(long)) {
            return PyLong_FromLong((long) value);

        } else if (sizeof(long) <= sizeof(long long)) {
            return PyLong_FromLongLong((long long) value);

        }
    }
    {
        unsigned char *bytes = (unsigned char *)&value;







        int one = 1; int little = (int)*(unsigned char *)&one;
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
# 7716 "yxdfb/Password.cpp"
    }
}
# 7758 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) long __Pyx_PyInt_As_long(PyObject *x) {




    const long neg_one = (long) -1, const_zero = (long) 0;



    const int is_unsigned = neg_one > const_zero;
# 7781 "yxdfb/Password.cpp"
    if (__builtin_expect(!!(!PyType_HasFeature((Py_TYPE(((PyObject*)((x))))), ((1UL << 24)))), 0)) {
        long val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (long) -1;
        val = __Pyx_PyInt_As_long(tmp);
        Py_DECREF(((PyObject*)((tmp))));
        return val;
    }
    if (is_unsigned) {

        if (__builtin_expect(!!((((((PyLongObject*)x)->long_value.lv_tag & 3) & 2) != 0)), 0)) {
            goto raise_neg_overflow;
        } else if (_PyLong_IsCompact((PyLongObject*) x)) {
            { __Pyx_compact_upylong value = ((((PyLongObject*)x)->long_value.ob_digit)[0]); if (sizeof(long) < sizeof(__Pyx_compact_upylong)) { if (__builtin_expect(!!(value != (__Pyx_compact_upylong) (long) value), 0)) { __Pyx_compact_upylong zero = 0; if (0 && __builtin_expect(!!(value == (__Pyx_compact_upylong)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
        } else {
            const digit* digits = (((PyLongObject*)x)->long_value.ob_digit);
            ((((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)) > 1) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 7797, __PRETTY_FUNCTION__, "__Pyx_PyLong_DigitCount(x) > 1"));
            switch (((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3))) {
                case 2:
                    if ((8 * sizeof(long) > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { unsigned long value = (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) >= 2 * 30)) {
                            return (long) (((((long)digits[1]) << 30) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { unsigned long value = (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) >= 3 * 30)) {
                            return (long) (((((((long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { unsigned long value = (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) >= 4 * 30)) {
                            return (long) (((((((((long)digits[3]) << 30) | (long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0]));
                        }
                    }
                    break;
            }
        }






        {
            int result = PyObject_RichCompareBool(x, ((PyObject*)((&_Py_FalseStruct))), 0);
            if (__builtin_expect(!!(result < 0), 0))
                return (long) -1;
            if (__builtin_expect(!!(result == 1), 0))
                goto raise_neg_overflow;
        }

        if ((sizeof(long) <= sizeof(unsigned long))) {
            { unsigned long value = PyLong_AsUnsignedLong(x); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (1 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }

        } else if ((sizeof(long) <= sizeof(unsigned long long))) {
            { unsigned long long value = PyLong_AsUnsignedLongLong(x); if (sizeof(long) < sizeof(unsigned long long)) { if (__builtin_expect(!!(value != (unsigned long long) (long) value), 0)) { unsigned long long zero = 0; if (1 && __builtin_expect(!!(value == (unsigned long long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }

        }
    } else {

        if (_PyLong_IsCompact((PyLongObject*) x)) {
            { __Pyx_compact_pylong value = _PyLong_CompactValue((PyLongObject*) x); if (sizeof(long) < sizeof(__Pyx_compact_pylong)) { if (__builtin_expect(!!(value != (__Pyx_compact_pylong) (long) value), 0)) { __Pyx_compact_pylong zero = 0; if (0 && __builtin_expect(!!(value == (__Pyx_compact_pylong)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
        } else {
            const digit* digits = (((PyLongObject*)x)->long_value.ob_digit);
            ((((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)) > 1) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 7855, __PRETTY_FUNCTION__, "__Pyx_PyLong_DigitCount(x) > 1"));
            switch (((1 - (Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag & 3)) * ((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)))) {
                case -2:
                    if ((8 * sizeof(long) - 1 > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { long value = -(long) (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (long) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 2 * 30)) {
                            return (long) (((long)-1)*(((((long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(long) > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { unsigned long value = (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 2 * 30)) {
                            return (long) ((((((long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(long) - 1 > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { long value = -(long) (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (long) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 3 * 30)) {
                            return (long) (((long)-1)*(((((((long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { unsigned long value = (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 3 * 30)) {
                            return (long) ((((((((long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(long) - 1 > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { long value = -(long) (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (long) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 4 * 30)) {
                            return (long) (((long)-1)*(((((((((long)digits[3]) << 30) | (long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { unsigned long value = (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(long) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (long) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }
                        } else if ((8 * sizeof(long) - 1 > 4 * 30)) {
                            return (long) ((((((((((long)digits[3]) << 30) | (long)digits[2]) << 30) | (long)digits[1]) << 30) | (long)digits[0])));
                        }
                    }
                    break;
            }
        }

        if ((sizeof(long) <= sizeof(long))) {
            { long value = PyLong_AsLong(x); if (sizeof(long) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (long) value), 0)) { long zero = 0; if (1 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }

        } else if ((sizeof(long) <= sizeof(long long))) {
            { long long value = PyLong_AsLongLong(x); if (sizeof(long) < sizeof(long long)) { if (__builtin_expect(!!(value != (long long) (long) value), 0)) { long long zero = 0; if (1 && __builtin_expect(!!(value == (long long)-1 && PyErr_Occurred()), 0)) return (long) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (long) value; }

        }
    }
    {
        long val;
        int ret = -1;
# 7935 "yxdfb/Password.cpp"
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
# 8010 "yxdfb/Password.cpp"
        if (__builtin_expect(!!(ret), 0))
            return (long) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long) -1;
}


static __inline__ __attribute__ ((__unused__)) int __Pyx_PyInt_As_int(PyObject *x) {




    const int neg_one = (int) -1, const_zero = (int) 0;



    const int is_unsigned = neg_one > const_zero;
# 8048 "yxdfb/Password.cpp"
    if (__builtin_expect(!!(!PyType_HasFeature((Py_TYPE(((PyObject*)((x))))), ((1UL << 24)))), 0)) {
        int val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (int) -1;
        val = __Pyx_PyInt_As_int(tmp);
        Py_DECREF(((PyObject*)((tmp))));
        return val;
    }
    if (is_unsigned) {

        if (__builtin_expect(!!((((((PyLongObject*)x)->long_value.lv_tag & 3) & 2) != 0)), 0)) {
            goto raise_neg_overflow;
        } else if (_PyLong_IsCompact((PyLongObject*) x)) {
            { __Pyx_compact_upylong value = ((((PyLongObject*)x)->long_value.ob_digit)[0]); if (sizeof(int) < sizeof(__Pyx_compact_upylong)) { if (__builtin_expect(!!(value != (__Pyx_compact_upylong) (int) value), 0)) { __Pyx_compact_upylong zero = 0; if (0 && __builtin_expect(!!(value == (__Pyx_compact_upylong)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
        } else {
            const digit* digits = (((PyLongObject*)x)->long_value.ob_digit);
            ((((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)) > 1) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8064, __PRETTY_FUNCTION__, "__Pyx_PyLong_DigitCount(x) > 1"));
            switch (((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3))) {
                case 2:
                    if ((8 * sizeof(int) > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { unsigned long value = (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) >= 2 * 30)) {
                            return (int) (((((int)digits[1]) << 30) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { unsigned long value = (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) >= 3 * 30)) {
                            return (int) (((((((int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { unsigned long value = (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) >= 4 * 30)) {
                            return (int) (((((((((int)digits[3]) << 30) | (int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0]));
                        }
                    }
                    break;
            }
        }






        {
            int result = PyObject_RichCompareBool(x, ((PyObject*)((&_Py_FalseStruct))), 0);
            if (__builtin_expect(!!(result < 0), 0))
                return (int) -1;
            if (__builtin_expect(!!(result == 1), 0))
                goto raise_neg_overflow;
        }

        if ((sizeof(int) <= sizeof(unsigned long))) {
            { unsigned long value = PyLong_AsUnsignedLong(x); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (1 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }

        } else if ((sizeof(int) <= sizeof(unsigned long long))) {
            { unsigned long long value = PyLong_AsUnsignedLongLong(x); if (sizeof(int) < sizeof(unsigned long long)) { if (__builtin_expect(!!(value != (unsigned long long) (int) value), 0)) { unsigned long long zero = 0; if (1 && __builtin_expect(!!(value == (unsigned long long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }

        }
    } else {

        if (_PyLong_IsCompact((PyLongObject*) x)) {
            { __Pyx_compact_pylong value = _PyLong_CompactValue((PyLongObject*) x); if (sizeof(int) < sizeof(__Pyx_compact_pylong)) { if (__builtin_expect(!!(value != (__Pyx_compact_pylong) (int) value), 0)) { __Pyx_compact_pylong zero = 0; if (0 && __builtin_expect(!!(value == (__Pyx_compact_pylong)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
        } else {
            const digit* digits = (((PyLongObject*)x)->long_value.ob_digit);
            ((((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)) > 1) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8122, __PRETTY_FUNCTION__, "__Pyx_PyLong_DigitCount(x) > 1"));
            switch (((1 - (Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag & 3)) * ((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> 3)))) {
                case -2:
                    if ((8 * sizeof(int) - 1 > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { long value = -(long) (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (int) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 2 * 30)) {
                            return (int) (((int)-1)*(((((int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(int) > 1 * 30)) {
                        if ((8 * sizeof(unsigned long) > 2 * 30)) {
                            { unsigned long value = (((((unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 2 * 30)) {
                            return (int) ((((((int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(int) - 1 > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { long value = -(long) (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (int) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 3 * 30)) {
                            return (int) (((int)-1)*(((((((int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * 30)) {
                        if ((8 * sizeof(unsigned long) > 3 * 30)) {
                            { unsigned long value = (((((((unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 3 * 30)) {
                            return (int) ((((((((int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(int) - 1 > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { long value = -(long) (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (int) value), 0)) { long zero = 0; if (0 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 4 * 30)) {
                            return (int) (((int)-1)*(((((((((int)digits[3]) << 30) | (int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * 30)) {
                        if ((8 * sizeof(unsigned long) > 4 * 30)) {
                            { unsigned long value = (((((((((unsigned long)digits[3]) << 30) | (unsigned long)digits[2]) << 30) | (unsigned long)digits[1]) << 30) | (unsigned long)digits[0])); if (sizeof(int) < sizeof(unsigned long)) { if (__builtin_expect(!!(value != (unsigned long) (int) value), 0)) { unsigned long zero = 0; if (0 && __builtin_expect(!!(value == (unsigned long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }
                        } else if ((8 * sizeof(int) - 1 > 4 * 30)) {
                            return (int) ((((((((((int)digits[3]) << 30) | (int)digits[2]) << 30) | (int)digits[1]) << 30) | (int)digits[0])));
                        }
                    }
                    break;
            }
        }

        if ((sizeof(int) <= sizeof(long))) {
            { long value = PyLong_AsLong(x); if (sizeof(int) < sizeof(long)) { if (__builtin_expect(!!(value != (long) (int) value), 0)) { long zero = 0; if (1 && __builtin_expect(!!(value == (long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }

        } else if ((sizeof(int) <= sizeof(long long))) {
            { long long value = PyLong_AsLongLong(x); if (sizeof(int) < sizeof(long long)) { if (__builtin_expect(!!(value != (long long) (int) value), 0)) { long long zero = 0; if (1 && __builtin_expect(!!(value == (long long)-1 && PyErr_Occurred()), 0)) return (int) -1; if (is_unsigned && __builtin_expect(!!(value < zero), 0)) goto raise_neg_overflow; else goto raise_overflow; } } return (int) value; }

        }
    }
    {
        int val;
        int ret = -1;
# 8202 "yxdfb/Password.cpp"
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
# 8277 "yxdfb/Password.cpp"
        if (__builtin_expect(!!(ret), 0))
            return (int) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int) -1;
}



static int __Pyx_InBases(PyTypeObject *a, PyTypeObject *b) {
    while (a) {
        a = ((a)->tp_base);
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (__builtin_expect(!!(mro), 1)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(((PyObject*)((mro))));
        for (i = 0; i < n; i++) {
            if (((((PyType_HasFeature((Py_TYPE(((PyObject*)((mro))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8309, __PRETTY_FUNCTION__, "PyTuple_Check(mro)")), ((PyTupleObject*)((mro))))->ob_item[(i)]) == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (cls == a || cls == b) return 1;
    mro = cls->tp_mro;
    if (__builtin_expect(!!(mro), 1)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(((PyObject*)((mro))));
        for (i = 0; i < n; i++) {
            PyObject *base = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((mro))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8324, __PRETTY_FUNCTION__, "PyTuple_Check(mro)")), ((PyTupleObject*)((mro))))->ob_item[(i)]);
            if (base == (PyObject *)a || base == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(cls, a) || __Pyx_InBases(cls, b);
}
# 8355 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject *exc_type2) {
    if (exc_type1) {
        return __Pyx_IsAnySubtype2((PyTypeObject*)err, (PyTypeObject*)exc_type1, (PyTypeObject*)exc_type2);
    } else {
        return __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
}

static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    (((PyType_Check(((PyObject*)(((exc_type))))) && PyType_HasFeature(((PyTypeObject*)(exc_type)), ((1UL << 30))))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8365, __PRETTY_FUNCTION__, "PyExceptionClass_Check(exc_type)"));
    n = PyTuple_GET_SIZE(((PyObject*)((tuple))));

    for (i=0; i<n; i++) {
        if (exc_type == ((((PyType_HasFeature((Py_TYPE(((PyObject*)((tuple))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8369, __PRETTY_FUNCTION__, "PyTuple_Check(tuple)")), ((PyTupleObject*)((tuple))))->ob_item[(i)])) return 1;
    }

    for (i=0; i<n; i++) {
        PyObject *t = ((((PyType_HasFeature((Py_TYPE(((PyObject*)((tuple))))), ((1UL << 26)))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8373, __PRETTY_FUNCTION__, "PyTuple_Check(tuple)")), ((PyTupleObject*)((tuple))))->ob_item[(i)]);



        if (__builtin_expect(!!((PyType_Check(((PyObject*)(((t))))) && PyType_HasFeature(((PyTypeObject*)(t)), ((1UL << 30))))), 1)) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, __null, t)) return 1;
        } else {
        }
    }
    return 0;
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject* exc_type) {
    if (__builtin_expect(!!(err == exc_type), 1)) return 1;
    if (__builtin_expect(!!((PyType_Check(((PyObject*)(((err))))) && PyType_HasFeature(((PyTypeObject*)(err)), ((1UL << 30))))), 1)) {
        if (__builtin_expect(!!((PyType_Check(((PyObject*)(((exc_type))))) && PyType_HasFeature(((PyTypeObject*)(exc_type)), ((1UL << 30))))), 1)) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, __null, exc_type);
        } else if (__builtin_expect(!!(PyType_HasFeature((Py_TYPE(((PyObject*)((exc_type))))), ((1UL << 26)))), 1)) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        } else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *exc_type1, PyObject *exc_type2) {
    (((PyType_Check(((PyObject*)(((exc_type1))))) && PyType_HasFeature(((PyTypeObject*)(exc_type1)), ((1UL << 30))))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8397, __PRETTY_FUNCTION__, "PyExceptionClass_Check(exc_type1)"));
    (((PyType_Check(((PyObject*)(((exc_type2))))) && PyType_HasFeature(((PyTypeObject*)(exc_type2)), ((1UL << 30))))) ? (static_cast<void>(0)) : __assert2("yxdfb/Password.cpp", 8398, __PRETTY_FUNCTION__, "PyExceptionClass_Check(exc_type2)"));
    if (__builtin_expect(!!(err == exc_type1 || err == exc_type2), 1)) return 1;
    if (__builtin_expect(!!((PyType_Check(((PyObject*)(((err))))) && PyType_HasFeature(((PyTypeObject*)(err)), ((1UL << 30))))), 1)) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}



static unsigned long __Pyx_get_runtime_version(void) {

    return Py_Version & ~0xFFUL;
# 8431 "yxdfb/Password.cpp"
}
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer) {
    const unsigned long MAJOR_MINOR = 0xFFFF0000UL;
    if ((rt_version & MAJOR_MINOR) == (ct_version & MAJOR_MINOR))
        return 0;
    if (__builtin_expect(!!(allow_newer && (rt_version & MAJOR_MINOR) > (ct_version & MAJOR_MINOR)), 1))
        return 1;
    {
        char message[200];
        PyOS_snprintf(message, sizeof(message),
                      "compile time Python version %d.%d "
                      "of module '%.100s' "
                      "%s "
                      "runtime version %d.%d",
                       (int) (ct_version >> 24), (int) ((ct_version >> 16) & 0xFF),
                       "Password",
                       (allow_newer) ? "was newer than" : "does not match",
                       (int) (rt_version >> 24), (int) ((rt_version >> 16) & 0xFF)
       );
        return PyErr_WarnEx(__null, message, 1);
    }
}



static int __Pyx_InitString(__Pyx_StringTabEntry t, PyObject **str) {
    if (t.is_unicode | t.is_str) {
        if (t.intern) {
            *str = PyUnicode_InternFromString(t.s);
        } else if (t.encoding) {
            *str = PyUnicode_Decode(t.s, t.n - 1, t.encoding, __null);
        } else {
            *str = PyUnicode_FromStringAndSize(t.s, t.n - 1);
        }
    } else {
        *str = PyBytes_FromStringAndSize(t.s, t.n - 1);
    }
    if (!*str)
        return -1;
    if (PyObject_Hash(*str) == -1)
        return -1;
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {

        __Pyx_InitString(*t, t->p);
# 8492 "yxdfb/Password.cpp"
        ++t;
    }
    return 0;
}


static __inline__ __attribute__ ((__unused__)) Py_ssize_t __Pyx_ssize_strlen(const char *s) {
    size_t len = strlen(s);
    if (__builtin_expect(!!(len > (size_t) 9223372036854775807L), 0)) {
        PyErr_SetString(PyExc_OverflowError, "byte string is too long");
        return -1;
    }
    return (Py_ssize_t) len;
}
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (__builtin_expect(!!(len < 0), 0)) return __null;
    return PyUnicode_Decode(c_str, len, "", __null);
}
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyByteArray_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (__builtin_expect(!!(len < 0), 0)) return __null;
    return PyByteArray_FromStringAndSize(c_str, len);
}
static __inline__ __attribute__ ((__unused__)) const char* __Pyx_PyObject_AsString(PyObject* o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
# 8559 "yxdfb/Password.cpp"
static __inline__ __attribute__ ((__unused__)) const char* __Pyx_PyObject_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
# 8570 "yxdfb/Password.cpp"
    if (PyObject_TypeCheck(((PyObject*)(((o)))), (&PyByteArray_Type))) {
        *length = PyByteArray_GET_SIZE(((PyObject*)((o))));
        return PyByteArray_AS_STRING(((PyObject*)((o))));
    } else

    {
        char* result;
        int r = PyBytes_AsStringAndSize(o, &result, length);
        if (__builtin_expect(!!(r < 0), 0)) {
            return __null;
        } else {
            return result;
        }
    }
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyObject_IsTrue(PyObject* x) {
   int is_true = x == ((PyObject*)((&_Py_TrueStruct)));
   if (is_true | (x == ((PyObject*)((&_Py_FalseStruct)))) | (x == (&_Py_NoneStruct))) return is_true;
   else return PyObject_IsTrue(x);
}
static __inline__ __attribute__ ((__unused__)) int __Pyx_PyObject_IsTrueAndDecref(PyObject* x) {
    int retval;
    if (__builtin_expect(!!(!x), 0)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(((PyObject*)((x))));
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject* result, const char* type_name) {
    __Pyx_TypeName result_type_name = ((Py_TYPE(((PyObject*)((result)))))->tp_name);

    if (PyType_HasFeature((Py_TYPE(((PyObject*)((result))))), ((1UL << 24)))) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type " "%.200s" ").  "
                "The ability to return an instance of a strict subclass of int is deprecated, "
                "and may be removed in a future version of Python.",
                result_type_name)) {
                                                   ;
            Py_DECREF(((PyObject*)((result))));
            return __null;
        }
                                               ;
        return result;
    }

    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type " "%.200s" ")",
                 type_name, type_name, result_type_name);
                                           ;
    Py_DECREF(((PyObject*)((result))));
    return __null;
}
static __inline__ __attribute__ ((__unused__)) PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x) {

  PyNumberMethods *m;

  const char *name = __null;
  PyObject *res = __null;



  if (__builtin_expect(!!(PyType_HasFeature((Py_TYPE(((PyObject*)((x))))), ((1UL << 24)))), 1))

    return (Py_INCREF(((PyObject*)((x)))), x);

  m = Py_TYPE(((PyObject*)((x))))->tp_as_number;
# 8645 "yxdfb/Password.cpp"
  if (__builtin_expect(!!(m && m->nb_int), 1)) {
    name = "int";
    res = m->nb_int(x);
  }






  if (__builtin_expect(!!(res), 1)) {



    if (__builtin_expect(!!(!Py_IS_TYPE(((PyObject*)(((res)))), (&PyLong_Type))), 0)) {

        return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
    }
  }
  else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
                    "an integer is required");
  }
  return res;
}
static __inline__ __attribute__ ((__unused__)) Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
  Py_ssize_t ival;
  PyObject *x;
# 8681 "yxdfb/Password.cpp"
  if (__builtin_expect(!!(Py_IS_TYPE(((PyObject*)(((b)))), (&PyLong_Type))), 1)) {

    if (__builtin_expect(!!(_PyLong_IsCompact((PyLongObject*) b)), 1)) {
        return _PyLong_CompactValue((PyLongObject*) b);
    } else {
      const digit* digits = (((PyLongObject*)b)->long_value.ob_digit);
      const Py_ssize_t size = ((1 - (Py_ssize_t) (((PyLongObject*)b)->long_value.lv_tag & 3)) * ((Py_ssize_t) (((PyLongObject*)b)->long_value.lv_tag >> 3)));
      switch (size) {
         case 2:
           if (8 * sizeof(Py_ssize_t) > 2 * 30) {
             return (Py_ssize_t) (((((size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
         case -2:
           if (8 * sizeof(Py_ssize_t) > 2 * 30) {
             return -(Py_ssize_t) (((((size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
         case 3:
           if (8 * sizeof(Py_ssize_t) > 3 * 30) {
             return (Py_ssize_t) (((((((size_t)digits[2]) << 30) | (size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
         case -3:
           if (8 * sizeof(Py_ssize_t) > 3 * 30) {
             return -(Py_ssize_t) (((((((size_t)digits[2]) << 30) | (size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
         case 4:
           if (8 * sizeof(Py_ssize_t) > 4 * 30) {
             return (Py_ssize_t) (((((((((size_t)digits[3]) << 30) | (size_t)digits[2]) << 30) | (size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
         case -4:
           if (8 * sizeof(Py_ssize_t) > 4 * 30) {
             return -(Py_ssize_t) (((((((((size_t)digits[3]) << 30) | (size_t)digits[2]) << 30) | (size_t)digits[1]) << 30) | (size_t)digits[0]));
           }
           break;
      }
    }

    return PyLong_AsSsize_t(b);
  }
  x = PyNumber_Index(b);
  if (!x) return -1;
  ival = PyLong_AsSsize_t(x);
  Py_DECREF(((PyObject*)((x))));
  return ival;
}
static __inline__ __attribute__ ((__unused__)) Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject* o) {
  if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
    return (Py_hash_t) __Pyx_PyIndex_AsSsize_t(o);




  } else {
    Py_ssize_t ival;
    PyObject *x;
    x = PyNumber_Index(o);
    if (!x) return -1;
    ival = PyLong_AsLong(x);
    Py_DECREF(((PyObject*)((x))));
    return ival;
  }
}
static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_PyBool_FromLong(long b) {
  return b ? (Py_INCREF(((PyObject*)((((PyObject*)((&_Py_TrueStruct))))))), ((PyObject*)((&_Py_TrueStruct)))) : (Py_INCREF(((PyObject*)((((PyObject*)((&_Py_FalseStruct))))))), ((PyObject*)((&_Py_FalseStruct))));
}
static __inline__ __attribute__ ((__unused__)) PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyLong_FromSize_t(ival);
}
