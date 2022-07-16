//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class BSSimpleAssertion, BSWatchdog, NSString;
@protocol PBSimpleRemoteViewControllerDelegate;

@interface PBSimpleRemoteViewController : _UIRemoteViewController
{
    _Bool _terminated;	// 8 = 0x8
    unsigned long long _version;	// 16 = 0x10
    id <PBSimpleRemoteViewControllerDelegate> _delegate;	// 24 = 0x18
    BSSimpleAssertion *_dismissalAssertion;	// 32 = 0x20
    BSWatchdog *_dismissalWatchdog;	// 40 = 0x28
}

+ (id)exportedInterface;	// IMP=0x0020000000214f00
+ (id)serviceViewControllerInterface;	// IMP=0x0010000000214c40
- (void).cxx_destruct;	// IMP=0x00200000002152b0
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) BSWatchdog *dismissalWatchdog; // @synthesize dismissalWatchdog=_dismissalWatchdog;
@property(readonly, nonatomic) BSSimpleAssertion *dismissalAssertion; // @synthesize dismissalAssertion=_dismissalAssertion;
@property(nonatomic) __weak id <PBSimpleRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)dealloc;	// IMP=0x0010000000214be0
- (void)_dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 dismissalResult:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002145c0
- (void)dismissWithResult:(id)arg1;	// IMP=0x00100000002141a0
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0010000000214020
- (void)dismissViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000213f80
- (void)messageViewServiceWithMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000213dd0
- (void)prepareViewServiceAnimated:(_Bool)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000213b40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
