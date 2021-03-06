//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertControllerContaining-Protocol.h>

@class NSObject, NSString, UIAlertController, _UIResilientRemoteViewContainerViewController;
@protocol OS_dispatch_semaphore;

@interface _UIScreenRoutePickerViewController <UIAlertControllerContaining>
{
    UIAlertController *_alertController;	// 400 = 0x190
    _UIResilientRemoteViewContainerViewController *_childViewController;	// 408 = 0x198
    NSObject<OS_dispatch_semaphore> *_remoteViewControllerSemaphore;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x000000000077434f
- (void)setModalPresentationStyle:(long long)arg1;	// IMP=0x0000000000774332
- (long long)modalPresentationStyle;	// IMP=0x0000000000774315
- (id)_containedAlertController;	// IMP=0x0000000000774300
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000774298
- (_Bool)_requiresCustomPresentationController;	// IMP=0x0000000000774290
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000774232
- (void)setCurrentOutputDeviceEnabled:(_Bool)arg1;	// IMP=0x0000000000773fbb
- (void)disconnectRoute;	// IMP=0x0000000000773d55
- (id)remoteViewController;	// IMP=0x0000000000773d38
- (void)_setChildViewController:(id)arg1;	// IMP=0x0000000000773bd6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000773ba7
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000773659
- (void)dealloc;	// IMP=0x000000000077351f
- (id)init;	// IMP=0x00000000007734c2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000007734b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

