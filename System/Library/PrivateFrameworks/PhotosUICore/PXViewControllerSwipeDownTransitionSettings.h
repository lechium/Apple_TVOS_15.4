//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings
{
    _Bool _allowSwipeDown;	// 8 = 0x8
    double _minimumDimmingOpacity;	// 16 = 0x10
    PXSwipeDownSettings *_swipeDownSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000090b8bd
+ (id)settingsControllerModule;	// IMP=0x00000000006d9637
- (void).cxx_destruct;	// IMP=0x000000000090b8aa
@property(retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;
@property(nonatomic) double minimumDimmingOpacity; // @synthesize minimumDimmingOpacity=_minimumDimmingOpacity;
@property(nonatomic) _Bool allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
- (void)setDefaultValues;	// IMP=0x000000000090b7de
- (void)createChildren;	// IMP=0x000000000090b79e
- (id)parentSettings;	// IMP=0x000000000090b785

@end
