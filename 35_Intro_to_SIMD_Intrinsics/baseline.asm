
baseline:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	48 83 ec 08          	sub    $0x8,%rsp
    1004:	48 8b 05 dd 2f 00 00 	mov    0x2fdd(%rip),%rax        # 3fe8 <__gmon_start__@Base>
    100b:	48 85 c0             	test   %rax,%rax
    100e:	74 02                	je     1012 <_init+0x12>
    1010:	ff d0                	call   *%rax
    1012:	48 83 c4 08          	add    $0x8,%rsp
    1016:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <_ZNSolsEf@plt-0x10>:
    1020:	ff 35 e2 2f 00 00    	push   0x2fe2(%rip)        # 4008 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	ff 25 e4 2f 00 00    	jmp    *0x2fe4(%rip)        # 4010 <_GLOBAL_OFFSET_TABLE_+0x10>
    102c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000001030 <_ZNSolsEf@plt>:
    1030:	ff 25 e2 2f 00 00    	jmp    *0x2fe2(%rip)        # 4018 <_ZNSolsEf@GLIBCXX_3.4>
    1036:	68 00 00 00 00       	push   $0x0
    103b:	e9 e0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001040 <__cxa_atexit@plt>:
    1040:	ff 25 da 2f 00 00    	jmp    *0x2fda(%rip)        # 4020 <__cxa_atexit@GLIBC_2.2.5>
    1046:	68 01 00 00 00       	push   $0x1
    104b:	e9 d0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
    1050:	ff 25 d2 2f 00 00    	jmp    *0x2fd2(%rip)        # 4028 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
    1056:	68 02 00 00 00       	push   $0x2
    105b:	e9 c0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001060 <_ZNSolsEPFRSoS_E@plt>:
    1060:	ff 25 ca 2f 00 00    	jmp    *0x2fca(%rip)        # 4030 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
    1066:	68 03 00 00 00       	push   $0x3
    106b:	e9 b0 ff ff ff       	jmp    1020 <_init+0x20>

0000000000001070 <_ZNSt8ios_base4InitC1Ev@plt>:
    1070:	ff 25 c2 2f 00 00    	jmp    *0x2fc2(%rip)        # 4038 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    1076:	68 04 00 00 00       	push   $0x4
    107b:	e9 a0 ff ff ff       	jmp    1020 <_init+0x20>

Disassembly of section .plt.got:

