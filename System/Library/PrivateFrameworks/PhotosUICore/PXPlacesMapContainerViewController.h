//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGridPresentationBarsUpdateDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapBarButtonsDelegate-Protocol.h>

@class NSString, PXPlacesMapFetchResultViewController, PXProgrammaticNavigationDestination, UISegmentedControl;

@interface PXPlacesMapContainerViewController : UIViewController <PXPlacesMapBarButtonsDelegate, PXGridPresentationBarsUpdateDelegate>
{
    _Bool _gridControllerEditing;	// 8 = 0x8
    PXProgrammaticNavigationDestination *_px_navigationDestination;	// 16 = 0x10
    PXPlacesMapFetchResultViewController *_fetchResultViewController;	// 24 = 0x18
    unsigned long long _previousNavigationBarSegmentedControlSelectedIndex;	// 32 = 0x20
    UISegmentedControl *_subviewControl;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000537317
@property(nonatomic) _Bool gridControllerEditing; // @synthesize gridControllerEditing=_gridControllerEditing;
@property(retain, nonatomic) UISegmentedControl *subviewControl; // @synthesize subviewControl=_subviewControl;
@property(nonatomic) unsigned long long previousNavigationBarSegmentedControlSelectedIndex; // @synthesize previousNavigationBarSegmentedControlSelectedIndex=_previousNavigationBarSegmentedControlSelectedIndex;
@property(readonly, nonatomic) PXPlacesMapFetchResultViewController *fetchResultViewController; // @synthesize fetchResultViewController=_fetchResultViewController;
- (id)px_navigationDestination;	// IMP=0x00000000005371e7
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000053709f
- (unsigned long long)routingOptionsForDestination:(id)arg1;	// IMP=0x000000000053701e
- (void)setToolbarButtons:(id)arg1;	// IMP=0x000000000053700c
- (void)setNavigationBarButtons:(id)arg1;	// IMP=0x0000000000536f9a
- (void)_resetNavigationItem;	// IMP=0x0000000000536ee0
- (void)viewControllerDidUpdateNavigationItemAppearance:(id)arg1;	// IMP=0x0000000000536dda
- (void)viewController:(id)arg1 didUpdateBarsAnimated:(_Bool)arg2 isSelecting:(_Bool)arg3;	// IMP=0x0000000000536a8d
- (void)_updateShouldOptOutFromChromelessBars;	// IMP=0x000000000053692d
- (_Bool)pu_shouldOptOutFromChromelessBars;	// IMP=0x0000000000536914
- (void)subviewControlChanged:(id)arg1;	// IMP=0x000000000053656d
- (void)viewDidLoad;	// IMP=0x000000000053637f
- (void)loadView;	// IMP=0x0000000000536273
- (id)init;	// IMP=0x0000000000536185

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
