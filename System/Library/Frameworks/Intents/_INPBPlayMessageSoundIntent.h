//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPlayMessageSoundIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBPlayMessageSoundIntent : PBCodable <_INPBPlayMessageSoundIntent, NSSecureCoding, NSCopying>
{
    CDStruct_13553b0f _has;	// 8 = 0x8
    int _soundType;	// 12 = 0xc
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
    NSString *_messageIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000417c06
- (void).cxx_destruct;	// IMP=0x0000000000417943
@property(nonatomic) int soundType; // @synthesize soundType=_soundType;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x0000000000417783
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004173f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000417300
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041726e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041716f
- (void)writeTo:(id)arg1;	// IMP=0x000000000041707b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041706e
- (int)StringAsSoundType:(id)arg1;	// IMP=0x000000000041704c
- (id)soundTypeAsString:(int)arg1;	// IMP=0x0000000000417007
@property(nonatomic) _Bool hasSoundType;
@property(readonly, nonatomic) _Bool hasMessageIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

