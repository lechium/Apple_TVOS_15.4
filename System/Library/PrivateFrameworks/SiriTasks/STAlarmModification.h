//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber, NSString, NSURL;

@interface STAlarmModification : STSiriModelObject
{
    long long _addedFrequency;	// 8 = 0x8
    NSURL *_alarmId;	// 16 = 0x10
    NSNumber *_enabled;	// 24 = 0x18
    NSNumber *_hour;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    NSNumber *_minute;	// 48 = 0x30
    long long _removedFrequency;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a711
- (void).cxx_destruct;	// IMP=0x000000000000aa22
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a84a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a719
- (long long)removedFrequency;	// IMP=0x000000000000a700
- (id)minute;	// IMP=0x000000000000a6eb
- (id)label;	// IMP=0x000000000000a6d6
- (id)hour;	// IMP=0x000000000000a6c1
- (id)enabled;	// IMP=0x000000000000a6ac
- (id)alarmId;	// IMP=0x000000000000a697
- (long long)addedFrequency;	// IMP=0x000000000000a686
- (id)_initWithAddedFrequency:(long long)arg1 alarmId:(id)arg2 enabled:(id)arg3 hour:(id)arg4 label:(id)arg5 minute:(id)arg6 removedFrequency:(long long)arg7;	// IMP=0x000000000000a4d1

@end

