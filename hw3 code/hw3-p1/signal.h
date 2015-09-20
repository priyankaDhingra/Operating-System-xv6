#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1
//hw3-p1
#define SIGSEGV 2

typedef void (*sighandler_t)(int);

//hw3-p1
//siginfo_t struct
typedef struct {
	uint addr; // Should be an address.
	uint type; // Should be a protection level.
} siginfo_t;


#endif
