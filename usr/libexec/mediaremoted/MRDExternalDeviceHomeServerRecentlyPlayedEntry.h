//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRContentItem, MRDeviceInfo, MRPlayerPath, NSArray, NSDate, NSDictionary, NSString;

@interface MRDExternalDeviceHomeServerRecentlyPlayedEntry : NSObject
{
    _Bool _isPlaying;	// 8 = 0x8
    NSDate *_lastPlayingDate;	// 16 = 0x10
    NSDate *_lastNotPlayingDate;	// 24 = 0x18
    MRDeviceInfo *_deviceInfo;	// 32 = 0x20
    NSArray *_currentPlaybackSessionTypes;	// 40 = 0x28
    NSArray *_supportedPlaybackSessionTypes;	// 48 = 0x30
    NSString *_currentPlaybackSessionIdentifier;	// 56 = 0x38
    MRPlayerPath *_playerPath;	// 64 = 0x40
    MRContentItem *_contentItem;	// 72 = 0x48
    NSDictionary *_dictionaryRepresentation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000003e997
@property(retain, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(retain, nonatomic) MRContentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) NSString *currentPlaybackSessionIdentifier; // @synthesize currentPlaybackSessionIdentifier=_currentPlaybackSessionIdentifier;
@property(retain, nonatomic) NSArray *supportedPlaybackSessionTypes; // @synthesize supportedPlaybackSessionTypes=_supportedPlaybackSessionTypes;
@property(retain, nonatomic) NSArray *currentPlaybackSessionTypes; // @synthesize currentPlaybackSessionTypes=_currentPlaybackSessionTypes;
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSDate *lastNotPlayingDate; // @synthesize lastNotPlayingDate=_lastNotPlayingDate;
@property(retain, nonatomic) NSDate *lastPlayingDate; // @synthesize lastPlayingDate=_lastPlayingDate;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) NSDate *date;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003e1e6
- (id)description;	// IMP=0x001000000003e0dd
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000003def1

@end
