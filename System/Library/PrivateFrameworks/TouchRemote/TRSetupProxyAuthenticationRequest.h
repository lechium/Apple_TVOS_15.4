//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSSet, NSString;

@interface TRSetupProxyAuthenticationRequest
{
    _Bool _shouldUseAIDA;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSString *_rawPassword;	// 24 = 0x18
    NSSet *_targetedAccountServices;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c15b
- (void).cxx_destruct;	// IMP=0x000000000000c5a1
@property(nonatomic) _Bool shouldUseAIDA; // @synthesize shouldUseAIDA=_shouldUseAIDA;
@property(retain, nonatomic) NSSet *targetedAccountServices; // @synthesize targetedAccountServices=_targetedAccountServices;
@property(retain, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)description;	// IMP=0x000000000000c3d3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c247
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c163

@end

