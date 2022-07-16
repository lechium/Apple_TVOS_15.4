//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderPipelineConfiguration : NSObject
{
    _Bool _hasVisibleRings;	// 8 = 0x8
    _Bool _hasEmptyRing;	// 9 = 0x9
    _Bool _hasFilledRing;	// 10 = 0xa
    _Bool _needsAlphaReductionPass;	// 11 = 0xb
    _Bool _hasOverlappingRing;	// 12 = 0xc
}

@property(nonatomic) _Bool hasOverlappingRing; // @synthesize hasOverlappingRing=_hasOverlappingRing;
@property(nonatomic) _Bool needsAlphaReductionPass; // @synthesize needsAlphaReductionPass=_needsAlphaReductionPass;
@property(nonatomic) _Bool hasFilledRing; // @synthesize hasFilledRing=_hasFilledRing;
@property(nonatomic) _Bool hasEmptyRing; // @synthesize hasEmptyRing=_hasEmptyRing;
@property(nonatomic) _Bool hasVisibleRings; // @synthesize hasVisibleRings=_hasVisibleRings;

@end

