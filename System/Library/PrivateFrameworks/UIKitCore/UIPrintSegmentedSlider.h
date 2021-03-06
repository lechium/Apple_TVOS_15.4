//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIPrintSegmentedSlider
{
    UIColor *_trackMarkersColor;	// 8 = 0x8
    _Bool _segmented;	// 16 = 0x10
    _Bool _locksToSegment;	// 17 = 0x11
    _Bool _snapsToSegment;	// 18 = 0x12
    unsigned long long _segmentCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ab630e
@property(nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property(nonatomic) _Bool snapsToSegment; // @synthesize snapsToSegment=_snapsToSegment;
@property(nonatomic) _Bool locksToSegment; // @synthesize locksToSegment=_locksToSegment;
@property(nonatomic, getter=isSegmented) _Bool segmented; // @synthesize segmented=_segmented;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000ab6076
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000ab5d69
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ab5bb0
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;	// IMP=0x0000000000ab5b3b
- (unsigned long long)numberOfTicks;	// IMP=0x0000000000ab5a9d
- (void)sliderTapped:(id)arg1;	// IMP=0x0000000000ab591e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000ab57a3

@end

