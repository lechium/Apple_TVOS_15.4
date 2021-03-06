//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b8e1
- (void).cxx_destruct;	// IMP=0x000000000002bc38
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x000000000002baff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ba14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b8e9
- (id)initWithBundleIdentifier:(id)arg1 state:(unsigned long long)arg2;	// IMP=0x000000000002b855

@end

