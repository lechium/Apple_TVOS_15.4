//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItemMetadataAudioRoute, NSString;

@interface MPNowPlayingInfoAudioRoute : NSObject
{
    MRContentItemMetadataAudioRoute *_mediaRemoteAudioRoute;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002dd176
@property(readonly, nonatomic) MRContentItemMetadataAudioRoute *mediaRemoteAudioRoute; // @synthesize mediaRemoteAudioRoute=_mediaRemoteAudioRoute;
@property(nonatomic, getter=isSpatializationEnabled) _Bool spatializationEnabled;
@property(nonatomic) _Bool supportsSpatialization;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) long long type;
- (id)initWithMediaRemoteAudioRoute:(id)arg1;	// IMP=0x00000000002dcd74

@end
