#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include "threads/synch.h"

struct lock write_lock;

struct child {
  int pid;
  int load;
  bool wait;
  bool exit;
  int status;
  struct semaphore load_sema;
  struct semaphore exit_sema;
  struct list_elem elem;
};

struct child* add_child_process (int pid);
struct child* get_child_process (int pid);
void remove_child_process (struct child *p);
void remove_child_processes (void);

void close_file (int fd);

void syscall_init (void);

#endif /* userprog/syscall.h */
