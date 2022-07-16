//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXViewControllerPinchTransitionSettings, PXViewControllerSwipeDownTransitionSettings, PXViewControllerZoomTransitionSettings;

@interface PXViewControllerTransitionSettings
{
    PXViewControllerZoomTransitionSettings *_zoomTransitionSettings;	// 8 = 0x8
    PXViewControllerPinchTransitionSettings *_pinchTransitionSettings;	// 16 = 0x10
    PXViewControllerSwipeDownTransitionSettings *_swipeDownTransitionSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000090bbf1
+ (id)settingsControllerModule;	// IMP=0x00000000006d9467
- (void).cxx_destruct;	// IMP=0x000000000090b743
@property(retain, nonatomic) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings; // @synthesize swipeDownTransitionSettings=_swipeDownTransitionSettings;
@property(retain, nonatomic) PXViewControllerPinchTransitionSettings *pinchTransitionSettings; // @synthesize pinchTransitionSettings=_pinchTransitionSettings;
@property(retain, nonatomic) PXViewControllerZoomTransitionSettings *zoomTransitionSettings; // @synthesize zoomTransitionSettings=_zoomTransitionSettings;
- (void)createChildren;	// IMP=0x000000000090b632
- (id)parentSettings;	// IMP=0x000000000090b619

@end
