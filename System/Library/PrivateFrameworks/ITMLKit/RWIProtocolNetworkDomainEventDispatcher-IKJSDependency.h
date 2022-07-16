//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebInspector/RWIProtocolNetworkDomainEventDispatcher.h>

@interface RWIProtocolNetworkDomainEventDispatcher (IKJSDependency)
- (void)safe_requestInterceptedWithRequestId:(id)arg1 request:(id)arg2;	// IMP=0x00000000000ce7e5
- (void)safe_webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x00000000000ce6be
- (void)safe_dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;	// IMP=0x00000000000ce5a4
- (void)safe_loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(_Bool *)arg4;	// IMP=0x00000000000ce46f
- (void)safe_responseInterceptedWithRequestId:(id)arg1 response:(id)arg2;	// IMP=0x00000000000ce361
- (void)safe_requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;	// IMP=0x00000000000ce188
- (void)safe_webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;	// IMP=0x00000000000ce088
- (void)safe_responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;	// IMP=0x00000000000cdeec
- (void)safe_webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;	// IMP=0x00000000000cddde
- (void)safe_requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id *)arg9 type:(long long *)arg10 targetId:(id *)arg11;	// IMP=0x00000000000cdbb0
- (void)safe_webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x00000000000cda89
- (void)safe_webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;	// IMP=0x00000000000cd94d
- (void)safe_webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;	// IMP=0x00000000000cd826
- (void)safe_webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;	// IMP=0x00000000000cd6ff
- (void)safe_loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id *)arg3 metrics:(id *)arg4;	// IMP=0x00000000000cd5e3
@end
