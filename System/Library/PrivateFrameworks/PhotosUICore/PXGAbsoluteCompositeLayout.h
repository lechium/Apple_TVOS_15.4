//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _PXGAbsoluteSublayoutComposition;

@interface PXGAbsoluteCompositeLayout
{
    _PXGAbsoluteSublayoutComposition *_absoluteComposition;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000516758
@property(readonly, nonatomic) _PXGAbsoluteSublayoutComposition *absoluteComposition; // @synthesize absoluteComposition=_absoluteComposition;
@property(nonatomic) _Bool shouldUpdateSublayoutsInStrictOrder;
- (void)setSpriteTransform:(CDStruct_c1f6e9bb)arg1 forSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000516660
- (void)setReferenceDepths:(const double *)arg1 forSublayoutsInRange:(struct _NSRange)arg2;	// IMP=0x0000000000516600
- (void)setReferenceDepth:(double)arg1 forSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000005165d4
- (void)setZPositions:(const double *)arg1 forSublayoutsInRange:(struct _NSRange)arg2;	// IMP=0x0000000000516574
- (void)setZPosition:(double)arg1 forSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000516548
- (void)setFrames:(const struct CGRect *)arg1 forSublayoutsInRange:(struct _NSRange)arg2;	// IMP=0x00000000005164e8
- (void)setFrame:(struct CGRect)arg1 forSublayoutAtIndex:(long long)arg2;	// IMP=0x00000000005164c8
- (void)setOrigins:(const struct CGPoint *)arg1 forSublayoutsInRange:(struct _NSRange)arg2;	// IMP=0x0000000000516468
- (void)setOrigin:(struct CGPoint)arg1 forSublayoutAtIndex:(long long)arg2;	// IMP=0x0000000000516437
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x00000000005163b6
- (void)removeSublayoutsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000516338
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000516290
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000005161f0
- (id)initWithComposition:(id)arg1;	// IMP=0x000000000051616d
- (id)init;	// IMP=0x00000000005160f8

@end

