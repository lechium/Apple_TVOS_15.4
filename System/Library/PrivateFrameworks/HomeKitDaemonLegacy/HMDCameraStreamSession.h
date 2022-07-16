//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCameraProtocolParameters, HMDCameraStreamSessionID, HMDCameraVideoTierParameters, HMDStreamingCapabilities, HMDStreamingManager, NSString;

@interface HMDCameraStreamSession : HMFObject <HMFLogging>
{
    HMDCameraStreamSessionID *_sessionID;	// 8 = 0x8
    HMDStreamingManager *_streamingManager;	// 16 = 0x10
    HMDStreamingCapabilities *_streamingCapabilities;	// 24 = 0x18
    HMDCameraProtocolParameters *_protocolParameters;	// 32 = 0x20
    HMDCameraVideoTierParameters *_videoTierParameters;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000009cc58f
- (void).cxx_destruct;	// IMP=0x00000000009cc52b
@property(retain, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // @synthesize videoTierParameters=_videoTierParameters;
@property(retain, nonatomic) HMDCameraProtocolParameters *protocolParameters; // @synthesize protocolParameters=_protocolParameters;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDStreamingManager *streamingManager; // @synthesize streamingManager=_streamingManager;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)logIdentifier;	// IMP=0x00000000009cc44a
- (id)negotiatedParameters;	// IMP=0x00000000009cc2f7
- (id)initWithSessionID:(id)arg1 streamingTierType:(unsigned long long)arg2 remoteCapabilities:(id)arg3 streamPreference:(id)arg4;	// IMP=0x00000000009cbf70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

