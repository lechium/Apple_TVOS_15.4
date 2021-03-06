//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AKInheritanceCLIContext
{
    NSString *_accessKeyString;	// 8 = 0x8
    NSString *_beneficiaryPassword;	// 16 = 0x10
    NSString *_beneficiaryFirstName;	// 24 = 0x18
    NSString *_beneficiaryLastName;	// 32 = 0x20
    NSString *_identityToken;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041431
- (void).cxx_destruct;	// IMP=0x00000000000416a0
@property(copy, nonatomic) NSString *identityToken; // @synthesize identityToken=_identityToken;
@property(copy, nonatomic) NSString *beneficiaryLastName; // @synthesize beneficiaryLastName=_beneficiaryLastName;
@property(copy, nonatomic) NSString *beneficiaryFirstName; // @synthesize beneficiaryFirstName=_beneficiaryFirstName;
@property(copy, nonatomic) NSString *beneficiaryPassword; // @synthesize beneficiaryPassword=_beneficiaryPassword;
@property(copy, nonatomic) NSString *accessKeyString; // @synthesize accessKeyString=_accessKeyString;
- (id)description;	// IMP=0x0000000000041529
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000041439
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000041331
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041197

@end

