        .arch msp430g2553
        .p2align 1,0
        .text
        
        .global executeState
        .extern state

jump_table:
        .word case_0
        .word case_1
        .word case_2
        .word case_3
        
executeState:
        mov.w &state, r12
        add.w r12, r12
        mov.w jump_table(r12), r0
        
case_0:
        CALL #carelessWhisper
        jmp end_state

case_1:
        CALL #dayNNite
        jmp end_state

case_2:
        CALL #laCancion
        jmp end_state

case_3:
        CALL #smellsLikeTeenSpirit
        jmp end_state

end_state:
        pop r0
