//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDictionary, NSMutableArray, NSString, PLPhotoLibrary;

@interface PLLocationController : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    NSMutableArray *_locationPendingAssets;	// 16 = 0x10
    NSDictionary *_exifDictionary;	// 24 = 0x18
    NSString *_locationStr;	// 32 = 0x20
    _Bool _isEnabled;	// 40 = 0x28
    _Bool _isUpdating;	// 41 = 0x29
    _Bool _isHeadingEnabled;	// 42 = 0x2a
    PLPhotoLibrary *_photoLibrary;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000009cbf6
+ (void)setUsesEffectiveBundleIdentifier:(_Bool)arg1;	// IMP=0x000000000009cbea
+ (_Bool)usesEffectiveBundleIdentifier;	// IMP=0x000000000009cbde
- (void).cxx_destruct;	// IMP=0x000000000009cb95
- (void)_assetContainerChanged:(id)arg1;	// IMP=0x000000000009cb7b
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000009cb23
- (void)_updatePendingAssets;	// IMP=0x000000000009c9e3
- (void)addLocationToMediaWithAssetURLWhenAvailable:(id)arg1 deviceOrientation:(int)arg2 cameraWasRearFacing:(_Bool)arg3;	// IMP=0x000000000009c7f6
- (_Bool)_addLocationToAsset:(id)arg1;	// IMP=0x000000000009c53b
- (id)photoLibrary;	// IMP=0x000000000009c4b3
- (id)locationString;	// IMP=0x000000000009c43e
- (id)locationDictionaryForImageWithDeviceOrientation:(int)arg1 rearFacingCamera:(_Bool)arg2;	// IMP=0x000000000009bf12
- (id)location;	// IMP=0x000000000009be61
- (void)_stopUpdating;	// IMP=0x000000000009bde0
- (void)_startUpdating;	// IMP=0x000000000009bca7
- (void)setHeadingEnabled:(_Bool)arg1;	// IMP=0x000000000009bc76
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000009bc5a
- (void)_applicationStateChanged:(id)arg1;	// IMP=0x000000000009bc48
- (void)_updateLocationRunState;	// IMP=0x000000000009bbfb
- (void)dealloc;	// IMP=0x000000000009bb7c
- (id)init;	// IMP=0x000000000009ba19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

