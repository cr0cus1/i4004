#ifndef ASSEMBLER_H_
#define ASSEMBLER_H_

extern const char *cmds_names[];

int is_command(const char *cmd);
void parse_line_with_arg(const char *line, char *cmd, char *arg);
void exec_cmd();
void label_code();
void lexer_start(const char *line, char *cmd, char *arg);
const char *return_str(const char *str);


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
