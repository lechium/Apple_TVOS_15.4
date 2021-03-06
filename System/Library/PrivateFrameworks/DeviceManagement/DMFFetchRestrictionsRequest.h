//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMFFetchRestrictionsRequest
{
    _Bool _includeProfileRestrictions;	// 8 = 0x8
    unsigned long long _profileFilterFlags;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024c0d
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000024c05
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000024bfd
+ (id)permittedPlatforms;	// IMP=0x0000000000024bf0
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000024bdf
@property(nonatomic) unsigned long long profileFilterFlags; // @synthesize profileFilterFlags=_profileFilterFlags;
@property(nonatomic) _Bool includeProfileRestrictions; // @synthesize includeProfileRestrictions=_includeProfileRestrictions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000024d23
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024c15
- (id)init;	// IMP=0x0000000000024b9c

@end

