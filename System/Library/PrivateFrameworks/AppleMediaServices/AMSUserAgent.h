//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSCoreOptionsBox, AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject
{
    AMSMappedBundleInfo *_bundleInfo;	// 8 = 0x8
    AMSProcessInfo *_processInfo;	// 16 = 0x10
    AMSCoreOptionsBox *_optionsBox;	// 24 = 0x18
}

+ (id)userAgentForProcessInfo:(id)arg1;	// IMP=0x00000000002334fd
+ (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000233441
+ (id)cachedUserAgentForBundleIdentifier:(id)arg1;	// IMP=0x00000000002333a9
+ (id)_sharedCache;	// IMP=0x000000000023333f
- (void).cxx_destruct;	// IMP=0x00000000002346c3
@property(readonly, nonatomic) AMSCoreOptionsBox *optionsBox; // @synthesize optionsBox=_optionsBox;
@property(readonly, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) AMSMappedBundleInfo *bundleInfo; // @synthesize bundleInfo=_bundleInfo;
- (id)_userAgentSuffix;	// IMP=0x00000000002345be
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 productType:(id)arg2;	// IMP=0x0000000000234383
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1;	// IMP=0x00000000002342e4
- (id)_sharedComponentFrameworkVersion;	// IMP=0x00000000002341d8
- (id)_sharedComponentFairPlayDeviceType;	// IMP=0x00000000002341ab
- (id)_compileAndShouldCache:(_Bool *)arg1;	// IMP=0x0000000000233c5a
- (id)_iOSComponentProductVersion;	// IMP=0x0000000000233b30
- (id)_iOSComponentHardwarePlatform;	// IMP=0x0000000000233a97
- (id)_iOSComponentDeviceModel;	// IMP=0x00000000002339e1
- (id)_iOSComponentClientInfo;	// IMP=0x00000000002338bd
- (id)_iOSComponentBuildVersion;	// IMP=0x0000000000233824
- (id)compile;	// IMP=0x00000000002334e9
@property(retain, nonatomic) NSString *clientVersion;
@property(retain, nonatomic) NSString *clientName;
- (id)initWithProcessInfo:(id)arg1;	// IMP=0x000000000023301a

@end

