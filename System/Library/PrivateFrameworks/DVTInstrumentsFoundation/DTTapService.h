//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTTapAuthorizedAPI-Protocol.h>
#import <DVTInstrumentsFoundation/DTTapBulkDataReceiver-Protocol.h>

@class DTTapConfig, DTTapLocal, DTTapServiceMessageSender, NSObject, NSString;
@protocol DTTapServiceDelegate, OS_dispatch_queue;

@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver>
{
    id <DTTapServiceDelegate> _delegate;	// 8 = 0x8
    DTTapConfig *_config;	// 16 = 0x10
    DTTapLocal *_tap;	// 24 = 0x18
    _Bool _tapIsRunning;	// 32 = 0x20
    unsigned int _tapServiceID;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    DTTapServiceMessageSender *_messageSender;	// 48 = 0x30
}

+ (void)registerCapabilities:(id)arg1 forDelegateClass:(Class)arg2 forConnection:(id)arg3;	// IMP=0x000000000000e91d
- (void).cxx_destruct;	// IMP=0x000000000001032b
- (void)sendHeartbeatTime:(unsigned long long)arg1;	// IMP=0x0000000000010294
- (void)sendFrameMessage:(id)arg1;	// IMP=0x0000000000010239
- (void)handleBulkData:(id)arg1;	// IMP=0x00000000000101de
- (void)handleBulkData:(const void *)arg1 size:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010183
- (void)fetchDataNow;	// IMP=0x000000000000ffc7
- (void)unpause;	// IMP=0x000000000000fe0b
- (void)pause;	// IMP=0x000000000000fc4f
- (void)stop;	// IMP=0x000000000000f794
- (void)start;	// IMP=0x000000000000f48f
- (void)setConfig:(id)arg1;	// IMP=0x000000000000f14a
- (void)messageReceived:(id)arg1;	// IMP=0x000000000000f10f
- (id)initWithChannel:(id)arg1;	// IMP=0x000000000000ed9d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

