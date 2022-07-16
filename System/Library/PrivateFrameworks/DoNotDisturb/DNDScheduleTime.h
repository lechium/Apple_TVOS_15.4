//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _hour;	// 8 = 0x8
    unsigned long long _minute;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002a84
+ (id)defaultEndTime;	// IMP=0x00000000000027b1
+ (id)defaultStartTime;	// IMP=0x0000000000002788
@property(readonly, nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) unsigned long long hour; // @synthesize hour=_hour;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002b09
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002a8c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002a56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002a4b
- (id)description;	// IMP=0x00000000000029ee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002924
- (unsigned long long)hash;	// IMP=0x00000000000028e8
- (id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;	// IMP=0x0000000000002861
- (id)_initWithTime:(id)arg1;	// IMP=0x00000000000027ee
- (id)init;	// IMP=0x00000000000027da
- (id)dateComponents;	// IMP=0x00000000000137ea

@end
