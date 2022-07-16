//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher
{
    _Bool _ignoresNickname;	// 8 = 0x8
    _Bool _ignoresOrganization;	// 9 = 0x9
    NSSet *_mandatoryNameProperties;	// 16 = 0x10
    NSDictionary *_fallBackNamePropertyByNameKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c3fe9
- (void).cxx_destruct;	// IMP=0x00000000000c5357
@property(nonatomic) _Bool ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property(nonatomic) _Bool ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
- (id)_cn_ignorableKeys;	// IMP=0x00000000000c52fe
- (id)_cn_optionalKeys;	// IMP=0x00000000000c4fbc
- (id)_cn_requiredKeys;	// IMP=0x00000000000c4e84
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c49ce
- (unsigned long long)hash;	// IMP=0x00000000000c457a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c43e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4311
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c4233
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c3ff1
- (id)init;	// IMP=0x00000000000c3d32

@end

