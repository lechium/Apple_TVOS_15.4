//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>
{
    long long _keyType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d326
+ (id)constraintWithInt64Keys;	// IMP=0x000000000001d2ff
+ (id)constraintWithStringKeys;	// IMP=0x000000000001d2d8
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d290
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d237
- (id)description;	// IMP=0x000000000001d1fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d1c5
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001ceb8
- (id)initWithKeyType:(long long)arg1;	// IMP=0x000000000001ce7b

@end
