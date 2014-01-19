/**********************************************************************
 Copyright (c) Imagination Technologies Ltd.

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ******************************************************************************/

#ifndef __INCLUDED_PRIVATE_DATA_H_
#define __INCLUDED_PRIVATE_DATA_H_

#if defined(SUPPORT_DRI_DRM) && defined(PVR_SECURE_DRM_AUTH_EXPORT)
#include <linux/list.h>
#include <drm/drmP.h>
#endif

typedef struct
{

	IMG_UINT32 ui32OpenPID;

#if defined(PVR_SECURE_FD_EXPORT)

	IMG_HANDLE hKernelMemInfo;
#endif

#if defined(SUPPORT_DRI_DRM) && defined(PVR_SECURE_DRM_AUTH_EXPORT)

	struct list_head sDRMAuthListItem;

	struct drm_file *psDRMFile;
#endif

#if defined(SUPPORT_MEMINFO_IDS)

	IMG_UINT64 ui64Stamp;
#endif


	IMG_HANDLE hBlockAlloc;

#if defined(SUPPORT_DRI_DRM_EXT)
	IMG_PVOID pPriv;
#endif
}
PVRSRV_FILE_PRIVATE_DATA;

#endif
