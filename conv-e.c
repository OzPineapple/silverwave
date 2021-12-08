# 1 "conv.c"
# 1 "<command line>" 1
# 27 "/usr/include/stdio.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 33 "/usr/include/bits/libc-header-start.h"
# 1 "/usr/include/features.h" 1
# 451 "/usr/include/features.h"
# 1 "/usr/include/stdc-predef.h" 1
# 452 "/usr/include/features.h" 2
# 473 "/usr/include/features.h"
# 1 "/usr/include/sys/cdefs.h" 1
# 462 "/usr/include/sys/cdefs.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 463 "/usr/include/sys/cdefs.h" 2
# 1 "/usr/include/bits/long-double.h" 1
# 464 "/usr/include/sys/cdefs.h" 2
# 474 "/usr/include/features.h" 2
# 497 "/usr/include/features.h"
# 1 "/usr/include/gnu/stubs.h" 1
# 10 "/usr/include/gnu/stubs.h"
# 1 "/usr/include/gnu/stubs-64.h" 1
# 11 "/usr/include/gnu/stubs.h" 2
# 498 "/usr/include/features.h" 2
# 34 "/usr/include/bits/libc-header-start.h" 2
# 28 "/usr/include/stdio.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1



typedef unsigned long size_t;
typedef long ssize_t;
typedef int wchar_t;
typedef long ptrdiff_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;







typedef signed char int8_t;
typedef signed short int int16_t;
typedef signed int int32_t;

typedef signed long int int64_t;



typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

typedef unsigned long int uint64_t;
# 42 "/usr/local/lib/tcc/include/stddef.h"
void *alloca(size_t size);
# 34 "/usr/include/stdio.h" 2


# 1 "/usr/local/lib/tcc/include/stdarg.h" 1



typedef __builtin_va_list va_list;






typedef va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2

# 1 "/usr/include/bits/types.h" 1
# 27 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 28 "/usr/include/bits/types.h" 2
# 1 "/usr/include/bits/timesize.h" 1
# 29 "/usr/include/bits/types.h" 2


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/typesizes.h" 1
# 141 "/usr/include/bits/types.h" 2

# 1 "/usr/include/bits/time64.h" 1
# 142 "/usr/include/bits/types.h" 2



typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos_t.h" 1




# 1 "/usr/include/bits/types/__mbstate_t.h" 1
# 13 "/usr/include/bits/types/__mbstate_t.h"
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos64_t.h" 1
# 10 "/usr/include/bits/types/__fpos64_t.h"
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__FILE.h" 1



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/FILE.h" 1



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/struct_FILE.h" 1
# 35 "/usr/include/bits/types/struct_FILE.h"
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2
# 63 "/usr/include/stdio.h"
typedef __off_t off_t;
# 77 "/usr/include/stdio.h"
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h"
# 1 "/usr/include/bits/stdio_lim.h" 1
# 134 "/usr/include/stdio.h" 2



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) ;
# 173 "/usr/include/stdio.h"
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h"
extern char *tmpnam (char *__s)  ;




extern char *tmpnam_r (char *__s)  ;
# 204 "/usr/include/stdio.h"
extern char *tempnam (const char *__dir, const char *__pfx)
       ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h"
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h"
extern FILE *fopen (const char *restrict __filename,
		    const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
		      const char *restrict __modes,
		      FILE *restrict __stream) ;
# 279 "/usr/include/stdio.h"
extern FILE *fdopen (int __fd, const char *__modes)  ;
# 292 "/usr/include/stdio.h"
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)  ;





extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
		    int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
		       size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
		    const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
		    const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
		     const char *restrict __format, ...)
      ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
		      const char *restrict __format, __gnuc_va_list __arg)
      ;
# 379 "/usr/include/stdio.h"
extern int vdprintf (int __fd, const char *restrict __fmt,
		     __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
		   const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
		   const char *restrict __format, ...) ;





# 1 "/usr/include/bits/floatn.h" 1
# 119 "/usr/include/bits/floatn.h"
# 1 "/usr/include/bits/floatn-common.h" 1
# 24 "/usr/include/bits/floatn-common.h"
# 1 "/usr/include/bits/long-double.h" 1
# 25 "/usr/include/bits/floatn-common.h" 2
# 214 "/usr/include/bits/floatn-common.h"
typedef float _Float32;
# 251 "/usr/include/bits/floatn-common.h"
typedef double _Float64;
# 268 "/usr/include/bits/floatn-common.h"
typedef double _Float32x;
# 285 "/usr/include/bits/floatn-common.h"
typedef long double _Float64x;
# 120 "/usr/include/bits/floatn.h" 2
# 407 "/usr/include/stdio.h" 2



extern int fscanf (FILE *restrict __stream, const char *restrict __format, ...) __asm__ ("__isoc99_fscanf") ;


extern int scanf (const char *restrict __format, ...) __asm__ ("__isoc99_scanf") ;

extern int sscanf (const char *restrict __s, const char *restrict __format, ...) __asm__ ("__isoc99_sscanf") ;
# 435 "/usr/include/stdio.h"
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
		    __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
		    const char *restrict __format, __gnuc_va_list __arg)
      ;





extern int vfscanf (FILE *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vfscanf")



      ;
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vscanf")

      ;
extern int vsscanf (const char *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vsscanf")



     ;
# 489 "/usr/include/stdio.h"
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 514 "/usr/include/stdio.h"
extern int fgetc_unlocked (FILE *__stream);
# 525 "/usr/include/stdio.h"
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 541 "/usr/include/stdio.h"
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
      ;
# 581 "/usr/include/stdio.h"
extern char *gets (char *__s)  ;
# 608 "/usr/include/stdio.h"
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
		     size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
		      size_t __n, FILE *restrict __s);
# 678 "/usr/include/stdio.h"
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
			      size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
			       size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 712 "/usr/include/stdio.h"
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 736 "/usr/include/stdio.h"
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 762 "/usr/include/stdio.h"
extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream)  ;
extern int ferror_unlocked (FILE *__stream)  ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream)  ;




extern int fileno_unlocked (FILE *__stream)  ;
# 799 "/usr/include/stdio.h"
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
# 839 "/usr/include/stdio.h"
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream)  ;


extern void funlockfile (FILE *__stream) ;
# 857 "/usr/include/stdio.h"
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 2 "conv.c" 2
# 1 "/usr/include/stdlib.h" 1
# 25 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 26 "/usr/include/stdlib.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 32 "/usr/include/stdlib.h" 2







# 1 "/usr/include/bits/waitflags.h" 1
# 40 "/usr/include/stdlib.h" 2
# 1 "/usr/include/bits/waitstatus.h" 1
# 41 "/usr/include/stdlib.h" 2
# 58 "/usr/include/stdlib.h"
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void)  ;



extern double atof (const char *__nptr)
        ;

extern int atoi (const char *__nptr)
        ;

extern long int atol (const char *__nptr)
        ;



 extern long long int atoll (const char *__nptr)
        ;



extern double strtod (const char *restrict __nptr,
		      char **restrict __endptr)
      ;



extern float strtof (const char *restrict __nptr,
		     char **restrict __endptr)  ;

extern long double strtold (const char *restrict __nptr,
			    char **restrict __endptr)
      ;
# 176 "/usr/include/stdlib.h"
extern long int strtol (const char *restrict __nptr,
			char **restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *restrict __nptr,
				  char **restrict __endptr, int __base)
      ;




