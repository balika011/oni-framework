#pragma once

#if ONI_PLATFORM==ONI_PLATFORM_ORBIS_BSD_505
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
#define kdlsym_addr_sys_dup2							  0xbf050
#define kdlsym_addr_sys_close							  0xc0eb0
#define kdlsym_addr_sys_fstat							  0xc1430
#define kdlsym_addr_sys_kill							  0xd19d0
#define kdlsym_addr__sx_slock							  0xf5c30
#define kdlsym_addr__sx_xlock							  0xf5e10
#define kdlsym_addr__sx_sunlock							  0xf5f10
#define kdlsym_addr__sx_xunlock							  0xf5fd0
#define kdlsym_addr_kmem_alloc							  0xfcc80
#define kdlsym_addr_kmem_free							  0xfce50
#define kdlsym_addr_kern_reboot							 0x10d390
#define kdlsym_addr_kproc_create						 0x137df0
#define kdlsym_addr_kthread_add							 0x138360
#define kdlsym_addr_kthread_exit						 0x138640
#define kdlsym_addr_sys_mmap							 0x13d230
#define kdlsym_addr_sys_munmap							 0x13d9a0
#define kdlsym_addr_sys_mlock							 0x13e250
#define kdlsym_addr_sys_mlockall						 0x13e300
#define kdlsym_addr_sys_read							 0x152ab0
#define kdlsym_addr_sys_write							 0x152fc0
#define kdlsym_addr_trap_fatal							 0x171580
#define kdlsym_addr_sscanf								 0x175900
#define kdlsym_addr_strstr								 0x17dfb0
#define kdlsym_addr_vmspace_alloc						 0x19eb20
#define kdlsym_addr_vmspace_free						 0x19edc0
#define kdlsym_addr_vmspace_acquire_ref					 0x19ef90
#define kdlsym_addr__vm_map_lock_read					 0x19f140
#define kdlsym_addr__vm_map_unlock_read					 0x19f190
#define kdlsym_addr_memcpy								 0x1ea530
#define kdlsym_addr_copyin								 0x1ea710
#define kdlsym_addr_eventhandler_register				 0x1ec400
#define kdlsym_addr_dmem_start_app_process				 0x2469f0
#define kdlsym_addr_critical_enter						 0x28e7a0
#define kdlsym_addr_critical_exit						 0x28e7b0
#define kdlsym_addr_pmap_activate						 0x2eafd0
#define kdlsym_addr_proc_rwmem							 0x30d150
#define kdlsym_addr_sys_ptrace							 0x30d5e0
#define kdlsym_addr_sys_socket							 0x318ee0
#define kdlsym_addr_sys_bind							 0x319820
#define kdlsym_addr_sys_listen							 0x319a60
#define kdlsym_addr_sys_accept							 0x31a170
#define kdlsym_addr_sys_sendto							 0x31ad10
#define kdlsym_addr_sys_recvfrom						 0x31b460
#define kdlsym_addr_sys_shutdown						 0x31b6a0
#define kdlsym_addr_memset								 0x3205c0
#define kdlsym_addr_sys_open							 0x33b990
#define kdlsym_addr_sys_unlink							 0x33d3d0
#define kdlsym_addr_sys_lseek							 0x33d9f0
#define kdlsym_addr_sys_stat							 0x33dfe0
#define kdlsym_addr_sys_mkdir							 0x340b50
#define kdlsym_addr_sys_rmdir							 0x340ed0
#define kdlsym_addr_sys_getdents						 0x341390
#define kdlsym_addr_icc_nvs_read						 0x395830
#define kdlsym_addr_jailed								 0x3abfe0
#define kdlsym_addr__mtx_lock_flags						 0x401cd0
#define kdlsym_addr__mtx_lock_sleep						 0x401d70
#define kdlsym_addr__mtx_unlock_flags					 0x401fa0
#define kdlsym_addr__mtx_unlock_sleep					 0x4020a0
#define kdlsym_addr_mtx_init							 0x402780
#define kdlsym_addr_pfind								 0x4034e0
#define kdlsym_addr_printf								 0x436040
#define kdlsym_addr_snprintf							 0x436350
#define kdlsym_addr_vsnprintf							 0x4363f0
#define kdlsym_addr_sceSblGetEAPInternalPartitionKey	 0x6256E0
#define kdlsym_addr_utilUSleep							 0x658c30
#define kdlsym_addr_prison0								0x10986a0
#define kdlsym_addr_self_orbis_sysvec					0x19bbcd0
#define kdlsym_addr_kernel_map							0x1ac60e0
#define kdlsym_addr_rootvnode							0x22c1a70
#define kdlsym_addr_allproc_lock						0x2382f98
#define kdlsym_addr_allproc								0x2382ff8

#endif

