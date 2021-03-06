//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIFeedbackSession, NSData, NSDictionary, NSMutableArray, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMIFeedbackSubmitClipOperation : HMFOperation <HMFLogging>
{
    HMIFeedbackSession *_feedbackSession;	// 8 = 0x8
    NSUUID *_cameraProfileUUID;	// 16 = 0x10
    NSUUID *_clipUUID;	// 24 = 0x18
    NSMutableArray *_temporaryFileURLs;	// 32 = 0x20
    NSSet *_faceCrops;	// 40 = 0x28
    NSData *_assetData;	// 48 = 0x30
    NSDictionary *_serviceResult;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000005bb0d
- (void).cxx_destruct;	// IMP=0x000000000005bbe4
@property(retain) NSDictionary *serviceResult; // @synthesize serviceResult=_serviceResult;
@property(retain) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain) NSSet *faceCrops; // @synthesize faceCrops=_faceCrops;
@property(readonly) NSMutableArray *temporaryFileURLs; // @synthesize temporaryFileURLs=_temporaryFileURLs;
@property(readonly) NSUUID *clipUUID; // @synthesize clipUUID=_clipUUID;
@property(readonly) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) HMIFeedbackSession *feedbackSession; // @synthesize feedbackSession=_feedbackSession;
- (void)main;	// IMP=0x000000000005ba4f
- (void)_removeTemporaryFiles;	// IMP=0x000000000005b778
- (void)_requestPreSignedURLWithClipUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005b376
- (void)_submitClipWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ab03
- (id)_createPayloadWithServiceResult:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005a973
- (_Bool)_attachFaceCrops:(id)arg1 toPayload:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005a96b
- (_Bool)_attachEncryptedDataUsingKey:(id)arg1 toPayload:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059fc0
- (void)_uploadPayloadData:(id)arg1 uploadURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059c8b
- (id)_temporaryFileURLWithUUID:(id)arg1 extension:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000059a1b
- (id)_base64StringFromData:(id)arg1;	// IMP=0x00000000000599b7
- (id)feedbackServiceURL;	// IMP=0x000000000005994b
- (id)feedbackServiceHost;	// IMP=0x00000000000598ca
- (id)feedbackRequestURLForClipWithUUID:(id)arg1;	// IMP=0x00000000000597e1
- (void)_stripAudioTrackAndFacesFromAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058ebb
- (void)_downloadClipWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057f5d
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000579c6
- (id)initWithFeedbackSession:(id)arg1 cameraProfileUUID:(id)arg2 clipUUID:(id)arg3;	// IMP=0x000000000005788b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

