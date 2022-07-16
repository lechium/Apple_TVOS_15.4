//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSString;
@protocol HMDDataStreamProtocolDelegate;

@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>
{
    NSMapTable *_sockets;	// 8 = 0x8
    id <HMDDataStreamProtocolDelegate> _dataStream;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000633aa0
+ (id)protocolName;	// IMP=0x0000000000633a81
- (void).cxx_destruct;	// IMP=0x0000000000633a45
@property(readonly) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
@property(readonly) NSMapTable *sockets; // @synthesize sockets=_sockets;
- (void)_closeAllSocketsWithError:(id)arg1;	// IMP=0x0000000000633865
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000633737
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000633609
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000633380
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000063336b
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x0000000000633357
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x0000000000633202
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x00000000006331fc
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendData:(id)arg1 socket:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000633037
- (void)_notifyActiveStatusChangedFromPreviousValue:(_Bool)arg1;	// IMP=0x0000000000632edf
- (void)_reevaluateTrafficClassForDataStream;	// IMP=0x0000000000632b4b
- (void)evaluateOptionsForSocket:(id)arg1;	// IMP=0x0000000000632b39
- (void)unregisterSocket:(id)arg1;	// IMP=0x00000000006329f0
- (void)registerSocket:(id)arg1;	// IMP=0x0000000000632881
- (id)initWithDataStream:(id)arg1;	// IMP=0x00000000006327f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
