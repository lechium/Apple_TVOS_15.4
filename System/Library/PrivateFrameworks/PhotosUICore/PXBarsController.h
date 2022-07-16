//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, PXBarSpec, UIViewController;
@protocol PXActionPerformerDelegate;

@interface PXBarsController : NSObject
{
    struct {
        _Bool needsUpdateBars;
    } _needsUpdateFlags;	// 8 = 0x8
    _Bool _wantsAnimatedBarsUpdate;	// 9 = 0x9
    UIViewController *_viewController;	// 16 = 0x10
    id <PXActionPerformerDelegate> _actionPerformerDelegate;	// 24 = 0x18
    PXBarSpec *_barSpec;	// 32 = 0x20
    NSMutableDictionary *_barButtonItemCache;	// 40 = 0x28
    NSMutableDictionary *_barButtonItemCachedPlacement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000ed2f4
@property(readonly, nonatomic) NSMutableDictionary *barButtonItemCachedPlacement; // @synthesize barButtonItemCachedPlacement=_barButtonItemCachedPlacement;
@property(readonly, nonatomic) NSMutableDictionary *barButtonItemCache; // @synthesize barButtonItemCache=_barButtonItemCache;
@property(retain, nonatomic) PXBarSpec *barSpec; // @synthesize barSpec=_barSpec;
@property(nonatomic) _Bool wantsAnimatedBarsUpdate; // @synthesize wantsAnimatedBarsUpdate=_wantsAnimatedBarsUpdate;
@property(nonatomic) __weak id <PXActionPerformerDelegate> actionPerformerDelegate; // @synthesize actionPerformerDelegate=_actionPerformerDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) double fixedSpaceForEndButtonSpacing;
@property(readonly, nonatomic) double fixedSpaceForInterButtonSpacing;
- (void)purgeCachedBarButtonItemsForIdentifiers:(id)arg1;	// IMP=0x00000000000ed038
- (id)cachedBarButtonItemForIdentifier:(id)arg1;	// IMP=0x00000000000ecfb5
- (void)invalidateBarButtonItemWithIdentifier:(id)arg1;	// IMP=0x00000000000ecefe
- (id)createBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;	// IMP=0x00000000000ecac8
- (id)_getCachedOrCreateNewBarButtonItemForIdentifier:(id)arg1 placement:(unsigned long long)arg2;	// IMP=0x00000000000ec8c9
@property(readonly, nonatomic) NSArray *toolbarItemIdentifiers;
@property(readonly, nonatomic) NSArray *rightBarButtonItemIdentifiers;
@property(readonly, nonatomic) NSArray *leftBarButtonItemIdentifiers;
- (void)updateBars;	// IMP=0x00000000000ec6c4
- (void)viewControllerDidChange;	// IMP=0x00000000000ec6be
- (void)_updateBarsIfNeeded;	// IMP=0x00000000000ec5a3
- (void)updateIfNeeded;	// IMP=0x00000000000ec56c
- (void)invalidateBars;	// IMP=0x00000000000ec562
- (_Bool)_needsUpdate;	// IMP=0x00000000000ec559
- (id)init;	// IMP=0x00000000000ec4d0

@end

