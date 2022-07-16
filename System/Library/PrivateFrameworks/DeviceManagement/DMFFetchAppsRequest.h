//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest
{
    _Bool _deleteFeedback;	// 8 = 0x8
    _Bool _managedAppsOnly;	// 9 = 0x9
    _Bool _advanceTransientStates;	// 10 = 0xa
    unsigned long long _type;	// 16 = 0x10
    NSArray *_bundleIdentifiers;	// 24 = 0x18
    NSNumber *_storeItemIdentifier;	// 32 = 0x20
    NSURL *_manifestURL;	// 40 = 0x28
    NSArray *_propertyKeys;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e08d
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x000000000001e085
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000001e07d
+ (id)permittedPlatforms;	// IMP=0x000000000001e070
+ (Class)whitelistedClassForResultObject;	// IMP=0x000000000001e05f
- (void).cxx_destruct;	// IMP=0x000000000001e7b3
@property(copy, nonatomic) NSArray *propertyKeys; // @synthesize propertyKeys=_propertyKeys;
@property(nonatomic) _Bool advanceTransientStates; // @synthesize advanceTransientStates=_advanceTransientStates;
@property(nonatomic) _Bool managedAppsOnly; // @synthesize managedAppsOnly=_managedAppsOnly;
@property(copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) _Bool deleteFeedback; // @synthesize deleteFeedback=_deleteFeedback;
@property(copy, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e42d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e095
- (id)init;	// IMP=0x000000000001e01c

@end
