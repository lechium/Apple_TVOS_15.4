//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface HMCHIPEcosystem : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSNumber *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000000aa415
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aa40d
- (void).cxx_destruct;	// IMP=0x00000000000aa34c
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a9ff9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a9f4b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a9ebd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a9eb2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9d2d
@property(readonly, getter=isAppleEcosystem) _Bool appleEcosystem;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x00000000000a9b33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

