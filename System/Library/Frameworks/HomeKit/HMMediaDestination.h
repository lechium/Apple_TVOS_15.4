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

@interface HMMediaDestination : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding, HMEProtoBufferCoding>
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSUUID *_parentIdentifier;	// 16 = 0x10
    unsigned long long _supportedOptions;	// 24 = 0x18
    NSUUID *_audioGroupIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002bcd3
+ (id)shortDescription;	// IMP=0x000000000002bcc1
+ (id)logCategory;	// IMP=0x000000000002bc91
+ (id)payloadForNullDestination;	// IMP=0x000000000002bc1b
+ (id)payloadForDestination:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000002b9a1
- (void).cxx_destruct;	// IMP=0x000000000002b69b
@property(copy) NSUUID *audioGroupIdentifier; // @synthesize audioGroupIdentifier=_audioGroupIdentifier;
@property unsigned long long supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)initWithProtoBufferData:(id)arg1;	// IMP=0x000000000002b5a7
- (id)encodeToProtoBufferData;	// IMP=0x000000000002b59f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b470
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b050
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002adfa
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ad27
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;	// IMP=0x000000000002ab0b
- (_Bool)containsMediaSystemSupportedOptions;	// IMP=0x000000000002aacc
- (_Bool)containsHomeTheaterSupportedOptions;	// IMP=0x000000000002aa8d
- (_Bool)containsSupportedOptions:(unsigned long long)arg1;	// IMP=0x000000000002aa67
@property(readonly, copy) NSString *identifier;
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3 audioGroupIdentifier:(id)arg4;	// IMP=0x000000000002a917
- (id)initWithUniqueIdentifier:(id)arg1 parentIdentifier:(id)arg2 supportedOptions:(unsigned long long)arg3;	// IMP=0x000000000002a902

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

