/*=============================================================================
	UnObjVer.h: Unreal object version.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.
=============================================================================*/

/*-----------------------------------------------------------------------------
	Version coding.
-----------------------------------------------------------------------------*/

// Unreal engine build number, used to be ENGINE_VERSION, used for legacy unreal code
#define UNREAL_VERSION  405

// Earliest engine build that is network compatible with this one.
#define ENGINE_MIN_NET_VERSION 005

// Engine build number, for displaying to end users.
#define ENGINE_VERSION 005

// Base protocol version to negotiate in network play.
#define ENGINE_NEGOTIATION_VERSION 005

// Prevents incorrect files from being loaded.
#define PACKAGE_FILE_TAG 0x9E2A83C1

// The current Unrealfile version.
#define PACKAGE_FILE_VERSION 69

// The earliest file version which we can load with complete
// backwards compatibility. Must be at least PACKAGE_FILE_VERSION.
#define PACKAGE_MIN_VERSION 60

// RUNE: Game version, 2 implied fixed point digits (001 == 0.01)
/*	Revision log

	ver		date		engine version		desc
	---		--------	--------------		-------------------------------
	001		09-13-00	405					created
	002		09-28-00	405					feature complete
	003		10-01-00	405					
	004		10-04-00	405					copper
	obsolute - switched to using engine_version
*/
#define GAME_VERSION 004

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/

