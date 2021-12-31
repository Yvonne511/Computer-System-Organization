  .global findSalariesSum
   
findSalariesSum:
  push %rbp
  mov %rsp,%rbp
  
  mov $0, %rax
  mov $0, %rcx
  #add (%rdi, %rcx, 4), %rax
  #add 24(%rdi, %rcx, 8), %rax
  

Top:
  cmp %rsi, %rcx
  jge Done
  mov %rcx, %r10
  imulq $3, %r10
  add $2, %r10
  add (%rdi, %r10, 4), %rax
  inc %rcx
  jmp Top
  
Done:
  pop %rbp
  ret
