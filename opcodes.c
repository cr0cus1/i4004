#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "assembler.h"
#include "i4004.h"
#include "opcodes.h"

#define LAST_BIT 128

void opcode_clb(Cpu *cpu_unit) {
    cpu_unit->accumulator = 0;
    cpu_unit->carry_bit = 0;
}
void opcode_clc(Cpu *cpu_unit) {
    cpu_unit->carry_bit = 0;
}
void opcode_iac(Cpu *cpu_unit) {
    cpu_unit->accumulator += 1;
}
void opcode_cmc(Cpu *cpu_unit) {
    cpu_unit->carry_bit = ~cpu_unit->carry_bit;
}
void opcode_cma(Cpu *cpu_unit) {
    cpu_unit->accumulator = ~cpu_unit->accumulator;
}
void opcode_ral(Cpu *cpu_unit) {
    int old_carry = cpu_unit->carry_bit;
    cpu_unit->carry_bit = (cpu_unit->accumulator & (1 << 7)) ? 1 : 0;
    cpu_unit->accumulator = cpu_unit->accumulator << 1;

    if(old_carry)
        cpu_unit->accumulator |= 1;
    else
        cpu_unit->accumulator &= ~1;
    
}
void opcode_rar(Cpu *cpu_unit) {
    int old_carry = cpu_unit->carry_bit;
    cpu_unit->carry_bit = (cpu_unit->accumulator & 1) ? 1 : 0;
    cpu_unit->accumulator = cpu_unit->accumulator >> 1;

    if(old_carry)
        cpu_unit->accumulator |= (1 << 7);
    else
        cpu_unit->accumulator &= ~(1 << 7);
    
}
void opcode_tcc(Cpu *cpu_unit, char *arg) {
}
void opcode_dac(Cpu *cpu_unit, char *arg) {
}
void opcode_tcs(Cpu *cpu_unit, char *arg) {
}
void opcode_stc(Cpu *cpu_unit, char *arg) {
}
void opcode_daa(Cpu *cpu_unit, char *arg) {
}
void opcode_kbp(Cpu *cpu_unit, char *arg) {
}
void opcode_dcl(Cpu *cpu_unit, char *arg) {
}
void opcode_wrm(Cpu *cpu_unit, char *arg) {
}
void opcode_wmp(Cpu *cpu_unit, char *arg) {
}
void opcode_wrr(Cpu *cpu_unit, char *arg) {
}
void opcode_wr_phi(Cpu *cpu_unit, char *arg) {
}
void opcode_wr1(Cpu *cpu_unit, char *arg) {
}
void opcode_wr2(Cpu *cpu_unit, char *arg) {
}
void opcode_wr3(Cpu *cpu_unit, char *arg) {
}
void opcode_sbm(Cpu *cpu_unit, char *arg) {
}
void opcode_rdm(Cpu *cpu_unit, char *arg) {
}
void opcode_rdr(Cpu *cpu_unit, char *arg) {
}
void opcode_adm(Cpu *cpu_unit, char *arg) {
}
void opcode_rd_phi(Cpu *cpu_unit, char *arg) {
}
void opcode_rdi1(Cpu *cpu_unit, char *arg) {
}
void opcode_rd2(Cpu *cpu_unit, char *arg) {
}
void opcode_rd3(Cpu *cpu_unit, char *arg) {
}
void opcode_nop(Cpu *cpu_unit, char *arg) {
}
void opcode_jcn(Cpu *cpu_unit, char *arg) {
}
void opcode_fim(Cpu *cpu_unit, char *arg) {
}
void opcode_src(Cpu *cpu_unit, char *arg) {
}
void opcode_fin(Cpu *cpu_unit, char *arg) {
}
void opcode_jin(Cpu *cpu_unit, char *arg) {
}
void opcode_jun(Cpu *cpu_unit, char *arg) {
}
void opcode_jms(Cpu *cpu_unit, char *arg) {
}
void opcode_inc(Cpu *cpu_unit, char *arg) {
}
void opcode_isz(Cpu *cpu_unit, char *arg) {
}
void opcode_add(Cpu *cpu_unit, char *arg) {
}
void opcode_sub(Cpu *cpu_unit, char *arg) {
}
void opcode_ld(Cpu *cpu_unit, char *arg) {
}
void opcode_xch(Cpu *cpu_unit, char *arg) {
}
void opcode_bbl(Cpu *cpu_unit, char *arg) {
}
void opcode_ldm(Cpu *cpu_unit, char *arg) {
}
