//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSnoozeAlarmIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBSnoozeAlarmIntent : PBCodable <_INPBSnoozeAlarmIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_alarms;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000498406
+ (Class)alarmsType;	// IMP=0x00000000004983f5
- (void).cxx_destruct;	// IMP=0x00000000004981b1
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (id)dictionaryRepresentation;	// IMP=0x0000000000497f08
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000497bfe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000497b3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000497aad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004979ae
- (void)writeTo:(id)arg1;	// IMP=0x000000000049780e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000497801
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)alarmsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004977bb
@property(readonly, nonatomic) unsigned long long alarmsCount;
- (void)addAlarms:(id)arg1;	// IMP=0x0000000000497724
- (void)clearAlarms;	// IMP=0x0000000000497707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

