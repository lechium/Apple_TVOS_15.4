//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFRemoveProfileRequest
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_profileIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003553b
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000035533
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000003552b
+ (id)permittedPlatforms;	// IMP=0x000000000003551e
- (void).cxx_destruct;	// IMP=0x000000000003579d
@property(copy, nonatomic) NSString *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003566e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035543

@end

