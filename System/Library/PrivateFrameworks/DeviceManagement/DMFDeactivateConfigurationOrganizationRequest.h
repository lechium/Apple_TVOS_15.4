//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFDeactivateConfigurationOrganizationRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017e58
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000017e50
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000017e48
+ (id)permittedPlatforms;	// IMP=0x0000000000017e3b
- (void).cxx_destruct;	// IMP=0x0000000000017ff4
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017f37
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017e60

@end

