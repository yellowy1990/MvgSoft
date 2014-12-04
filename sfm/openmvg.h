#pragma once

#ifdef _W64

	#ifdef _DEBUG
	#     pragma comment(lib, "x64/debug/glfw3.lib")
	#     pragma comment(lib, "x64/debug/OpenExif.lib")
	#     pragma comment(lib, "x64/debug/lib_clp.lib")
	#     pragma comment(lib, "x64/debug/lib_CoinUtils.lib")
	#     pragma comment(lib, "x64/debug/lib_Osi.lib")
	#     pragma comment(lib, "x64/debug/lib_OsiClpSolver.lib")
	#     pragma comment(lib, "x64/debug/ceres.lib")
	#     pragma comment(lib, "x64/debug/CppUnitLite.lib")
	#     pragma comment(lib, "x64/debug/cxsparse.lib")
	#     pragma comment(lib, "x64/debug/flann_cpp_s.lib")
	#     pragma comment(lib, "x64/debug/jpeg.lib")
	#     pragma comment(lib, "x64/debug/lemon.lib")
	#     pragma comment(lib, "x64/debug/miniglog.lib")
	#     pragma comment(lib, "x64/debug/png.lib")
	#     pragma comment(lib, "x64/debug/stlplus.lib")
	#     pragma comment(lib, "x64/debug/zlib.lib")
	#     pragma comment(lib, "x64/debug/vlsift.lib")
	#     pragma comment(lib, "x64/debug/openMVG_image.lib")
	#     pragma comment(lib, "x64/debug/openMVG_kvld.lib")
	#     pragma comment(lib, "x64/debug/openMVG_linearProgramming.lib")
	#     pragma comment(lib, "x64/debug/openMVG_lInftyComputerVision.lib")
	#     pragma comment(lib, "x64/debug/openMVG_multiview.lib")
	#     pragma comment(lib, "x64/debug/openMVG_numeric.lib")

	#     pragma comment(lib, "x64/debug/graclus.lib")
	#     pragma comment(lib, "x64/debug/gsl.lib")
	#     pragma comment(lib, "x64/debug/cblas.lib")
	#     pragma comment(lib, "x64/debug/lapack.lib")
	#     pragma comment(lib, "x64/debug/lmfit.lib")
	#     pragma comment(lib, "x64/debug/blas.lib")
	#     pragma comment(lib, "x64/debug/libf2c.lib")
	#     pragma comment(lib, "x64/debug/cpmvs_numeric.lib")
	#else
	#     pragma comment(lib, "x64/release/glfw3.lib")
	#     pragma comment(lib, "x64/release/OpenExif.lib")
	#     pragma comment(lib, "x64/release/lib_clp.lib")
	#     pragma comment(lib, "x64/release/lib_CoinUtils.lib")
	#     pragma comment(lib, "x64/release/lib_Osi.lib")
	#     pragma comment(lib, "x64/release/lib_OsiClpSolver.lib")
	#     pragma comment(lib, "x64/release/ceres.lib")
	#     pragma comment(lib, "x64/release/CppUnitLite.lib")
	#     pragma comment(lib, "x64/release/cxsparse.lib")
	#     pragma comment(lib, "x64/release/flann_cpp_s.lib")
	#     pragma comment(lib, "x64/release/jpeg.lib")
	#     pragma comment(lib, "x64/release/lemon.lib")
	#     pragma comment(lib, "x64/release/miniglog.lib")
	#     pragma comment(lib, "x64/release/png.lib")
	#     pragma comment(lib, "x64/release/stlplus.lib")
	#     pragma comment(lib, "x64/release/zlib.lib")
	#     pragma comment(lib, "x64/release/vlsift.lib")
	#     pragma comment(lib, "x64/release/openMVG_image.lib")
	#     pragma comment(lib, "x64/release/openMVG_kvld.lib")
	#     pragma comment(lib, "x64/release/openMVG_linearProgramming.lib")
	#     pragma comment(lib, "x64/release/openMVG_lInftyComputerVision.lib")
	#     pragma comment(lib, "x64/release/openMVG_multiview.lib")
	#     pragma comment(lib, "x64/release/openMVG_numeric.lib")

	#     pragma comment(lib, "x64/release/graclus.lib")
	#     pragma comment(lib, "x64/release/gsl.lib")
	#     pragma comment(lib, "x64/release/cblas.lib")
	#     pragma comment(lib, "x64/release/lapack.lib")
	#     pragma comment(lib, "x64/release/lmfit.lib")
	#     pragma comment(lib, "x64/release/blas.lib")
	#     pragma comment(lib, "x64/release/libf2c.lib")
	#     pragma comment(lib, "x64/release/cpmvs_numeric.lib")
	#endif

