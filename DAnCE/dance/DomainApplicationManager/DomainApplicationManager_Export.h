
// -*- C++ -*-
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl -s DomainApplicationManager
// ------------------------------
#ifndef DOMAINAPPLICATIONMANAGER_EXPORT_H
#define DOMAINAPPLICATIONMANAGER_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (DOMAINAPPLICATIONMANAGER_HAS_DLL)
#  define DOMAINAPPLICATIONMANAGER_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && DOMAINAPPLICATIONMANAGER_HAS_DLL */

#if !defined (DOMAINAPPLICATIONMANAGER_HAS_DLL)
#  define DOMAINAPPLICATIONMANAGER_HAS_DLL 1
#endif /* ! DOMAINAPPLICATIONMANAGER_HAS_DLL */

#if defined (DOMAINAPPLICATIONMANAGER_HAS_DLL) && (DOMAINAPPLICATIONMANAGER_HAS_DLL == 1)
#  if defined (DOMAINAPPLICATIONMANAGER_BUILD_DLL)
#    define DomainApplicationManager_Export ACE_Proper_Export_Flag
#    define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* DOMAINAPPLICATIONMANAGER_BUILD_DLL */
#    define DomainApplicationManager_Export ACE_Proper_Import_Flag
#    define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* DOMAINAPPLICATIONMANAGER_BUILD_DLL */
#else /* DOMAINAPPLICATIONMANAGER_HAS_DLL == 1 */
#  define DomainApplicationManager_Export
#  define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARATION(T)
#  define DOMAINAPPLICATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* DOMAINAPPLICATIONMANAGER_HAS_DLL == 1 */

// Set DOMAINAPPLICATIONMANAGER_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (DOMAINAPPLICATIONMANAGER_NTRACE)
#  if (ACE_NTRACE == 1)
#    define DOMAINAPPLICATIONMANAGER_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define DOMAINAPPLICATIONMANAGER_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !DOMAINAPPLICATIONMANAGER_NTRACE */

#if (DOMAINAPPLICATIONMANAGER_NTRACE == 1)
#  define DOMAINAPPLICATIONMANAGER_TRACE(X)
#else /* (DOMAINAPPLICATIONMANAGER_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define DOMAINAPPLICATIONMANAGER_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (DOMAINAPPLICATIONMANAGER_NTRACE == 1) */

#endif /* DOMAINAPPLICATIONMANAGER_EXPORT_H */

// End of auto generated file.
