  .global  sumNums

sumNums:
  push %rbp
  mov %rsp,%rbp

  mov $0, %rax
  mov $0, %rcx

Top:
  cmpq %rdi, %rcx
  jg Done
  add %rcx, %rax
  incq %rcx
  jmp Top
  
Done:
  pop %rbp
  ret
  