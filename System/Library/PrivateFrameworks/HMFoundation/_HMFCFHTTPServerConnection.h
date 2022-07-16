//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerConnection <HMFLogging>
{
    id <_HMFCFHTTPServerConnectionDelegate> _delegate;	// 8 = 0x8
    HMFNetAddress *_address;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
    NSMutableArray *_pendingRequests;	// 32 = 0x20
    NSMutableArray *_pendingRespones;	// 40 = 0x28
    struct _CFHTTPServerConnection *_internal;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000029a40
- (void).cxx_destruct;	// IMP=0x0000000000029b79
@property(readonly, nonatomic) struct _CFHTTPServerConnection *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSMutableArray *pendingRespones; // @synthesize pendingRespones=_pendingRespones;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) HMFNetAddress *address; // @synthesize address=_address;
@property __weak id <_HMFCFHTTPServerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000029aa7
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;	// IMP=0x000000000002957b
- (void)sendResponse:(id)arg1;	// IMP=0x0000000000029225
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3;	// IMP=0x0000000000028f56
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2;	// IMP=0x0000000000028f41
- (void)handleRequest:(id)arg1 bodyReadStream:(struct __CFReadStream *)arg2 eventType:(unsigned long long)arg3;	// IMP=0x0000000000028a65
- (void)_stopReadBody:(id)arg1;	// IMP=0x00000000000288ff
- (void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000028636
- (void)_handleReceivedRequestRef:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x000000000002802d
- (void)close;	// IMP=0x000000000002801b
- (_Bool)open;	// IMP=0x0000000000027eeb
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;	// IMP=0x0000000000027dd1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027d25
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000027ca3
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x0000000000027502
- (id)init;	// IMP=0x000000000002745a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

