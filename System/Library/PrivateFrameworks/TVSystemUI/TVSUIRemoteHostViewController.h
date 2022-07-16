//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <TVSystemUI/TVSUIViewServiceHostInterface-Protocol.h>

@class NSString;
@protocol TVSUIRemoteHostViewControllerDelegate;

@interface TVSUIRemoteHostViewController : _UIRemoteViewController <TVSUIViewServiceHostInterface>
{
    id <TVSUIRemoteHostViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x00000000000243ec
+ (id)serviceViewControllerInterface;	// IMP=0x00000000000243e2
- (void).cxx_destruct;	// IMP=0x0000000000024819
@property(nonatomic) __weak id <TVSUIRemoteHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendItems:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002448d
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000000243f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

