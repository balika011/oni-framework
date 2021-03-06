#pragma once
#include <oni/utils/types.h>

struct task_struct;
struct proc;
struct sockaddr;
struct cdev;
struct cdevsw;
struct ucred;
struct thread;
struct stat;
struct rusage;

extern int kmlock(void* address, uint64_t size);
extern int kmlockall(int how);
extern void kclose(int socket);
void kclose_t(int socket, struct thread* td);
extern int ksocket(int, int, int);
extern int kbind(int, const struct sockaddr*, size_t);
extern int klisten(int, int);
extern int kaccept(int, struct sockaddr*, size_t*);
extern int krecv(int, void*, int, int);
extern int kopen(char* path, int flags, int mode);
extern int kopen_t(char* path, int flags, int mode, struct thread* td);
extern ssize_t kwrite(int d, const void* buf, size_t nbytes);
extern int kgetdents(int fd, char* buf, int nbytes);
extern ssize_t kread(int fd, void* buf, size_t count);
extern int kfstat(int fd, struct stat* sb);
extern int kstat(char* path, struct stat* buf);
extern int kunlink(char* path);
extern int ksetuid(uid_t uid);
extern int kptrace(int req, pid_t pid, caddr_t addr, int data);
extern int kkill(int pid, int signum);

extern int kdup2(int oldd, int newd);
extern int kshutdown(int s, int how);

extern int kmkdir(char* path, int mode);
extern int krmdir(char* path);

extern off_t klseek(int fd, off_t offset, int whence);
extern caddr_t kmmap(caddr_t addr, size_t len, int prot, int flags, int fd, off_t pos);
extern int kmunmap(void *addr, size_t len);

extern int kwait4(int pid, int *status, int options, struct rusage *rusage);