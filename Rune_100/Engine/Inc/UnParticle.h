//**************************************************************************
//**
//** UnParticle.h
//**
//** Particle system
//**************************************************************************

#if !defined(_UNPARTICLE_INCLUDED_)
#define _UNPARTICLE_INCLUDED_

// HEADER FILES ------------------------------------------------------------

// MACROS ------------------------------------------------------------------

// TYPES -------------------------------------------------------------------

typedef struct
{
	FVector Location;
	FVector Velocity;
	FLOAT LifeSpan;
	INT TextureIndex;
	FLOAT XScale;
	FLOAT YScale;
	FLOAT ScaleStartX;
	FLOAT ScaleStartY;
	FVector Alpha;
	BYTE Style;
	UBOOL Valid;
	INT Index;
	FLOAT WaitToSpawnTime;
	FLOAT TextureChangeTime;	
	FLOAT U0, V0;		// WeaponSwipe
	FLOAT U1, V1;
	FVector Points[4];
} Particle_t;

#endif