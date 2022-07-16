//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVSystemUI/TVSUIViewServiceProxyDelegate-Protocol.h>

@class NSArray, NSString, TVSUIViewServiceContext, TVSUIViewServiceProxy;
@protocol TVSUIViewServiceViewControllerDelegate;

@interface TVSUIViewServiceViewController : UIViewController <TVSUIViewServiceProxyDelegate>
{
    struct {
        unsigned int didAddHostViewController:1;
        unsigned int didReceiveItemsFromViewService:1;
        unsigned int didChangeAnimationState:1;
        unsigned int didEncounterError:1;
    } _delegateRespondsTo;	// 8 = 0x8
    id <TVSUIViewServiceViewControllerDelegate> _delegate;	// 16 = 0x10
    long long _lastAnimationState;	// 24 = 0x18
    NSArray *_launchInputItems;	// 32 = 0x20
    TVSUIViewServiceProxy *_proxy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002e8a3
@property(retain, nonatomic) TVSUIViewServiceProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSArray *launchInputItems; // @synthesize launchInputItems=_launchInputItems;
@property(nonatomic) long long lastAnimationState; // @synthesize lastAnimationState=_lastAnimationState;
@property(nonatomic) __weak id <TVSUIViewServiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupConstraints;	// IMP=0x000000000002e571
- (void)proxy:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x000000000002e4f0
- (void)proxy:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x000000000002e447
- (void)proxy:(id)arg1 didReceiveItemsFromViewService:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e39f
- (void)proxy:(id)arg1 didCompleteViewServiceDismissal:(id)arg2 withItems:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e316
- (void)sendItemsToViewService:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e290
- (_Bool)setViewServiceHidden:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000002e238
- (_Bool)dismissViewServiceWithItems:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e1bb
- (void)viewDidLoad;	// IMP=0x000000000002dea1
@property(readonly, nonatomic) UIViewController *hostViewController;
@property(readonly, nonatomic) TVSUIViewServiceContext *context;
- (void)dealloc;	// IMP=0x000000000002dc1b
- (id)initWithContext:(id)arg1;	// IMP=0x000000000002dc07
- (id)initWithContext:(id)arg1 launchInputItems:(id)arg2;	// IMP=0x000000000002daee
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000002dab7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002da80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

