//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/NSSecureCoding-Protocol.h>

@class ICSDateValue, ICSDuration;

@interface ICSPeriod : NSObject <NSSecureCoding>
{
    ICSDateValue *_start;	// 8 = 0x8
    ICSDateValue *_end;	// 16 = 0x10
    ICSDuration *_duration;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002e77e
- (void).cxx_destruct;	// IMP=0x000000000002e919
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e809
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002e786
- (_Bool)isDurationBased;	// IMP=0x000000000002e74b
- (id)duration;	// IMP=0x000000000002e73d
- (id)end;	// IMP=0x000000000002e72f
- (id)start;	// IMP=0x000000000002e721
- (id)initWithStart:(id)arg1 duration:(id)arg2;	// IMP=0x000000000002e6c2
- (id)initWithStart:(id)arg1 end:(id)arg2;	// IMP=0x000000000002e663
- (id)initWithStart:(id)arg1;	// IMP=0x000000000002e5f8
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;	// IMP=0x000000000001b19a

@end
