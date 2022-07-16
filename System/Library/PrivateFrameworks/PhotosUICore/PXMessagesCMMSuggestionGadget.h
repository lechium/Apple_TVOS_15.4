//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXGadgetSpec, PXRoundedCornerOverlayView, PXUpdater;
@protocol PXCMMSuggestion, PXGadgetDelegate, PXMessagesCMMSuggestionGadgetActionDelegate;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget>
{
    PXUpdater *_updater;	// 8 = 0x8
    PXCMMPosterHeaderView *_posterHeaderView;	// 16 = 0x10
    PXRoundedCornerOverlayView *_roundedOverlayView;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    id <PXGadgetDelegate> _delegate;	// 40 = 0x28
    PXGadgetSpec *_gadgetSpec;	// 48 = 0x30
    id <PXCMMSuggestion> _suggestion;	// 56 = 0x38
    id <PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004c6c3f
@property(nonatomic) __weak id <PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) id <PXCMMSuggestion> suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004c6a8f
- (void)userDidSelectGadget;	// IMP=0x00000000004c69f2
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (id)contentViewController;	// IMP=0x00000000004c69d3
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)_updatePosterHeaderView;	// IMP=0x00000000004c686b
- (void)viewWillLayoutSubviews;	// IMP=0x00000000004c669c
- (void)_scheduleLayout;	// IMP=0x00000000004c665f
- (void)viewDidLoad;	// IMP=0x00000000004c64f4
- (id)initWithSuggestion:(id)arg1;	// IMP=0x00000000004c63a6
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000004c6316
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004c6293

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

