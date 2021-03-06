//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessCodeModificationRequestValue-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessCodeValue, HMAccessoryAccessCodeValue, NSArray, NSString, NSUUID;

@interface HMAccessCodeUpdateRequestValue : NSObject <HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>
{
    HMAccessoryAccessCodeValue *_accessoryAccessCodeValue;	// 8 = 0x8
    HMAccessCodeValue *_updatedAccessCodeValue;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x000000000002958f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029587
- (void).cxx_destruct;	// IMP=0x000000000002955f
@property(readonly, copy) HMAccessCodeValue *updatedAccessCodeValue; // @synthesize updatedAccessCodeValue=_updatedAccessCodeValue;
@property(readonly, copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue; // @synthesize accessoryAccessCodeValue=_accessoryAccessCodeValue;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029222
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029174
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029169
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028f96
@property(readonly, copy) NSUUID *accessoryUUID;
- (id)initWithAccessoryAccessCodeValue:(id)arg1 updatedAccessCodeValue:(id)arg2;	// IMP=0x0000000000028e8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

