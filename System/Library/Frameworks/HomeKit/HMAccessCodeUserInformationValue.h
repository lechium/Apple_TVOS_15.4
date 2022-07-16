//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMRemovedUserInfo, NSArray, NSString, NSUUID;

@interface HMAccessCodeUserInformationValue : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSString *_simpleLabel;	// 8 = 0x8
    NSUUID *_userUUID;	// 16 = 0x10
    HMRemovedUserInfo *_removedUserInfo;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0000000000063467
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006345f
- (void).cxx_destruct;	// IMP=0x000000000006342c
@property(readonly, copy) HMRemovedUserInfo *removedUserInfo; // @synthesize removedUserInfo=_removedUserInfo;
@property(readonly, copy) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly, copy) NSString *simpleLabel; // @synthesize simpleLabel=_simpleLabel;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006311a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000063037
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006302c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062e0a
- (id)initWithSimpleLabel:(id)arg1 userUUID:(id)arg2 removedUserInfo:(id)arg3;	// IMP=0x0000000000062d2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

