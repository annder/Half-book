#include "cpu_type.h"

void print_ledger_longer(){};
void print_ledger_detailed(){};
void print_ledger_default(){};
void print_ledger(int value)
{
#if OPTION_LONG
	print_ledger_();
#endif // OPTION_LONG
#if OPTION_DELATION
	print_ledger_detailed();
#else
	print_ledger_default();
#endif
}

/////////////////

void cpu_type()
{
#ifdef VAX
	return CPU_VAX;
#endif // VAX
#ifdef M68000
	return CPU_6800;
#endif // M68000
#ifdef CPU_68020
	return CPU_6820;
#endif // CPU_68020
#ifdef I80386
	return CPU_80386;
#endif // I80386
#ifdef X6809
	return CPU_8609
#endif // X8609
#ifdef X6502
		return CPU_6502
#endif
#ifdef U3B2
		return CPU_3B2
#endif // U3B2
		return CPU_UNKNOWN;
};