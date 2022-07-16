//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface DMFRemoveConfigurationRequest
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_profile;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034efe
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000034ef6
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000034eee
+ (id)permittedPlatforms;	// IMP=0x0000000000034ee1
- (void).cxx_destruct;	// IMP=0x0000000000035235
@property(copy, nonatomic) NSDictionary *profile; // @synthesize profile=_profile;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035106
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034f06

@end
