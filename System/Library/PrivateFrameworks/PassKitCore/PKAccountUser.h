//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSPersonNameComponents, NSSet, NSString, PKAccountUserNotificationSettings, PKAccountUserPreferences;

@interface PKAccountUser : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _currentUser;	// 8 = 0x8
    _Bool _dirty;	// 9 = 0x9
    unsigned long long _accessLevel;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    unsigned long long _accountState;	// 32 = 0x20
    NSString *_appleID;	// 40 = 0x28
    NSSet *_addressableHandles;	// 48 = 0x30
    NSSet *_supportedFeatures;	// 56 = 0x38
    PKAccountUserPreferences *_preferences;	// 64 = 0x40
    unsigned long long _identityStatus;	// 72 = 0x48
    NSDate *_lastUpdated;	// 80 = 0x50
    NSSet *_transactionSourceIdentifiers;	// 88 = 0x58
    NSString *_accountIdentifier;	// 96 = 0x60
    PKAccountUserNotificationSettings *_notificationSettings;	// 104 = 0x68
    NSString *_firstName;	// 112 = 0x70
    NSString *_lastName;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001c2588
+ (_Bool)currentUser:(id)arg1 shouldRequestZoneShareForZone:(id)arg2;	// IMP=0x00000000001c1e8d
+ (_Bool)currentUser:(id)arg1 canShareZone:(id)arg2 withAccountUser:(id)arg3;	// IMP=0x00000000001c1a23
- (void).cxx_destruct;	// IMP=0x00000000001c2da5
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) PKAccountUserNotificationSettings *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSSet *transactionSourceIdentifiers; // @synthesize transactionSourceIdentifiers=_transactionSourceIdentifiers;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) unsigned long long identityStatus; // @synthesize identityStatus=_identityStatus;
@property(retain, nonatomic) PKAccountUserPreferences *preferences; // @synthesize preferences=_preferences;
@property(copy, nonatomic) NSSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
@property(copy, nonatomic) NSSet *addressableHandles; // @synthesize addressableHandles=_addressableHandles;
@property(nonatomic, getter=isCurrentUser) _Bool currentUser; // @synthesize currentUser=_currentUser;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) unsigned long long accountState; // @synthesize accountState=_accountState;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c2aaa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c2945
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c2590
- (id)description;	// IMP=0x00000000001c2356
- (unsigned long long)hash;	// IMP=0x00000000001c2254
- (_Bool)isEqualToAccountUser:(id)arg1;	// IMP=0x00000000001c2145
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c20dd
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001c15cc
- (id)_featureWithIdentifier:(id)arg1;	// IMP=0x00000000001c2f1d
- (id)physicalCardActivationFeatureDescriptor;	// IMP=0x00000000001c2f01
- (_Bool)supportsPhysicalCardActivation;	// IMP=0x00000000001c2ece
- (id)monthlySpendLimitFeatureDescriptor;	// IMP=0x00000000001c2eb2
- (_Bool)supportsMonthlySpendLimit;	// IMP=0x00000000001c2e7f
- (id)requestPhysicalCardFeatureDescriptor;	// IMP=0x00000000001c2e63
- (_Bool)supportsRequestPhysicalCard;	// IMP=0x00000000001c2e30

@end

