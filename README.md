# Threads POSIX

These are the source files for the programming examples in
"Programming With POSIX(r) Threads". The Makefile is pre-configured
for Digital UNIX, but includes the appropriate definitions to build on
Solaris (uncomment the Solaris lines and comment the Digital UNIX
lines).


files src:
---------
alarm.c				Simple synchronous alarm clock.

alarm_cond.c			Threaded alarm clock using condition variable.

alarm_fork.c			Alarm clock using fork asychrony

alarm_mutex.c			Threaded alarm clock using mutex

alarm_thread.c			Alarm clock using thread asynchrony

atfork.c			Demonstrate pthread_atfork()

backoff.c			Demonstrate mutex hierarchy backoff

barrier.c			Implementation of barrier package

barrier_main.c			Demonstrate use of barrier package

cancel.c			Demonstrate cancellation

cancel_async.c			Demonstrate asyncronous cancellation

cancel_cleanup.c		Demonstrate cancellation cleanup

cancel_disable.c		Demonstrate disabling cancellation

cancel_subcontract.c		Demonstrate cancellation of "subcontractors"

cond.c				Demonstrate use of condition variables

cond_attr.c			Demonstrate condition variable attributes

cond_dynamic.c			Demonstrate dynamic init of condition variable

cond_static.c			Demonstrate static init of condition variable

crew.c				A simple threaded work crew

flock.c				Demonstrate use of file locking

getlogin.c			Demonstrate reentrant user functions

hello.c				Demonstrate thread creation

inertia.c			Demonstrate "thread inertia" errors

lifecycle.c			Demonstrate "thread lifecycle"

mutex_attr.c			Demonstrate mutex attributes

mutex_dynamic.c			Demonstrate dynamic initialization of mutex

mutex_static.c			Demonstrate static initialization of mutex

once.c				Demonstrate use of pthread_once()

pipe.c				A simple threaded pipeline

putchar.c			Demonstrate thread-safe use of putchar()

rwlock.c			Implementation of read/write lock package

rwlock_main.c			Demonstrate use of read/write lock package

rwlock_try_main.c		Demonstrate use of read/write lock package

sched_attr.c			Demonstrate thread scheduling attributes

sched_thread.c			Demonstrate use of thread scheduling functions

semaphore_signal.c		Demonstrate use of semaphores with signals

semaphore_wait.c		Demonstrate use of semaphores

server.c			A simple threaded client/server program

sigev_thread.c			Demonstrate use of SIGEV_THREAD mechanism

sigwait.c			Demonstrate use of sigwait()

susp.c				Demonstrate use of pthread_kill()

thread.c			Demonstrate simple concurrent I/O

thread_attr.c			Demonstrate thread attributes

thread_error.c			Demonstrate POSIX thread error mechanism

trylock.c			Demonstrate use of pthread_mutex_trylock()

tsd_destructor.c		Demonstrate thread-specific data destructors

tsd_once.c			Demonstrate thread-specific data key creation

workq.c				Implementation of work queue package

workq_main.c			Demonstrate use of work queue package

Header files:
------------
barrier.h			Definitions for barrier package

errors.h			General headers and error macros

rwlock.h			Definitions for read/write lock package

workq.h				Definitions for work queue package

