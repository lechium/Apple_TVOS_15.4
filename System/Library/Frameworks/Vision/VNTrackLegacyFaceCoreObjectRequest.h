//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface VNTrackLegacyFaceCoreObjectRequest
{
    _Bool _faceCoreEnhanceEyesAndMouthLocalization;	// 8 = 0x8
    _Bool _faceCoreExtractBlink;	// 9 = 0x9
    _Bool _faceCoreExtractSmile;	// 10 = 0xa
    float _faceCoreKalmanFilter;	// 12 = 0xc
    NSNumber *_faceCoreMinFaceSize;	// 16 = 0x10
    NSNumber *_faceCoreNumberOfDetectionAngles;	// 24 = 0x18
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;	// IMP=0x0000000000191606
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1;	// IMP=0x00000000001915fb
+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000191597
+ (id)supportedPrivateRevisions;	// IMP=0x0000000000191567
- (void).cxx_destruct;	// IMP=0x0000000000191536
@property(nonatomic) float faceCoreKalmanFilter; // @synthesize faceCoreKalmanFilter=_faceCoreKalmanFilter;
@property(nonatomic) _Bool faceCoreExtractSmile; // @synthesize faceCoreExtractSmile=_faceCoreExtractSmile;
@property(nonatomic) _Bool faceCoreExtractBlink; // @synthesize faceCoreExtractBlink=_faceCoreExtractBlink;
@property(nonatomic) _Bool faceCoreEnhanceEyesAndMouthLocalization; // @synthesize faceCoreEnhanceEyesAndMouthLocalization=_faceCoreEnhanceEyesAndMouthLocalization;
@property(retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles; // @synthesize faceCoreNumberOfDetectionAngles=_faceCoreNumberOfDetectionAngles;
@property(retain, nonatomic) NSNumber *faceCoreMinFaceSize; // @synthesize faceCoreMinFaceSize=_faceCoreMinFaceSize;
- (void)populateDetectorProcessingOptions:(id)arg1 session:(id)arg2;	// IMP=0x0000000000191242
- (id)initWithDetectedObjectObservation:(id)arg1;	// IMP=0x0000000000191205

@end
