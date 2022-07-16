//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSpeakerIDInfo-Protocol.h>

@class NSString, _INPBString;

@interface _INPBSpeakerIDInfo : PBCodable <_INPBSpeakerIDInfo, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int speakerIDConfidence:1;
    } _has;	// 8 = 0x8
    int _speakerIDConfidence;	// 12 = 0xc
    _INPBString *_sharedUserID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000044bbb7
- (void).cxx_destruct;	// IMP=0x000000000044b95d
@property(nonatomic) int speakerIDConfidence; // @synthesize speakerIDConfidence=_speakerIDConfidence;
@property(retain, nonatomic) _INPBString *sharedUserID; // @synthesize sharedUserID=_sharedUserID;
- (id)dictionaryRepresentation;	// IMP=0x000000000044b7c0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000044b566
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000044b4c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000044b42e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000044b32f
- (void)writeTo:(id)arg1;	// IMP=0x000000000044b27c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000044b26f
- (int)StringAsSpeakerIDConfidence:(id)arg1;	// IMP=0x000000000044b180
- (id)speakerIDConfidenceAsString:(int)arg1;	// IMP=0x000000000044b0e6
@property(nonatomic) _Bool hasSpeakerIDConfidence;
@property(readonly, nonatomic) _Bool hasSharedUserID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

