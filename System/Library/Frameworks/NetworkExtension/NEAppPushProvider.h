//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NEAppPushProvider
{
    NSDictionary *_providerConfiguration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014d2dc
@property(readonly) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
- (void)setProviderConfiguration:(id)arg1;	// IMP=0x000000000014d2b2
- (id)init;	// IMP=0x000000000014d283
- (void)handleTimerEvent;	// IMP=0x000000000014d27d
- (void)reportIncomingCallWithUserInfo:(id)arg1;	// IMP=0x000000000014d1db
- (void)stopWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014d1d0
- (void)start;	// IMP=0x000000000014d1ca
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000014d1c4

@end
