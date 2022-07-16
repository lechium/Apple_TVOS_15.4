//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBTemporalEventTrigger-Protocol.h>

@class NSString, _INPBDateTimeRangeValue;

@interface _INPBTemporalEventTrigger : PBCodable <_INPBTemporalEventTrigger, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBDateTimeRangeValue *_dateTime;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000226e14
- (void).cxx_destruct;	// IMP=0x0000000000226c54
@property(retain, nonatomic) _INPBDateTimeRangeValue *dateTime; // @synthesize dateTime=_dateTime;
- (id)dictionaryRepresentation;	// IMP=0x0000000000226ba8
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000226a09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226987
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002268f5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002267f6
- (void)writeTo:(id)arg1;	// IMP=0x000000000022676f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000226762
@property(readonly, nonatomic) _Bool hasDateTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

