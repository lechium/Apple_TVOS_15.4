//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface MIPluginKitPluginBundle
{
    NSDictionary *_extensionPointOverlay;	// 8 = 0x8
    NSString *_extensionPointIdentifier;	// 16 = 0x10
    NSDictionary *_extensionAttributes;	// 24 = 0x18
    NSDictionary *_overlaidInfoPlist;	// 32 = 0x20
    NSString *_validationOverrideParentBundleID;	// 40 = 0x28
}

+ (id)bundlesInParentBundle:(id)arg1 subDirectory:(id)arg2 matchingPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00400000000512b5
+ (id)bundlesInParentBundle:(id)arg1 overrideParentBundleIDForValidation:(id)arg2 subDirectory:(id)arg3 matchingPredicate:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x001000000005112a
- (void).cxx_destruct;	// IMP=0x00200000000543f2
@property(copy, nonatomic) NSString *validationOverrideParentBundleID; // @synthesize validationOverrideParentBundleID=_validationOverrideParentBundleID;
@property(copy, nonatomic) NSDictionary *overlaidInfoPlist; // @synthesize overlaidInfoPlist=_overlaidInfoPlist;
- (_Bool)validateBundleMetadataWithError:(id *)arg1;	// IMP=0x0010000000053c79
- (_Bool)_validateNSExtensionWithOverlaidDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000052c0a
- (_Bool)_validateXPCServiceWithOverlaidDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000526cd
- (id)dataContainerCreatingIfNeeded:(_Bool)arg1 makeLive:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005261e
- (id)dataContainerWithError:(id *)arg1;	// IMP=0x00100000000525d7
- (id)overlaidInfoPlistWithError:(id *)arg1;	// IMP=0x0010000000051b51
- (id)_overlayDictionary:(id)arg1 onDictionary:(id)arg2;	// IMP=0x001000000005191c
- (void)setBundleParentDirectoryURL:(id)arg1;	// IMP=0x00100000000518ed
@property(readonly, nonatomic) _Bool isMapsGeoServicesExtension;
@property(readonly, nonatomic) _Bool isFileProviderNonUIExtension;
@property(readonly, nonatomic) _Bool isMessagePayloadProviderExtension;
@property(readonly, nonatomic) _Bool isSiriIntentsUIExtension;
@property(readonly, nonatomic) _Bool isSiriIntentsExtension;
- (_Bool)isWatchKitExtension;	// IMP=0x001000000005172b
@property(readonly, copy, nonatomic) NSDictionary *extensionAttributes; // @synthesize extensionAttributes=_extensionAttributes;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *exExtensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *nsExtensionPointIdentifier;
- (Class)dataContainerClass;	// IMP=0x00100000000512df
- (id)minimumOSVersion;	// IMP=0x001000000005109d
@property(readonly, nonatomic) NSDictionary *extensionPointOverlay; // @synthesize extensionPointOverlay=_extensionPointOverlay;
- (id)initWithBundleParentURL:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000050f39

@end

