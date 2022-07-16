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

@class HMAccessCodeValue, NSArray, NSString, NSUUID;

@interface HMAccessCodeAddRequestValue : NSObject <HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>
{
    HMAccessCodeValue *_accessCodeValue;	// 8 = 0x8
    NSUUID *_accessoryUUID;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x0000000000093a6c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093a64
- (void).cxx_destruct;	// IMP=0x0000000000093a3c
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) HMAccessCodeValue *accessCodeValue; // @synthesize accessCodeValue=_accessCodeValue;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000936ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093651
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093646
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093473
- (id)initWithAccessCodeValue:(id)arg1 accessoryUUID:(id)arg2;	// IMP=0x00000000000933ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

