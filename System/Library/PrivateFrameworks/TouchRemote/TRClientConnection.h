//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFSession;

@interface TRClientConnection
{
    SFSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000906f
@property(retain) SFSession *session; // @synthesize session=_session;
- (void)connectToNearbyDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ca6
- (void)invalidate;	// IMP=0x0000000000008bd0
- (void)sendResponse:(id)arg1;	// IMP=0x0000000000008ad5
- (void)sendRequest:(id)arg1;	// IMP=0x000000000000890a
- (void)sendEvent:(id)arg1;	// IMP=0x000000000000880f
- (void)setRequestMessageHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000879d
- (CDUnknownBlockType)requestMessageHandler;	// IMP=0x000000000000874d
- (void)setEventMessageHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000086db
- (CDUnknownBlockType)eventMessageHandler;	// IMP=0x000000000000868b
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000084f6
- (CDUnknownBlockType)invalidationHandler;	// IMP=0x00000000000084a6
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008434
- (CDUnknownBlockType)interruptionHandler;	// IMP=0x00000000000083e4

@end