extern long long int strtoq (const char *restrict __nptr,
			     char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtouq (const char *restrict __nptr,
				       char **restrict __endptr, int __base)
      ;





extern long long int strtoll (const char *restrict __nptr,
			      char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *restrict __nptr,
					char **restrict __endptr, int __base)
      ;
# 385 "/usr/include/stdlib.h"
extern char *l64a (long int __n)  ;


extern long int a64l (const char *__s)
        ;




# 1 "/usr/include/sys/types.h" 1
# 33 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2

# 1 "/usr/include/bits/types/clockid_t.h" 1






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/time_t.h" 1






typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/timer_t.h" 1






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2
# 144 "/usr/include/sys/types.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 145 "/usr/include/sys/types.h" 2



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1
# 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;
# 176 "/usr/include/sys/types.h"
# 1 "/usr/include/endian.h" 1
# 24 "/usr/include/endian.h"
# 1 "/usr/include/bits/endian.h" 1
# 35 "/usr/include/bits/endian.h"
# 1 "/usr/include/bits/endianness.h" 1
# 36 "/usr/include/bits/endian.h" 2
# 25 "/usr/include/endian.h" 2
# 35 "/usr/include/endian.h"
# 1 "/usr/include/bits/byteswap.h" 1
# 33 "/usr/include/bits/byteswap.h"
static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	| (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/bits/byteswap.h"
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56)	| (((__bsx) & 0x00ff000000000000ull) >> 40)	| (((__bsx) & 0x0000ff0000000000ull) >> 24)	| (((__bsx) & 0x000000ff00000000ull) >> 8)	| (((__bsx) & 0x00000000ff000000ull) << 8)	| (((__bsx) & 0x0000000000ff0000ull) << 24)	| (((__bsx) & 0x000000000000ff00ull) << 40)	| (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2
# 1 "/usr/include/bits/uintn-identity.h" 1
# 32 "/usr/include/bits/uintn-identity.h"
static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2
# 177 "/usr/include/sys/types.h" 2


# 1 "/usr/include/sys/select.h" 1
# 30 "/usr/include/sys/select.h"
# 1 "/usr/include/bits/select.h" 1
# 31 "/usr/include/sys/select.h" 2


# 1 "/usr/include/bits/types/sigset_t.h" 1



# 1 "/usr/include/bits/types/__sigset_t.h" 1




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2



# 1 "/usr/include/bits/types/struct_timeval.h" 1







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2

# 1 "/usr/include/bits/types/struct_timespec.h" 1
# 10 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/bits/types/struct_timespec.h"
};
# 40 "/usr/include/sys/select.h" 2



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h"
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 101 "/usr/include/sys/select.h"
extern int select (int __nfds, fd_set *restrict __readfds,
		   fd_set *restrict __writefds,
		   fd_set *restrict __exceptfds,
		   struct timeval *restrict __timeout);
# 113 "/usr/include/sys/select.h"
extern int pselect (int __nfds, fd_set *restrict __readfds,
		    fd_set *restrict __writefds,
		    fd_set *restrict __exceptfds,
		    const struct timespec *restrict __timeout,
		    const __sigset_t *restrict __sigmask);
# 180 "/usr/include/sys/types.h" 2





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h"
# 1 "/usr/include/bits/pthreadtypes.h" 1
# 23 "/usr/include/bits/pthreadtypes.h"
# 1 "/usr/include/bits/thread-shared-types.h" 1
# 44 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1
# 21 "/usr/include/bits/pthreadtypes-arch.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2
# 45 "/usr/include/bits/thread-shared-types.h" 2




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_mutex.h" 1
# 22 "/usr/include/bits/struct_mutex.h"
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h"
};
# 75 "/usr/include/bits/thread-shared-types.h" 2
# 87 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_rwlock.h" 1
# 23 "/usr/include/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h"
};
# 88 "/usr/include/bits/thread-shared-types.h" 2




struct __pthread_cond_s
{
   union
  {
     unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
   union
  {
     unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int  pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2
# 394 "/usr/include/stdlib.h" 2







extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen)  ;



extern char *setstate (char *__statebuf)  ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
		     int32_t *restrict __result)  ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
      ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
			size_t __statelen,
			struct random_data *restrict __buf)
      ;

extern int setstate_r (char *restrict __statebuf,
		       struct random_data *restrict __buf)
      ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3])  ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
      ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
      ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
      ;
extern void lcong48 (unsigned short int __param[7])  ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
     unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
      ;

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer)  ;

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
      ;




extern void *malloc (size_t __size)
      ;

extern void *calloc (size_t __nmemb, size_t __size)
        ;






extern void *realloc (void *__ptr, size_t __size)
       ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)

     ;



extern void free (void *__ptr) ;


# 1 "/usr/include/alloca.h" 1
# 24 "/usr/include/alloca.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 25 "/usr/include/alloca.h" 2







extern void *alloca (size_t __size) ;
# 569 "/usr/include/stdlib.h" 2





extern void *valloc (size_t __size)
      ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
       ;
# 591 "/usr/include/stdlib.h"
extern void abort (void)  ;



extern int atexit (void (*__func) (void))  ;
# 610 "/usr/include/stdlib.h"
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
      ;





extern void exit (int __status)  ;
# 629 "/usr/include/stdlib.h"
extern void _Exit (int __status)  ;




extern char *getenv (const char *__name)   ;
# 647 "/usr/include/stdlib.h"
extern int putenv (char *__string)  ;





extern int setenv (const char *__name, const char *__value, int __replace)
      ;


extern int unsetenv (const char *__name)  ;






extern int clearenv (void) ;
# 675 "/usr/include/stdlib.h"
extern char *mktemp (char *__template)  ;
# 688 "/usr/include/stdlib.h"
extern int mkstemp (char *__template)  ;
# 710 "/usr/include/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen)  ;
# 731 "/usr/include/stdlib.h"
extern char *mkdtemp (char *__template)   ;
# 784 "/usr/include/stdlib.h"
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h"
extern char *realpath (const char *restrict __name,
		       char *restrict __resolved)  ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h"
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) ;
# 840 "/usr/include/stdlib.h"
extern int abs (int __x)   ;
extern long int labs (long int __x)   ;


 extern long long int llabs (long long int __x)
       ;






extern div_t div (int __numer, int __denom)
       ;
extern ldiv_t ldiv (long int __numer, long int __denom)
       ;


 extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
       ;
# 872 "/usr/include/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
       ;




extern char *qecvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qfcvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
       ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;

extern int qecvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;
extern int qfcvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
		   const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict  __pwcs,
			const char *restrict __s, size_t __n)
    ;

extern size_t wcstombs (char *restrict __s,
			const wchar_t *restrict __pwcs, size_t __n)

   ;






extern int rpmatch (const char *__response)   ;
# 958 "/usr/include/stdlib.h"
extern int getsubopt (char **restrict __optionp,
		      char *const *restrict __tokens,
		      char **restrict __valuep)
       ;
# 1004 "/usr/include/stdlib.h"
extern int getloadavg (double __loadavg[], int __nelem)
      ;
# 1014 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/stdlib-float.h" 1
# 1015 "/usr/include/stdlib.h" 2
# 3 "conv.c" 2
# 1 "include/wav.h" 1



typedef struct {
	char			id[4];
	unsigned int	size;
	char			format[4];
} Riff;

typedef struct {
	char			id[4];
	unsigned int	size;
	unsigned short	audiofmt;
	unsigned short	channels;
	unsigned int	samplerate;
	unsigned int	byterate;
	unsigned short	blockalign;
	unsigned short	bitspersample;
} Fmt;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} List;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} Data;

typedef struct {
	Riff	*riff;
	Fmt		*fmt;
	List	*list;
	Data	*data;
} Wav;


Wav *initWav( char * file );
void writeWav( Wav *wav, char *file );
Wav *destroyWav( Wav * wav );
void infoWav( Wav *wav );
# 4 "conv.c" 2
# 1 "include/util.h" 1






void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
# 5 "conv.c" 2

int main(int argc, char ** argv ){
	if( argc < 4 ) die("Faltan argumentos: a.wav b.wav out.wav");
	Wav* wavA = initWav( argv[1] );
	Wav* wavB = initWav( argv[2] );




	unsigned int K = (wavA->data->size >> 1) + (wavB->data->size >> 1) - 1;
	unsigned int A = wavA->data->size >> 1;
	unsigned int B = wavB->data->size >> 1;
	short		*a = (short*) wavA->data->data;
	short		*b = (short*) wavB->data->data;
	short		*c = ecalloc( K , 2 );

	for( unsigned int k = 0; k < K; k++)
		for( unsigned int n = 0; n < A; n++)
			if( k >= n && (k-n) < B )
				c[k] += a[n] * b[k-n];

	free( wavA->data->data );
	wavA->riff->size += wavB->data->size - 2;
	wavA->data->size += wavB->data->size - 2;
	wavA->data->data = (char*) c;



	writeWav( wavA, argv[3] );
	destroyWav( wavA );
	destroyWav( wavB );
}
# 1 "include/util.c"
# 1 "<command line>" 1
# 1 "include/util.c" 2

# 1 "/usr/local/lib/tcc/include/stdarg.h" 1



typedef __builtin_va_list va_list;






typedef va_list __gnuc_va_list;
# 3 "include/util.c" 2
# 1 "/usr/include/stdio.h" 1
# 27 "/usr/include/stdio.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 33 "/usr/include/bits/libc-header-start.h"
# 1 "/usr/include/features.h" 1
# 451 "/usr/include/features.h"
# 1 "/usr/include/stdc-predef.h" 1
# 452 "/usr/include/features.h" 2
# 473 "/usr/include/features.h"
# 1 "/usr/include/sys/cdefs.h" 1
# 462 "/usr/include/sys/cdefs.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 463 "/usr/include/sys/cdefs.h" 2
# 1 "/usr/include/bits/long-double.h" 1
# 464 "/usr/include/sys/cdefs.h" 2
# 474 "/usr/include/features.h" 2
# 497 "/usr/include/features.h"
# 1 "/usr/include/gnu/stubs.h" 1
# 10 "/usr/include/gnu/stubs.h"
# 1 "/usr/include/gnu/stubs-64.h" 1
# 11 "/usr/include/gnu/stubs.h" 2
# 498 "/usr/include/features.h" 2
# 34 "/usr/include/bits/libc-header-start.h" 2
# 28 "/usr/include/stdio.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1



