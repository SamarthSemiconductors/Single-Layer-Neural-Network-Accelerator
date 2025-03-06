/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_2(char*, char *);
IKI_DLLESPEC extern void vlog_const_rhs_process_execute_0_fast_for_reg(char*, char*, char*);
IKI_DLLESPEC extern void execute_261(char*, char *);
IKI_DLLESPEC extern void execute_262(char*, char *);
IKI_DLLESPEC extern void execute_60(char*, char *);
IKI_DLLESPEC extern void execute_61(char*, char *);
IKI_DLLESPEC extern void vlog_timingcheck_execute_0(char*, char*, char*);
IKI_DLLESPEC extern void execute_65(char*, char *);
IKI_DLLESPEC extern void execute_66(char*, char *);
IKI_DLLESPEC extern void execute_67(char*, char *);
IKI_DLLESPEC extern void execute_230(char*, char *);
IKI_DLLESPEC extern void execute_231(char*, char *);
IKI_DLLESPEC extern void execute_232(char*, char *);
IKI_DLLESPEC extern void execute_233(char*, char *);
IKI_DLLESPEC extern void execute_234(char*, char *);
IKI_DLLESPEC extern void execute_235(char*, char *);
IKI_DLLESPEC extern void execute_236(char*, char *);
IKI_DLLESPEC extern void execute_237(char*, char *);
IKI_DLLESPEC extern void execute_238(char*, char *);
IKI_DLLESPEC extern void execute_239(char*, char *);
IKI_DLLESPEC extern void execute_240(char*, char *);
IKI_DLLESPEC extern void execute_241(char*, char *);
IKI_DLLESPEC extern void execute_242(char*, char *);
IKI_DLLESPEC extern void execute_13(char*, char *);
IKI_DLLESPEC extern void execute_78(char*, char *);
IKI_DLLESPEC extern void execute_79(char*, char *);
IKI_DLLESPEC extern void execute_77(char*, char *);
IKI_DLLESPEC extern void execute_15(char*, char *);
IKI_DLLESPEC extern void execute_16(char*, char *);
IKI_DLLESPEC extern void execute_17(char*, char *);
IKI_DLLESPEC extern void execute_18(char*, char *);
IKI_DLLESPEC extern void execute_80(char*, char *);
IKI_DLLESPEC extern void execute_81(char*, char *);
IKI_DLLESPEC extern void execute_82(char*, char *);
IKI_DLLESPEC extern void execute_83(char*, char *);
IKI_DLLESPEC extern void execute_84(char*, char *);
IKI_DLLESPEC extern void execute_85(char*, char *);
IKI_DLLESPEC extern void execute_86(char*, char *);
IKI_DLLESPEC extern void execute_87(char*, char *);
IKI_DLLESPEC extern void execute_88(char*, char *);
IKI_DLLESPEC extern void execute_89(char*, char *);
IKI_DLLESPEC extern void execute_90(char*, char *);
IKI_DLLESPEC extern void execute_91(char*, char *);
IKI_DLLESPEC extern void execute_92(char*, char *);
IKI_DLLESPEC extern void execute_93(char*, char *);
IKI_DLLESPEC extern void execute_94(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_1(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_2(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_55(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_56(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_57(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_58(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_59(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_60(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_61(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_62(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_63(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_64(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_65(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_66(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_67(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_68(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_69(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_70(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_71(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_72(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_73(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_74(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_75(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_76(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_77(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_78(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_27(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_28(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_29(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_83b34eab_af79f1dc_30(char*, char *);
IKI_DLLESPEC extern void execute_113(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_119(char*, char *);
IKI_DLLESPEC extern void execute_120(char*, char *);
IKI_DLLESPEC extern void execute_121(char*, char *);
IKI_DLLESPEC extern void execute_31(char*, char *);
IKI_DLLESPEC extern void execute_207(char*, char *);
IKI_DLLESPEC extern void execute_208(char*, char *);
IKI_DLLESPEC extern void execute_209(char*, char *);
IKI_DLLESPEC extern void execute_210(char*, char *);
IKI_DLLESPEC extern void execute_206(char*, char *);
IKI_DLLESPEC extern void execute_255(char*, char *);
IKI_DLLESPEC extern void execute_256(char*, char *);
IKI_DLLESPEC extern void execute_257(char*, char *);
IKI_DLLESPEC extern void execute_258(char*, char *);
IKI_DLLESPEC extern void execute_47(char*, char *);
IKI_DLLESPEC extern void execute_48(char*, char *);
IKI_DLLESPEC extern void execute_243(char*, char *);
IKI_DLLESPEC extern void execute_245(char*, char *);
IKI_DLLESPEC extern void execute_246(char*, char *);
IKI_DLLESPEC extern void execute_247(char*, char *);
IKI_DLLESPEC extern void execute_250(char*, char *);
IKI_DLLESPEC extern void execute_251(char*, char *);
IKI_DLLESPEC extern void execute_252(char*, char *);
IKI_DLLESPEC extern void execute_253(char*, char *);
IKI_DLLESPEC extern void execute_56(char*, char *);
IKI_DLLESPEC extern void execute_57(char*, char *);
IKI_DLLESPEC extern void execute_58(char*, char *);
IKI_DLLESPEC extern void execute_59(char*, char *);
IKI_DLLESPEC extern void execute_263(char*, char *);
IKI_DLLESPEC extern void execute_264(char*, char *);
IKI_DLLESPEC extern void execute_265(char*, char *);
IKI_DLLESPEC extern void execute_266(char*, char *);
IKI_DLLESPEC extern void execute_267(char*, char *);
IKI_DLLESPEC extern void execute_268(char*, char *);
IKI_DLLESPEC extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_29(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_30(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_33(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
IKI_DLLESPEC extern void transaction_145(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_146(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_148(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_149(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_150(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_151(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_152(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_153(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_165(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_166(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_167(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_50(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_77(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_104(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[156] = {(funcp)execute_2, (funcp)vlog_const_rhs_process_execute_0_fast_for_reg, (funcp)execute_261, (funcp)execute_262, (funcp)execute_60, (funcp)execute_61, (funcp)vlog_timingcheck_execute_0, (funcp)execute_65, (funcp)execute_66, (funcp)execute_67, (funcp)execute_230, (funcp)execute_231, (funcp)execute_232, (funcp)execute_233, (funcp)execute_234, (funcp)execute_235, (funcp)execute_236, (funcp)execute_237, (funcp)execute_238, (funcp)execute_239, (funcp)execute_240, (funcp)execute_241, (funcp)execute_242, (funcp)execute_13, (funcp)execute_78, (funcp)execute_79, (funcp)execute_77, (funcp)execute_15, (funcp)execute_16, (funcp)execute_17, (funcp)execute_18, (funcp)execute_80, (funcp)execute_81, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_88, (funcp)execute_89, (funcp)execute_90, (funcp)execute_91, (funcp)execute_92, (funcp)execute_93, (funcp)execute_94, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_1, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_2, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_55, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_56, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_57, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_58, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_59, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_60, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_61, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_62, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_63, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_64, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_65, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_66, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_67, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_68, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_69, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_70, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_71, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_72, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_73, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_74, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_75, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_76, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_77, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_78, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_27, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_28, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_29, (funcp)timing_checker_condition_m_83b34eab_af79f1dc_30, (funcp)execute_113, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_119, (funcp)execute_120, (funcp)execute_121, (funcp)execute_31, (funcp)execute_207, (funcp)execute_208, (funcp)execute_209, (funcp)execute_210, (funcp)execute_206, (funcp)execute_255, (funcp)execute_256, (funcp)execute_257, (funcp)execute_258, (funcp)execute_47, (funcp)execute_48, (funcp)execute_243, (funcp)execute_245, (funcp)execute_246, (funcp)execute_247, (funcp)execute_250, (funcp)execute_251, (funcp)execute_252, (funcp)execute_253, (funcp)execute_56, (funcp)execute_57, (funcp)execute_58, (funcp)execute_59, (funcp)execute_263, (funcp)execute_264, (funcp)execute_265, (funcp)execute_266, (funcp)execute_267, (funcp)execute_268, (funcp)transaction_0, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_19, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_28, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_32, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_145, (funcp)transaction_146, (funcp)transaction_148, (funcp)transaction_149, (funcp)transaction_150, (funcp)transaction_151, (funcp)transaction_152, (funcp)transaction_153, (funcp)transaction_165, (funcp)transaction_166, (funcp)transaction_167, (funcp)transaction_50, (funcp)transaction_77, (funcp)transaction_104};
const int NumRelocateId= 156;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/mac_top_time_impl/xsim.reloc",  (void **)funcTab, 156);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/mac_top_time_impl/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/mac_top_time_impl/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_xsimdir_location_if_remapped(argc, argv)  ;
    iki_set_sv_type_file_path_name("xsim.dir/mac_top_time_impl/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/mac_top_time_impl/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/mac_top_time_impl/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