#else

	#ifdef _DEBUG
	#     pragma comment(lib, "x86/debug/glfw3.lib")
	#     pragma comment(lib, "x86/debug/OpenExif.lib")
	#     pragma comment(lib, "x86/debug/lib_clp.lib")
	#     pragma comment(lib, "x86/debug/lib_CoinUtils.lib")
	#     pragma comment(lib, "x86/debug/lib_Osi.lib")
	#     pragma comment(lib, "x86/debug/lib_Osi_Msk.lib")
	#     pragma comment(lib, "x86/debug/lib_OsiClpSolver.lib")
	#     pragma comment(lib, "x86/debug/ceres.lib")
	#     pragma comment(lib, "x86/debug/CppUnitLite.lib")
	#     pragma comment(lib, "x86/debug/cxsparse.lib")
	#     pragma comment(lib, "x86/debug/flann_cpp_s.lib")
	#     pragma comment(lib, "x86/debug/jpeg.lib")
	#     pragma comment(lib, "x86/debug/lemon.lib")
	#     pragma comment(lib, "x86/debug/miniglog.lib")
	#     pragma comment(lib, "x86/debug/png.lib")
	#     pragma comment(lib, "x86/debug/stlplus.lib")
	#     pragma comment(lib, "x86/debug/zlib.lib")
	#     pragma comment(lib, "x86/debug/vlsift.lib")
	#     pragma comment(lib, "x86/debug/openMVG_image.lib")
	#     pragma comment(lib, "x86/debug/openMVG_kvld.lib")
	#     pragma comment(lib, "x86/debug/openMVG_linearProgramming.lib")
	#     pragma comment(lib, "x86/debug/openMVG_lInftyComputerVision.lib")
	#     pragma comment(lib, "x86/debug/openMVG_multiview.lib")
	#     pragma comment(lib, "x86/debug/openMVG_numeric.lib")

	#     pragma comment(lib, "x86/debug/graclus.lib")
	#     pragma comment(lib, "x86/debug/gsl.lib")
	#     pragma comment(lib, "x86/debug/cblas.lib")
	#     pragma comment(lib, "x86/debug/lapack.lib")
	#     pragma comment(lib, "x86/debug/lmfit.lib")
	#     pragma comment(lib, "x86/debug/blas.lib")
	#     pragma comment(lib, "x86/debug/libf2c.lib")
	#     pragma comment(lib, "x86/debug/cpmvs_numeric.lib")
	#else
	#     pragma comment(lib, "x86/release/glfw3.lib")
	#     pragma comment(lib, "x86/release/OpenExif.lib")
	#     pragma comment(lib, "x86/release/lib_clp.lib")
	#     pragma comment(lib, "x86/release/lib_CoinUtils.lib")
	#     pragma comment(lib, "x86/release/lib_Osi.lib")
	#     pragma comment(lib, "x86/release/lib_Osi_Msk.lib")
	#     pragma comment(lib, "x86/release/lib_OsiClpSolver.lib")
	#     pragma comment(lib, "x86/release/ceres.lib")
	#     pragma comment(lib, "x86/release/CppUnitLite.lib")
	#     pragma comment(lib, "x86/release/cxsparse.lib")
	#     pragma comment(lib, "x86/release/flann_cpp_s.lib")
	#     pragma comment(lib, "x86/release/jpeg.lib")
	#     pragma comment(lib, "x86/release/lemon.lib")
	#     pragma comment(lib, "x86/release/miniglog.lib")
	#     pragma comment(lib, "x86/release/png.lib")
	#     pragma comment(lib, "x86/release/stlplus.lib")
	#     pragma comment(lib, "x86/release/zlib.lib")
	#     pragma comment(lib, "x86/release/vlsift.lib")
	#     pragma comment(lib, "x86/release/openMVG_image.lib")
	#     pragma comment(lib, "x86/release/openMVG_kvld.lib")
	#     pragma comment(lib, "x86/release/openMVG_linearProgramming.lib")
	#     pragma comment(lib, "x86/release/openMVG_lInftyComputerVision.lib")
	#     pragma comment(lib, "x86/release/openMVG_multiview.lib")
	#     pragma comment(lib, "x86/release/openMVG_numeric.lib")

	#     pragma comment(lib, "x86/release/graclus.lib")
	#     pragma comment(lib, "x86/release/gsl.lib")
	#     pragma comment(lib, "x86/release/cblas.lib")
	#     pragma comment(lib, "x86/release/lapack.lib")
	#     pragma comment(lib, "x86/release/lmfit.lib")
	#     pragma comment(lib, "x86/release/blas.lib")
	#     pragma comment(lib, "x86/release/libf2c.lib")
	#     pragma comment(lib, "x86/release/cpmvs_numeric.lib")
	#endif

#endif
