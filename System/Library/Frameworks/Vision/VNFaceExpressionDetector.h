//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNFaceExpressionDetector
{
    struct shared_ptr<vision::mod::LandmarkAttributes> m_FaceAttributesImpl;	// 8 = 0x8
    _Bool _modelFilesWereMemmapped;	// 24 = 0x18
}

+ (id)createExpressionDetectionDictionaryFromScores:(id)arg1;	// IMP=0x00000000000d12e8
+ (id)createExpressionAndConfidencesDictionaryFromScores:(id)arg1;	// IMP=0x00000000000d0d19
+ (int)expressionTypeFromString:(id)arg1;	// IMP=0x00000000000d0c29
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00000000000d0bc6
- (id).cxx_construct;	// IMP=0x00000000000d2285
- (void).cxx_destruct;	// IMP=0x00000000000d2274
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4 progressHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d1bc9
- (void)dealloc;	// IMP=0x00000000000d1ad6
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d19ba

@end
