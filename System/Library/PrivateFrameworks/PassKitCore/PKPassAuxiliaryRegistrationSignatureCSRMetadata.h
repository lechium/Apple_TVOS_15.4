//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPassAuxiliaryRegistrationSignatureCSRMetadata
{
    unsigned long long _signatureSchemeVersion;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d0171
@property(readonly, nonatomic) unsigned long long signatureSchemeVersion; // @synthesize signatureSchemeVersion=_signatureSchemeVersion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d022f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d0179
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d0060

@end

