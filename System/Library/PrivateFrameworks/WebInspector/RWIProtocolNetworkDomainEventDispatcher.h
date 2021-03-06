//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RWIProtocolNetworkDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;	// 8 = 0x8
}

- (void)webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x0000000000034806
- (void)webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;	// IMP=0x00000000000340df
- (void)webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x000000000003397f
- (void)webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000033398
- (void)webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;	// IMP=0x0000000000032d4e
- (void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x00000000000325ee
- (void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;	// IMP=0x0000000000031db1
- (void)responseInterceptedWithRequestId:(id)arg1 response:(id)arg2;	// IMP=0x0000000000031731
- (void)requestInterceptedWithRequestId:(id)arg1 request:(id)arg2;	// IMP=0x00000000000310b1
- (void)requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;	// IMP=0x00000000000303f6
- (void)loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(_Bool *)arg4;	// IMP=0x000000000002fbe1
- (void)loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id *)arg3 metrics:(id *)arg4;	// IMP=0x000000000002f30b
- (void)dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;	// IMP=0x000000000002eb67
- (void)responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;	// IMP=0x000000000002e055
- (void)requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id *)arg9 type:(long long *)arg10 targetId:(id *)arg11;	// IMP=0x000000000002ce7d
- (id)initWithController:(struct AugmentableInspectorController *)arg1;	// IMP=0x000000000002ce40

@end

