//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayAnnouncementSoundIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBPlayAnnouncementSoundIntent : PBCodable <_INPBPlayAnnouncementSoundIntent, NSSecureCoding, NSCopying>
{
    CDStruct_13553b0f _has;	// 8 = 0x8
    int _soundType;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000048c550
- (void).cxx_destruct;	// IMP=0x000000000048c2f6
@property(nonatomic) int soundType; // @synthesize soundType=_soundType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000048c1b2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000048bf58
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048beb2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000048be20
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000048bd21
- (void)writeTo:(id)arg1;	// IMP=0x000000000048bc6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000048bc61
- (int)StringAsSoundType:(id)arg1;	// IMP=0x000000000048bc3f
- (id)soundTypeAsString:(int)arg1;	// IMP=0x000000000048bbfa
@property(nonatomic) _Bool hasSoundType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
