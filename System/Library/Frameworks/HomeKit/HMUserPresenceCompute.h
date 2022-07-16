//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMUserPresenceCompute : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)computeWithCoder:(id)arg1;	// IMP=0x0000000000204e44
+ (id)computeWithDict:(id)arg1;	// IMP=0x0000000000204de3
+ (id)computeWithMessage:(id)arg1;	// IMP=0x0000000000204d82
+ (id)computeWithNumber:(id)arg1;	// IMP=0x0000000000204d35
+ (id)computeWithValue:(unsigned long long)arg1;	// IMP=0x0000000000204cc5
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000204c47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000204ba5
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x0000000000204af7
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000204a7e
- (id)initWithNumber:(id)arg1;	// IMP=0x00000000002049ea

@end