typedef unsigned long size_t;
typedef long ssize_t;
typedef int wchar_t;
typedef long ptrdiff_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;







typedef signed char int8_t;
typedef signed short int int16_t;
typedef signed int int32_t;

typedef signed long int int64_t;



typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

typedef unsigned long int uint64_t;
# 42 "/usr/local/lib/tcc/include/stddef.h"
void *alloca(size_t size);
# 34 "/usr/include/stdio.h" 2




# 1 "/usr/include/bits/types.h" 1
# 27 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 28 "/usr/include/bits/types.h" 2
# 1 "/usr/include/bits/timesize.h" 1
# 29 "/usr/include/bits/types.h" 2


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/typesizes.h" 1
# 141 "/usr/include/bits/types.h" 2

# 1 "/usr/include/bits/time64.h" 1
# 142 "/usr/include/bits/types.h" 2



typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos_t.h" 1




# 1 "/usr/include/bits/types/__mbstate_t.h" 1
# 13 "/usr/include/bits/types/__mbstate_t.h"
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos64_t.h" 1
# 10 "/usr/include/bits/types/__fpos64_t.h"
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__FILE.h" 1



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/FILE.h" 1



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/struct_FILE.h" 1
# 35 "/usr/include/bits/types/struct_FILE.h"
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2
# 63 "/usr/include/stdio.h"
typedef __off_t off_t;
# 77 "/usr/include/stdio.h"
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h"
# 1 "/usr/include/bits/stdio_lim.h" 1
# 134 "/usr/include/stdio.h" 2



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) ;
# 173 "/usr/include/stdio.h"
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h"
extern char *tmpnam (char *__s)  ;




extern char *tmpnam_r (char *__s)  ;
# 204 "/usr/include/stdio.h"
extern char *tempnam (const char *__dir, const char *__pfx)
       ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h"
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h"
extern FILE *fopen (const char *restrict __filename,
		    const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
		      const char *restrict __modes,
		      FILE *restrict __stream) ;
# 279 "/usr/include/stdio.h"
extern FILE *fdopen (int __fd, const char *__modes)  ;
# 292 "/usr/include/stdio.h"
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)  ;





extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
		    int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
		       size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
		    const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
		    const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
		     const char *restrict __format, ...)
      ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
		      const char *restrict __format, __gnuc_va_list __arg)
      ;
# 379 "/usr/include/stdio.h"
extern int vdprintf (int __fd, const char *restrict __fmt,
		     __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
		   const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
		   const char *restrict __format, ...) ;





# 1 "/usr/include/bits/floatn.h" 1
# 119 "/usr/include/bits/floatn.h"
# 1 "/usr/include/bits/floatn-common.h" 1
# 24 "/usr/include/bits/floatn-common.h"
# 1 "/usr/include/bits/long-double.h" 1
# 25 "/usr/include/bits/floatn-common.h" 2
# 214 "/usr/include/bits/floatn-common.h"
typedef float _Float32;
# 251 "/usr/include/bits/floatn-common.h"
typedef double _Float64;
# 268 "/usr/include/bits/floatn-common.h"
typedef double _Float32x;
# 285 "/usr/include/bits/floatn-common.h"
typedef long double _Float64x;
# 120 "/usr/include/bits/floatn.h" 2
# 407 "/usr/include/stdio.h" 2



extern int fscanf (FILE *restrict __stream, const char *restrict __format, ...) __asm__ ("__isoc99_fscanf") ;


extern int scanf (const char *restrict __format, ...) __asm__ ("__isoc99_scanf") ;

extern int sscanf (const char *restrict __s, const char *restrict __format, ...) __asm__ ("__isoc99_sscanf") ;
# 435 "/usr/include/stdio.h"
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
		    __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
		    const char *restrict __format, __gnuc_va_list __arg)
      ;





extern int vfscanf (FILE *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vfscanf")



      ;
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vscanf")

      ;
extern int vsscanf (const char *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vsscanf")



     ;
# 489 "/usr/include/stdio.h"
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 514 "/usr/include/stdio.h"
extern int fgetc_unlocked (FILE *__stream);
# 525 "/usr/include/stdio.h"
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 541 "/usr/include/stdio.h"
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
      ;
# 581 "/usr/include/stdio.h"
extern char *gets (char *__s)  ;
# 608 "/usr/include/stdio.h"
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
		     size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
		      size_t __n, FILE *restrict __s);
# 678 "/usr/include/stdio.h"
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
			      size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
			       size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 712 "/usr/include/stdio.h"
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 736 "/usr/include/stdio.h"
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 762 "/usr/include/stdio.h"
extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream)  ;
extern int ferror_unlocked (FILE *__stream)  ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream)  ;




extern int fileno_unlocked (FILE *__stream)  ;
# 799 "/usr/include/stdio.h"
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
# 839 "/usr/include/stdio.h"
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream)  ;


extern void funlockfile (FILE *__stream) ;
# 857 "/usr/include/stdio.h"
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 4 "include/util.c" 2
# 1 "/usr/include/stdlib.h" 1
# 25 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 26 "/usr/include/stdlib.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 32 "/usr/include/stdlib.h" 2







# 1 "/usr/include/bits/waitflags.h" 1
# 40 "/usr/include/stdlib.h" 2
# 1 "/usr/include/bits/waitstatus.h" 1
# 41 "/usr/include/stdlib.h" 2
# 58 "/usr/include/stdlib.h"
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void)  ;



extern double atof (const char *__nptr)
        ;

extern int atoi (const char *__nptr)
        ;

extern long int atol (const char *__nptr)
        ;



 extern long long int atoll (const char *__nptr)
        ;



extern double strtod (const char *restrict __nptr,
		      char **restrict __endptr)
      ;



extern float strtof (const char *restrict __nptr,
		     char **restrict __endptr)  ;

extern long double strtold (const char *restrict __nptr,
			    char **restrict __endptr)
      ;
# 176 "/usr/include/stdlib.h"
extern long int strtol (const char *restrict __nptr,
			char **restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *restrict __nptr,
				  char **restrict __endptr, int __base)
      ;




extern long long int strtoq (const char *restrict __nptr,
			     char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtouq (const char *restrict __nptr,
				       char **restrict __endptr, int __base)
      ;





extern long long int strtoll (const char *restrict __nptr,
			      char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *restrict __nptr,
					char **restrict __endptr, int __base)
      ;
# 385 "/usr/include/stdlib.h"
extern char *l64a (long int __n)  ;


extern long int a64l (const char *__s)
        ;




# 1 "/usr/include/sys/types.h" 1
# 33 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2

# 1 "/usr/include/bits/types/clockid_t.h" 1






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/time_t.h" 1






typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/timer_t.h" 1






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2
# 144 "/usr/include/sys/types.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 145 "/usr/include/sys/types.h" 2



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1
# 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;
# 176 "/usr/include/sys/types.h"
# 1 "/usr/include/endian.h" 1
# 24 "/usr/include/endian.h"
# 1 "/usr/include/bits/endian.h" 1
# 35 "/usr/include/bits/endian.h"
# 1 "/usr/include/bits/endianness.h" 1
# 36 "/usr/include/bits/endian.h" 2
# 25 "/usr/include/endian.h" 2
# 35 "/usr/include/endian.h"
# 1 "/usr/include/bits/byteswap.h" 1
# 33 "/usr/include/bits/byteswap.h"
static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	| (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/bits/byteswap.h"
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56)	| (((__bsx) & 0x00ff000000000000ull) >> 40)	| (((__bsx) & 0x0000ff0000000000ull) >> 24)	| (((__bsx) & 0x000000ff00000000ull) >> 8)	| (((__bsx) & 0x00000000ff000000ull) << 8)	| (((__bsx) & 0x0000000000ff0000ull) << 24)	| (((__bsx) & 0x000000000000ff00ull) << 40)	| (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2
# 1 "/usr/include/bits/uintn-identity.h" 1
# 32 "/usr/include/bits/uintn-identity.h"
static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2
# 177 "/usr/include/sys/types.h" 2


# 1 "/usr/include/sys/select.h" 1
# 30 "/usr/include/sys/select.h"
# 1 "/usr/include/bits/select.h" 1
# 31 "/usr/include/sys/select.h" 2


# 1 "/usr/include/bits/types/sigset_t.h" 1



# 1 "/usr/include/bits/types/__sigset_t.h" 1




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2



# 1 "/usr/include/bits/types/struct_timeval.h" 1







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2

# 1 "/usr/include/bits/types/struct_timespec.h" 1
# 10 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/bits/types/struct_timespec.h"
};
# 40 "/usr/include/sys/select.h" 2



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h"
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 101 "/usr/include/sys/select.h"
extern int select (int __nfds, fd_set *restrict __readfds,
		   fd_set *restrict __writefds,
		   fd_set *restrict __exceptfds,
		   struct timeval *restrict __timeout);
# 113 "/usr/include/sys/select.h"
extern int pselect (int __nfds, fd_set *restrict __readfds,
		    fd_set *restrict __writefds,
		    fd_set *restrict __exceptfds,
		    const struct timespec *restrict __timeout,
		    const __sigset_t *restrict __sigmask);
# 180 "/usr/include/sys/types.h" 2





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h"
# 1 "/usr/include/bits/pthreadtypes.h" 1
# 23 "/usr/include/bits/pthreadtypes.h"
# 1 "/usr/include/bits/thread-shared-types.h" 1
# 44 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1
# 21 "/usr/include/bits/pthreadtypes-arch.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2
# 45 "/usr/include/bits/thread-shared-types.h" 2




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_mutex.h" 1
# 22 "/usr/include/bits/struct_mutex.h"
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h"
};
# 75 "/usr/include/bits/thread-shared-types.h" 2
# 87 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_rwlock.h" 1
# 23 "/usr/include/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h"
};
# 88 "/usr/include/bits/thread-shared-types.h" 2




