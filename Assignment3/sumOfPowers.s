  .global sumOfPowers
  
sumOfPowers:
  push %rbp
  mov %rsp,%rbp
  
  mov $0, %rax
  mov $1, %rcx
  add $1, %rdi

Top:
  cmp %rdi, %rcx
  jge Done
  mov %rcx, %r10
  imulq %rcx, %r10
  add %r10, %rax
  inc %rcx
  jmp Top
  
Done:
  pop %rbp
  ret
