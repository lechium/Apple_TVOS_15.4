//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLVideoChoosingAssetInformation-Protocol.h>
#import <PhotoLibraryServices/PLVideoResourceContext-Protocol.h>

@class NSManagedObjectContext, NSString, PLManagedAsset;

@interface PLVideoInternalResourceContext : NSObject <PLVideoResourceContext, PLVideoChoosingAssetInformation>
{
    NSManagedObjectContext *_moc;	// 8 = 0x8
    PLManagedAsset *_asset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000436435
- (_Bool)validateResource:(id)arg1;	// IMP=0x0000000000436357
- (void)repairResource:(id)arg1;	// IMP=0x0000000000436290
- (id)onDemandInstallAdjustedFullSizeVideoComplementResourceIfPresent;	// IMP=0x0000000000436222
- (id)videoResourcesMatchingVersions:(id)arg1;	// IMP=0x0000000000435f68
- (double)sizeThresholdForHighQuality;	// IMP=0x0000000000435f5a
- (_Bool)shouldUseNonAdjustedVersion;	// IMP=0x0000000000435f44
- (_Bool)isPhotoIris;	// IMP=0x0000000000435f26
- (_Bool)hasAdjustments;	// IMP=0x0000000000435f10
- (id)backingResourceForVideoResource:(id)arg1;	// IMP=0x0000000000435efb
- (id)initWithManagedObjectContext:(id)arg1 asset:(id)arg2;	// IMP=0x0000000000435e62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

