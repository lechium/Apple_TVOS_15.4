//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMapTable, NSString;
@protocol HMDDataStreamProtocolDelegate;

@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    NSMapTable *_sockets;	// 8 = 0x8
    id <HMDDataStreamProtocolDelegate> _dataStream;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000005ca99a
+ (id)protocolName;	// IMP=0x00000000005ca97b
- (void).cxx_destruct;	// IMP=0x00000000005ca93f
@property(readonly) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
@property(readonly) NSMapTable *sockets; // @synthesize sockets=_sockets;
- (void)_closeAllSocketsWithError:(id)arg1;	// IMP=0x00000000005ca75f
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000005ca631
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000005ca503
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000005ca27a
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000005ca265
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x00000000005ca251
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x00000000005ca0fc
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x00000000005ca0f6
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendData:(id)arg1 socket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005c9f31
- (void)_notifyActiveStatusChangedFromPreviousValue:(_Bool)arg1;	// IMP=0x00000000005c9dd9
- (void)_reevaluateTrafficClassForDataStream;	// IMP=0x00000000005c9a45
- (void)evaluateOptionsForSocket:(id)arg1;	// IMP=0x00000000005c9a33
- (void)unregisterSocket:(id)arg1;	// IMP=0x00000000005c98ea
- (void)registerSocket:(id)arg1;	// IMP=0x00000000005c977b
- (id)initWithDataStream:(id)arg1;	// IMP=0x00000000005c96ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

