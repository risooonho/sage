// This file may be redistributed and modified only under the terms of
// the GNU Lesser General Public License (See COPYING for details).
// Copyright (C) 2003 Simon Goodall

#ifndef SAGE_WGL_H
#define SAGE_WGL_H 1

#define WGL_ARB_BUFFER_REGION 0
#define WGL_ARB_MULTISAMPLE 1
#define WGL_ARB_EXTENSIONS_STRING 2
#define WGL_ARB_PIXEL_FORMAT 3
#define WGL_ARB_MAKE_CURRENT_READ 4
#define WGL_ARB_PBUFFER 5
#define WGL_ARB_RENDER_TEXTURE 6
#define WGL_EXT_DISPLAY_COLOR_TABLE 7
#define WGL_EXT_EXTENSIONS_STRING 8
#define WGL_EXT_MAKE_CURRENT_READ 9
#define WGL_EXT_PBUFFER 10
#define WGL_EXT_PIXEL_FORMAT 11
#define WGL_EXT_SWAP_CONTROL 12
#define WGL_EXT_DEPTH_FLOAT 13
#define WGL_NV_VERTEX_ARRAY_RANGE 14
#define WGL_3DFX_MULTISAMPLE 15
#define WGL_EXT_MULTISAMPLE 16
#define WGL_OML_SYNC_CONTROL 17
#define WGL_I3D_DIGITAL_VIDEO_CONTROL 18
#define WGL_I3D_GAMMA 19
#define WGL_I3D_GENLOCK 20
#define WGL_I3D_IMAGE_BUFFER 21
#define WGL_I3D_SWAP_FRAME_LOCK 22
#define WGL_I3D_SWAP_FRAME_USAGE 23
#define LAST_EXTENSION 24

#include "sage/header.h"
#include <GL/gl.h>
#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>
#include <sage/wglext_sage.h>

SAGEAPI int sage_wgl_ext[LAST_EXTENSION];

