//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class IDSServerBag;
@protocol FTMessageDeliveryHTTPMobileNetworkManager, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryRemoteURLConnectionFactory;

@interface FTMessageDelivery_HTTP <FTMessageQueueDelegate>
{
    id <FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;	// 56 = 0x38
    id <FTMessageDeliveryRemoteURLConnection> _remoteConnection;	// 64 = 0x40
    id <FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;	// 72 = 0x48
    _Bool _pendingRetryAfterAirplaneMode;	// 80 = 0x50
    double _retryTimeAfterAirplaneMode;	// 88 = 0x58
    CDUnknownBlockType _retryBackoffProvider;	// 96 = 0x60
    IDSServerBag *_idsServerBag;	// 104 = 0x68
    IDSServerBag *_iMessageServerBag;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000001a71a
- (void)networkStateChanged;	// IMP=0x000000000001a467
- (void)_serverBagLoaded:(id)arg1;	// IMP=0x000000000001a254
- (_Bool)sendMessageAtTopOfTheQueue:(id)arg1;	// IMP=0x0000000000019fe0
- (_Bool)sendMessage:(id)arg1;	// IMP=0x0000000000019d45
- (void)cancelMessage:(id)arg1;	// IMP=0x0000000000019a33
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;	// IMP=0x00000000000194ce
- (_Bool)_tryRetryMessageWithTimeInterval:(double)arg1;	// IMP=0x00000000000191fa
- (_Bool)busy;	// IMP=0x00000000000191e5
- (void)_cleanupURLConnection;	// IMP=0x00000000000190f5
- (void)_dequeueIfNeeded;	// IMP=0x000000000001820b
- (_Bool)_sendMessageAsynchronously:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000145d2
- (void)invalidate;	// IMP=0x0000000000014533
- (void)_clearRetryTimer;	// IMP=0x00000000000144f7
- (void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4;	// IMP=0x0000000000014403
- (void)_notifyDelegateAboutError:(id)arg1;	// IMP=0x000000000001434a
- (void)_updateWiFiAssertions;	// IMP=0x0000000000014344
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014028
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000108fd
- (void)dealloc;	// IMP=0x000000000001086e
- (id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(CDUnknownBlockType)arg5;	// IMP=0x00000000000106ed
- (id)initWithIDSServerBag:(id)arg1;	// IMP=0x00000000000105cf
- (id)init;	// IMP=0x0000000000010573

@end

