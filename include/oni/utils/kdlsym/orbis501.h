#pragma once
#include <oni/config.h>

#if ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_501
/*
These are the required functions in order for the Oni Framework to operate properly
These are all offsets into the base of the kernel. They expect all standard FreeBSD 9 prototypes

The reason we do not hardcode offsets here, is due to the different platforms that are supported, and
for the platforms that do enable kernel ASLR (Address Space Layout Randomization?)
*/

#define kdlsym_addr_Xfast_syscall						    0x1c0
#define kdlsym_addr_sys_wait4							  0x35470
#define kdlsym_addr_memcmp								  0x50ac0
#define kdlsym_addr_sys_setuid							  0x54950
#define kdlsym_addr_sys_dup2							  0xbf0d0
#define kdlsym_addr_sys_close							  0xc0f30
#define kdlsym_addr_kern_close							  0xc0f40
#define kdlsym_addr_sys_fstat							  0xc14b0
#define kdlsym_addr_sys_kill							  0xd1a50
#define kdlsym_addr__sx_slock							  0xf5b20
#define kdlsym_addr__sx_sunlock							  0xf5e00
#define kdlsym_addr_kmem_alloc							  0xfcb70
#define kdlsym_addr_kmem_free							  0xfcd40
#define kdlsym_addr_kern_reboot							 0x10d280
#define kdlsym_addr_kern_readv							 0x152a10
#define kdlsym_addr_kproc_create						 0x137ce0
#define kdlsym_addr_kthread_add							 0x138250
#define kdlsym_addr_kthread_exit						 0x138530
#define kdlsym_addr_sys_mmap							 0x13d120
#define kdlsym_addr_sys_munmap							 0x13d890
#define kdlsym_addr_sys_mlock							 0x13e140
#define kdlsym_addr_sys_mlockall						 0x13e1f0
#define kdlsym_addr_sys_read							 0x1529a0
#define kdlsym_addr_sys_write							 0x152eb0
#define kdlsym_addr_trap_fatal							 0x171470
#define kdlsym_addr_sscanf								 0x1757f0
#define kdlsym_addr_strstr								 0x17dea0
#define kdlsym_addr_vmspace_alloc						 0x19ea10
#define kdlsym_addr_vmspace_free						 0x19ecb0
#define kdlsym_addr_vmspace_acquire_ref					 0x19ee80
#define kdlsym_addr__vm_map_lock_read					 0x19f030
#define kdlsym_addr__vm_map_unlock_read					 0x19f080
#define kdlsym_addr_memcpy								 0x1ea420
#define kdlsym_addr_copyin								 0x1ea600
#define kdlsym_addr_eventhandler_register				 0x1ec2f0
#define kdlsym_addr_dmem_start_app_process				 0x2468e0
#define kdlsym_addr_critical_enter						 0x28e4d0
#define kdlsym_addr_critical_exit						 0x28e4e0
#define kdlsym_addr_pmap_activate						 0x2eac40
#define kdlsym_addr_proc_rwmem							 0x30cdc0
#define kdlsym_addr_sys_ptrace							 0x30d250
#define kdlsym_addr_sys_socket							 0x318b10
#define kdlsym_addr_sys_bind							 0x319450
#define kdlsym_addr_sys_listen							 0x319690
#define kdlsym_addr_sys_accept							 0x319da0
#define kdlsym_addr_sys_sendto							 0x31a940
#define kdlsym_addr_sys_recvfrom						 0x31b090
#define kdlsym_addr_sys_shutdown						 0x31b2d0
#define kdlsym_addr_memset								 0x3201f0
#define kdlsym_addr_sys_open							 0x33b5c0
#define kdlsym_addr_kern_openat							 0x33b640
#define kdlsym_addr_sys_unlink							 0x33d000
#define kdlsym_addr_sys_lseek							 0x33d620
#define kdlsym_addr_sys_stat							 0x33dc10
#define kdlsym_addr_sys_mkdir							 0x340780
#define kdlsym_addr_sys_rmdir							 0x340b00
#define kdlsym_addr_sys_getdents						 0x340fc0
#define kdlsym_addr_exec_new_vmspace					 0x38a940
#define kdlsym_addr_icc_nvs_read						 0x395460
#define kdlsym_addr_jailed								 0x3abc10
#define kdlsym_addr__mtx_lock_flags						 0x401900
#define kdlsym_addr_mtx_lock_sleep						 0x4019a0
#define kdlsym_addr_mtx_unlock_sleep					 0x401bd0
#define kdlsym_addr_mtx_init							 0x4023b0
#define kdlsym_addr_pfind								 0x403110
#define kdlsym_addr_printf								 0x435c70
#define kdlsym_addr_snprintf							 0x435f80
#define kdlsym_addr_vsnprintf							 0x436020
#define kdlsym_addr_sceSblGetEAPInternalPartitionKey	 0x625300
#define kdlsym_addr_utilUSleep							 0x658850
#define kdlsym_addr_kern_open							 0x72ab50
#define kdlsym_addr_prison0								0x10986a0
#define kdlsym_addr_self_orbis_sysvec					0x19bbcd0
#define kdlsym_addr_kernel_map							0x1ac60e0
#define kdlsym_addr_rootvnode							0x22c19f0
#define kdlsym_addr_allproc_lock						0x2382f98
#define kdlsym_addr_allproc								0x2382ff8

// ONLY 5.01


#endif