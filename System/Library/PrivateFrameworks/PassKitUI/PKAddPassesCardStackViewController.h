//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKGroupsControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDatasource-Protocol.h>
#import <PassKitUI/PKPassGroupStackViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPersonalizationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, PKGroupsController, PKPassGroupStackView, PKPassesXPCContainer;
@protocol PKAddPassesCardStackViewControllerDelegate;

@interface PKAddPassesCardStackViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDelegate, PKPassGroupStackViewDatasource, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate, UIScrollViewDelegate>
{
    NSArray *_passes;	// 8 = 0x8
    PKPassesXPCContainer *_passesContainer;	// 16 = 0x10
    NSArray *_passDataArray;	// 24 = 0x18
    PKGroupsController *_groupsController;	// 32 = 0x20
    PKPassGroupStackView *_passGroupStackView;	// 40 = 0x28
    NSString *_personalizatonToken;	// 48 = 0x30
    unsigned long long _presentationSource;	// 56 = 0x38
    id <PKAddPassesCardStackViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001a7841
@property(nonatomic) __weak id <PKAddPassesCardStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureAddOrNextButtonItemAsPending:(_Bool)arg1;	// IMP=0x00000000001a75d2
- (void)_configureNavigationItemTitle;	// IMP=0x00000000001a7243
- (void)_nextButtonPressedForAutomaticPresentation:(id)arg1;	// IMP=0x00000000001a6fcb
- (void)_nextButtonPressedForPersonalization:(id)arg1;	// IMP=0x00000000001a6d34
- (void)_addButtonPressed:(id)arg1;	// IMP=0x00000000001a68ee
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x00000000001a68a7
- (void)_addPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a67e3
- (void)resetBrightness;	// IMP=0x00000000001a67c6
- (void)evaluateBrightness;	// IMP=0x00000000001a67a9
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;	// IMP=0x00000000001a6762
- (void)passPersonalizationViewController:(id)arg1 didFinishPersonalizingPass:(id)arg2;	// IMP=0x00000000001a66a0
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x00000000001a6683
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001a6660
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001a6583
- (_Bool)isInField;	// IMP=0x00000000001a657b
- (_Bool)supportsExternalPresentation;	// IMP=0x00000000001a6573
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a64ff
- (unsigned long long)suppressedContent;	// IMP=0x00000000001a64e7
- (void)groupStackViewDidEndReordering:(id)arg1;	// IMP=0x00000000001a64c5
- (void)groupStackViewDidBeginReordering:(id)arg1;	// IMP=0x00000000001a64a3
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;	// IMP=0x00000000001a644c
- (void)reloadGroupsForGroupStackView:(id)arg1;	// IMP=0x00000000001a6446
- (_Bool)hasDiscoveryContent;	// IMP=0x00000000001a643e
- (unsigned long long)indexOfSeparationGroup;	// IMP=0x00000000001a6421
- (unsigned long long)indexOfGroup:(id)arg1;	// IMP=0x00000000001a6404
- (unsigned long long)numberOfGroups;	// IMP=0x00000000001a63e7
- (id)groupAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a6395
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001a6281
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001a5fe9
- (void)viewDidLoad;	// IMP=0x00000000001a5b64
- (void)dealloc;	// IMP=0x00000000001a5ad5
- (id)initWithPasses:(id)arg1 orPassesContainer:(id)arg2 fromPresentationSource:(unsigned long long)arg3;	// IMP=0x00000000001a55cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

