//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSCopying-Protocol.h>

@interface CalRecurrenceDayOfWeek : NSObject <NSCopying>
{
    long long _dayOfTheWeek;	// 8 = 0x8
    long long _weekNumber;	// 16 = 0x10
}

+ (id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2;	// IMP=0x000000000004cab5
+ (id)dayOfWeek:(long long)arg1;	// IMP=0x000000000004ca84
@property(readonly, nonatomic) long long weekNumber; // @synthesize weekNumber=_weekNumber;
@property(readonly, nonatomic) long long dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004cf07
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ce3d
- (unsigned long long)hash;	// IMP=0x000000000004ce01
- (id)description;	// IMP=0x000000000004cd79
- (id)iCalendarDescription;	// IMP=0x000000000004cce0
- (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;	// IMP=0x000000000004cc67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004cbf9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004cb66
- (id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2;	// IMP=0x000000000004cae9

@end

