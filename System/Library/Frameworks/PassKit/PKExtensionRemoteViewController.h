//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKit/PKPaymentAuthorizationExtensionViewHostProtocol-Protocol.h>

@class NSString;
@protocol PKExtensionRemoteViewControllerDelegate;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol>
{
    id <PKExtensionRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0000000000005c15
+ (id)serviceViewControllerInterface;	// IMP=0x0000000000005bf5
- (void).cxx_destruct;	// IMP=0x0000000000005c96
@property(nonatomic) __weak id <PKExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)exportedInterface;	// IMP=0x0000000000005c4f
- (id)serviceViewControllerInterface;	// IMP=0x0000000000005c35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

