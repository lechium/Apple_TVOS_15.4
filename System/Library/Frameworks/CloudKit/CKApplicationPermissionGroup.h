//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding>
{
    NSArray *_containerIDs;	// 8 = 0x8
    NSArray *_applicationBundleIDs;	// 16 = 0x10
    unsigned long long _enabledPermissions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000081bb9
- (void).cxx_destruct;	// IMP=0x0000000000081f64
@property(nonatomic) unsigned long long enabledPermissions; // @synthesize enabledPermissions=_enabledPermissions;
@property(copy, nonatomic) NSArray *applicationBundleIDs; // @synthesize applicationBundleIDs=_applicationBundleIDs;
@property(copy, nonatomic) NSArray *containerIDs; // @synthesize containerIDs=_containerIDs;
- (id)description;	// IMP=0x0000000000081f0c
- (id)CKPropertiesDescription;	// IMP=0x0000000000081e5d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000081d7a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000081bc1
- (id)init;	// IMP=0x0000000000081b51

@end

