//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDateTimeRangeValue-Protocol.h>

@class NSString, _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@interface _INPBDateTimeRangeValue : PBCodable <_INPBDateTimeRangeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int allDay:1;
        unsigned int endCalendar:1;
        unsigned int startCalendar:1;
    } _has;	// 8 = 0x8
    _Bool _allDay;	// 12 = 0xc
    long long _endCalendar;	// 16 = 0x10
    _INPBDateTime *_endDateTime;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    _INPBRecurrenceValue *_recurrence;	// 40 = 0x28
    long long _startCalendar;	// 48 = 0x30
    _INPBDateTime *_startDateTime;	// 56 = 0x38
    _INPBValueMetadata *_valueMetadata;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000278008
- (void).cxx_destruct;	// IMP=0x0000000000277abc
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) _INPBDateTime *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(nonatomic) long long startCalendar; // @synthesize startCalendar=_startCalendar;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence; // @synthesize recurrence=_recurrence;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) _INPBDateTime *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(nonatomic) long long endCalendar; // @synthesize endCalendar=_endCalendar;
@property(nonatomic) _Bool allDay; // @synthesize allDay=_allDay;
- (id)dictionaryRepresentation;	// IMP=0x0000000000277700
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000276ed6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000276cdf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000276c4d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000276b4e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002768ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002768e0
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(readonly, nonatomic) _Bool hasStartDateTime;
@property(nonatomic) _Bool hasStartCalendar;
@property(readonly, nonatomic) _Bool hasRecurrence;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasEndDateTime;
@property(nonatomic) _Bool hasEndCalendar;
@property(nonatomic) _Bool hasAllDay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