struct __pthread_cond_s
{
   union
  {
     unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
   union
  {
     unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int  pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2
# 394 "/usr/include/stdlib.h" 2







extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen)  ;



extern char *setstate (char *__statebuf)  ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
		     int32_t *restrict __result)  ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
      ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
			size_t __statelen,
			struct random_data *restrict __buf)
      ;

extern int setstate_r (char *restrict __statebuf,
		       struct random_data *restrict __buf)
      ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3])  ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
      ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
      ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
      ;
extern void lcong48 (unsigned short int __param[7])  ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
     unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
      ;

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer)  ;

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
      ;




extern void *malloc (size_t __size)
      ;

extern void *calloc (size_t __nmemb, size_t __size)
        ;






extern void *realloc (void *__ptr, size_t __size)
       ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)

     ;



extern void free (void *__ptr) ;


# 1 "/usr/include/alloca.h" 1
# 24 "/usr/include/alloca.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 25 "/usr/include/alloca.h" 2







extern void *alloca (size_t __size) ;
# 569 "/usr/include/stdlib.h" 2





extern void *valloc (size_t __size)
      ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
       ;
# 591 "/usr/include/stdlib.h"
extern void abort (void)  ;



extern int atexit (void (*__func) (void))  ;
# 610 "/usr/include/stdlib.h"
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
      ;





extern void exit (int __status)  ;
# 629 "/usr/include/stdlib.h"
extern void _Exit (int __status)  ;




extern char *getenv (const char *__name)   ;
# 647 "/usr/include/stdlib.h"
extern int putenv (char *__string)  ;





extern int setenv (const char *__name, const char *__value, int __replace)
      ;


extern int unsetenv (const char *__name)  ;






extern int clearenv (void) ;
# 675 "/usr/include/stdlib.h"
extern char *mktemp (char *__template)  ;
# 688 "/usr/include/stdlib.h"
extern int mkstemp (char *__template)  ;
# 710 "/usr/include/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen)  ;
# 731 "/usr/include/stdlib.h"
extern char *mkdtemp (char *__template)   ;
# 784 "/usr/include/stdlib.h"
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h"
extern char *realpath (const char *restrict __name,
		       char *restrict __resolved)  ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h"
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) ;
# 840 "/usr/include/stdlib.h"
extern int abs (int __x)   ;
extern long int labs (long int __x)   ;


 extern long long int llabs (long long int __x)
       ;






extern div_t div (int __numer, int __denom)
       ;
extern ldiv_t ldiv (long int __numer, long int __denom)
       ;


 extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
       ;
# 872 "/usr/include/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
       ;




extern char *qecvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qfcvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
       ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;

extern int qecvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;
extern int qfcvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
		   const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict  __pwcs,
			const char *restrict __s, size_t __n)
    ;

extern size_t wcstombs (char *restrict __s,
			const wchar_t *restrict __pwcs, size_t __n)

   ;






extern int rpmatch (const char *__response)   ;
# 958 "/usr/include/stdlib.h"
extern int getsubopt (char **restrict __optionp,
		      char *const *restrict __tokens,
		      char **restrict __valuep)
       ;
# 1004 "/usr/include/stdlib.h"
extern int getloadavg (double __loadavg[], int __nelem)
      ;
# 1014 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/stdlib-float.h" 1
# 1015 "/usr/include/stdlib.h" 2
# 5 "include/util.c" 2
# 1 "/usr/include/string.h" 1
# 26 "/usr/include/string.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 27 "/usr/include/string.h" 2






# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 34 "/usr/include/string.h" 2
# 43 "/usr/include/string.h"
extern void *memcpy (void *restrict __dest, const void *restrict __src,
		     size_t __n)  ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
      ;





extern void *memccpy (void *restrict __dest, const void *restrict __src,
		      int __c, size_t __n)
      ;




extern void *memset (void *__s, int __c, size_t __n)  ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
       ;
# 91 "/usr/include/string.h"
extern void *memchr (const void *__s, int __c, size_t __n)
        ;
# 125 "/usr/include/string.h"
extern char *strcpy (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncpy (char *restrict __dest,
		      const char *restrict __src, size_t __n)
      ;


extern char *strcat (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncat (char *restrict __dest, const char *restrict __src,
		      size_t __n)  ;


extern int strcmp (const char *__s1, const char *__s2)
       ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
       ;


extern int strcoll (const char *__s1, const char *__s2)
       ;

extern size_t strxfrm (char *restrict __dest,
		       const char *restrict __src, size_t __n)
      ;



# 1 "/usr/include/bits/types/locale_t.h" 1
# 22 "/usr/include/bits/types/locale_t.h"
# 1 "/usr/include/bits/types/__locale_t.h" 1
# 28 "/usr/include/bits/types/__locale_t.h"
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2

typedef __locale_t locale_t;
# 157 "/usr/include/string.h" 2


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
       ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
			 locale_t __l)
     ;





extern char *strdup (const char *__s)
       ;






extern char *strndup (const char *__string, size_t __n)
       ;
# 230 "/usr/include/string.h"
extern char *strchr (const char *__s, int __c)
       ;
# 257 "/usr/include/string.h"
extern char *strrchr (const char *__s, int __c)
       ;
# 277 "/usr/include/string.h"
extern size_t strcspn (const char *__s, const char *__reject)
       ;


extern size_t strspn (const char *__s, const char *__accept)
       ;
# 307 "/usr/include/string.h"
extern char *strpbrk (const char *__s, const char *__accept)
       ;
# 334 "/usr/include/string.h"
extern char *strstr (const char *__haystack, const char *__needle)
       ;




extern char *strtok (char *restrict __s, const char *restrict __delim)
      ;



extern char *__strtok_r (char *restrict __s,
			 const char *restrict __delim,
			 char **restrict __save_ptr)
      ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
		       char **restrict __save_ptr)
      ;
# 391 "/usr/include/string.h"
extern size_t strlen (const char *__s)
       ;




extern size_t strnlen (const char *__string, size_t __maxlen)
       ;




extern char *strerror (int __errnum) ;
# 416 "/usr/include/string.h"
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("__xpg_strerror_r")


    ;
# 442 "/usr/include/string.h"
extern char *strerror_l (int __errnum, locale_t __l) ;



# 1 "/usr/include/strings.h" 1
# 23 "/usr/include/strings.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 24 "/usr/include/strings.h" 2
# 34 "/usr/include/strings.h"
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
       ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
   ;


extern void bzero (void *__s, size_t __n)  ;
# 68 "/usr/include/strings.h"
extern char *index (const char *__s, int __c)
       ;
# 96 "/usr/include/strings.h"
extern char *rindex (const char *__s, int __c)
       ;






extern int ffs (int __i)  ;





extern int ffsl (long int __l)  ;
 extern int ffsll (long long int __ll)
      ;



