//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;
@protocol _UIStatusBarPillRegionVisualProvider;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_PillRegionCoordinator : NSObject
{
    _Bool _visualProviderImplementsBackgroundActivityPillAnimation;	// 8 = 0x8
    id <_UIStatusBarPillRegionVisualProvider> _visualProvider;	// 16 = 0x10
    _UIStatusBarDisplayItemPlacement *_backgroundActivityDetailPlacement;	// 24 = 0x18
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;	// 32 = 0x20
    _UIStatusBarRegion *_pillRegion;	// 40 = 0x28
    NSTimer *_backgroundActivityDetailTimer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000d18ab5
@property(retain, nonatomic) NSTimer *backgroundActivityDetailTimer; // @synthesize backgroundActivityDetailTimer=_backgroundActivityDetailTimer;
@property(retain, nonatomic) _UIStatusBarRegion *pillRegion; // @synthesize pillRegion=_pillRegion;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // @synthesize pillIconPlacement=_pillIconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement; // @synthesize backgroundActivityDetailPlacement=_backgroundActivityDetailPlacement;
@property(nonatomic) __weak id <_UIStatusBarPillRegionVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;
- (_Bool)handledUpdateOfActionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000d18984
- (void)updateRegion:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3 cornerRadius:(double)arg4;	// IMP=0x0000000000d1879d
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;	// IMP=0x0000000000d18567
- (id)animationForBackgroundActivityPill;	// IMP=0x0000000000d1854a
- (id)animationForBackgroundActivityIcon;	// IMP=0x0000000000d183c7
- (void)_hideActivityDetailAndUpdate:(_Bool)arg1;	// IMP=0x0000000000d182e6
- (void)updatePill;	// IMP=0x0000000000d182ca
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;	// IMP=0x0000000000d17ecd
- (void)updateDataForBackgroundActivity:(id)arg1;	// IMP=0x0000000000d17b1f

@end

