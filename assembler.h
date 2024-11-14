#ifndef ASSEMBLER_H_
#define ASSEMBLER_H_

//typedef enum {
//    JCN, FIM, SRC, FIN,
//    JIN, JUN, JMS, INC, ISZ, ADD, SUB,
//    LD, XCH, BBL, LDM, WRM, WMP, WRR,
//    WR_phi, WR1, WR2, WR3, SBM, RDM,
//    RDR, ADM, RD_phi, RD1, RD2,
//    RD3, CLB, CLC, IAC, CMC, CMA,
//    RAL, RAR, TCC, DAC, TCS, STC,
//    DAA, KBP, DCL
//} Mnemonics;

const char *cmds_names[] = {
    "JCN", "FIM", "SRC", "FIN", "JIN",
    "JUN", "JMS", "INC", "ISZ", "ADD",
    "SUB", "LD", "XCH", "BBL", "LDM",
    "WRM", "WMP", "WRR", "WR_phi", "WR1",
    "WR2", "WR3", "SBM", "RDM", "RDR",
    "ADM", "RD_phi", "RD1", "RD2", "RD3",
    "CLB", "CLC", "IAC", "CMC", "CMA",
    "RAL", "RAR", "TCC", "DAC", "TCS",
    "STC", "DAA", "KBP", "DCL",
    NULL
};

int is_command(const char *cmd);
void parse_line();
void lexer_start(FILE *input_file);
void exec_cmd();
void label_code();
const char return_str(const char *str);


void opcode_jcn(int arg);
void opcode_fim(int arg);
void opcode_src(int arg);
void opcode_fin(int arg);
void opcode_jin(int arg);
void opcode_jun(int arg);
void opcode_jun(int arg);
void opcode_jms(int arg);
void opcode_inc(int arg);
void opcode_isz(int arg);
void opcode_add(int arg);
void opcode_sub(int arg);
void opcode_ld(int arg);
void opcode_xch(int arg);
void opcode_bbl(int arg);
void opcode_ldm(int arg);
void opcode_wrm(int arg);
void opcode_wmp(int arg);
void opcode_wrr(int arg);
void opcode_wr_phi(int arg);
void opcode_wr1(int arg);
void opcode_wr2(int arg);
void opcode_wr3(int arg);
void opcode_sbm(int arg);
void opcode_rdm(int arg);
void opcode_rdr(int arg);
void opcode_add(int arg);
void opcode_rd_phi(int arg);
void opcode_rd1(int arg);
void opcode_rd2(int arg);
void opcode_rd3(int arg);
void opcode_clb(int arg);
void opcode_clc(int arg);
void opcode_iac(int arg);
void opcode_cmc(int arg);
void opcode_cma(int arg);
void opcode_ral(int arg);
void opcode_rar(int arg);
void opcode_tcc(int arg);
void opcode_dac(int arg);
void opcode_tcs(int arg);
void opcode_stc(int arg);
void opcode_daa(int arg);
void opcode_kbp(int arg);
void opcode_dcl(int arg);

#endif
