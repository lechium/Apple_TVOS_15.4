//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface __HMDRequestedCapabilitiesContext : NSObject
{
    NSUUID *_transactionID;	// 8 = 0x8
    NSDictionary *_requestedCapabilities;	// 16 = 0x10
    NSString *_destinationAddress;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_responseQueue;	// 32 = 0x20
    CDUnknownBlockType _completionHandler;	// 40 = 0x28
    NSMutableArray *_receivedResponses;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000061bdbf
@property(readonly) NSMutableArray *receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, copy, nonatomic) NSDictionary *requestedCapabilities; // @synthesize requestedCapabilities=_requestedCapabilities;
@property(readonly, nonatomic) NSUUID *transactionID; // @synthesize transactionID=_transactionID;
- (id)initWithTransactionID:(id)arg1 requestedCapabilities:(id)arg2 destinationAddress:(id)arg3 responseQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000061bc3d

@end
