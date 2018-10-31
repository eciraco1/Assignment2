.global rotate
rotate:
       #rdi -> val
       #rsi -> num
       #rdx -> direction
       mov $1, %rcx
       cmp %rdx, $0
       je right

left:  rol %rsi, $1
       test %rcx, %rdi
       je done
       inc %rcx
       jmp left

right: ror %rsi, $1
       test %rcx, %rdi
       je done
       inc %rcx
       jmp right
done:
      mov %rdx, %rax
      ret
