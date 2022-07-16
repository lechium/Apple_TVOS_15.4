//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFProcessDeclarationsRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000030f4f
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000030f47
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000030f3f
+ (id)permittedPlatforms;	// IMP=0x0000000000030f32
- (void).cxx_destruct;	// IMP=0x00000000000310eb
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003102e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030f57

@end

