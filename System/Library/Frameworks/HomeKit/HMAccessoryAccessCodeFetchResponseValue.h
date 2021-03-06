//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSError, NSString, NSUUID;

@interface HMAccessoryAccessCodeFetchResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
    NSArray *_accessoryAccessCodeValues;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000001fed18
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001fed10
- (void).cxx_destruct;	// IMP=0x00000000001fecdd
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly, copy) NSArray *accessoryAccessCodeValues; // @synthesize accessoryAccessCodeValues=_accessoryAccessCodeValues;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001fe878
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001fe795
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fe78a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fe524
- (id)initWithAccessoryUUID:(id)arg1 accessoryAccessCodeValues:(id)arg2 error:(id)arg3;	// IMP=0x00000000001fe445

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

