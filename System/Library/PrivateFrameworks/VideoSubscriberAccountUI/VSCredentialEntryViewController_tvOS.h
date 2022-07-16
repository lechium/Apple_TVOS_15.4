//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSCredentialEntryFieldViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSCredentialEntryPickerViewControllerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSCredentialEntryViewController-Protocol.h>

@class NSString, VSCredentialEntryViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewController_tvOS : UIViewController <UIGestureRecognizerDelegate, VSCredentialEntryFieldViewControllerDelegate, VSCredentialEntryPickerViewControllerDelegate, VSCredentialEntryViewController>
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    _Bool _hasAppeared;	// 9 = 0x9
    VSCredentialEntryViewModel *_viewModel;	// 16 = 0x10
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 24 = 0x18
    UIViewController *_currentChildViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a8fb
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) UIViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VSCredentialEntryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000a387
- (void)credentialEntryPickerViewControllerDidCancel:(id)arg1;	// IMP=0x000000000000a268
- (void)credentialEntryPickerViewController:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2;	// IMP=0x000000000000a1dc
- (void)credentialEntryFieldViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000009e2b
- (void)credentialEntryFieldViewControllerDidFinish:(id)arg1;	// IMP=0x0000000000009a71
- (void)_updateChildViewControllerForPicker:(id)arg1;	// IMP=0x0000000000009958
- (id)_credentialEntryFieldViewControllerForField:(id)arg1;	// IMP=0x00000000000094e3
- (id)_currentCredentialEntryFieldViewController;	// IMP=0x00000000000093de
- (void)_updateChildViewControllerForCredentialEntryField:(id)arg1;	// IMP=0x00000000000090f2
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000009079
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000008ff4
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000008e1c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000008de3
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000008daa
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000008cbf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000008c86
- (void)viewDidLoad;	// IMP=0x0000000000008c4d
- (void)dealloc;	// IMP=0x0000000000008c04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

