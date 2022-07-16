//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMPresenceEventActivation : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)activationGranularityWithCoder:(id)arg1;	// IMP=0x00000000001b2ec3
+ (id)activationGranularityWithDict:(id)arg1;	// IMP=0x00000000001b2e62
+ (id)activationGranularityWithMessage:(id)arg1;	// IMP=0x00000000001b2e01
+ (id)activationGranularityWithNumber:(id)arg1;	// IMP=0x00000000001b2db4
+ (id)activationGranularityWithValue:(unsigned long long)arg1;	// IMP=0x00000000001b2d44
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000001b2c6d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b2bcb
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x00000000001b2b1d
- (void)addToCoder:(id)arg1;	// IMP=0x00000000001b2aa4
- (id)initWithNumber:(id)arg1;	// IMP=0x00000000001b2a10

@end

