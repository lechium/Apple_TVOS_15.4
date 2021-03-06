//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSFullTipContentManager : NSObject
{
    TPSServiceConnection *_serviceProxy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000251fa
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) TPSServiceConnection *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (CDUnknownBlockType)_objectCompletionOnClientQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000002501f
- (void)_performWithProxyHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024f70
- (void)tipsAppActive;	// IMP=0x0000000000024e87
- (void)removeNotificationForIdentifier:(id)arg1;	// IMP=0x0000000000024d24
- (void)markTipIdentifierViewed:(id)arg1;	// IMP=0x0000000000024bc1
- (void)contentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024ab7
- (void)invalidate;	// IMP=0x0000000000024aa1
- (id)init;	// IMP=0x00000000000249fc

@end

