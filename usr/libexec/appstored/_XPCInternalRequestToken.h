//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _XPCInternalRequestToken
{
}

- (_Bool)isDialogObserverAvailable;	// IMP=0x0020000000244d85
- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244d7f
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244d79
- (void)deliverEngagementRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244d0d
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244c63
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000244a7d
- (id)notificationClient;	// IMP=0x0010000000244a74
- (_Bool)isInternal;	// IMP=0x0010000000244a6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

