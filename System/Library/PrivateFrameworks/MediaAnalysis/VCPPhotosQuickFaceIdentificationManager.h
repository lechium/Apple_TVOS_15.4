//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, VCPFaceAnalyzer, VNEntityIdentificationModel, VNPersonsModel;
@protocol OS_dispatch_queue;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject
{
    VNPersonsModel *_personsModel;	// 8 = 0x8
    VNEntityIdentificationModel *_petsModel;	// 16 = 0x10
    PHPhotoLibrary *_photoLibrary;	// 24 = 0x18
    VCPFaceAnalyzer *_faceAnalyzer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_management;	// 40 = 0x28
}

+ (_Bool)_fastFaceMigrationEnabled;	// IMP=0x000000000013cd6e
- (void).cxx_destruct;	// IMP=0x000000000013d334
- (int)generateVIPModelWithType:(unsigned long long)arg1 ignoreLastGenerationTime:(_Bool)arg2 modelGenerated:(_Bool *)arg3 extendTimeout:(CDUnknownBlockType)arg4 andCancel:(CDUnknownBlockType)arg5;	// IMP=0x000000000013d13f
- (_Bool)_needToGenerateModelWithType:(unsigned long long)arg1 ignoreLastGenerationTime:(_Bool)arg2 withExtendTimeout:(CDUnknownBlockType)arg3;	// IMP=0x000000000013d137
- (_Bool)_keepCurrentPersonsModelWithExtendTimeout:(CDUnknownBlockType)arg1;	// IMP=0x000000000013cd76
- (_Bool)_faceProcessingPassGoalWithExtendTimeout:(CDUnknownBlockType)arg1;	// IMP=0x000000000013ca99
- (_Bool)_modelLastGenerationDidExceedTimeIntervalForType:(unsigned long long)arg1;	// IMP=0x000000000013c84b
- (int)_generatePersonsModelWithExtendTimeoutBlock:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x000000000013a8cc
- (int)_generatePetsModelWithExtendTimeoutBlock:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;	// IMP=0x00000000001385bb
- (id)fetchEntityForModelType:(unsigned long long)arg1;	// IMP=0x00000000001384f2
- (id)_fetchPetsToFeedVIPModel;	// IMP=0x0000000000138329
- (id)_fetchPersonsToFeedVIPModel;	// IMP=0x000000000013813f
- (_Bool)_persistPetsModel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001380a0
- (_Bool)_persistPersonsModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000138004
- (int)classifyVIPPets;	// IMP=0x0000000000136a41
- (int)processAsset:(id)arg1;	// IMP=0x0000000000136505
- (int)_persistResults:(id)arg1 withFaces:(id)arg2 forAsset:(id)arg3;	// IMP=0x0000000000135c04
- (int)_classifyFaces:(id)arg1 forAsset:(id)arg2 withResults:(id *)arg3;	// IMP=0x000000000013513d
- (int)_loadPetsModel;	// IMP=0x0000000000134e44
- (int)_loadPersonsModelAndInitializeFaceAnalyzer;	// IMP=0x0000000000134875
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000001347da
- (id)init;	// IMP=0x00000000001347cc

@end

