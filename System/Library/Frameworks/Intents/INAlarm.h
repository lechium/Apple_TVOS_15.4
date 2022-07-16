//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSleepAlarmAttribute, INSpeakableString, NSDateComponents, NSNumber, NSString;

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSDateComponents *_dateTime;	// 16 = 0x10
    INSpeakableString *_label;	// 24 = 0x18
    NSNumber *_enabled;	// 32 = 0x20
    NSNumber *_firing;	// 40 = 0x28
    unsigned long long _alarmRepeatScheduleOptions;	// 48 = 0x30
    INSleepAlarmAttribute *_sleepAlarmAttribute;	// 56 = 0x38
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000495224
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049521c
- (void).cxx_destruct;	// IMP=0x00000000004951c8
@property(readonly, copy, nonatomic) INSleepAlarmAttribute *sleepAlarmAttribute; // @synthesize sleepAlarmAttribute=_sleepAlarmAttribute;
@property(readonly, nonatomic) unsigned long long alarmRepeatScheduleOptions; // @synthesize alarmRepeatScheduleOptions=_alarmRepeatScheduleOptions;
@property(readonly, copy, nonatomic) NSNumber *firing; // @synthesize firing=_firing;
@property(readonly, copy, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) INSpeakableString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSDateComponents *dateTime; // @synthesize dateTime=_dateTime;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000494eb7
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000494ddb
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000494bb8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000494ae3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004948cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004948c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000494784
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 dateTime:(id)arg2 label:(id)arg3 enabled:(id)arg4 firing:(id)arg5 alarmRepeatScheduleOptions:(unsigned long long)arg6 sleepAlarmAttribute:(id)arg7;	// IMP=0x000000000049454c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

