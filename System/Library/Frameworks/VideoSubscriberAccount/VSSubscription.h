//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, VSSubscriptionSource;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_expirationDate;	// 8 = 0x8
    long long _accessLevel;	// 16 = 0x10
    NSArray *_tierIdentifiers;	// 24 = 0x18
    NSString *_billingIdentifier;	// 32 = 0x20
    NSDate *_creationDate;	// 40 = 0x28
    NSDate *_modificationDate;	// 48 = 0x30
    NSString *_derivedSubscriptionInfo;	// 56 = 0x38
    NSString *_providedSubscriptionInfo;	// 64 = 0x40
    VSSubscriptionSource *_source;	// 72 = 0x48
    NSString *_subscriberIdentifierHash;	// 80 = 0x50
}

+ (id)keyPathsForValuesAffectingVersionHash;	// IMP=0x00000000000209bd
+ (id)keyPathsForValuesAffectingSubscriptionInfo;	// IMP=0x000000000001fb3d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f7f1
- (void).cxx_destruct;	// IMP=0x0000000000020e32
@property(copy, nonatomic) NSString *subscriberIdentifierHash; // @synthesize subscriberIdentifierHash=_subscriberIdentifierHash;
@property(copy, nonatomic) VSSubscriptionSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *providedSubscriptionInfo; // @synthesize providedSubscriptionInfo=_providedSubscriptionInfo;
@property(copy, nonatomic) NSString *derivedSubscriptionInfo; // @synthesize derivedSubscriptionInfo=_derivedSubscriptionInfo;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *billingIdentifier; // @synthesize billingIdentifier=_billingIdentifier;
@property(copy, nonatomic) NSArray *tierIdentifiers; // @synthesize tierIdentifiers=_tierIdentifiers;
@property(nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSData *versionHash;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;	// IMP=0x0000000000020019
- (void)setNilValueForKey:(id)arg1;	// IMP=0x000000000001ff8e
@property(copy, nonatomic) NSString *subscriptionInfo;
- (id)description;	// IMP=0x000000000001f932
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f8d8
- (unsigned long long)hash;	// IMP=0x000000000001f89f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f84f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f7f9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f771
- (id)init;	// IMP=0x000000000001f70d

@end

