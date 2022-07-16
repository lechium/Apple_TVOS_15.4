//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXCMMCloudViewViewDelegate-Protocol.h>
#import <PhotosUICore/PXGadget-Protocol.h>

@class NSString, PXCMMCloudView, PXGadgetSpec;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget>
{
    _Bool _isCPLOn;	// 8 = 0x8
    long long _priority;	// 16 = 0x10
    id <PXCMMCloudGadgetViewControllerDelegate> _delegate;	// 24 = 0x18
    PXGadgetSpec *_gadgetSpec;	// 32 = 0x20
    NSString *_gadgetTitle;	// 40 = 0x28
    PXCMMCloudView *_cloudView;	// 48 = 0x30
}

+ (id)_userDefaults;	// IMP=0x00000000002a50cc
+ (void)setDidDismissCloudGadget:(_Bool)arg1;	// IMP=0x00000000002a5052
+ (_Bool)didDismissCloudGadget;	// IMP=0x00000000002a4ff4
- (void).cxx_destruct;	// IMP=0x00000000002a4fa3
@property(retain, nonatomic) PXCMMCloudView *cloudView; // @synthesize cloudView=_cloudView;
@property(copy, nonatomic) NSString *gadgetTitle; // @synthesize gadgetTitle=_gadgetTitle;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXCMMCloudGadgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)_updateContentInsets;	// IMP=0x00000000002a4dfd
- (id)contentViewController;	// IMP=0x00000000002a4c9c
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)arg1;	// IMP=0x00000000002a4c26
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)arg1;	// IMP=0x00000000002a4bbc
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)arg1;	// IMP=0x00000000002a4b70
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x00000000002a4b5e
- (void)_updateCPLStatus;	// IMP=0x00000000002a487e
@property(nonatomic) _Bool disableDismissAction;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002a47ac
- (void)viewDidLoad;	// IMP=0x00000000002a4726
- (id)initWithSourceType:(unsigned long long)arg1;	// IMP=0x00000000002a45cc

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly) Class superclass;
@property(nonatomic) struct CGRect visibleContentRect;

@end

