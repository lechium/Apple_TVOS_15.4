//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISegmentedControl.h>

@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl
{
    _Bool _lastTouchRemainedOnSelectedSegment;	// 8 = 0x8
}

+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;	// IMP=0x000000000019e4d9
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;	// IMP=0x000000000019e4cb
@property(readonly, nonatomic) _Bool lastTouchRemainedOnSelectedSegment; // @synthesize lastTouchRemainedOnSelectedSegment=_lastTouchRemainedOnSelectedSegment;
- (void)_highlightSegment:(long long)arg1;	// IMP=0x000000000019e45a
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000019e420
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000019e32f
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000019e2f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019e1aa

@end

