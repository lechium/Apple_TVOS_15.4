//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface MIPlaceholderConstructor : NSObject
{
    _Bool _performPlaceholderInstallActions;	// 8 = 0x8
    _Bool _isLaunchProhibited;	// 9 = 0x9
    NSURL *_substituteIconFileURL;	// 16 = 0x10
    unsigned long long _iconPreservationLevel;	// 24 = 0x18
    NSDictionary *_entitlements;	// 32 = 0x20
    NSArray *_pluginPlaceholderConstructors;	// 40 = 0x28
    unsigned long long _placeholderType;	// 48 = 0x30
    NSURL *_bundleURL;	// 56 = 0x38
    NSDictionary *_partialInfoPlist;	// 64 = 0x40
    NSData *_installUUID;	// 72 = 0x48
    NSData *_installSessionUUID;	// 80 = 0x50
}

+ (id)_infoPlistKeysToLoad;	// IMP=0x000000000002748e
+ (id)_iconKeys;	// IMP=0x000000000002743a
- (void).cxx_destruct;	// IMP=0x00000000000297b5
@property(retain, nonatomic) NSData *installSessionUUID; // @synthesize installSessionUUID=_installSessionUUID;
@property(retain, nonatomic) NSData *installUUID; // @synthesize installUUID=_installUUID;
@property(retain, nonatomic) NSDictionary *partialInfoPlist; // @synthesize partialInfoPlist=_partialInfoPlist;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(copy, nonatomic) NSArray *pluginPlaceholderConstructors; // @synthesize pluginPlaceholderConstructors=_pluginPlaceholderConstructors;
@property(nonatomic) _Bool isLaunchProhibited; // @synthesize isLaunchProhibited=_isLaunchProhibited;
@property(copy, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) unsigned long long iconPreservationLevel; // @synthesize iconPreservationLevel=_iconPreservationLevel;
@property(nonatomic) _Bool performPlaceholderInstallActions; // @synthesize performPlaceholderInstallActions=_performPlaceholderInstallActions;
@property(retain, nonatomic) NSURL *substituteIconFileURL; // @synthesize substituteIconFileURL=_substituteIconFileURL;
- (_Bool)materializeIntoBundleDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028f71
- (_Bool)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028afb
- (_Bool)_writeIconToPlaceholder:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000289d3
- (_Bool)_copyStringsToPlaceholder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000028500
- (_Bool)_writeInfoPlistToPlaceholder:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000002816e
- (_Bool)_introspectWithError:(id *)arg1;	// IMP=0x0000000000027bb2
- (_Bool)_populatePluginPlaceholderConstructorsWithError:(id *)arg1;	// IMP=0x00000000000277ab
- (_Bool)_loadPartialInfoPlistWithError:(id *)arg1;	// IMP=0x0000000000027637
- (id)_entitlementsForPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027252
- (id)initWithSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027086

@end

