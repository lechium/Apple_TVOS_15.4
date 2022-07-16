//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFCreateConfigurationOrganizationRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSString *_organizationDisplayName;	// 16 = 0x10
    NSString *_organizationType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017ad1
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000017ac9
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000017ac1
+ (id)permittedPlatforms;	// IMP=0x0000000000017ab4
- (void).cxx_destruct;	// IMP=0x0000000000017df9
@property(copy, nonatomic) NSString *organizationType; // @synthesize organizationType=_organizationType;
@property(copy, nonatomic) NSString *organizationDisplayName; // @synthesize organizationDisplayName=_organizationDisplayName;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017c8a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017ad9

@end
