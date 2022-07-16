//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPlaceholderSeed, MIStoreMetadata, NSString;

@interface IXPlaceholder <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d911
+ (id)_placeholderForBundle:(id)arg1 client:(unsigned long long)arg2 withParent:(id)arg3 installType:(unsigned long long)arg4 metadata:(id)arg5 error:(id *)arg6;	// IMP=0x000000000002b1f7
+ (id)placeholderForInstallable:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 metadata:(id)arg4 error:(id *)arg5;	// IMP=0x000000000002a9d0
+ (id)_infoPlistLocalizationDictionaryForBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a414
+ (id)_iconDataForBundle:(struct __CFBundle *)arg1 atURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002a154
+ (id)_iconDataFromAssetCatalogInBundle:(struct __CFBundle *)arg1 atURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000299fd
+ (id)_iconDataFromIconFileInBundle:(struct __CFBundle *)arg1 atURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029784
+ (id)_loadUIKitClasses;	// IMP=0x00000000000295ea
+ (id)_pngDataForCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000029401
+ (id)placeholderForRemovableSystemAppWithBundleID:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000029333
- (id)placeholderAttributesWithError:(id *)arg1;	// IMP=0x0000000000033727
- (_Bool)setPlaceholderAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003307f
- (_Bool)launchProhibited:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x0000000000032e7b
- (_Bool)setLaunchProhibited:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000032ca4
- (id)sinfDataWithError:(id *)arg1;	// IMP=0x000000000003299b
- (_Bool)setSinfData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000324ca
- (id)metadataWithError:(id *)arg1;	// IMP=0x00000000000321c1
- (_Bool)setMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000031b76
@property(copy, nonatomic) MIStoreMetadata *metadata; // @dynamic metadata;
@property(readonly, nonatomic) unsigned long long installType; // @dynamic installType;
@property(readonly, nonatomic) unsigned long long placeholderType; // @dynamic placeholderType;
- (void)setBundleID:(id)arg1;	// IMP=0x0000000000031881
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
- (void)setBundleName:(id)arg1;	// IMP=0x00000000000317bf
@property(readonly, copy, nonatomic) NSString *bundleName; // @dynamic bundleName;
- (Class)seedClass;	// IMP=0x000000000003175e
- (id)initWithSeed:(id)arg1;	// IMP=0x000000000003172f
- (_Bool)setConfigurationCompleteWithError:(id *)arg1;	// IMP=0x0000000000031394
@property(readonly, nonatomic) _Bool hasPlugInPlaceholderPromises;
- (id)plugInPlaceholderPromisesWithError:(id *)arg1;	// IMP=0x000000000003078b
- (_Bool)setPlugInPlaceholderPromises:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ff0c
@property(readonly, nonatomic) _Bool hasEntitlementsPromise;
- (id)entitlementsPromiseWithError:(id *)arg1;	// IMP=0x000000000002f59c
- (_Bool)setEntitlementsPromise:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f167
- (id)infoPlistLocalizationsWithError:(id *)arg1;	// IMP=0x000000000002ecd6
- (_Bool)setInfoPlistLocalizations:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e6be
@property(readonly, nonatomic) _Bool hasIconPromise;
- (id)iconPromiseWithError:(id *)arg1;	// IMP=0x000000000002dd4e
- (_Bool)setIconPromise:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d919
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d8e2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d8b3
- (_Bool)_doInitWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 isPlugin:(_Bool)arg4;	// IMP=0x000000000002d3e7
- (id)initPlugInPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 parentPlaceholder:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x000000000002d214
- (id)initAppPlaceholderWithBundleName:(id)arg1 bundleID:(id)arg2 installType:(unsigned long long)arg3 client:(unsigned long long)arg4;	// IMP=0x000000000002d11a

// Remaining properties
@property(retain, nonatomic) IXPlaceholderSeed *seed; // @dynamic seed;

@end

