//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import <SiriKitRuntime/SKRExecutionBridge-Protocol.h>

@class MISSING_TYPE;

@interface _TtC14SiriKitRuntime35ExecutionBridgeDelegateToXPCAdapter : _TtCs12_SwiftObject <SKRExecutionBridge>
{
    MISSING_TYPE *wrapped;	// 16 = 0x10
    MISSING_TYPE *runtimeNotReadyHandler;	// 32 = 0x20
}

- (void)runtimeWasNotReadyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1780
- (void)fetchSpeechInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1590
- (void)fetchContextsFor:(id)arg1 includesNearByDevices:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c1450
- (void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1360
- (void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1280
- (void)fallbackToServerForResultCandidateId:(id)arg1;	// IMP=0x00000000000c11a0
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)arg1;	// IMP=0x00000000000c10d0
- (void)closeWithExecutionOutput:(id)arg1 errorString:(id)arg2;	// IMP=0x00000000000c0fd0
- (void)closeWithExecutionOutput:(id)arg1;	// IMP=0x00000000000c0f00
- (void)submitWithExecutionOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0e10

@end
