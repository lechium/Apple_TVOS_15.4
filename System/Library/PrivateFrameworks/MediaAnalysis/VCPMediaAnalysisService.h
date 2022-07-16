//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPMediaAnalysisClientProtocol-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_managementQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 24 = 0x18
    NSMutableDictionary *_progressBlocks;	// 32 = 0x20
    int _nextRequestID;	// 40 = 0x28
}

+ (int)queryProgressDetail:(id *)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fcb63
+ (int)queryProgressDetail:(id *)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x00000000000fca88
+ (int)queryProgressDetail:(id *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fca6e
+ (int)queryProgressDetail:(id *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x00000000000fca51
+ (int)queryCachedFaceAnalysisProgress:(id *)arg1 forPhotoLibrary:(id)arg2 withExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fca37
+ (int)queryCachedFaceAnalysisProgress:(id *)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00000000000fca1a
+ (int)queryProgress:(float *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fca00
+ (int)queryProgress:(float *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x00000000000fc9e3
+ (id)errorWithDescription:(id)arg1;	// IMP=0x00000000000f77d6
+ (id)analysisService;	// IMP=0x00000000000f77bc
+ (id)sharedAnalysisService;	// IMP=0x00000000000f7767
- (void).cxx_destruct;	// IMP=0x00000000000fdc29
- (int)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fd436
- (int)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fcc5f
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x00000000000fc841
- (void)invalidate;	// IMP=0x00000000000fc7dc
- (void)cancelBackgroundActivity;	// IMP=0x00000000000fc4de
- (void)cancelAllRequests;	// IMP=0x00000000000fc320
- (void)cancelRequest:(int)arg1;	// IMP=0x00000000000fc0c1
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;	// IMP=0x00000000000fbeb9
- (int)requestVideoStabilizationForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fbc93
- (int)requestSceneprintProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fba6d
- (int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fb1e7
- (int)requestFaceProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fb109
- (int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fb02b
- (int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000faf4d
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fa2ff
- (int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa2cf
- (int)requestMultiWorkerProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa29f
- (int)requestFaceProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa26f
- (int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa23f
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fa0dd
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f9875
- (int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(_Bool)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f9770
- (int)requestBackgroundAnalysisForAssets:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 realTime:(_Bool)arg3 progessHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f8dd0
- (int)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 andCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f7da9
- (id)connection;	// IMP=0x00000000000f78cb
- (id)init;	// IMP=0x00000000000f767e
- (int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000feeb8
- (int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 photoLibraryURL:(id)arg3 progessHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000fe649
- (int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000fdc67
- (int)requestPersonProcessingForPhotoLibraryURL:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000010189d
- (int)requestPersonPromoterStatusWithAdvancedFlag:(_Bool)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000010103e
- (int)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001007b4
- (int)requestResetPetClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fffaf
- (int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ff742
- (int)requestAutoCounterSIMLValidationForPhotoLibraryURL:(id)arg1 simlGroundTruthURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000106aa8
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg1 clusterStateURL:(id)arg2 groundTruthURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001061d2
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001059ec
- (int)requestDumpAutoCounterForPhotoLibraryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000105206
- (int)requestOptInAutoCounterForPhotoLibraryURL:(id)arg1 withPersons:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001049de
- (int)queryAutoCounterOptInStatusForPhotoLibraryURL:(id)arg1 withPersonLocalIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001041b6
- (int)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000103965
- (int)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000103160
- (int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010295b
- (int)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010211d
- (int)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000107e0a
- (int)requestIdentificationOfFaces:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001072d0

@end
