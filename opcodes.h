#ifndef OPCODES_H_  
#define OPCODES_H_

// ACCUMULATOR GROUP INSTRUCTIONS
#define CLB 11110000
#define CLC 11110001
#define IAC 11110010
#define CMA 11110100
#define RAL 11110101
#define RAR 11110110
#define TCC 11110111
#define DAC 11111000
#define TCS 11111001
#define STC 11111010
#define DAA 11111011
#define KBP 11111100
#define DCL 11111101

// IO/RAM INSTRUCTIONS
#define WRM 11100000
#define WMP 11100001
#define WRR 11100010
#define WR_phi 11100100
#define WR1 11100101
#define WR2 11100110
#define WR3 11100111
#define SBM 11101000
#define RDM 11101001
#define RDR 11101010
#define ADM 11101011
#define RD_phi 11101100
#define RD1 11101101
#define RD2 11101110
#define RD3 11101111

void opcode_jcn(Cpu *cpu_unit, char *arg);
void opcode_fim(Cpu *cpu_unit, char *arg);
void opcode_src(Cpu *cpu_unit, char *arg);
void opcode_fin(Cpu *cpu_unit, char *arg);
void opcode_jin(Cpu *cpu_unit, char *arg);
void opcode_jun(Cpu *cpu_unit, char *arg);
void opcode_jun(Cpu *cpu_unit, char *arg);
void opcode_jms(Cpu *cpu_unit, char *arg);
void opcode_inc(Cpu *cpu_unit, char *arg);
void opcode_isz(Cpu *cpu_unit, char *arg);
void opcode_add(Cpu *cpu_unit, char *arg);
void opcode_sub(Cpu *cpu_unit, char *arg);
void opcode_ld(Cpu *cpu_unit, char *arg);
void opcode_xch(Cpu *cpu_unit, char *arg);
void opcode_bbl(Cpu *cpu_unit, char *arg);
void opcode_ldm(Cpu *cpu_unit, char *arg);
void opcode_wrm(Cpu *cpu_unit, char *arg);
void opcode_wmp(Cpu *cpu_unit, char *arg);
void opcode_wrr(Cpu *cpu_unit, char *arg);
void opcode_wr_phi(Cpu *cpu_unit, char *arg);
void opcode_wr1(Cpu *cpu_unit, char *arg);
void opcode_wr2(Cpu *cpu_unit, char *arg);
void opcode_wr3(Cpu *cpu_unit, char *arg);
void opcode_sbm(Cpu *cpu_unit, char *arg);
void opcode_rdm(Cpu *cpu_unit, char *arg);
void opcode_rdr(Cpu *cpu_unit, char *arg);
void opcode_add(Cpu *cpu_unit, char *arg);
void opcode_rd_phi(Cpu *cpu_unit, char *arg);
void opcode_rd1(Cpu *cpu_unit, char *arg);
void opcode_rd2(Cpu *cpu_unit, char *arg);
void opcode_rd3(Cpu *cpu_unit, char *arg);
void opcode_clb(Cpu *cpu_unit);
void opcode_clc(Cpu *cpu_unit);
void opcode_iac(Cpu *cpu_unit);
void opcode_cmc(Cpu *cpu_unit);
void opcode_cma(Cpu *cpu_unit);
void opcode_ral(Cpu *cpu_unit);
void opcode_rar(Cpu *cpu_unit);
void opcode_tcc(Cpu *cpu_unit);
void opcode_dac(Cpu *cpu_unit);
void opcode_tcs(Cpu *cpu_unit);
void opcode_stc(Cpu *cpu_unit);
void opcode_daa(Cpu *cpu_unit);
void opcode_kbp(Cpu *cpu_unit, char *arg);
void opcode_dcl(Cpu *cpu_unit, char *arg);

#endif