extern int strcasecmp (const char *__s1, const char *__s2)
       ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
       ;






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
       ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
			  size_t __n, locale_t __loc)
       ;
# 447 "/usr/include/string.h" 2



extern void explicit_bzero (void *__s, size_t __n)
    ;



extern char *strsep (char **restrict __stringp,
		     const char *restrict __delim)
      ;




extern char *strsignal (int __sig) ;
# 473 "/usr/include/string.h"
extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
      ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
      ;



extern char *__stpncpy (char *restrict __dest,
			const char *restrict __src, size_t __n)
      ;
extern char *stpncpy (char *restrict __dest,
		      const char *restrict __src, size_t __n)
      ;
# 6 "include/util.c" 2

# 1 "include/util.h" 1






void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
# 8 "include/util.c" 2

void *
ecalloc(size_t nmemb, size_t size)
{
	void *p;

	if (!(p = calloc(nmemb, size)))
		die("calloc:");
	return p;
}

void
die(const char *fmt, ...) {
	va_list ap;

	__builtin_va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
	__builtin_va_end(ap);

	if (fmt[0] && fmt[strlen(fmt)-1] == ':') {
		fputc(' ', stderr);
		perror(((void*)0));
	} else {
		fputc('\n', stderr);
	}

	exit(1);
}
# 1 "include/wav.c"
# 1 "<command line>" 1
# 27 "/usr/include/stdio.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 33 "/usr/include/bits/libc-header-start.h"
# 1 "/usr/include/features.h" 1
# 451 "/usr/include/features.h"
# 1 "/usr/include/stdc-predef.h" 1
# 452 "/usr/include/features.h" 2
# 473 "/usr/include/features.h"
# 1 "/usr/include/sys/cdefs.h" 1
# 462 "/usr/include/sys/cdefs.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 463 "/usr/include/sys/cdefs.h" 2
# 1 "/usr/include/bits/long-double.h" 1
# 464 "/usr/include/sys/cdefs.h" 2
# 474 "/usr/include/features.h" 2
# 497 "/usr/include/features.h"
# 1 "/usr/include/gnu/stubs.h" 1
# 10 "/usr/include/gnu/stubs.h"
# 1 "/usr/include/gnu/stubs-64.h" 1
# 11 "/usr/include/gnu/stubs.h" 2
# 498 "/usr/include/features.h" 2
# 34 "/usr/include/bits/libc-header-start.h" 2
# 28 "/usr/include/stdio.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1



typedef unsigned long size_t;
typedef long ssize_t;
typedef int wchar_t;
typedef long ptrdiff_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;







typedef signed char int8_t;
typedef signed short int int16_t;
typedef signed int int32_t;

typedef signed long int int64_t;



typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

typedef unsigned long int uint64_t;
# 42 "/usr/local/lib/tcc/include/stddef.h"
void *alloca(size_t size);
# 34 "/usr/include/stdio.h" 2


# 1 "/usr/local/lib/tcc/include/stdarg.h" 1



typedef __builtin_va_list va_list;






typedef va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2

# 1 "/usr/include/bits/types.h" 1
# 27 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 28 "/usr/include/bits/types.h" 2
# 1 "/usr/include/bits/timesize.h" 1
# 29 "/usr/include/bits/types.h" 2


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h"
# 1 "/usr/include/bits/typesizes.h" 1
# 141 "/usr/include/bits/types.h" 2

# 1 "/usr/include/bits/time64.h" 1
# 142 "/usr/include/bits/types.h" 2



typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos_t.h" 1




# 1 "/usr/include/bits/types/__mbstate_t.h" 1
# 13 "/usr/include/bits/types/__mbstate_t.h"
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__fpos64_t.h" 1
# 10 "/usr/include/bits/types/__fpos64_t.h"
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/__FILE.h" 1



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/FILE.h" 1



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2
# 1 "/usr/include/bits/types/struct_FILE.h" 1
# 35 "/usr/include/bits/types/struct_FILE.h"
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2
# 63 "/usr/include/stdio.h"
typedef __off_t off_t;
# 77 "/usr/include/stdio.h"
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h"
# 1 "/usr/include/bits/stdio_lim.h" 1
# 134 "/usr/include/stdio.h" 2



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) ;
# 173 "/usr/include/stdio.h"
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h"
extern char *tmpnam (char *__s)  ;




extern char *tmpnam_r (char *__s)  ;
# 204 "/usr/include/stdio.h"
extern char *tempnam (const char *__dir, const char *__pfx)
       ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h"
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h"
extern FILE *fopen (const char *restrict __filename,
		    const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
		      const char *restrict __modes,
		      FILE *restrict __stream) ;
# 279 "/usr/include/stdio.h"
extern FILE *fdopen (int __fd, const char *__modes)  ;
# 292 "/usr/include/stdio.h"
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)  ;





extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
		    int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
		       size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
		    const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
		    const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
		     __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
		     const char *restrict __format, ...)
      ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
		      const char *restrict __format, __gnuc_va_list __arg)
      ;
# 379 "/usr/include/stdio.h"
extern int vdprintf (int __fd, const char *restrict __fmt,
		     __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
		   const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
		   const char *restrict __format, ...) ;





# 1 "/usr/include/bits/floatn.h" 1
# 119 "/usr/include/bits/floatn.h"
# 1 "/usr/include/bits/floatn-common.h" 1
# 24 "/usr/include/bits/floatn-common.h"
# 1 "/usr/include/bits/long-double.h" 1
# 25 "/usr/include/bits/floatn-common.h" 2
# 214 "/usr/include/bits/floatn-common.h"
typedef float _Float32;
# 251 "/usr/include/bits/floatn-common.h"
typedef double _Float64;
# 268 "/usr/include/bits/floatn-common.h"
typedef double _Float32x;
# 285 "/usr/include/bits/floatn-common.h"
typedef long double _Float64x;
# 120 "/usr/include/bits/floatn.h" 2
# 407 "/usr/include/stdio.h" 2



extern int fscanf (FILE *restrict __stream, const char *restrict __format, ...) __asm__ ("__isoc99_fscanf") ;


extern int scanf (const char *restrict __format, ...) __asm__ ("__isoc99_scanf") ;

extern int sscanf (const char *restrict __s, const char *restrict __format, ...) __asm__ ("__isoc99_sscanf") ;
# 435 "/usr/include/stdio.h"
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
		    __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
		    const char *restrict __format, __gnuc_va_list __arg)
      ;





extern int vfscanf (FILE *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vfscanf")



      ;
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vscanf")

      ;
extern int vsscanf (const char *restrict __s, const char *restrict __format, __gnuc_va_list __arg) __asm__ ("__isoc99_vsscanf")



     ;
# 489 "/usr/include/stdio.h"
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 514 "/usr/include/stdio.h"
extern int fgetc_unlocked (FILE *__stream);
# 525 "/usr/include/stdio.h"
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 541 "/usr/include/stdio.h"
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
      ;
# 581 "/usr/include/stdio.h"
extern char *gets (char *__s)  ;
# 608 "/usr/include/stdio.h"
extern __ssize_t __getdelim (char **restrict __lineptr,
                             size_t *restrict __n, int __delimiter,
                             FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
                           size_t *restrict __n, int __delimiter,
                           FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
                          size_t *restrict __n,
                          FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
		     size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
		      size_t __n, FILE *restrict __s);
# 678 "/usr/include/stdio.h"
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
			      size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
			       size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 712 "/usr/include/stdio.h"
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 736 "/usr/include/stdio.h"
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 762 "/usr/include/stdio.h"
extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream)  ;
extern int ferror_unlocked (FILE *__stream)  ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream)  ;




extern int fileno_unlocked (FILE *__stream)  ;
# 799 "/usr/include/stdio.h"
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
# 839 "/usr/include/stdio.h"
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream)  ;


extern void funlockfile (FILE *__stream) ;
# 857 "/usr/include/stdio.h"
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 2 "include/wav.c" 2
# 1 "/usr/include/stdlib.h" 1
# 25 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 26 "/usr/include/stdlib.h" 2





# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 32 "/usr/include/stdlib.h" 2







# 1 "/usr/include/bits/waitflags.h" 1
# 40 "/usr/include/stdlib.h" 2
# 1 "/usr/include/bits/waitstatus.h" 1
# 41 "/usr/include/stdlib.h" 2
# 58 "/usr/include/stdlib.h"
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void)  ;



extern double atof (const char *__nptr)
        ;

extern int atoi (const char *__nptr)
        ;

extern long int atol (const char *__nptr)
        ;



 extern long long int atoll (const char *__nptr)
        ;



extern double strtod (const char *restrict __nptr,
		      char **restrict __endptr)
      ;



