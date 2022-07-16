//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider-Protocol.h>
#import <UIKitCore/_UIStatusBarPillRegionVisualProvider-Protocol.h>
#import <UIKitCore/_UIStatusBarVisualProvider-Protocol.h>

@class NSString, _UIStatusBar, _UIStatusBarRegion, _UIStatusBarVisualProvider_PillRegionCoordinator;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider, _UIStatusBarPillRegionVisualProvider>
{
    _Bool _showingSensorActivityIndicator;	// 8 = 0x8
    _Bool _showingPill;	// 9 = 0x9
    _UIStatusBar *_statusBar;	// 16 = 0x10
    _UIStatusBarVisualProvider_PillRegionCoordinator *_pillRegionCoordinator;	// 24 = 0x18
    _UIStatusBarRegion *_timeRegion;	// 32 = 0x20
    _UIStatusBarRegion *_radarRegion;	// 40 = 0x28
}

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;	// IMP=0x0000000000c64744
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;	// IMP=0x0000000000c646a6
- (void).cxx_destruct;	// IMP=0x0000000000c656eb
@property(nonatomic) _Bool showingPill; // @synthesize showingPill=_showingPill;
@property(nonatomic) _Bool showingSensorActivityIndicator; // @synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator;
@property(retain, nonatomic) _UIStatusBarRegion *radarRegion; // @synthesize radarRegion=_radarRegion;
@property(retain, nonatomic) _UIStatusBarRegion *timeRegion; // @synthesize timeRegion=_timeRegion;
@property(retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator; // @synthesize pillRegionCoordinator=_pillRegionCoordinator;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;	// IMP=0x0000000000c65647
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000c6563a
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000c654d0
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000c654c3
- (id)_animationForPillTime;	// IMP=0x0000000000c6549f
- (id)_animationForSensorIndicator;	// IMP=0x0000000000c65401
- (id)_defaultScaleAnimationWithIdentifier:(id)arg1;	// IMP=0x0000000000c65376
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000c6522b
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000c64fcc
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000c64d6d
- (id)willUpdateWithData:(id)arg1;	// IMP=0x0000000000c64b85
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000c648d9
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000c648c3
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000c64899
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000c6480c
@property(nonatomic) _Bool expanded;
- (id)init;	// IMP=0x0000000000c64755

// Remaining properties
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

