//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAInheritanceContact-Protocol.h>
#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class AKInheritanceAccessKey, NSString, NSUUID;

@interface AABeneficiary : NSObject <AAInheritanceContact, NSCopying, NSSecureCoding>
{
    NSUUID *_beneficiaryID;	// 8 = 0x8
    NSString *_benefactorAltDSID;	// 16 = 0x10
    AKInheritanceAccessKey *_accessKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008f78
- (void).cxx_destruct;	// IMP=0x0000000000008ffd
@property(retain, nonatomic) AKInheritanceAccessKey *accessKey; // @synthesize accessKey=_accessKey;
@property(readonly, nonatomic) NSString *benefactorAltDSID; // @synthesize benefactorAltDSID=_benefactorAltDSID;
@property(readonly, nonatomic) NSUUID *beneficiaryID; // @synthesize beneficiaryID=_beneficiaryID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008ed9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008e48
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008d40
- (id)initWithBeneficiaryID:(id)arg1 benefactorAltDSID:(id)arg2;	// IMP=0x0000000000008ca7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
