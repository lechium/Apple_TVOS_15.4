//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMFSetDataRoamingEnabledRequest
{
    _Bool _enabled;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000392f8
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x00000000000392f0
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x00000000000392e8
+ (id)permittedPlatforms;	// IMP=0x00000000000392db
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000393b5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039300

@end

