#ifndef B3_FLOAT4_H
#define B3_FLOAT4_H

#include "Bullet3Common/shared/b3PlatformDefinitions.h"

#ifdef __cplusplus
	#include "Bullet3Common/b3Vector3.h"
	#define b3Float4 b3Vector3
	#define b3Float4ConstArg const b3Vector3&
	#define b3Dot3F4 b3Dot
	#define b3Cross3 b3Cross
	#define	b3MakeFloat4  b3MakeVector3
#else
	typedef float4	b3Float4;
	#define b3Float4ConstArg const b3Float4
	#define b3MakeFloat4 (float4)
	float b3Dot3F4(b3Float4ConstArg v0,b3Float4ConstArg v1)
	{
		float4 a1 = b3MakeFloat4(v0.xyz,0.f);
		float4 b1 = b3MakeFloat4(v1.xyz,0.f);
		return dot(a1, b1);
	}
	b3Float4 b3Cross3(b3Float4ConstArg v0,b3Float4ConstArg v1)
	{
		float4 a1 = b3MakeFloat4(v0.xyz,0.f);
		float4 b1 = b3MakeFloat4(v1.xyz,0.f);
		return cross(a1, b1);
	}
#endif 

#endif //B3_FLOAT4_H