extern float strtof (const char *restrict __nptr,
		     char **restrict __endptr)  ;

extern long double strtold (const char *restrict __nptr,
			    char **restrict __endptr)
      ;
# 176 "/usr/include/stdlib.h"
extern long int strtol (const char *restrict __nptr,
			char **restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *restrict __nptr,
				  char **restrict __endptr, int __base)
      ;




extern long long int strtoq (const char *restrict __nptr,
			     char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtouq (const char *restrict __nptr,
				       char **restrict __endptr, int __base)
      ;





extern long long int strtoll (const char *restrict __nptr,
			      char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *restrict __nptr,
					char **restrict __endptr, int __base)
      ;
# 385 "/usr/include/stdlib.h"
extern char *l64a (long int __n)  ;


extern long int a64l (const char *__s)
        ;




# 1 "/usr/include/sys/types.h" 1
# 33 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2

# 1 "/usr/include/bits/types/clockid_t.h" 1






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/time_t.h" 1






typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2
# 1 "/usr/include/bits/types/timer_t.h" 1






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2
# 144 "/usr/include/sys/types.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 145 "/usr/include/sys/types.h" 2



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1
# 24 "/usr/include/bits/stdint-intn.h"
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;
# 176 "/usr/include/sys/types.h"
# 1 "/usr/include/endian.h" 1
# 24 "/usr/include/endian.h"
# 1 "/usr/include/bits/endian.h" 1
# 35 "/usr/include/bits/endian.h"
# 1 "/usr/include/bits/endianness.h" 1
# 36 "/usr/include/bits/endian.h" 2
# 25 "/usr/include/endian.h" 2
# 35 "/usr/include/endian.h"
# 1 "/usr/include/bits/byteswap.h" 1
# 33 "/usr/include/bits/byteswap.h"
static inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}






static inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	| (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}
# 69 "/usr/include/bits/byteswap.h"
 static inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56)	| (((__bsx) & 0x00ff000000000000ull) >> 40)	| (((__bsx) & 0x0000ff0000000000ull) >> 24)	| (((__bsx) & 0x000000ff00000000ull) >> 8)	| (((__bsx) & 0x00000000ff000000ull) << 8)	| (((__bsx) & 0x0000000000ff0000ull) << 24)	| (((__bsx) & 0x000000000000ff00ull) << 40)	| (((__bsx) & 0x00000000000000ffull) << 56));

}
# 36 "/usr/include/endian.h" 2
# 1 "/usr/include/bits/uintn-identity.h" 1
# 32 "/usr/include/bits/uintn-identity.h"
static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2
# 177 "/usr/include/sys/types.h" 2


# 1 "/usr/include/sys/select.h" 1
# 30 "/usr/include/sys/select.h"
# 1 "/usr/include/bits/select.h" 1
# 31 "/usr/include/sys/select.h" 2


# 1 "/usr/include/bits/types/sigset_t.h" 1



# 1 "/usr/include/bits/types/__sigset_t.h" 1




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2



# 1 "/usr/include/bits/types/struct_timeval.h" 1







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2

# 1 "/usr/include/bits/types/struct_timespec.h" 1
# 10 "/usr/include/bits/types/struct_timespec.h"
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/bits/types/struct_timespec.h"
};
# 40 "/usr/include/sys/select.h" 2



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h"
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 101 "/usr/include/sys/select.h"
extern int select (int __nfds, fd_set *restrict __readfds,
		   fd_set *restrict __writefds,
		   fd_set *restrict __exceptfds,
		   struct timeval *restrict __timeout);
# 113 "/usr/include/sys/select.h"
extern int pselect (int __nfds, fd_set *restrict __readfds,
		    fd_set *restrict __writefds,
		    fd_set *restrict __exceptfds,
		    const struct timespec *restrict __timeout,
		    const __sigset_t *restrict __sigmask);
# 180 "/usr/include/sys/types.h" 2





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h"
# 1 "/usr/include/bits/pthreadtypes.h" 1
# 23 "/usr/include/bits/pthreadtypes.h"
# 1 "/usr/include/bits/thread-shared-types.h" 1
# 44 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1
# 21 "/usr/include/bits/pthreadtypes-arch.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2
# 45 "/usr/include/bits/thread-shared-types.h" 2




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_mutex.h" 1
# 22 "/usr/include/bits/struct_mutex.h"
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h"
};
# 75 "/usr/include/bits/thread-shared-types.h" 2
# 87 "/usr/include/bits/thread-shared-types.h"
# 1 "/usr/include/bits/struct_rwlock.h" 1
# 23 "/usr/include/bits/struct_rwlock.h"
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h"
};
# 88 "/usr/include/bits/thread-shared-types.h" 2




struct __pthread_cond_s
{
   union
  {
     unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
   union
  {
     unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int  pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2
# 394 "/usr/include/stdlib.h" 2







extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen)  ;



extern char *setstate (char *__statebuf)  ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
		     int32_t *restrict __result)  ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
      ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
			size_t __statelen,
			struct random_data *restrict __buf)
      ;

extern int setstate_r (char *restrict __statebuf,
		       struct random_data *restrict __buf)
      ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3])  ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
      ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
      ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
      ;
extern void lcong48 (unsigned short int __param[7])  ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
     unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      double *restrict __result)  ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *restrict __buffer,
		      long int *restrict __result)
      ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
      ;

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer)  ;

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
      ;




extern void *malloc (size_t __size)
      ;

extern void *calloc (size_t __nmemb, size_t __size)
        ;






extern void *realloc (void *__ptr, size_t __size)
       ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)

     ;



extern void free (void *__ptr) ;


# 1 "/usr/include/alloca.h" 1
# 24 "/usr/include/alloca.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 25 "/usr/include/alloca.h" 2







extern void *alloca (size_t __size) ;
# 569 "/usr/include/stdlib.h" 2





extern void *valloc (size_t __size)
      ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
       ;
# 591 "/usr/include/stdlib.h"
extern void abort (void)  ;



extern int atexit (void (*__func) (void))  ;
# 610 "/usr/include/stdlib.h"
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
      ;





extern void exit (int __status)  ;
# 629 "/usr/include/stdlib.h"
extern void _Exit (int __status)  ;




extern char *getenv (const char *__name)   ;
# 647 "/usr/include/stdlib.h"
extern int putenv (char *__string)  ;





extern int setenv (const char *__name, const char *__value, int __replace)
      ;


extern int unsetenv (const char *__name)  ;






extern int clearenv (void) ;
# 675 "/usr/include/stdlib.h"
extern char *mktemp (char *__template)  ;
# 688 "/usr/include/stdlib.h"
extern int mkstemp (char *__template)  ;
# 710 "/usr/include/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen)  ;
# 731 "/usr/include/stdlib.h"
extern char *mkdtemp (char *__template)   ;
# 784 "/usr/include/stdlib.h"
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h"
extern char *realpath (const char *restrict __name,
		       char *restrict __resolved)  ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h"
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) ;
# 840 "/usr/include/stdlib.h"
extern int abs (int __x)   ;
extern long int labs (long int __x)   ;


 extern long long int llabs (long long int __x)
       ;






extern div_t div (int __numer, int __denom)
       ;
extern ldiv_t ldiv (long int __numer, long int __denom)
       ;


 extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
       ;
# 872 "/usr/include/stdlib.h"
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign)   ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
       ;




extern char *qecvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qfcvt (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign)
       ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
       ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
		   int *restrict __sign, char *restrict __buf,
		   size_t __len)  ;

extern int qecvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;
extern int qfcvt_r (long double __value, int __ndigit,
		    int *restrict __decpt, int *restrict __sign,
		    char *restrict __buf, size_t __len)
      ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
		   const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict  __pwcs,
			const char *restrict __s, size_t __n)
    ;

extern size_t wcstombs (char *restrict __s,
			const wchar_t *restrict __pwcs, size_t __n)

   ;






extern int rpmatch (const char *__response)   ;
# 958 "/usr/include/stdlib.h"
extern int getsubopt (char **restrict __optionp,
		      char *const *restrict __tokens,
		      char **restrict __valuep)
       ;
# 1004 "/usr/include/stdlib.h"
extern int getloadavg (double __loadavg[], int __nelem)
      ;
