//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriObservation/NSCopying-Protocol.h>
#import <SiriObservation/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_date;	// 8 = 0x8
    NSDictionary *_alarmsByID;	// 16 = 0x10
    NSOrderedSet *_firingAlarmIDs;	// 24 = 0x18
    NSOrderedSet *_dismissedAlarmIDs;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009728
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009d2e
- (void).cxx_destruct;	// IMP=0x0000000000009a13
@property(readonly, copy, nonatomic) NSOrderedSet *dismissedAlarmIDs; // @synthesize dismissedAlarmIDs=_dismissedAlarmIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *firingAlarmIDs; // @synthesize firingAlarmIDs=_firingAlarmIDs;
@property(readonly, copy, nonatomic) NSDictionary *alarmsByID; // @synthesize alarmsByID=_alarmsByID;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009956
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009730
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000971d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000956e
- (unsigned long long)hash;	// IMP=0x0000000000009506
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000009292
- (id)description;	// IMP=0x000000000000927e
- (id)initWithDate:(id)arg1 alarmsByID:(id)arg2 firingAlarmIDs:(id)arg3 dismissedAlarmIDs:(id)arg4;	// IMP=0x0000000000009171
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009d9d

@end

