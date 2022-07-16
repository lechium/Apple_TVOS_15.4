//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, PXGUniform;

@interface PXGUniformAlias
{
    PXGUniform *_original;	// 112 = 0x70
    long long _index;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000006e0461
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) PXGUniform *original; // @synthesize original=_original;
- (const void *)bytes;	// IMP=0x00000000006e03f3
- (long long)bytesLength;	// IMP=0x00000000006e03af
- (id)cachedTexture;	// IMP=0x00000000006e035f
- (void)setCachedTexture:(id)arg1;	// IMP=0x00000000006e02ed
- (CDUnknownBlockType)textureProvider;	// IMP=0x00000000006e029d
- (struct CGImage *)image;	// IMP=0x00000000006e0259
- (MISSING_TYPE *)float4Value;	// IMP=0x00000000006e020b
- (MISSING_TYPE *)float3Value;	// IMP=0x00000000006e01bd
- (MISSING_TYPE *)float2Value;	// IMP=0x00000000006e016d
- (float)floatValue;	// IMP=0x00000000006e011d
- (_Bool)isEquivalentToUniform:(id)arg1;	// IMP=0x00000000006dff77
- (id)description;	// IMP=0x00000000006dfeae
- (id)name;	// IMP=0x00000000006dfe05
- (id)initWithIndex:(long long)arg1 aliasing:(id)arg2;	// IMP=0x00000000006dfd41
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000006dfcbe

@end

