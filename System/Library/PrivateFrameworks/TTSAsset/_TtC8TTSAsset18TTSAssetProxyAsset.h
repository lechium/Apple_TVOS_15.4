//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSBundle, NSDictionary, NSNumber, NSString, TTSAssetQuality, TTSAssetSource, TTSAssetTechnology, TTSAssetType;

@interface _TtC8TTSAsset18TTSAssetProxyAsset
{
    MISSING_TYPE *cookie;	// 8 = 0x8
    MISSING_TYPE *assetQuality;	// 24 = 0x18
    MISSING_TYPE *bundlePath;	// 32 = 0x20
    MISSING_TYPE *authorizedBundle;	// 48 = 0x30
    MISSING_TYPE *proxy_attr;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000412a0
- (id)init;	// IMP=0x0000000000041240
- (void)purge;	// IMP=0x00000000000411c0
- (void)cancelDownloadingThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040ea0
- (void)downloadWithReservation:(id)arg1 useBattery:(_Bool)arg2 progress:(CDUnknownBlockType)arg3 then:(CDUnknownBlockType)arg4;	// IMP=0x0000000000040300
@property(nonatomic, readonly) _Bool downloading;
@property(nonatomic, readonly) _Bool purgeable;
@property(nonatomic, readonly) _Bool locallyAvailable;
@property(nonatomic, readonly) NSBundle *bundle;
@property(nonatomic, readonly) NSDictionary *attributes;
@property(nonatomic, readonly) NSNumber *diskSize;
@property(nonatomic, readonly) NSNumber *age;
@property(nonatomic, readonly) long long gender;
@property(nonatomic, readonly) NSArray *supportedLanguages;
@property(nonatomic, readonly) NSString *versionDescription;
@property(nonatomic, readonly) long long versionNumber;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) TTSAssetQuality *quality;
@property(nonatomic, readonly) TTSAssetTechnology *technology;
@property(nonatomic, readonly) TTSAssetSource *assetSource;
@property(nonatomic, readonly) TTSAssetType *assetType;

@end

