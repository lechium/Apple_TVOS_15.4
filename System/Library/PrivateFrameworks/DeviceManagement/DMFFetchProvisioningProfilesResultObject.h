//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject
{
    NSArray *_profiles;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024765
- (void).cxx_destruct;	// IMP=0x0000000000024b89
@property(readonly, copy, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (id)description;	// IMP=0x00000000000248fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002485f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002476d
- (id)initWithProfiles:(id)arg1;	// IMP=0x00000000000246eb

@end

