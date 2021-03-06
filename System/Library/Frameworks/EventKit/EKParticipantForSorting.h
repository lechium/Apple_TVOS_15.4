//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKParticipant, NSString;
@protocol EKIdentityProtocol;

@interface EKParticipantForSorting : NSObject <NSCopying>
{
    _Bool _isEmail;	// 8 = 0x8
    _Bool _isPhone;	// 9 = 0x9
    EKParticipant *_participant;	// 16 = 0x10
    id <EKIdentityProtocol> _identity;	// 24 = 0x18
    NSString *_firstName;	// 32 = 0x20
    NSString *_lastName;	// 40 = 0x28
    NSString *_cachedDisplayName;	// 48 = 0x30
}

+ (id)_sharedParticipantForSortingWithIdentity:(id)arg1 participant:(id)arg2 contactPredicate:(id)arg3;	// IMP=0x000000000001b651
+ (id)participantForSortingWithIdentity:(id)arg1;	// IMP=0x000000000001b41d
+ (id)participantForSortingWithEKParticipant:(id)arg1;	// IMP=0x000000000001b39d
- (void).cxx_destruct;	// IMP=0x000000000001c5ab
@property(nonatomic) _Bool isPhone; // @synthesize isPhone=_isPhone;
@property(nonatomic) _Bool isEmail; // @synthesize isEmail=_isEmail;
@property(copy, nonatomic) NSString *cachedDisplayName; // @synthesize cachedDisplayName=_cachedDisplayName;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) __weak id <EKIdentityProtocol> identity; // @synthesize identity=_identity;
@property(nonatomic) __weak EKParticipant *participant; // @synthesize participant=_participant;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c487
- (long long)compareByContactNames:(id)arg1;	// IMP=0x000000000001c2d2
- (long long)compareByEmailThenByContactName:(id)arg1;	// IMP=0x000000000001c1c1
- (_Bool)participantIsOptional:(id)arg1;	// IMP=0x000000000001c1a4
- (long long)compare:(id)arg1;	// IMP=0x000000000001c0cd
- (id)displayName;	// IMP=0x000000000001c0a3
- (id)description;	// IMP=0x000000000001bfd6

@end