# 1014 "/usr/include/stdlib.h"
# 1 "/usr/include/bits/stdlib-float.h" 1
# 1015 "/usr/include/stdlib.h" 2
# 3 "include/wav.c" 2
# 1 "/usr/include/fcntl.h" 1
# 35 "/usr/include/fcntl.h"
# 1 "/usr/include/bits/fcntl.h" 1
# 35 "/usr/include/bits/fcntl.h"
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/bits/fcntl.h"
# 1 "/usr/include/bits/fcntl-linux.h" 1
# 62 "/usr/include/bits/fcntl.h" 2
# 36 "/usr/include/fcntl.h" 2
# 78 "/usr/include/fcntl.h"
# 1 "/usr/include/bits/stat.h" 1
# 25 "/usr/include/bits/stat.h"
# 1 "/usr/include/bits/struct_stat.h" 1
# 26 "/usr/include/bits/struct_stat.h"
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 71 "/usr/include/bits/struct_stat.h"
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 86 "/usr/include/bits/struct_stat.h"
    __syscall_slong_t __glibc_reserved[3];
# 95 "/usr/include/bits/struct_stat.h"
  };
# 26 "/usr/include/bits/stat.h" 2
# 79 "/usr/include/fcntl.h" 2
# 176 "/usr/include/fcntl.h"
extern int fcntl (int __fd, int __cmd, ...);
# 196 "/usr/include/fcntl.h"
extern int open (const char *__file, int __oflag, ...) ;
# 220 "/usr/include/fcntl.h"
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
# 242 "/usr/include/fcntl.h"
extern int creat (const char *__file, mode_t __mode) ;
# 271 "/usr/include/fcntl.h"
extern int lockf (int __fd, int __cmd, off_t __len);
# 288 "/usr/include/fcntl.h"
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
			  int __advise) ;
# 310 "/usr/include/fcntl.h"
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 4 "include/wav.c" 2
# 1 "/usr/include/unistd.h" 1
# 202 "/usr/include/unistd.h"
# 1 "/usr/include/bits/posix_opt.h" 1
# 203 "/usr/include/unistd.h" 2



# 1 "/usr/include/bits/environments.h" 1
# 22 "/usr/include/bits/environments.h"
# 1 "/usr/include/bits/wordsize.h" 1
# 23 "/usr/include/bits/environments.h" 2
# 207 "/usr/include/unistd.h" 2
# 226 "/usr/include/unistd.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 227 "/usr/include/unistd.h" 2
# 255 "/usr/include/unistd.h"
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h"
extern int access (const char *__name, int __type)  ;
# 304 "/usr/include/unistd.h"
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
       ;
# 334 "/usr/include/unistd.h"
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
# 353 "/usr/include/unistd.h"
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
    ;





extern ssize_t write (int __fd, const void *__buf, size_t __n)
    ;
# 378 "/usr/include/unistd.h"
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
		      __off_t __offset)
    ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
		       __off_t __offset)
    ;
# 426 "/usr/include/unistd.h"
extern int pipe (int __pipedes[2])  ;
# 441 "/usr/include/unistd.h"
extern unsigned int alarm (unsigned int __seconds) ;
# 453 "/usr/include/unistd.h"
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
# 478 "/usr/include/unistd.h"
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
       ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group)  ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
       ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
		     __gid_t __group, int __flag)
       ;



extern int chdir (const char *__path)   ;



extern int fchdir (int __fd)  ;
# 520 "/usr/include/unistd.h"
extern char *getcwd (char *__buf, size_t __size)
    ;
# 535 "/usr/include/unistd.h"
extern char *getwd (char *__buf)

    ;




extern int dup (int __fd)  ;


extern int dup2 (int __fd, int __fd2) ;
# 554 "/usr/include/unistd.h"
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
		   char *const __envp[])  ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
      ;




extern int execv (const char *__path, char *const __argv[])
      ;



extern int execle (const char *__path, const char *__arg, ...)
      ;



extern int execl (const char *__path, const char *__arg, ...)
      ;



extern int execvp (const char *__file, char *const __argv[])
      ;




extern int execlp (const char *__file, const char *__arg, ...)
      ;
# 609 "/usr/include/unistd.h"
extern int nice (int __inc)  ;




extern void _exit (int __status) ;





# 1 "/usr/include/bits/confname.h" 1
# 24 "/usr/include/bits/confname.h"
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 621 "/usr/include/unistd.h" 2


extern long int pathconf (const char *__path, int __name)
      ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len)
    ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
# 672 "/usr/include/unistd.h"
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[])
    ;
# 712 "/usr/include/unistd.h"
extern int setuid (__uid_t __uid)  ;




extern int setreuid (__uid_t __ruid, __uid_t __euid)  ;




extern int seteuid (__uid_t __uid)  ;






extern int setgid (__gid_t __gid)  ;




extern int setregid (__gid_t __rgid, __gid_t __egid)  ;




extern int setegid (__gid_t __gid)  ;
# 768 "/usr/include/unistd.h"
extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
        ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
       ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
		   const char *__to, int __flags)
       ;




extern int symlink (const char *__from, const char *__to)
       ;




extern ssize_t readlink (const char *restrict __path,
			 char *restrict __buf, size_t __len)
        ;





extern int symlinkat (const char *__from, int __tofd,
		      const char *__to)   ;


extern ssize_t readlinkat (int __fd, const char *restrict __path,
			   char *restrict __buf, size_t __len)
        ;



extern int unlink (const char *__name)  ;



extern int unlinkat (int __fd, const char *__name, int __flag)
      ;



extern int rmdir (const char *__path)  ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len)
    ;




extern int setlogin (const char *__name)  ;







# 1 "/usr/include/bits/getopt_posix.h" 1
# 27 "/usr/include/bits/getopt_posix.h"
# 1 "/usr/include/bits/getopt_core.h" 1
# 36 "/usr/include/bits/getopt_core.h"
extern char *optarg;
# 50 "/usr/include/bits/getopt_core.h"
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/bits/getopt_core.h"
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
        ;
# 28 "/usr/include/bits/getopt_posix.h" 2
# 884 "/usr/include/unistd.h" 2







extern int gethostname (char *__name, size_t __len)
    ;






extern int sethostname (const char *__name, size_t __len)
        ;



extern int sethostid (long int __id)  ;





extern int getdomainname (char *__name, size_t __len)
        ;
extern int setdomainname (const char *__name, size_t __len)
        ;




extern int vhangup (void) ;


extern int revoke (const char *__file)   ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
		   size_t __offset, unsigned int __scale)
      ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose)  ;






extern int chroot (const char *__path)   ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);
# 981 "/usr/include/unistd.h"
extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void)   ;




extern int getdtablesize (void) ;
# 1005 "/usr/include/unistd.h"
extern int truncate (const char *__file, __off_t __length)
       ;
# 1028 "/usr/include/unistd.h"
extern int ftruncate (int __fd, __off_t __length)  ;
# 1049 "/usr/include/unistd.h"
extern int brk (void *__addr)  ;





extern void *sbrk (intptr_t __delta) ;
# 1070 "/usr/include/unistd.h"
extern long int syscall (long int __sysno, ...) ;
# 1129 "/usr/include/unistd.h"
extern int fdatasync (int __fildes);
# 1138 "/usr/include/unistd.h"
extern char *crypt (const char *__key, const char *__salt)
      ;
# 1177 "/usr/include/unistd.h"
int getentropy (void *__buffer, size_t __length)
    ;
# 1187 "/usr/include/unistd.h"
# 1 "/usr/include/bits/unistd_ext.h" 1
# 1188 "/usr/include/unistd.h" 2
# 5 "include/wav.c" 2
# 1 "/usr/include/string.h" 1
# 26 "/usr/include/string.h"
# 1 "/usr/include/bits/libc-header-start.h" 1
# 27 "/usr/include/string.h" 2






# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 34 "/usr/include/string.h" 2
# 43 "/usr/include/string.h"
extern void *memcpy (void *restrict __dest, const void *restrict __src,
		     size_t __n)  ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
      ;





extern void *memccpy (void *restrict __dest, const void *restrict __src,
		      int __c, size_t __n)
      ;




extern void *memset (void *__s, int __c, size_t __n)  ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
       ;
# 91 "/usr/include/string.h"
extern void *memchr (const void *__s, int __c, size_t __n)
        ;
