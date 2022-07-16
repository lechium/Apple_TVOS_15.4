//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotResolutionResult-Protocol.h>

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsExecuteIntent, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@interface _INPBIntentSlotResolutionResult : PBCodable <_INPBIntentSlotResolutionResult, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;	// 8 = 0x8
    int _type;	// 12 = 0xc
    _INPBPayloadConfirmation *_payloadConfirmation;	// 16 = 0x10
    _INPBPayloadNeedsDisambiguation *_payloadNeedsDisambiguation;	// 24 = 0x18
    _INPBPayloadNeedsExecuteIntent *_payloadNeedsExecuteIntent;	// 32 = 0x20
    _INPBPayloadNeedsValue *_payloadNeedsValue;	// 40 = 0x28
    _INPBPayloadSuccess *_payloadSuccess;	// 48 = 0x30
    _INPBPayloadUnsupported *_payloadUnsupported;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002be1f4
- (void).cxx_destruct;	// IMP=0x00000000002bdd3e
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBPayloadUnsupported *payloadUnsupported; // @synthesize payloadUnsupported=_payloadUnsupported;
@property(retain, nonatomic) _INPBPayloadSuccess *payloadSuccess; // @synthesize payloadSuccess=_payloadSuccess;
@property(retain, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue; // @synthesize payloadNeedsValue=_payloadNeedsValue;
@property(retain, nonatomic) _INPBPayloadNeedsExecuteIntent *payloadNeedsExecuteIntent; // @synthesize payloadNeedsExecuteIntent=_payloadNeedsExecuteIntent;
@property(retain, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation; // @synthesize payloadNeedsDisambiguation=_payloadNeedsDisambiguation;
@property(retain, nonatomic) _INPBPayloadConfirmation *payloadConfirmation; // @synthesize payloadConfirmation=_payloadConfirmation;
- (id)dictionaryRepresentation;	// IMP=0x00000000002bd955
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bd15f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bcfa1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002bcf0f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002bce10
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bcb91
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bcb84
- (int)StringAsType:(id)arg1;	// IMP=0x00000000002bca04
- (id)typeAsString:(int)arg1;	// IMP=0x00000000002bc931
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasPayloadUnsupported;
@property(readonly, nonatomic) _Bool hasPayloadSuccess;
@property(readonly, nonatomic) _Bool hasPayloadNeedsValue;
@property(readonly, nonatomic) _Bool hasPayloadNeedsExecuteIntent;
@property(readonly, nonatomic) _Bool hasPayloadNeedsDisambiguation;
@property(readonly, nonatomic) _Bool hasPayloadConfirmation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

