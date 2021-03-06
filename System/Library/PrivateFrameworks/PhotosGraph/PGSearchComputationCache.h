//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject
{
    NSURL *_persistentStoreURL;	// 8 = 0x8
    NSMutableDictionary *_momentAssetPairsByNodeUUID;	// 16 = 0x10
    NSMutableDictionary *_curationInformationByNodeUUID;	// 24 = 0x18
    NSMutableDictionary *_locationInformationByNodeUUID;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
}

+ (id)persistentStoreURLWithManager:(id)arg1;	// IMP=0x00000000004e8dac
- (void).cxx_destruct;	// IMP=0x00000000004e8d63
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) NSMutableDictionary *locationInformationByNodeUUID; // @synthesize locationInformationByNodeUUID=_locationInformationByNodeUUID;
@property(readonly, nonatomic) NSMutableDictionary *curationInformationByNodeUUID; // @synthesize curationInformationByNodeUUID=_curationInformationByNodeUUID;
@property(readonly, nonatomic) NSMutableDictionary *momentAssetPairsByNodeUUID; // @synthesize momentAssetPairsByNodeUUID=_momentAssetPairsByNodeUUID;
@property(readonly, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
- (id)locationInformationForLocationNode:(id)arg1 locationMask:(unsigned long long)arg2;	// IMP=0x00000000004e8bb9
- (void)setLocationInformation:(id)arg1 forLocationNode:(id)arg2 locationMask:(unsigned long long)arg3;	// IMP=0x00000000004e89e7
- (id)curationInformationForNode:(id)arg1;	// IMP=0x00000000004e8950
- (void)setCurationInformation:(id)arg1 forNode:(id)arg2;	// IMP=0x00000000004e8833
- (_Bool)momentAssetPairs:(id)arg1 areValidWithAssociatedMomentUUIDs:(id)arg2;	// IMP=0x00000000004e842f
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)arg1 withAssociatedMomentUUIDs:(id)arg2;	// IMP=0x00000000004e82ae
- (void)setKeyAssetLocalIdentifier:(id)arg1 forNodeIdentifier:(id)arg2 withAssociatedMomentUUID:(id)arg3;	// IMP=0x00000000004e8132
- (void)invalidateCache;	// IMP=0x00000000004e80ed
- (void)save;	// IMP=0x00000000004e7f4b
- (id)initWithPersistentStoreURL:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000004e7b26

@end

