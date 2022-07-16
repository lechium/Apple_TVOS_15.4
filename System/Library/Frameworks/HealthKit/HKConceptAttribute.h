//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSCopying><NSSecureCoding><NSObject;

@interface HKConceptAttribute : NSObject <NSSecureCoding, NSCopying>
{
    long long _identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _valueType;	// 24 = 0x18
    id <NSCopying><NSSecureCoding><NSObject> _value;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000082fde
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4;	// IMP=0x0000000000082a6c
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 boolValue:(_Bool)arg3;	// IMP=0x0000000000082a3f
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 numberValue:(id)arg3;	// IMP=0x00000000000829c6
+ (id)attributeWithIdentifier:(long long)arg1 type:(long long)arg2 stringValue:(id)arg3;	// IMP=0x00000000000829ae
- (void).cxx_destruct;	// IMP=0x00000000000831e8
@property(readonly, copy, nonatomic) id <NSCopying><NSSecureCoding><NSObject> value; // @synthesize value=_value;
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000831b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000083115
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000082fe6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000082e40
- (unsigned long long)hash;	// IMP=0x0000000000082e14
- (id)description;	// IMP=0x0000000000082d97
@property(readonly, nonatomic) long long longLongValue;
@property(readonly, nonatomic) _Bool boolValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithIdentifier:(long long)arg1 type:(long long)arg2 valueType:(long long)arg3 value:(id)arg4;	// IMP=0x0000000000082b52
- (id)init;	// IMP=0x0000000000082ad8

@end

