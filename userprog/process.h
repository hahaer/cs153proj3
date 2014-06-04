#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"
struct proc {
  struct file *file;
  int fd;
  struct list_elem elem;
};

int process_wait (tid_t);
void process_exit (void);
int open_file (struct file *f);
struct file* find_file (int fd);
tid_t process_execute (const char *file_name);
void process_activate (void);

#endif /* userprog/process.h */
