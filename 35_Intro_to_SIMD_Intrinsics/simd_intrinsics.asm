
simd_intrinsics:     file format elf64-x86-64


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
    109f:	4c 8d 05 2a 04 00 00 	lea    0x42a(%rip),%r8        # 14d0 <__libc_csu_fini>
    10a6:	48 8d 0d c3 03 00 00 	lea    0x3c3(%rip),%rcx        # 1470 <__libc_csu_init>
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
    1175:	4c 8d 54 24 08       	lea    0x8(%rsp),%r10
    117a:	48 83 e4 e0          	and    $0xffffffffffffffe0,%rsp
    117e:	41 ff 72 f8          	push   -0x8(%r10)
    1182:	55                   	push   %rbp
    1183:	48 89 e5             	mov    %rsp,%rbp
    1186:	41 52                	push   %r10
    1188:	48 81 ec 28 01 00 00 	sub    $0x128,%rsp
    118f:	c5 fa 10 05 79 0e 00 	vmovss 0xe79(%rip),%xmm0        # 2010 <_ZStL19piecewise_construct+0xc>
    1196:	00 
    1197:	c5 fa 11 85 0c ff ff 	vmovss %xmm0,-0xf4(%rbp)
    119e:	ff 
    119f:	c5 fa 10 05 6d 0e 00 	vmovss 0xe6d(%rip),%xmm0        # 2014 <_ZStL19piecewise_construct+0x10>
    11a6:	00 
    11a7:	c5 fa 11 85 08 ff ff 	vmovss %xmm0,-0xf8(%rbp)
    11ae:	ff 
    11af:	c5 fa 10 05 61 0e 00 	vmovss 0xe61(%rip),%xmm0        # 2018 <_ZStL19piecewise_construct+0x14>
    11b6:	00 
    11b7:	c5 fa 11 85 04 ff ff 	vmovss %xmm0,-0xfc(%rbp)
    11be:	ff 
    11bf:	c5 fa 10 05 55 0e 00 	vmovss 0xe55(%rip),%xmm0        # 201c <_ZStL19piecewise_construct+0x18>
    11c6:	00 
    11c7:	c5 fa 11 85 00 ff ff 	vmovss %xmm0,-0x100(%rbp)
    11ce:	ff 
    11cf:	c5 fa 10 05 49 0e 00 	vmovss 0xe49(%rip),%xmm0        # 2020 <_ZStL19piecewise_construct+0x1c>
    11d6:	00 
    11d7:	c5 fa 11 85 fc fe ff 	vmovss %xmm0,-0x104(%rbp)
    11de:	ff 
    11df:	c5 fa 10 05 3d 0e 00 	vmovss 0xe3d(%rip),%xmm0        # 2024 <_ZStL19piecewise_construct+0x20>
    11e6:	00 
    11e7:	c5 fa 11 85 f8 fe ff 	vmovss %xmm0,-0x108(%rbp)
    11ee:	ff 
    11ef:	c5 fa 10 05 31 0e 00 	vmovss 0xe31(%rip),%xmm0        # 2028 <_ZStL19piecewise_construct+0x24>
    11f6:	00 
    11f7:	c5 fa 11 85 f4 fe ff 	vmovss %xmm0,-0x10c(%rbp)
    11fe:	ff 
    11ff:	c5 fa 10 05 25 0e 00 	vmovss 0xe25(%rip),%xmm0        # 202c <_ZStL19piecewise_construct+0x28>
    1206:	00 
    1207:	c5 fa 11 85 f0 fe ff 	vmovss %xmm0,-0x110(%rbp)
    120e:	ff 
    120f:	c5 fa 10 8d 0c ff ff 	vmovss -0xf4(%rbp),%xmm1
    1216:	ff 
    1217:	c5 fa 10 85 08 ff ff 	vmovss -0xf8(%rbp),%xmm0
    121e:	ff 
    121f:	c5 f8 14 c9          	vunpcklps %xmm1,%xmm0,%xmm1
    1223:	c5 fa 10 95 04 ff ff 	vmovss -0xfc(%rbp),%xmm2
    122a:	ff 
    122b:	c5 fa 10 85 00 ff ff 	vmovss -0x100(%rbp),%xmm0
    1232:	ff 
    1233:	c5 f8 14 c2          	vunpcklps %xmm2,%xmm0,%xmm0
    1237:	c5 f8 16 c9          	vmovlhps %xmm1,%xmm0,%xmm1
    123b:	c5 fa 10 95 fc fe ff 	vmovss -0x104(%rbp),%xmm2
    1242:	ff 
    1243:	c5 fa 10 85 f8 fe ff 	vmovss -0x108(%rbp),%xmm0
    124a:	ff 
    124b:	c5 f8 14 d2          	vunpcklps %xmm2,%xmm0,%xmm2
    124f:	c5 fa 10 9d f4 fe ff 	vmovss -0x10c(%rbp),%xmm3
    1256:	ff 
    1257:	c5 fa 10 85 f0 fe ff 	vmovss -0x110(%rbp),%xmm0
    125e:	ff 
    125f:	c5 f8 14 c3          	vunpcklps %xmm3,%xmm0,%xmm0
    1263:	c5 f8 16 c2          	vmovlhps %xmm2,%xmm0,%xmm0
    1267:	c4 e3 7d 18 c1 01    	vinsertf128 $0x1,%xmm1,%ymm0,%ymm0
    126d:	c5 fc 29 45 b0       	vmovaps %ymm0,-0x50(%rbp)
    1272:	c5 fa 10 05 b6 0d 00 	vmovss 0xdb6(%rip),%xmm0        # 2030 <_ZStL19piecewise_construct+0x2c>
    1279:	00 
    127a:	c5 fa 11 85 2c ff ff 	vmovss %xmm0,-0xd4(%rbp)
    1281:	ff 
    1282:	c5 fa 10 05 aa 0d 00 	vmovss 0xdaa(%rip),%xmm0        # 2034 <_ZStL19piecewise_construct+0x30>
    1289:	00 
    128a:	c5 fa 11 85 28 ff ff 	vmovss %xmm0,-0xd8(%rbp)
    1291:	ff 
    1292:	c5 fa 10 05 9e 0d 00 	vmovss 0xd9e(%rip),%xmm0        # 2038 <_ZStL19piecewise_construct+0x34>
    1299:	00 
    129a:	c5 fa 11 85 24 ff ff 	vmovss %xmm0,-0xdc(%rbp)
    12a1:	ff 
    12a2:	c5 fa 10 05 92 0d 00 	vmovss 0xd92(%rip),%xmm0        # 203c <_ZStL19piecewise_construct+0x38>
    12a9:	00 
    12aa:	c5 fa 11 85 20 ff ff 	vmovss %xmm0,-0xe0(%rbp)
    12b1:	ff 
    12b2:	c5 fa 10 05 86 0d 00 	vmovss 0xd86(%rip),%xmm0        # 2040 <_ZStL19piecewise_construct+0x3c>
    12b9:	00 
    12ba:	c5 fa 11 85 1c ff ff 	vmovss %xmm0,-0xe4(%rbp)
    12c1:	ff 
    12c2:	c5 fa 10 05 7a 0d 00 	vmovss 0xd7a(%rip),%xmm0        # 2044 <_ZStL19piecewise_construct+0x40>
    12c9:	00 
    12ca:	c5 fa 11 85 18 ff ff 	vmovss %xmm0,-0xe8(%rbp)
    12d1:	ff 
    12d2:	c5 fa 10 05 6e 0d 00 	vmovss 0xd6e(%rip),%xmm0        # 2048 <_ZStL19piecewise_construct+0x44>
    12d9:	00 
    12da:	c5 fa 11 85 14 ff ff 	vmovss %xmm0,-0xec(%rbp)
    12e1:	ff 
    12e2:	c5 fa 10 05 62 0d 00 	vmovss 0xd62(%rip),%xmm0        # 204c <_ZStL19piecewise_construct+0x48>
    12e9:	00 
    12ea:	c5 fa 11 85 10 ff ff 	vmovss %xmm0,-0xf0(%rbp)
    12f1:	ff 
    12f2:	c5 fa 10 8d 2c ff ff 	vmovss -0xd4(%rbp),%xmm1
    12f9:	ff 
    12fa:	c5 fa 10 85 28 ff ff 	vmovss -0xd8(%rbp),%xmm0
    1301:	ff 
    1302:	c5 f8 14 c9          	vunpcklps %xmm1,%xmm0,%xmm1
    1306:	c5 fa 10 95 24 ff ff 	vmovss -0xdc(%rbp),%xmm2
    130d:	ff 
    130e:	c5 fa 10 85 20 ff ff 	vmovss -0xe0(%rbp),%xmm0
    1315:	ff 
    1316:	c5 f8 14 c2          	vunpcklps %xmm2,%xmm0,%xmm0
    131a:	c5 f8 16 c9          	vmovlhps %xmm1,%xmm0,%xmm1
    131e:	c5 fa 10 95 1c ff ff 	vmovss -0xe4(%rbp),%xmm2
    1325:	ff 
    1326:	c5 fa 10 85 18 ff ff 	vmovss -0xe8(%rbp),%xmm0
    132d:	ff 
    132e:	c5 f8 14 d2          	vunpcklps %xmm2,%xmm0,%xmm2
    1332:	c5 fa 10 9d 14 ff ff 	vmovss -0xec(%rbp),%xmm3
    1339:	ff 
    133a:	c5 fa 10 85 10 ff ff 	vmovss -0xf0(%rbp),%xmm0
    1341:	ff 
    1342:	c5 f8 14 c3          	vunpcklps %xmm3,%xmm0,%xmm0
    1346:	c5 f8 16 c2          	vmovlhps %xmm2,%xmm0,%xmm0
    134a:	c4 e3 7d 18 c1 01    	vinsertf128 $0x1,%xmm1,%ymm0,%ymm0
    1350:	c5 fc 29 45 90       	vmovaps %ymm0,-0x70(%rbp)
    1355:	c5 fc 28 45 b0       	vmovaps -0x50(%rbp),%ymm0
    135a:	c5 fc 29 85 50 ff ff 	vmovaps %ymm0,-0xb0(%rbp)
    1361:	ff 
    1362:	c5 fc 28 45 90       	vmovaps -0x70(%rbp),%ymm0
    1367:	c5 fc 29 85 30 ff ff 	vmovaps %ymm0,-0xd0(%rbp)
    136e:	ff 
    136f:	c5 fc 28 85 50 ff ff 	vmovaps -0xb0(%rbp),%ymm0
    1376:	ff 
    1377:	c5 fc 5c 85 30 ff ff 	vsubps -0xd0(%rbp),%ymm0,%ymm0
    137e:	ff 
    137f:	c5 fc 29 85 d0 fe ff 	vmovaps %ymm0,-0x130(%rbp)
    1386:	ff 
    1387:	48 8d 85 d0 fe ff ff 	lea    -0x130(%rbp),%rax
    138e:	48 89 45 88          	mov    %rax,-0x78(%rbp)
    1392:	48 8d 35 6c 0c 00 00 	lea    0xc6c(%rip),%rsi        # 2005 <_ZStL19piecewise_construct+0x1>
    1399:	48 8d 3d e0 2c 00 00 	lea    0x2ce0(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    13a0:	e8 ab fc ff ff       	call   1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    13a5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
    13ac:	83 7d ec 07          	cmpl   $0x7,-0x14(%rbp)
    13b0:	7f 3b                	jg     13ed <main+0x278>
    13b2:	8b 45 ec             	mov    -0x14(%rbp),%eax
    13b5:	48 98                	cltq   
    13b7:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
    13be:	00 
    13bf:	48 8b 45 88          	mov    -0x78(%rbp),%rax
    13c3:	48 01 d0             	add    %rdx,%rax
    13c6:	8b 00                	mov    (%rax),%eax
    13c8:	c5 f9 6e c0          	vmovd  %eax,%xmm0
    13cc:	48 8d 3d ad 2c 00 00 	lea    0x2cad(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    13d3:	e8 58 fc ff ff       	call   1030 <_ZNSolsEf@plt>
    13d8:	48 8d 35 2f 0c 00 00 	lea    0xc2f(%rip),%rsi        # 200e <_ZStL19piecewise_construct+0xa>
    13df:	48 89 c7             	mov    %rax,%rdi
    13e2:	e8 69 fc ff ff       	call   1050 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    13e7:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
    13eb:	eb bf                	jmp    13ac <main+0x237>
    13ed:	48 8b 05 dc 2b 00 00 	mov    0x2bdc(%rip),%rax        # 3fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    13f4:	48 89 c6             	mov    %rax,%rsi
    13f7:	48 8d 3d 82 2c 00 00 	lea    0x2c82(%rip),%rdi        # 4080 <_ZSt4cout@@GLIBCXX_3.4>
    13fe:	e8 5d fc ff ff       	call   1060 <_ZNSolsEPFRSoS_E@plt>
    1403:	b8 00 00 00 00       	mov    $0x0,%eax
    1408:	4c 8b 55 f8          	mov    -0x8(%rbp),%r10
    140c:	c9                   	leave  
    140d:	49 8d 62 f8          	lea    -0x8(%r10),%rsp
    1411:	c3                   	ret    

0000000000001412 <_Z41__static_initialization_and_destruction_0ii>:
    1412:	55                   	push   %rbp
    1413:	48 89 e5             	mov    %rsp,%rbp
    1416:	48 83 ec 10          	sub    $0x10,%rsp
    141a:	89 7d fc             	mov    %edi,-0x4(%rbp)
    141d:	89 75 f8             	mov    %esi,-0x8(%rbp)
    1420:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    1424:	75 32                	jne    1458 <_Z41__static_initialization_and_destruction_0ii+0x46>
    1426:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    142d:	75 29                	jne    1458 <_Z41__static_initialization_and_destruction_0ii+0x46>
    142f:	48 8d 3d 5b 2d 00 00 	lea    0x2d5b(%rip),%rdi        # 4191 <_ZStL8__ioinit>
    1436:	e8 35 fc ff ff       	call   1070 <_ZNSt8ios_base4InitC1Ev@plt>
    143b:	48 8d 15 06 2c 00 00 	lea    0x2c06(%rip),%rdx        # 4048 <__dso_handle>
    1442:	48 8d 35 48 2d 00 00 	lea    0x2d48(%rip),%rsi        # 4191 <_ZStL8__ioinit>
    1449:	48 8b 05 a8 2b 00 00 	mov    0x2ba8(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    1450:	48 89 c7             	mov    %rax,%rdi
    1453:	e8 e8 fb ff ff       	call   1040 <__cxa_atexit@plt>
    1458:	90                   	nop
    1459:	c9                   	leave  
    145a:	c3                   	ret    

000000000000145b <_GLOBAL__sub_I_main>:
    145b:	55                   	push   %rbp
    145c:	48 89 e5             	mov    %rsp,%rbp
    145f:	be ff ff 00 00       	mov    $0xffff,%esi
    1464:	bf 01 00 00 00       	mov    $0x1,%edi
    1469:	e8 a4 ff ff ff       	call   1412 <_Z41__static_initialization_and_destruction_0ii>
    146e:	5d                   	pop    %rbp
    146f:	c3                   	ret    

0000000000001470 <__libc_csu_init>:
    1470:	41 57                	push   %r15
    1472:	4c 8d 3d 47 29 00 00 	lea    0x2947(%rip),%r15        # 3dc0 <__frame_dummy_init_array_entry>
    1479:	41 56                	push   %r14
    147b:	49 89 d6             	mov    %rdx,%r14
    147e:	41 55                	push   %r13
    1480:	49 89 f5             	mov    %rsi,%r13
    1483:	41 54                	push   %r12
    1485:	41 89 fc             	mov    %edi,%r12d
    1488:	55                   	push   %rbp
    1489:	48 8d 2d 40 29 00 00 	lea    0x2940(%rip),%rbp        # 3dd0 <__do_global_dtors_aux_fini_array_entry>
    1490:	53                   	push   %rbx
    1491:	4c 29 fd             	sub    %r15,%rbp
    1494:	48 83 ec 08          	sub    $0x8,%rsp
    1498:	e8 63 fb ff ff       	call   1000 <_init>
    149d:	48 c1 fd 03          	sar    $0x3,%rbp
    14a1:	74 1b                	je     14be <__libc_csu_init+0x4e>
    14a3:	31 db                	xor    %ebx,%ebx
    14a5:	0f 1f 00             	nopl   (%rax)
    14a8:	4c 89 f2             	mov    %r14,%rdx
    14ab:	4c 89 ee             	mov    %r13,%rsi
    14ae:	44 89 e7             	mov    %r12d,%edi
    14b1:	41 ff 14 df          	call   *(%r15,%rbx,8)
    14b5:	48 83 c3 01          	add    $0x1,%rbx
    14b9:	48 39 dd             	cmp    %rbx,%rbp
    14bc:	75 ea                	jne    14a8 <__libc_csu_init+0x38>
    14be:	48 83 c4 08          	add    $0x8,%rsp
    14c2:	5b                   	pop    %rbx
    14c3:	5d                   	pop    %rbp
    14c4:	41 5c                	pop    %r12
    14c6:	41 5d                	pop    %r13
    14c8:	41 5e                	pop    %r14
    14ca:	41 5f                	pop    %r15
    14cc:	c3                   	ret    
    14cd:	0f 1f 00             	nopl   (%rax)

00000000000014d0 <__libc_csu_fini>:
    14d0:	c3                   	ret    

Disassembly of section .fini:

00000000000014d4 <_fini>:
    14d4:	48 83 ec 08          	sub    $0x8,%rsp
    14d8:	48 83 c4 08          	add    $0x8,%rsp
    14dc:	c3                   	ret    
