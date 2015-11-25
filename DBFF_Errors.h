/*	File:		DBFF_Errors.h	Contains:	Error codes for errors returned from DBFF functions.	Written by: Mark Cookson		Copyright:	Copyright � 1996-1999 by Apple Computer, Inc., All Rights Reserved.				You may incorporate this Apple sample source code into your program(s) without				restriction. This Apple sample source code has been provided "AS IS" and the				responsibility for its operation is yours. You are not permitted to redistribute				this Apple sample source code as "Apple sample source code" after having made				changes. If you're going to re-distribute the source, we require that you make				it clear in the source that the code was descended from Apple sample source				code, but that you've made changes.	Change History (most recent first):				8/13/1999	Karl Groethe	Updated for Metrowerks Codewarror Pro 2.1				*/#ifndef __DBFFERRORS__#define __DBFFERRORS__#define kInitErr			128	/* An error starting up that we can't recover from */#define kNoSPDBErr			129	/* SoundPlayDoubleBuffer is not supported on this Mac, can't play */#define kOldSndMgrErr		130	/* Need to have Sound Manager 3.0 or greater */#define kNilPtrErr			131	/* A nil pointer was passed to a routine */#define kBadRange			132	/* A value that is out of range was passed */#define kBadValue			133	/* A bad value was passed */#define kUnknownFormat		134	/* A file format we can't deal with */#define kBadWAVEFileFormat	135	/* A WAVE file with a bad file format */#define kFileErr			136	/* An error directly relating a file operation */#endif