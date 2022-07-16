//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>
{
    _Bool _displayedNotification;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    NSString *_inviteEmail;	// 24 = 0x18
    NSDate *_inviteDate;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003d4985
- (void).cxx_destruct;	// IMP=0x00000000003d4cfe
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(nonatomic) _Bool displayedNotification; // @synthesize displayedNotification=_displayedNotification;
@property(copy, nonatomic) NSDate *inviteDate; // @synthesize inviteDate=_inviteDate;
@property(copy, nonatomic) NSString *inviteEmail; // @synthesize inviteEmail=_inviteEmail;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;	// IMP=0x00000000003d4b97
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d4ae6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d498d
- (unsigned long long)hash;	// IMP=0x00000000003d48f6
- (_Bool)_isEqualToAccountPendingFamilyMember:(id)arg1;	// IMP=0x00000000003d4742
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003d46da
- (id)initWithPendingFamilyMember:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00000000003d45da

@end
