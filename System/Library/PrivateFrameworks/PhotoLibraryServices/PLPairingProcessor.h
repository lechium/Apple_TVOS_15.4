//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface PLPairingProcessor : NSObject
{
    NSPredicate *_locatedInUsersPhotoLibrary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000035ac7c
@property(retain, nonatomic) NSPredicate *locatedInUsersPhotoLibrary; // @synthesize locatedInUsersPhotoLibrary=_locatedInUsersPhotoLibrary;
- (void)_deleteResourceOfType:(unsigned int)arg1 forAsset:(id)arg2 verifyInserted:(_Bool)arg3 deleteFile:(_Bool)arg4;	// IMP=0x000000000035aa21
- (_Bool)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2;	// IMP=0x000000000035a542
- (_Bool)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000035a2b3
- (_Bool)_copyResourceOfType:(unsigned int)arg1 onAsset:(id)arg2 toType:(unsigned int)arg3 onAsset:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000359d2b
- (void)setDeferredProcessingIfNescessaryForAsset:(id)arg1;	// IMP=0x0000000000359d25
- (id)combinePair:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000359d1d
- (id)firstGroupFromAssets:(id)arg1;	// IMP=0x0000000000359d15
- (id)fetchRequestForSortedGroupIDs:(id)arg1;	// IMP=0x0000000000359d0d
- (id)fetchRequestForLibrary;	// IMP=0x0000000000359d05
- (id)groupIDForAsset:(id)arg1;	// IMP=0x0000000000359cfd
- (_Bool)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000359796
- (id)init;	// IMP=0x000000000035970f

@end
