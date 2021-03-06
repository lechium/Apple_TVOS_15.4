//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTimeErrorValue : NSObject
{
    unsigned long long _timestamp;	// 8 = 0x8
    long long _error;	// 16 = 0x10
}

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)arg1 timeError:(long long *)arg2 count:(long long)arg3;	// IMP=0x0000000000006edc
@property(readonly, nonatomic) long long error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)description;	// IMP=0x0000000000006e3b
- (id)initWithTimestamp:(unsigned long long)arg1 andError:(long long)arg2;	// IMP=0x0000000000006df3

@end

