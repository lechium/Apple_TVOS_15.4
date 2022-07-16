//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MAFeatureExtractor, NSString;

@interface PGFeatureExtractorFacesFromAssetAverage
{
    MAFeatureExtractor *_faceFeatureExtractor;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014a311
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) MAFeatureExtractor *faceFeatureExtractor; // @synthesize faceFeatureExtractor=_faceFeatureExtractor;
- (_Bool)_generateError:(id *)arg1 withCode:(long long)arg2 andMessage:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000014a1a3
- (id)floatVectorWithFaces:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000149d92
- (id)floatMatrixWithEntities:(id)arg1 progressReporter:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000149a03
- (id)featureNames;	// IMP=0x00000000001499b3
- (long long)featureLength;	// IMP=0x0000000000149945
- (id)initWithFaceFeatureExtractor:(id)arg1 name:(id)arg2;	// IMP=0x00000000001498a3

@end

