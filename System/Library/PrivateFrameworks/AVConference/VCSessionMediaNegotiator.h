//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCMediaNegotiatorProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsFaceTimeSettings, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo;
@protocol VCMediaNegotiatorProtocol;

__attribute__((visibility("hidden")))
@interface VCSessionMediaNegotiator : NSObject <VCMediaNegotiatorProtocol>
{
    VCMediaNegotiatorLocalConfiguration *_localSettings;	// 8 = 0x8
    id <VCMediaNegotiatorProtocol> _activeNegotiator;	// 16 = 0x10
    NSMutableDictionary *_mediaNegotiatorMap;	// 24 = 0x18
}

+ (id)unserializeNegotiationData:(id)arg1;	// IMP=0x00000000000fb6b6
+ (id)serializeNegotiationData:(id)arg1;	// IMP=0x00000000000fb672
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x00000000000fb4aa
+ (id)negotiationDataWithVersion1:(id)arg1 version2:(id)arg2;	// IMP=0x00000000000faedf
+ (id)negotiationDataWithVersion:(int)arg1 mediaBlob:(id)arg2;	// IMP=0x00000000000fae69
+ (id)mediaBlobForVersion:(int)arg1 negotiationData:(id)arg2;	// IMP=0x00000000000fae0e
@property(readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings; // @synthesize localSettings=_localSettings;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x00000000000fb494
@property(readonly, nonatomic) NSArray *negotiatedStreamGroups;
@property(readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property(readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x00000000000fb1e4
- (id)negotiationData;	// IMP=0x00000000000faf64
- (void)dealloc;	// IMP=0x00000000000fad9a
- (id)initWithLocalConfiguration:(id)arg1;	// IMP=0x00000000000fab60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
