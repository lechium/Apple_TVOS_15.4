//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueContextProtobuf;

__attribute__((visibility("hidden")))
@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>
{
    double _artworkHeight;	// 8 = 0x8
    double _artworkWidth;	// 16 = 0x10
    int _cachingPolicy;	// 24 = 0x18
    NSMutableArray *_contentItemIdentifiers;	// 32 = 0x20
    _MRPlaybackQueueContextProtobuf *_context;	// 40 = 0x28
    NSString *_label;	// 48 = 0x30
    int _length;	// 56 = 0x38
    int _location;	// 60 = 0x3c
    _MRNowPlayingPlayerPathProtobuf *_playerPath;	// 64 = 0x40
    NSString *_requestID;	// 72 = 0x48
    _Bool _includeInfo;	// 80 = 0x50
    _Bool _includeLanguageOptions;	// 81 = 0x51
    _Bool _includeLyrics;	// 82 = 0x52
    _Bool _includeMetadata;	// 83 = 0x53
    _Bool _includeParticipants;	// 84 = 0x54
    _Bool _includeSections;	// 85 = 0x55
    _Bool _isLegacyNowPlayingInfoRequest;	// 86 = 0x56
    _Bool _returnContentItemAssetsInUserCompletion;	// 87 = 0x57
    struct {
        unsigned int artworkHeight:1;
        unsigned int artworkWidth:1;
        unsigned int cachingPolicy:1;
        unsigned int length:1;
        unsigned int location:1;
        unsigned int includeInfo:1;
        unsigned int includeLanguageOptions:1;
        unsigned int includeLyrics:1;
        unsigned int includeMetadata:1;
        unsigned int includeParticipants:1;
        unsigned int includeSections:1;
        unsigned int isLegacyNowPlayingInfoRequest:1;
        unsigned int returnContentItemAssetsInUserCompletion:1;
    } _has;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000078ae
- (unsigned long long)hash;	// IMP=0x0000000000007265
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006e1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006a32
- (void)writeTo:(id)arg1;	// IMP=0x000000000000666d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000006660
- (id)dictionaryRepresentation;	// IMP=0x00000000000056cc
- (id)description;	// IMP=0x000000000000561d

@end