#define WGL_ARB_buffer_region 1
#ifdef SAGE_WGL_ARB_buffer_region
SAGEAPI PFNWGLCREATEBUFFERREGIONARBPROC wglCreateBufferRegionARB;
SAGEAPI PFNWGLDELETEBUFFERREGIONARBPROC wglDeleteBufferRegionARB;
SAGEAPI PFNWGLSAVEBUFFERREGIONARBPROC wglSaveBufferRegionARB;
SAGEAPI PFNWGLRESTOREBUFFERREGIONARBPROC wglRestoreBufferRegionARB;
#endif
#define WGL_ARB_multisample 1
#ifdef SAGE_WGL_ARB_multisample
#endif
#define WGL_ARB_extensions_string 1
#ifdef SAGE_WGL_ARB_extensions_string
SAGEAPI PFNWGLGETEXTENSIONSSTRINGARBPROC wglGetExtensionsStringARB;
#endif
#define WGL_ARB_pixel_format 1
#ifdef SAGE_WGL_ARB_pixel_format
SAGEAPI PFNWGLGETPIXELFORMATATTRIBIVARBPROC wglGetPixelFormatAttribivARB;
SAGEAPI PFNWGLGETPIXELFORMATATTRIBFVARBPROC wglGetPixelFormatAttribfvARB;
SAGEAPI PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;
#endif
#define WGL_ARB_make_current_read 1
#ifdef SAGE_WGL_ARB_make_current_read
SAGEAPI PFNWGLMAKECONTEXTCURRENTARBPROC wglMakeContextCurrentARB;
SAGEAPI PFNWGLGETCURRENTREADDCARBPROC wglGetCurrentReadDCARB;
#endif
#define WGL_ARB_pbuffer 1
#ifdef SAGE_WGL_ARB_pbuffer
SAGEAPI PFNWGLCREATEPBUFFERARBPROC wglCreatePbufferARB;
SAGEAPI PFNWGLGETPBUFFERDCARBPROC wglGetPbufferDCARB;
SAGEAPI PFNWGLRELEASEPBUFFERDCARBPROC wglReleasePbufferDCARB;
SAGEAPI PFNWGLDESTROYPBUFFERARBPROC wglDestroyPbufferARB;
SAGEAPI PFNWGLQUERYPBUFFERARBPROC wglQueryPbufferARB;
#endif
#define WGL_ARB_render_texture 1
#ifdef SAGE_WGL_ARB_render_texture
SAGEAPI PFNWGLBINDTEXIMAGEARBPROC wglBindTexImageARB;
SAGEAPI PFNWGLRELEASETEXIMAGEARBPROC wglReleaseTexImageARB;
SAGEAPI PFNWGLSETPBUFFERATTRIBARBPROC wglSetPbufferAttribARB;
#endif
#define WGL_EXT_display_color_table 1
#ifdef SAGE_WGL_EXT_display_color_table
SAGEAPI PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC wglCreateDisplayColorTableEXT;
SAGEAPI PFNWGLLOADDISPLAYCOLORTABLEEXTPROC wglLoadDisplayColorTableEXT;
SAGEAPI PFNWGLBINDDISPLAYCOLORTABLEEXTPROC wglBindDisplayColorTableEXT;
SAGEAPI PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC wglDestroyDisplayColorTableEXT;
#endif
#define WGL_EXT_extensions_string 1
#ifdef SAGE_WGL_EXT_extensions_string
SAGEAPI PFNWGLGETEXTENSIONSSTRINGEXTPROC wglGetExtensionsStringEXT;
#endif
#define WGL_EXT_make_current_read 1
#ifdef SAGE_WGL_EXT_make_current_read
SAGEAPI PFNWGLMAKECONTEXTCURRENTEXTPROC wglMakeContextCurrentEXT;
SAGEAPI PFNWGLGETCURRENTREADDCEXTPROC wglGetCurrentReadDCEXT;
#endif
#define WGL_EXT_pbuffer 1
#ifdef SAGE_WGL_EXT_pbuffer
SAGEAPI PFNWGLCREATEPBUFFEREXTPROC wglCreatePbufferEXT;
SAGEAPI PFNWGLGETPBUFFERDCEXTPROC wglGetPbufferDCEXT;
SAGEAPI PFNWGLRELEASEPBUFFERDCEXTPROC wglReleasePbufferDCEXT;
SAGEAPI PFNWGLDESTROYPBUFFEREXTPROC wglDestroyPbufferEXT;
SAGEAPI PFNWGLQUERYPBUFFEREXTPROC wglQueryPbufferEXT;
#endif
#define WGL_EXT_pixel_format 1
#ifdef SAGE_WGL_EXT_pixel_format
SAGEAPI PFNWGLGETPIXELFORMATATTRIBIVEXTPROC wglGetPixelFormatAttribivEXT;
SAGEAPI PFNWGLGETPIXELFORMATATTRIBFVEXTPROC wglGetPixelFormatAttribfvEXT;
SAGEAPI PFNWGLCHOOSEPIXELFORMATEXTPROC wglChoosePixelFormatEXT;
#endif
#define WGL_EXT_swap_control 1
#ifdef SAGE_WGL_EXT_swap_control
SAGEAPI PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
SAGEAPI PFNWGLGETSWAPINTERVALEXTPROC wglGetSwapIntervalEXT;
#endif
#define WGL_EXT_depth_float 1
#ifdef SAGE_WGL_EXT_depth_float
#endif
#define WGL_NV_vertex_array_range 1
#ifdef SAGE_WGL_NV_vertex_array_range
SAGEAPI PFNWGLALLOCATEMEMORYNVPROC wglAllocateMemoryNV;
SAGEAPI PFNWGLFREEMEMORYNVPROC wglFreeMemoryNV;
#endif
#define WGL_3DFX_multisample 1
#ifdef SAGE_WGL_3DFX_multisample
#endif
#define WGL_EXT_multisample 1
#ifdef SAGE_WGL_EXT_multisample
#endif
#define WGL_OML_sync_control 1
#ifdef SAGE_WGL_OML_sync_control
SAGEAPI PFNWGLGETSYNCVALUESOMLPROC wglGetSyncValuesOML;
SAGEAPI PFNWGLGETMSCRATEOMLPROC wglGetMscRateOML;
SAGEAPI PFNWGLSWAPBUFFERSMSCOMLPROC wglSwapBuffersMscOML;
SAGEAPI PFNWGLSWAPLAYERBUFFERSMSCOMLPROC wglSwapLayerBuffersMscOML;
SAGEAPI PFNWGLWAITFORMSCOMLPROC wglWaitForMscOML;
SAGEAPI PFNWGLWAITFORSBCOMLPROC wglWaitForSbcOML;
#endif
#define WGL_I3D_digital_video_control 1
#ifdef SAGE_WGL_I3D_digital_video_control
SAGEAPI PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC wglGetDigitalVideoParametersI3D;
SAGEAPI PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC wglSetDigitalVideoParametersI3D;
#endif
#define WGL_I3D_gamma 1
#ifdef SAGE_WGL_I3D_gamma
SAGEAPI PFNWGLGETGAMMATABLEPARAMETERSI3DPROC wglGetGammaTableParametersI3D;
SAGEAPI PFNWGLSETGAMMATABLEPARAMETERSI3DPROC wglSetGammaTableParametersI3D;
SAGEAPI PFNWGLGETGAMMATABLEI3DPROC wglGetGammaTableI3D;
SAGEAPI PFNWGLSETGAMMATABLEI3DPROC wglSetGammaTableI3D;
#endif
#define WGL_I3D_genlock 1
#ifdef SAGE_WGL_I3D_genlock
SAGEAPI PFNWGLENABLEGENLOCKI3DPROC wglEnableGenlockI3D;
SAGEAPI PFNWGLDISABLEGENLOCKI3DPROC wglDisableGenlockI3D;
SAGEAPI PFNWGLISENABLEDGENLOCKI3DPROC wglIsEnabledGenlockI3D;
SAGEAPI PFNWGLGENLOCKSOURCEI3DPROC wglGenlockSourceI3D;
SAGEAPI PFNWGLGETGENLOCKSOURCEI3DPROC wglGetGenlockSourceI3D;
SAGEAPI PFNWGLGENLOCKSOURCEEDGEI3DPROC wglGenlockSourceEdgeI3D;
SAGEAPI PFNWGLGETGENLOCKSOURCEEDGEI3DPROC wglGetGenlockSourceEdgeI3D;
SAGEAPI PFNWGLGENLOCKSAMPLERATEI3DPROC wglGenlockSampleRateI3D;
SAGEAPI PFNWGLGETGENLOCKSAMPLERATEI3DPROC wglGetGenlockSampleRateI3D;
SAGEAPI PFNWGLGENLOCKSOURCEDELAYI3DPROC wglGenlockSourceDelayI3D;
SAGEAPI PFNWGLGETGENLOCKSOURCEDELAYI3DPROC wglGetGenlockSourceDelayI3D;
SAGEAPI PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC wglQueryGenlockMaxSourceDelayI3D;
#endif
#define WGL_I3D_image_buffer 1
#ifdef SAGE_WGL_I3D_image_buffer
SAGEAPI PFNWGLCREATEIMAGEBUFFERI3DPROC wglCreateImageBufferI3D;
SAGEAPI PFNWGLDESTROYIMAGEBUFFERI3DPROC wglDestroyImageBufferI3D;
SAGEAPI PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC wglAssociateImageBufferEventsI3D;
SAGEAPI PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC wglReleaseImageBufferEventsI3D;
#endif
#define WGL_I3D_swap_frame_lock 1
#ifdef SAGE_WGL_I3D_swap_frame_lock
SAGEAPI PFNWGLENABLEFRAMELOCKI3DPROC wglEnableFrameLockI3D;
SAGEAPI PFNWGLDISABLEFRAMELOCKI3DPROC wglDisableFrameLockI3D;
SAGEAPI PFNWGLISENABLEDFRAMELOCKI3DPROC wglIsEnabledFrameLockI3D;
SAGEAPI PFNWGLQUERYFRAMELOCKMASTERI3DPROC wglQueryFrameLockMasterI3D;
#endif
#define WGL_I3D_swap_frame_usage 1
#ifdef SAGE_WGL_I3D_swap_frame_usage
SAGEAPI PFNWGLGETFRAMEUSAGEI3DPROC wglGetFrameUsageI3D;
SAGEAPI PFNWGLBEGINFRAMETRACKINGI3DPROC wglBeginFrameTrackingI3D;
SAGEAPI PFNWGLENDFRAMETRACKINGI3DPROC wglEndFrameTrackingI3D;
SAGEAPI PFNWGLQUERYFRAMETRACKINGI3DPROC wglQueryFrameTrackingI3D;
#endif

SAGEAPI void sage_wgl_init(void);

#endif
