//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol UIFocusItem;

@interface _UIFocusItemRegion
{
    struct {
        unsigned int itemIsEligibleForFocusOcclusion:1;
        unsigned int itemIsFocusable:1;
        unsigned int itemIsTransparent:1;
    } _flags;	// 8 = 0x8
    id <UIFocusItem> _item;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005dc7cd
@property(readonly, nonatomic) __weak id <UIFocusItem> item; // @synthesize item=_item;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)arg1;	// IMP=0x00000000005dc768
- (id)_debugAssociatedObject;	// IMP=0x00000000005dc74f
- (long long)_preferredDistanceComparisonType;	// IMP=0x00000000005dc704
- (unsigned long long)_focusableBoundaries;	// IMP=0x00000000005dc6a6
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2 withSnapshot:(id)arg3;	// IMP=0x00000000005dc694
- (id)_defaultFocusItem;	// IMP=0x00000000005dc661
- (_Bool)_canBeOccludedByRegionsAbove;	// IMP=0x00000000005dc61d
- (_Bool)_canOccludeRegionsBelow;	// IMP=0x00000000005dc606
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005dc4be
- (id)_descriptionBuilder;	// IMP=0x00000000005dc3c9
- (id)_focusRegionWithAdjustedFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x00000000005dc330
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2 item:(id)arg3;	// IMP=0x00000000005dc2b5
- (id)initWithFrame:(struct CGRect)arg1 coordinateSpace:(id)arg2;	// IMP=0x00000000005dc2a1
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;	// IMP=0x00000000005dc162
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005dc14e

@end

