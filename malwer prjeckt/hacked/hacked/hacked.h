// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the HACKED_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// HACKED_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HACKED_EXPORTS
#define HACKED_API __declspec(dllexport)
#else
#define HACKED_API __declspec(dllimport)
#endif

// This class is exported from the dll
class HACKED_API Chacked {
public:
	Chacked(void);
	// TODO: add your methods here.
};

extern HACKED_API int nhacked;

HACKED_API int fnhacked(void);
