//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDevice, NSString, NSUUID;

@interface _HKFitnessMachine : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_identifier;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _activityType;	// 24 = 0x18
    HKDevice *_device;	// 32 = 0x20
    NSString *_brand;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000175e58
- (void).cxx_destruct;	// IMP=0x000000000017611c
@property(readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000176050
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000175fa0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000175e60
- (void)_setBrand:(id)arg1;	// IMP=0x0000000000175e47
- (void)_setDevice:(id)arg1;	// IMP=0x0000000000175e36
- (void)_setActivityType:(unsigned long long)arg1;	// IMP=0x0000000000175e2c
- (id)description;	// IMP=0x0000000000175c33
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000175bac
- (unsigned long long)hash;	// IMP=0x0000000000175b96
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000175b20

@end
