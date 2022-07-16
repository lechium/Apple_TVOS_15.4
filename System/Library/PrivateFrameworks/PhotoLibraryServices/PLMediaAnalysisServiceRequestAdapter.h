//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLMediaAnalysisServiceRequestAdapter : NSObject
{
}

+ (int)queryProgressDetail:(id *)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x00000000002bffd0
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bff3a
+ (void)cancelRequest:(long long)arg1;	// IMP=0x00000000002bff34
+ (long long)invalidRequestID;	// IMP=0x00000000002bff2c
+ (unsigned long long)faceAnalysisTaskID;	// IMP=0x00000000002bff21
+ (unsigned long long)petVIPModelType;	// IMP=0x00000000002bff16
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c0950
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 photoLibraryURL:(id)arg3 progessHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c08b9
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002c0822
+ (long long)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c070a
+ (long long)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c0674
+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c05de
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c0548
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:(_Bool)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c0122
+ (long long)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c008c
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bfff6
+ (long long)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c0437
+ (long long)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c0328
+ (long long)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c0217

@end
