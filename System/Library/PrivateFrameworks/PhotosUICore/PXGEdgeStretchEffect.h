//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGShader, PXGUniform;

@interface PXGEdgeStretchEffect
{
    PXGShader *_shader;	// 8 = 0x8
    PXGUniform *_sampleRect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030ffa3
- (id)shader;	// IMP=0x000000000030ff8e
@property(nonatomic) struct CGRect sampleRect;
- (id)initWithEntityManager:(id)arg1;	// IMP=0x000000000030fd5e

@end

