## Pointer Guide
---
x=4;       
>0x005    4

*px = &x;
- pointer named px is pointing towards the address of x;

>0x005    4
>
>0x007    0x005

int y = *px;
- integer named y that is equal to the pointer/value of px

>0x005    4
>
>0x007    0x005
>
>0x00A    4
