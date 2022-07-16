//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMEProtoBufferCoding-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HMMediaDestinationControllerData : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding, HMEProtoBufferCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSUUID *_parentIdentifier;	// 16 = 0x10
    NSUUID *_destinationIdentifier;	// 24 = 0x18
    NSArray *_availableDestinationIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c7596
+ (id)shortDescription;	// IMP=0x00000000000c7584
+ (id)logCategory;	// IMP=0x00000000000c7554
- (void).cxx_destruct;	// IMP=0x00000000000c733f
@property(copy) NSArray *availableDestinationIdentifiers; // @synthesize availableDestinationIdentifiers=_availableDestinationIdentifiers;
@property(copy) NSUUID *destinationIdentifier; // @synthesize destinationIdentifier=_destinationIdentifier;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithProtoBufferData:(id)arg1;	// IMP=0x00000000000c7238
- (id)encodeToProtoBufferData;	// IMP=0x00000000000c7230
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c7118
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c6ac5
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c66de
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c6600
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c65f5
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;	// IMP=0x00000000000c639c
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 destinationIdentifier:(id)arg3 availableDestinationIdentifiers:(id)arg4;	// IMP=0x00000000000c626d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

