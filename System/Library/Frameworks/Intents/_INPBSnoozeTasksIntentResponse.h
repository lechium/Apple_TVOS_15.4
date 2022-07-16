//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSnoozeTasksIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSnoozeTasksIntentResponse : PBCodable <_INPBSnoozeTasksIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_snoozedTasks;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ec86c
+ (Class)snoozedTasksType;	// IMP=0x00000000003ec85b
- (void).cxx_destruct;	// IMP=0x00000000003ec699
@property(copy, nonatomic) NSArray *snoozedTasks; // @synthesize snoozedTasks=_snoozedTasks;
- (id)dictionaryRepresentation;	// IMP=0x00000000003ec46c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ec2cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ec24b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ec1b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ec0ba
- (void)writeTo:(id)arg1;	// IMP=0x00000000003ebf8a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003ebf7d
- (id)snoozedTasksAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003ebf60
@property(readonly, nonatomic) unsigned long long snoozedTasksCount;
- (void)addSnoozedTasks:(id)arg1;	// IMP=0x00000000003ebec9
- (void)clearSnoozedTasks;	// IMP=0x00000000003ebeac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
