//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol PBRemoteBulletinViewControllerDelegate;

@interface PBRemoteBulletinViewController : _UIRemoteViewController
{
    struct {
        unsigned int respondsToDidReceiveBulletinResponse:1;
    } _delegateFlags;	// 8 = 0x8
    _Bool _userInteractionEnabled;	// 12 = 0xc
    id <PBRemoteBulletinViewControllerDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _clientPresentationCompletion;	// 24 = 0x18
}

+ (id)exportedInterface;	// IMP=0x002000000013de30
+ (id)serviceViewControllerInterface;	// IMP=0x001000000013de10
- (void).cxx_destruct;	// IMP=0x002000000013e2a0
@property(copy, nonatomic) CDUnknownBlockType clientPresentationCompletion; // @synthesize clientPresentationCompletion=_clientPresentationCompletion;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) __weak id <PBRemoteBulletinViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_callClientCompletionWithSuccess:(_Bool)arg1;	// IMP=0x001000000013dff0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000013df90
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x001000000013de50
- (void)didReceiveBulletinResponse:(id)arg1;	// IMP=0x001000000013dd70
- (void)dismissViewServiceWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013d210
- (void)updateViewServiceWithBulletin:(id)arg1;	// IMP=0x001000000013d0d0
- (void)prepareViewServiceWithBulletin:(id)arg1;	// IMP=0x001000000013cf90
- (void)toggleBulletinSize;	// IMP=0x001000000013cf30
- (void)handleMenuButtonWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013cbb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
