//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRetrieveParkingLocationIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBRetrieveParkingLocationIntent : PBCodable <_INPBRetrieveParkingLocationIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004303b7
- (void).cxx_destruct;	// IMP=0x00000000004301f7
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000043014b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000042ffac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000042ff2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042fe98
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042fd99
- (void)writeTo:(id)arg1;	// IMP=0x000000000042fd12
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000042fd05
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

