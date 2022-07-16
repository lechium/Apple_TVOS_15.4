//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying>
{
    long long _cloudID;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _fileSize;	// 24 = 0x18
    long long _storeAdamID;	// 32 = 0x20
    NSString *_albumArtistName;	// 40 = 0x28
    int _albumDiscCount;	// 48 = 0x30
    NSString *_albumName;	// 56 = 0x38
    int _albumTrackCount;	// 64 = 0x40
    NSString *_artistName;	// 72 = 0x48
    NSString *_composerName;	// 80 = 0x50
    int _contentType;	// 88 = 0x58
    NSString *_copyrightText;	// 96 = 0x60
    int _discNumber;	// 104 = 0x68
    NSString *_genreName;	// 112 = 0x70
    NSString *_playbackAuthorizationToken;	// 120 = 0x78
    NSString *_title;	// 128 = 0x80
    int _trackNumber;	// 136 = 0x88
    int _year;	// 140 = 0x8c
    _Bool _isCompilation;	// 144 = 0x90
    struct {
        unsigned int cloudID:1;
        unsigned int duration:1;
        unsigned int fileSize:1;
        unsigned int storeAdamID:1;
        unsigned int albumDiscCount:1;
        unsigned int albumTrackCount:1;
        unsigned int contentType:1;
        unsigned int discNumber:1;
        unsigned int trackNumber:1;
        unsigned int year:1;
        unsigned int isCompilation:1;
    } _has;	// 148 = 0x94
}

- (void).cxx_destruct;	// IMP=0x000000000013f82d
- (unsigned long long)hash;	// IMP=0x000000000013f3ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013efaf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013eccf
- (void)writeTo:(id)arg1;	// IMP=0x000000000013ea4a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013ea3d
- (id)dictionaryRepresentation;	// IMP=0x000000000013e4fc
- (id)description;	// IMP=0x000000000013e44d

@end

