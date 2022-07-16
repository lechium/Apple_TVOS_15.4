//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MIEmbeddedWatchBundle
{
    _Bool _isPlaceholder;	// 8 = 0x8
}

- (id)pluginKitBundlesSkippingPlatformValidation:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x002000000002af9a
- (id)pluginKitBundlesWithError:(id *)arg1;	// IMP=0x001000000002af54
- (_Bool)allowsAppExtensionsNotInExtensionCache;	// IMP=0x001000000002af4c
- (id)currentOSVersionForValidationWithError:(id *)arg1;	// IMP=0x001000000002af3f
- (id)initWithParentBundle:(id)arg1 parentSubdirectory:(id)arg2 bundleName:(id)arg3 isPlaceholder:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000002af0f
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) _Bool isApplicableToKnownWatchOSVersion;
- (unsigned char)bundleType;	// IMP=0x001000000002aed9

@end
