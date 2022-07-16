//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSManualDuckingHandler, CSXPCConnection, MISSING_TYPE, NSString;
@protocol CSAudioSessionProviding;

@interface CSAudioSessionProvidingProxy : NSObject
{
    id <CSAudioSessionProviding> _audioSessionProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    MISSING_TYPE *_streamClientType;	// 24 = 0x18
    CSManualDuckingHandler *_manualDuckingHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000caf3a
@property(retain, nonatomic) CSManualDuckingHandler *manualDuckingHandler; // @synthesize manualDuckingHandler=_manualDuckingHandler;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00100000000cadd5
- (void)audioSessionProvider:(id)arg1 didChangeContext:(_Bool)arg2;	// IMP=0x00100000000cad20
- (void)audioSessionProvider:(id)arg1 providerInvalidated:(_Bool)arg2;	// IMP=0x00100000000cac22
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000cab39
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000caa50
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000ca967
- (void)audioSessionProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000000ca87e
- (void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000ca7c4
- (void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00100000000ca70a
- (void)audioSessionProviderEndInterruption:(id)arg1;	// IMP=0x00100000000ca66e
- (void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000ca585
- (void)audioSessionProviderBeginInterruption:(id)arg1;	// IMP=0x00100000000ca4e9
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;	// IMP=0x00100000000ca3f5
- (void)_handleSessionProvidingRequestTypeReportDynamicActivityAttribute:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000ca356
- (void)_handleSessionProvidingRequestTypeEnableSmartRoutingConsideration:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000ca25a
- (void)_handleSessionProvidingRequestTypeEnableMiniDucking:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000ca15e
- (void)_handleSessionProvidingRequestTypeDuckDefaultOutputAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000ca08c
- (void)_handleSessionProvidingRequestTypeDuckAudioDevice:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c9fa4
- (void)_handleSessionProvidingRequestTypeSetDuckOthersOption:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c9eb7
- (void)_handleSessionProvidingRequestTypeGetDuckOthersOption:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c9d38
- (void)_handleSessionProvidingRequestTypeDeactivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c9b3a
- (void)_handleSessionProvidingRequestTypeActivateMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c98e7
- (void)_handleSessionProvidingRequestTypePrewarmMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000c97a4
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c95b4
- (void)dealloc;	// IMP=0x00100000000c9510
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x00100000000c93a0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000c9338

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

