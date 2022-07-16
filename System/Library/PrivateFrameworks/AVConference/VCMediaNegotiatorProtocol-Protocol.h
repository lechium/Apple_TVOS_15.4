//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray, NSData, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo;

@protocol VCMediaNegotiatorProtocol <NSObject>
+ (_Bool)initializeLocalConfiguration:(VCMediaNegotiatorLocalConfiguration *)arg1 negotiationData:(NSData *)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
@property(readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property(readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (_Bool)processRemoteNegotiationData:(NSData *)arg1;
- (NSData *)negotiationData;
@end

