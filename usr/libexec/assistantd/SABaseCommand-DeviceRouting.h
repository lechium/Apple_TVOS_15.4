//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABaseCommand.h>

@interface SABaseCommand (DeviceRouting)
+ (_Bool)ad_shouldClassLogToMetrics;	// IMP=0x002000000028a9c6
- (id)ad_executionDeviceForDeviceContextTuples:(id)arg1 executionContext:(id)arg2 proximityMap:(id)arg3 sharedUserID:(id)arg4 localDeviceIsFollower:(_Bool)arg5;	// IMP=0x001000000008de0a
- (_Bool)ad_requiresProximityInformationForDeviceContextTuples:(id)arg1;	// IMP=0x001000000008de02
- (_Bool)ad_requiresDeviceContext;	// IMP=0x001000000008ddfa
- (long long)resultCallbackCode;	// IMP=0x00100000001a0b95
- (_Bool)ad_shouldBeHandledByClientAsResponseToCommand:(id)arg1 fromPeer:(id)arg2;	// IMP=0x00100000001a1184
- (_Bool)ad_shouldIgnoreCallbacksOnReply;	// IMP=0x00100000001a117c
- (_Bool)ad_sendReplyEvenIfCallbacksExist;	// IMP=0x00100000001a1174
- (_Bool)ad_hasCallbacks;	// IMP=0x00100000001a116c
- (id)ad_callbacks;	// IMP=0x00100000001a118c
- (_Bool)_adui_presentsUIResponseInTranscript;	// IMP=0x00100000001cce3f
- (void)_adui_handleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ccdbc
- (_Bool)_adui_shouldBeHandledByAssistantd;	// IMP=0x00100000001ccdb4
- (long long)ad_getNetworkActivityTracingLabel;	// IMP=0x001000000028aa8a
- (_Bool)ad_requiresResponse;	// IMP=0x001000000028aa82
- (id)ad_deferredMetricsContext;	// IMP=0x001000000028a9ce
- (_Bool)ad_shouldLogToMetrics;	// IMP=0x001000000028a9ac
- (_Bool)ad_willHaveReply;	// IMP=0x001000000028a9a4
@property(retain, nonatomic, setter=ad_setParentRequest:) SABaseCommand *ad_parentRequest;
@end

