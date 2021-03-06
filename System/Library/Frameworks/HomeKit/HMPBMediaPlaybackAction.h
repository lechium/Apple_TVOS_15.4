//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying>
{
    NSData *_actionUUID;	// 8 = 0x8
    int _mediaPlaybackState;	// 16 = 0x10
    NSMutableArray *_mediaProfiles;	// 24 = 0x18
    NSData *_playbackArchive;	// 32 = 0x20
    NSData *_volume;	// 40 = 0x28
    struct {
        unsigned int mediaPlaybackState:1;
    } _has;	// 48 = 0x30
}

+ (Class)mediaProfilesType;	// IMP=0x00000000000ab474
- (void).cxx_destruct;	// IMP=0x00000000000ab16d
@property(retain, nonatomic) NSData *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(retain, nonatomic) NSData *volume; // @synthesize volume=_volume;
@property(nonatomic) int mediaPlaybackState; // @synthesize mediaPlaybackState=_mediaPlaybackState;
@property(retain, nonatomic) NSMutableArray *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property(retain, nonatomic) NSData *actionUUID; // @synthesize actionUUID=_actionUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000aaeee
- (unsigned long long)hash;	// IMP=0x00000000000aae2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aacd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000aaa67
- (void)copyTo:(id)arg1;	// IMP=0x00000000000aa91a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000aa75b
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000aa74e
- (id)dictionaryRepresentation;	// IMP=0x00000000000aa61b
- (id)description;	// IMP=0x00000000000aa56c
@property(readonly, nonatomic) _Bool hasPlaybackArchive;
@property(readonly, nonatomic) _Bool hasVolume;
@property(nonatomic) _Bool hasMediaPlaybackState;
- (id)mediaProfilesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aa4e0
- (unsigned long long)mediaProfilesCount;	// IMP=0x00000000000aa4c3
- (void)addMediaProfiles:(id)arg1;	// IMP=0x00000000000aa459
- (void)clearMediaProfiles;	// IMP=0x00000000000aa43c
@property(readonly, nonatomic) _Bool hasActionUUID;

@end

