//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBAlarmEvent : PBCodable <NSCopying>
{
    NSString *_alarmID;	// 8 = 0x8
    int _eventType;	// 16 = 0x10
    _Bool _isSleepAlarm;	// 20 = 0x14
    struct {
        unsigned int eventType:1;
        unsigned int isSleepAlarm:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cb29f
@property(retain, nonatomic) NSString *alarmID; // @synthesize alarmID=_alarmID;
@property(nonatomic) _Bool isSleepAlarm; // @synthesize isSleepAlarm=_isSleepAlarm;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000cb1ea
- (unsigned long long)hash;	// IMP=0x00000000000cb180
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cb08e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cafe1
- (void)copyTo:(id)arg1;	// IMP=0x00000000000caf61
- (void)writeTo:(id)arg1;	// IMP=0x00000000000caed2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000caec5
- (id)dictionaryRepresentation;	// IMP=0x00000000000caab2
- (id)description;	// IMP=0x00000000000caa03
@property(readonly, nonatomic) _Bool hasAlarmID;
- (int)StringAsEventType:(id)arg1;	// IMP=0x00000000000ca95c
- (id)eventTypeAsString:(int)arg1;	// IMP=0x00000000000ca8f6
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) _Bool hasIsSleepAlarm;

@end