# 125 "/usr/include/string.h"
extern char *strcpy (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncpy (char *restrict __dest,
		      const char *restrict __src, size_t __n)
      ;


extern char *strcat (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncat (char *restrict __dest, const char *restrict __src,
		      size_t __n)  ;


extern int strcmp (const char *__s1, const char *__s2)
       ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
       ;


extern int strcoll (const char *__s1, const char *__s2)
       ;

extern size_t strxfrm (char *restrict __dest,
		       const char *restrict __src, size_t __n)
      ;



# 1 "/usr/include/bits/types/locale_t.h" 1
# 22 "/usr/include/bits/types/locale_t.h"
# 1 "/usr/include/bits/types/__locale_t.h" 1
# 28 "/usr/include/bits/types/__locale_t.h"
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/bits/types/locale_t.h" 2

typedef __locale_t locale_t;
# 157 "/usr/include/string.h" 2


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
       ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
			 locale_t __l)
     ;





extern char *strdup (const char *__s)
       ;






extern char *strndup (const char *__string, size_t __n)
       ;
# 230 "/usr/include/string.h"
extern char *strchr (const char *__s, int __c)
       ;
# 257 "/usr/include/string.h"
extern char *strrchr (const char *__s, int __c)
       ;
# 277 "/usr/include/string.h"
extern size_t strcspn (const char *__s, const char *__reject)
       ;


extern size_t strspn (const char *__s, const char *__accept)
       ;
# 307 "/usr/include/string.h"
extern char *strpbrk (const char *__s, const char *__accept)
       ;
# 334 "/usr/include/string.h"
extern char *strstr (const char *__haystack, const char *__needle)
       ;




extern char *strtok (char *restrict __s, const char *restrict __delim)
      ;



extern char *__strtok_r (char *restrict __s,
			 const char *restrict __delim,
			 char **restrict __save_ptr)
      ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
		       char **restrict __save_ptr)
      ;
# 391 "/usr/include/string.h"
extern size_t strlen (const char *__s)
       ;




extern size_t strnlen (const char *__string, size_t __maxlen)
       ;




extern char *strerror (int __errnum) ;
# 416 "/usr/include/string.h"
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("__xpg_strerror_r")


    ;
# 442 "/usr/include/string.h"
extern char *strerror_l (int __errnum, locale_t __l) ;



# 1 "/usr/include/strings.h" 1
# 23 "/usr/include/strings.h"
# 1 "/usr/local/lib/tcc/include/stddef.h" 1
# 24 "/usr/include/strings.h" 2
# 34 "/usr/include/strings.h"
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
       ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
   ;


extern void bzero (void *__s, size_t __n)  ;
# 68 "/usr/include/strings.h"
extern char *index (const char *__s, int __c)
       ;
# 96 "/usr/include/strings.h"
extern char *rindex (const char *__s, int __c)
       ;






extern int ffs (int __i)  ;





extern int ffsl (long int __l)  ;
 extern int ffsll (long long int __ll)
      ;



extern int strcasecmp (const char *__s1, const char *__s2)
       ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
       ;






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
       ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
			  size_t __n, locale_t __loc)
       ;
# 447 "/usr/include/string.h" 2



extern void explicit_bzero (void *__s, size_t __n)
    ;



extern char *strsep (char **restrict __stringp,
		     const char *restrict __delim)
      ;




extern char *strsignal (int __sig) ;
# 473 "/usr/include/string.h"
extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
      ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
      ;



extern char *__stpncpy (char *restrict __dest,
			const char *restrict __src, size_t __n)
      ;
extern char *stpncpy (char *restrict __dest,
		      const char *restrict __src, size_t __n)
      ;
# 6 "include/wav.c" 2

# 1 "include/wav.h" 1



typedef struct {
	char			id[4];
	unsigned int	size;
	char			format[4];
} Riff;

typedef struct {
	char			id[4];
	unsigned int	size;
	unsigned short	audiofmt;
	unsigned short	channels;
	unsigned int	samplerate;
	unsigned int	byterate;
	unsigned short	blockalign;
	unsigned short	bitspersample;
} Fmt;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} List;

typedef struct {
	char			id[4];
	unsigned int	size;
	char			*data;
} Data;

typedef struct {
	Riff	*riff;
	Fmt		*fmt;
	List	*list;
	Data	*data;
} Wav;


Wav *initWav( char * file );
void writeWav( Wav *wav, char *file );
Wav *destroyWav( Wav * wav );
void infoWav( Wav *wav );
# 8 "include/wav.c" 2
# 1 "include/util.h" 1






void die(const char *fmt, ...);
void *ecalloc(size_t nmemb, size_t size);
# 9 "include/wav.c" 2

Wav *initWav( char * file ){
	int fd	= open( file, 00 );
	if( fd == -1 ) die("Coud not open %s", file );
	Wav * wav = ecalloc( 1, sizeof( Wav  ) );
	wav->riff = ecalloc( 1, sizeof( Riff ) );
	wav->fmt  = ecalloc( 1, sizeof( Fmt  ) );
	wav->data = ecalloc( 1, sizeof( Data ) );
	read( fd, (char*) wav->riff, sizeof( Riff ) );
	read( fd, (char*) wav->fmt,  sizeof( Fmt  ) );
	char id[4];
	read( fd, (char*) &id, 4);
	if( !strncmp( (char*) &id, "LIST", 4) ){
		lseek( fd, -4, 1 );
		wav->list = ecalloc( 1, sizeof( List ) );
		read( fd, (char*) wav->list->id, 4 );
		read( fd, (char*) & wav->list->size, 4 );
		wav->list->data = ecalloc( wav->list->size, sizeof(char) );
		read( fd, wav->list->data, wav->list->size );
	} else lseek( fd, -4, 1 );
	read( fd, (char*) wav->data, 8);
	wav->data->data = malloc( wav->data->size );
	read( fd, (char*) wav->data->data, wav->data->size );
	read( fd, (char*) &id, 4);
	if( !strncmp( (char*) &id, "LIST", 4) ){
		lseek( fd, -4, 1 );
		wav->list = ecalloc( 1, sizeof( List ) );
		read( fd, (char*) wav->list->id, 4 );
		read( fd, (char*) & wav->list->size, 4 );
		wav->list->data = ecalloc( wav->list->size, sizeof(char) );
		read( fd, wav->list->data, wav->list->size );
	}
	close( fd );
	return wav;
}

void writeWav( Wav *wav, char *file ){
	int fd = open( file, 01 | 02000 | 0100, 0644 );
	if( fd == -1 ) die("Could not open %s", file );
	write( fd, (char*) wav->riff, sizeof(Riff) );
	write( fd, (char*) wav->fmt,  sizeof(Fmt)  );
	if( wav->list ){
		write( fd, (char*) wav->list->id, 4 );
		write( fd, (char*) & wav->list->size, 4 );
		write( fd, wav->list->data, wav->list->size );
	}
	write( fd, (char*) wav->data, 8 );
	write( fd, (char*) wav->data->data, wav->data->size );
	close( fd );
}

Wav *destroyWav( Wav * wav ){
	free( wav->riff );
	free( wav->fmt  );
	if( wav->list ){
		free( wav->list->data );
		free( wav->list );
	}
	free( wav->data->data );
	free( wav->data	);
	free( wav );
	return ((void*)0);
}

void infoWav( Wav *wav ){
	printf("%.4s\n"
			"\tSize of file: %u Bytes\n"
			"\tType: %.4s\n"
			"%.4s\n"
			"\tSize: %u Bytes\n"
			"\tAudio Format: %s\n"
			"\tNumber of Channels: %hu\n"
			"\tSample rate: %u Hz\n"
			"\tByte rate: %hu Bytes\n"
			"\tBlock aling: %hu Bytes\n"
			"\tBits per sample: %u Bits\n",
			wav->riff->id, wav->riff->size + 8,
			wav->riff->format,
			wav->fmt->id, wav->fmt->size,
			wav->fmt->audiofmt == 1 ? "PCM\0" : "Compression\0",
			wav->fmt->channels,
			wav->fmt->samplerate,
			wav->fmt->byterate,
			wav->fmt->blockalign,
			wav->fmt->bitspersample
	);
	if(wav->list) {
		printf( "%.4s\n"
				"\tSize: %u Bytes\n"
				"\t%.4s\n",
				wav->list->id,
				wav->list->size,
				wav->list->data
		);
		int pos = 4;
		char *data = wav->list->data + 4;
		int size;
		while( pos < wav->list->size ){
			printf("\t%.4s ", data );
			pos+=4;
			data+=4;
			size = * ((int*) data);
			printf("Size: %u Bytes\n", size);
			pos+=4;
			data+=4;
			printf("\t\t%.*s\n", size, data);
			pos+=size;
			data+=size;
		}
	}
	printf("%.4s\n"
		   "\tSize: %u Bytes\n"
		   "\tData:",
		   wav->data->id,
		   wav->data->size
	);
	int i = 0;
	char c = 0;
	printf("\n\t\t%08X:  ", i);
	while( i < wav->data->size ){
		printf("%02hhX ", wav->data->data[i] );
		i++;
		c++;
		if( c == 15 ) printf("  ");
		if( c == 31 ) printf("  ");
		if( c == 47 ){
			printf("\n\t\t%08X:  ", i);
			c = 0;
		}
	}
	printf("\n");
}
