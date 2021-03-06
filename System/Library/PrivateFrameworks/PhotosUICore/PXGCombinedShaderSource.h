//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PXGCombinedShaderSource
{
    NSArray *_combinedShaderSources;	// 8 = 0x8
    NSArray *_combinedUniforms;	// 16 = 0x10
    _Bool _isEmpty;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e50e2
@property(readonly, nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
- (id)aliasedUniformsForEffects:(id)arg1;	// IMP=0x00000000000e502f
- (_Bool)isValidForEffects:(id)arg1;	// IMP=0x00000000000e4d71
- (id)description;	// IMP=0x00000000000e4cf5
- (id)initWithEffects:(id)arg1;	// IMP=0x00000000000e4468

@end

