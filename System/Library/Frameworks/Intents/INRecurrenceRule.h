//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _interval;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
    unsigned long long _weeklyRecurrenceDays;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000273cfa
@property(readonly, nonatomic) unsigned long long weeklyRecurrenceDays; // @synthesize weeklyRecurrenceDays=_weeklyRecurrenceDays;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) unsigned long long interval; // @synthesize interval=_interval;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000273b52
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000273a76
- (id)description;	// IMP=0x0000000000273a62
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002739df
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000027394a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027393f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002738c1
- (unsigned long long)hash;	// IMP=0x00000000002738af
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 weeklyRecurrenceDays:(unsigned long long)arg3;	// IMP=0x000000000027385c
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;	// IMP=0x0000000000273847

@end

