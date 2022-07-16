//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetReservationDetailsIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBGetReservationDetailsIntentResponse : PBCodable <_INPBGetReservationDetailsIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_reservations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003fd2f8
+ (Class)reservationsType;	// IMP=0x00000000003fd2e7
- (void).cxx_destruct;	// IMP=0x00000000003fd125
@property(copy, nonatomic) NSArray *reservations; // @synthesize reservations=_reservations;
- (id)dictionaryRepresentation;	// IMP=0x00000000003fcef8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fcd59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fccd7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003fcc45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003fcb46
- (void)writeTo:(id)arg1;	// IMP=0x00000000003fca16
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003fca09
- (id)reservationsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003fc9ec
@property(readonly, nonatomic) unsigned long long reservationsCount;
- (void)addReservations:(id)arg1;	// IMP=0x00000000003fc955
- (void)clearReservations;	// IMP=0x00000000003fc938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
