//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedParticipantChange : PBCodable <NSCopying>
{
    long long _participantChangeType;	// 8 = 0x8
    NSString *_otherHandle;	// 16 = 0x10
    NSData *_padding;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int participantChangeType:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(nonatomic) long long participantChangeType; // @synthesize participantChangeType=_participantChangeType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000041646
- (unsigned long long)hash;	// IMP=0x00000000000415ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000414c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000413e6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000041352
- (void)writeTo:(id)arg1;	// IMP=0x00000000000412ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000412a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000040e7b
- (id)description;	// IMP=0x0000000000040e04
@property(readonly, nonatomic) _Bool hasPadding;
@property(readonly, nonatomic) _Bool hasOtherHandle;
@property(nonatomic) _Bool hasParticipantChangeType;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x0000000000040cf4

@end

