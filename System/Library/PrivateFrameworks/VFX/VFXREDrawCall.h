//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface VFXREDrawCall : NSObject
{
    MISSING_TYPE *drawCall;	// 8 = 0x8
    MISSING_TYPE *material;	// 232 = 0xe8
    MISSING_TYPE *aabb;	// 368 = 0x170
    MISSING_TYPE *reProvidedBuffers;	// 400 = 0x190
    MISSING_TYPE *reProvidedTextures;	// 408 = 0x198
}

- (void).cxx_destruct;	// IMP=0x0000000000480fb0
- (id)init;	// IMP=0x0000000000480f70
- (MISSING_TYPE *)boundingBoxMax;	// IMP=0x0000000000480cd0
- (MISSING_TYPE *)boundingBoxMin;	// IMP=0x0000000000480c90
- (void)enumerateTextures:(CDUnknownBlockType)arg1;	// IMP=0x0000000000480c50
- (unsigned long long)winding;	// IMP=0x00000000004804c0
- (unsigned long long)primitiveType;	// IMP=0x0000000000480480
- (long long)instanceCount;	// IMP=0x0000000000480440
- (long long)vertexCount;	// IMP=0x0000000000480400
- (long long)indexBufferSize;	// IMP=0x0000000000480100
- (long long)indexBufferOffset;	// IMP=0x000000000047fb40
- (id)indexBuffer;	// IMP=0x000000000047f820
- (unsigned char)indexType;	// IMP=0x000000000047f640
- (long long)indexCount;	// IMP=0x000000000047f600
- (void)withDefaultIBLConstantBuffer:(void *)arg1:(CDUnknownBlockType)arg2;	// IMP=0x000000000047f560
- (void)withDefaultLightConstantBuffer:(void *)arg1:(CDUnknownBlockType)arg2;	// IMP=0x000000000047f3f0
- (_Bool)hasLightingEnabled;	// IMP=0x000000000047f270
- (id)meshIdentifier;	// IMP=0x000000000047f200
- (void)enumerateBuffers:(CDUnknownBlockType)arg1;	// IMP=0x000000000047f1b0
- (unsigned long long)materialIdentifier;	// IMP=0x000000000047e650

@end
