  .global addvalue
  
addvalue:
  push %rbp
  mov %rsp,%rbp

  # int sum = 0;
  # for (int i = 0; i<size; i++) {
  #   sum += a[i]}

  #a --- rdi
  #size --- rsi
  #sum --- rax
  #i --- rcx

  mov $0, %rax
  mov $0, %rcx

Top:
  cmp %rsi, %rcx
  jge Done
  add (%rdi, %rcx, 4), %rax
  inc %rcx
  jmp Top
  
Done:
  pop %rbp
  ret
