//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKCancelable-Protocol.h>

@class NSString, PKPaymentProvisioningController;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable>
{
    PKPaymentProvisioningController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000220291
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (void)cancel;	// IMP=0x000000000022022a
- (void)dealloc;	// IMP=0x00000000002201d0
- (id)initWithPaymentProvisioningController:(id)arg1;	// IMP=0x000000000022015c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

