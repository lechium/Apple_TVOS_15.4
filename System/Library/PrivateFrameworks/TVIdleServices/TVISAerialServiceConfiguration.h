//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;
@protocol AMSBagProtocol;

@interface TVISAerialServiceConfiguration : NSObject
{
    NSString *_mode;	// 8 = 0x8
    NSSet *_supportedVariants;	// 16 = 0x10
    NSString *_activeAssetVariant;	// 24 = 0x18
    long long _remoteAssetDownloadInterval;	// 32 = 0x20
    NSURL *_localManifestURL;	// 40 = 0x28
    NSURL *_localResourceURL;	// 48 = 0x30
    NSURL *_localizedStringsBundleURL;	// 56 = 0x38
    NSURL *_localCacheBaseURL;	// 64 = 0x40
    NSURL *_localCacheURLForActiveAssetVariant;	// 72 = 0x48
    id <AMSBagProtocol> _idleScreenBag;	// 80 = 0x50
}

+ (id)customerAssetsServiceConfiguration;	// IMP=0x000000000001a9b0
- (void).cxx_destruct;	// IMP=0x000000000001bb60
@property(retain, nonatomic) id <AMSBagProtocol> idleScreenBag; // @synthesize idleScreenBag=_idleScreenBag;
@property(readonly, nonatomic) NSURL *localCacheURLForActiveAssetVariant; // @synthesize localCacheURLForActiveAssetVariant=_localCacheURLForActiveAssetVariant;
@property(readonly, nonatomic) NSURL *localCacheBaseURL; // @synthesize localCacheBaseURL=_localCacheBaseURL;
@property(readonly, nonatomic) NSURL *localizedStringsBundleURL; // @synthesize localizedStringsBundleURL=_localizedStringsBundleURL;
@property(readonly, nonatomic) NSURL *localResourceURL; // @synthesize localResourceURL=_localResourceURL;
@property(readonly, nonatomic) NSURL *localManifestURL; // @synthesize localManifestURL=_localManifestURL;
@property(readonly, nonatomic) long long remoteAssetDownloadInterval; // @synthesize remoteAssetDownloadInterval=_remoteAssetDownloadInterval;
@property(readonly, nonatomic) NSString *activeAssetVariant; // @synthesize activeAssetVariant=_activeAssetVariant;
@property(readonly, nonatomic) NSSet *supportedVariants; // @synthesize supportedVariants=_supportedVariants;
@property(readonly, nonatomic) NSString *mode; // @synthesize mode=_mode;
- (void)storeBagChangedNotification:(id)arg1;	// IMP=0x000000000001b890
- (void)unregisterForStoreBagNotifications;	// IMP=0x000000000001b820
- (void)registerForStoreBagNotifications;	// IMP=0x000000000001b7b0
- (id)localBurnInMatrixFile:(long long)arg1;	// IMP=0x000000000001b6a0
- (id)localCacheURLForAssetVariant:(id)arg1;	// IMP=0x000000000001b620
@property(readonly, nonatomic) NSURL *remoteResourceURL;
- (void)dealloc;	// IMP=0x000000000001af40
- (id)initWithMode:(id)arg1 localCacheBaseURL:(id)arg2;	// IMP=0x000000000001aa90

@end