0000000000001080 <__cxa_finalize@plt>:
    1080:	ff 25 42 2f 00 00    	jmp    *0x2f42(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    1086:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000001090 <_start>:
    1090:	31 ed                	xor    %ebp,%ebp
    1092:	49 89 d1             	mov    %rdx,%r9
    1095:	5e                   	pop    %rsi
    1096:	48 89 e2             	mov    %rsp,%rdx
    1099:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    109d:	50                   	push   %rax
    109e:	54                   	push   %rsp
    109f:	4c 8d 05 2a 03 00 00 	lea    0x32a(%rip),%r8        # 13d0 <__libc_csu_fini>
    10a6:	48 8d 0d c3 02 00 00 	lea    0x2c3(%rip),%rcx        # 1370 <__libc_csu_init>
    10ad:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 1175 <main>
    10b4:	ff 15 26 2f 00 00    	call   *0x2f26(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    10ba:	f4                   	hlt    
    10bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010c0 <deregister_tm_clones>:
    10c0:	48 8d 3d 89 2f 00 00 	lea    0x2f89(%rip),%rdi        # 4050 <__TMC_END__>
    10c7:	48 8d 05 82 2f 00 00 	lea    0x2f82(%rip),%rax        # 4050 <__TMC_END__>
    10ce:	48 39 f8             	cmp    %rdi,%rax
    10d1:	74 15                	je     10e8 <deregister_tm_clones+0x28>
    10d3:	48 8b 05 fe 2e 00 00 	mov    0x2efe(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable@Base>
    10da:	48 85 c0             	test   %rax,%rax
    10dd:	74 09                	je     10e8 <deregister_tm_clones+0x28>
    10df:	ff e0                	jmp    *%rax
    10e1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    10e8:	c3                   	ret    
    10e9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000010f0 <register_tm_clones>:
    10f0:	48 8d 3d 59 2f 00 00 	lea    0x2f59(%rip),%rdi        # 4050 <__TMC_END__>
    10f7:	48 8d 35 52 2f 00 00 	lea    0x2f52(%rip),%rsi        # 4050 <__TMC_END__>
    10fe:	48 29 fe             	sub    %rdi,%rsi
    1101:	48 89 f0             	mov    %rsi,%rax
    1104:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1108:	48 c1 f8 03          	sar    $0x3,%rax
    110c:	48 01 c6             	add    %rax,%rsi
    110f:	48 d1 fe             	sar    %rsi
    1112:	74 14                	je     1128 <register_tm_clones+0x38>
    1114:	48 8b 05 d5 2e 00 00 	mov    0x2ed5(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    111b:	48 85 c0             	test   %rax,%rax
    111e:	74 08                	je     1128 <register_tm_clones+0x38>
    1120:	ff e0                	jmp    *%rax
    1122:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1128:	c3                   	ret    
    1129:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001130 <__do_global_dtors_aux>:
    1130:	80 3d 59 30 00 00 00 	cmpb   $0x0,0x3059(%rip)        # 4190 <completed.0>
    1137:	75 2f                	jne    1168 <__do_global_dtors_aux+0x38>
    1139:	55                   	push   %rbp
    113a:	48 83 3d 86 2e 00 00 	cmpq   $0x0,0x2e86(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    1141:	00 
    1142:	48 89 e5             	mov    %rsp,%rbp
    1145:	74 0c                	je     1153 <__do_global_dtors_aux+0x23>
    1147:	48 8b 3d fa 2e 00 00 	mov    0x2efa(%rip),%rdi        # 4048 <__dso_handle>
    114e:	e8 2d ff ff ff       	call   1080 <__cxa_finalize@plt>
    1153:	e8 68 ff ff ff       	call   10c0 <deregister_tm_clones>
    1158:	c6 05 31 30 00 00 01 	movb   $0x1,0x3031(%rip)        # 4190 <completed.0>
    115f:	5d                   	pop    %rbp
    1160:	c3                   	ret    
    1161:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1168:	c3                   	ret    
    1169:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001170 <frame_dummy>:
    1170:	e9 7b ff ff ff       	jmp    10f0 <register_tm_clones>

0000000000001175 <main>:
    1175:	55                   	push   %rbp
    1176:	48 89 e5             	mov    %rsp,%rbp
    1179:	48 83 ec 70          	sub    $0x70,%rsp
    117d:	c5 fa 10 05 8b 0e 00 	vmovss 0xe8b(%rip),%xmm0        # 2010 <_ZStL19piecewise_construct+0xc>
    1184:	00 
    1185:	c5 fa 11 45 d0       	vmovss %xmm0,-0x30(%rbp)
    118a:	c5 fa 10 05 82 0e 00 	vmovss 0xe82(%rip),%xmm0        # 2014 <_ZStL19piecewise_construct+0x10>
    1191:	00 
    1192:	c5 fa 11 45 d4       	vmovss %xmm0,-0x2c(%rbp)
    1197:	c5 fa 10 05 79 0e 00 	vmovss 0xe79(%rip),%xmm0        # 2018 <_ZStL19piecewise_construct+0x14>
    119e:	00 
    119f:	c5 fa 11 45 d8       	vmovss %xmm0,-0x28(%rbp)
    11a4:	c5 fa 10 05 70 0e 00 	vmovss 0xe70(%rip),%xmm0        # 201c <_ZStL19piecewise_construct+0x18>
    11ab:	00 
    11ac:	c5 fa 11 45 dc       	vmovss %xmm0,-0x24(%rbp)
    11b1:	c5 fa 10 05 67 0e 00 	vmovss 0xe67(%rip),%xmm0        # 2020 <_ZStL19piecewise_construct+0x1c>
    11b8:	00 
    11b9:	c5 fa 11 45 e0       	vmovss %xmm0,-0x20(%rbp)
    11be:	c5 fa 10 05 5e 0e 00 	vmovss 0xe5e(%rip),%xmm0        # 2024 <_ZStL19piecewise_construct+0x20>
    11c5:	00 
    11c6:	c5 fa 11 45 e4       	vmovss %xmm0,-0x1c(%rbp)
    11cb:	c5 fa 10 05 55 0e 00 	vmovss 0xe55(%rip),%xmm0        # 2028 <_ZStL19piecewise_construct+0x24>
    11d2:	00 
    11d3:	c5 fa 11 45 e8       	vmovss %xmm0,-0x18(%rbp)
    11d8:	c5 fa 10 05 4c 0e 00 	vmovss 0xe4c(%rip),%xmm0        # 202c <_ZStL19piecewise_construct+0x28>
    11df:	00 
    11e0:	c5 fa 11 45 ec       	vmovss %xmm0,-0x14(%rbp)
    11e5:	c5 fa 10 05 43 0e 00 	vmovss 0xe43(%rip),%xmm0        # 2030 <_ZStL19piecewise_construct+0x2c>
    11ec:	00 
    11ed:	c5 fa 11 45 b0       	vmovss %xmm0,-0x50(%rbp)
    11f2:	c5 fa 10 05 3a 0e 00 	vmovss 0xe3a(%rip),%xmm0        # 2034 <_ZStL19piecewise_construct+0x30>
    11f9:	00 
    11fa:	c5 fa 11 45 b4       	vmovss %xmm0,-0x4c(%rbp)
    11ff:	c5 fa 10 05 31 0e 00 	vmovss 0xe31(%rip),%xmm0        # 2038 <_ZStL19piecewise_construct+0x34>
    1206:	00 
    1207:	c5 fa 11 45 b8       	vmovss %xmm0,-0x48(%rbp)
    120c:	c5 fa 10 05 28 0e 00 	vmovss 0xe28(%rip),%xmm0        # 203c <_ZStL19piecewise_construct+0x38>
    1213:	00 
    1214:	c5 fa 11 45 bc       	vmovss %xmm0,-0x44(%rbp)
    1219:	c5 fa 10 05 1f 0e 00 	vmovss 0xe1f(%rip),%xmm0        # 2040 <_ZStL19piecewise_construct+0x3c>
    1220:	00 
    1221:	c5 fa 11 45 c0       	vmovss %xmm0,-0x40(%rbp)
    1226:	c5 fa 10 05 16 0e 00 	vmovss 0xe16(%rip),%xmm0        # 2044 <_ZStL19piecewise_construct+0x40>
    122d:	00 
    122e:	c5 fa 11 45 c4       	vmovss %xmm0,-0x3c(%rbp)
    1233:	c5 fa 10 05 0d 0e 00 	vmovss 0xe0d(%rip),%xmm0        # 2048 <_ZStL19piecewise_construct+0x44>
    123a:	00 
    123b:	c5 fa 11 45 c8       	vmovss %xmm0,-0x38(%rbp)
    1240:	c5 fa 10 05 04 0e 00 	vmovss 0xe04(%rip),%xmm0        # 204c <_ZStL19piecewise_construct+0x48>
    1247:	00 
    1248:	c5 fa 11 45 cc       	vmovss %xmm0,-0x34(%rbp)
    124d:	48 c7 45 90 00 00 00 	movq   $0x0,-0x70(%rbp)
    1254:	00 
    1255:	48 c7 45 98 00 00 00 	movq   $0x0,-0x68(%rbp)
    125c:	00 
    125d:	48 c7 45 a0 00 00 00 	movq   $0x0,-0x60(%rbp)
    1264:	00 
    1265:	48 c7 45 a8 00 00 00 	movq   $0x0,-0x58(%rbp)
    126c:	00 
    126d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
    1274:	83 7d fc 07          	cmpl   $0x7,-0x4(%rbp)
    1278:	7f 2b                	jg     12a5 <main+0x130>
    127a:	8b 45 fc             	mov    -0x4(%rbp),%eax
    127d:	48 98                	cltq   
    127f:	c5 fa 10 44 85 d0    	vmovss -0x30(%rbp,%rax,4),%xmm0
    1285:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1288:	48 98                	cltq   
    128a:	c5 fa 10 4c 85 b0    	vmovss -0x50(%rbp,%rax,4),%xmm1
    1290:	c5 fa 5c c1          	vsubss %xmm1,%xmm0,%xmm0
    1294:	8b 45 fc             	mov    -0x4(%rbp),%eax
    1297:	48 98                	cltq   
    1299:	c5 fa 11 44 85 90    	vmovss %xmm0,-0x70(%rbp,%rax,4)
    129f:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
    12a3:	eb cf                	jmp    1274 <main+0xff>
    12a5:	48 8d 35 59 0d 00 00 	lea    0xd59(%rip),%rsi        # 2005 <_ZStL19piecewise_construct+0x1>
    12ac:	48 8d 3d cd 2d 00 00 	lea    0x2dcd(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    12b3:	e8 98 fd ff ff       	call   1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    12b8:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
    12bf:	83 7d f8 07          	cmpl   $0x7,-0x8(%rbp)
    12c3:	7f 2e                	jg     12f3 <main+0x17e>
    12c5:	8b 45 f8             	mov    -0x8(%rbp),%eax
    12c8:	48 98                	cltq   
    12ca:	8b 44 85 90          	mov    -0x70(%rbp,%rax,4),%eax
    12ce:	c5 f9 6e c0          	vmovd  %eax,%xmm0
    12d2:	48 8d 3d a7 2d 00 00 	lea    0x2da7(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    12d9:	e8 52 fd ff ff       	call   1030 <_ZNSolsEf@plt>
    12de:	48 8d 35 29 0d 00 00 	lea    0xd29(%rip),%rsi        # 200e <_ZStL19piecewise_construct+0xa>
    12e5:	48 89 c7             	mov    %rax,%rdi
    12e8:	e8 63 fd ff ff       	call   1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    12ed:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
    12f1:	eb cc                	jmp    12bf <main+0x14a>
    12f3:	48 8b 05 d6 2c 00 00 	mov    0x2cd6(%rip),%rax        # 3fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    12fa:	48 89 c6             	mov    %rax,%rsi
    12fd:	48 8d 3d 7c 2d 00 00 	lea    0x2d7c(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    1304:	e8 57 fd ff ff       	call   1060 <_ZNSolsEPFRSoS_E@plt>
    1309:	b8 00 00 00 00       	mov    $0x0,%eax
    130e:	c9                   	leave  
    130f:	c3                   	ret    

0000000000001310 <_Z41__static_initialization_and_destruction_0ii>:
    1310:	55                   	push   %rbp
    1311:	48 89 e5             	mov    %rsp,%rbp
    1314:	48 83 ec 10          	sub    $0x10,%rsp
    1318:	89 7d fc             	mov    %edi,-0x4(%rbp)
    131b:	89 75 f8             	mov    %esi,-0x8(%rbp)
    131e:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    1322:	75 32                	jne    1356 <_Z41__static_initialization_and_destruction_0ii+0x46>
    1324:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    132b:	75 29                	jne    1356 <_Z41__static_initialization_and_destruction_0ii+0x46>
    132d:	48 8d 3d 5d 2e 00 00 	lea    0x2e5d(%rip),%rdi        # 4191 <_ZStL8__ioinit>
    1334:	e8 37 fd ff ff       	call   1070 <_ZNSt8ios_base4InitC1Ev@plt>
    1339:	48 8d 15 08 2d 00 00 	lea    0x2d08(%rip),%rdx        # 4048 <__dso_handle>
    1340:	48 8d 35 4a 2e 00 00 	lea    0x2e4a(%rip),%rsi        # 4191 <_ZStL8__ioinit>
    1347:	48 8b 05 aa 2c 00 00 	mov    0x2caa(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    134e:	48 89 c7             	mov    %rax,%rdi
    1351:	e8 ea fc ff ff       	call   1040 <__cxa_atexit@plt>
    1356:	90                   	nop
    1357:	c9                   	leave  
    1358:	c3                   	ret    

0000000000001359 <_GLOBAL__sub_I_main>:
    1359:	55                   	push   %rbp
    135a:	48 89 e5             	mov    %rsp,%rbp
    135d:	be ff ff 00 00       	mov    $0xffff,%esi
    1362:	bf 01 00 00 00       	mov    $0x1,%edi
    1367:	e8 a4 ff ff ff       	call   1310 <_Z41__static_initialization_and_destruction_0ii>
    136c:	5d                   	pop    %rbp
    136d:	c3                   	ret    
    136e:	66 90                	xchg   %ax,%ax

0000000000001370 <__libc_csu_init>:
    1370:	41 57                	push   %r15
    1372:	4c 8d 3d 47 2a 00 00 	lea    0x2a47(%rip),%r15        # 3dc0 <__frame_dummy_init_array_entry>
    1379:	41 56                	push   %r14
    137b:	49 89 d6             	mov    %rdx,%r14
    137e:	41 55                	push   %r13
    1380:	49 89 f5             	mov    %rsi,%r13
    1383:	41 54                	push   %r12
    1385:	41 89 fc             	mov    %edi,%r12d
    1388:	55                   	push   %rbp
    1389:	48 8d 2d 40 2a 00 00 	lea    0x2a40(%rip),%rbp        # 3dd0 <__do_global_dtors_aux_fini_array_entry>
    1390:	53                   	push   %rbx
    1391:	4c 29 fd             	sub    %r15,%rbp
    1394:	48 83 ec 08          	sub    $0x8,%rsp
    1398:	e8 63 fc ff ff       	call   1000 <_init>
    139d:	48 c1 fd 03          	sar    $0x3,%rbp
    13a1:	74 1b                	je     13be <__libc_csu_init+0x4e>
    13a3:	31 db                	xor    %ebx,%ebx
    13a5:	0f 1f 00             	nopl   (%rax)
    13a8:	4c 89 f2             	mov    %r14,%rdx
    13ab:	4c 89 ee             	mov    %r13,%rsi
    13ae:	44 89 e7             	mov    %r12d,%edi
    13b1:	41 ff 14 df          	call   *(%r15,%rbx,8)
    13b5:	48 83 c3 01          	add    $0x1,%rbx
    13b9:	48 39 dd             	cmp    %rbx,%rbp
    13bc:	75 ea                	jne    13a8 <__libc_csu_init+0x38>
    13be:	48 83 c4 08          	add    $0x8,%rsp
    13c2:	5b                   	pop    %rbx
    13c3:	5d                   	pop    %rbp
    13c4:	41 5c                	pop    %r12
    13c6:	41 5d                	pop    %r13
    13c8:	41 5e                	pop    %r14
    13ca:	41 5f                	pop    %r15
    13cc:	c3                   	ret    
    13cd:	0f 1f 00             	nopl   (%rax)

00000000000013d0 <__libc_csu_fini>:
    13d0:	c3                   	ret    

Disassembly of section .fini:

00000000000013d4 <_fini>:
    13d4:	48 83 ec 08          	sub    $0x8,%rsp
    13d8:	48 83 c4 08          	add    $0x8,%rsp
    13dc:	c3                   	ret    
