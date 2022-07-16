//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WLKBasicEpisodeMetadata;

@interface WLKCanonicalContainerResponse : NSObject
{
    _Bool _watchListable;	// 8 = 0x8
    _Bool _watchListed;	// 9 = 0x9
    NSDictionary *_dictionary;	// 16 = 0x10
    NSString *_canonicalID;	// 24 = 0x18
    unsigned long long _contentType;	// 32 = 0x20
    WLKBasicEpisodeMetadata *_currentEpisode;	// 40 = 0x28
    NSDictionary *_defaultSeason;	// 48 = 0x30
    NSArray *_channels;	// 56 = 0x38
}

+ (id)parseChannelsFromPayload:(id)arg1;	// IMP=0x0000000000035082
- (void).cxx_destruct;	// IMP=0x00000000000352ab
@property(readonly, copy, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(readonly, copy, nonatomic) NSDictionary *defaultSeason; // @synthesize defaultSeason=_defaultSeason;
@property(readonly, copy, nonatomic) WLKBasicEpisodeMetadata *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(readonly, nonatomic, getter=isWatchListed) _Bool watchListed; // @synthesize watchListed=_watchListed;
@property(readonly, nonatomic, getter=isWatchListable) _Bool watchListable; // @synthesize watchListable=_watchListable;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)init;	// IMP=0x000000000003521e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003488d

@end
