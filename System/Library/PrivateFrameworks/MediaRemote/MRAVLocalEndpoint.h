//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint
{
}

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;	// IMP=0x00000000000367dc
+ (id)sharedLocalEndpoint;	// IMP=0x00000000000367c0
- (void)setHeadTrackedSpatialAudioMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003716d
- (void)setAllowsHeadTrackedSpatialAudio:(_Bool)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036fd5
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000036e27
@property(readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;
- (id)groupLeader;	// IMP=0x0000000000036c48

@end

