  .global compareAges
  
compareAges:
  push %rbp
  mov %rsp,%rbp
  
  mov $0, %rax
  mov 4(%rdi), %rcx
  mov 4(%rsi), %r10

  cmp %r10, %rcx
  je Same
  jmp Done

Same:
  mov $1, %rax
  
Done:
  pop %rbp
  ret
