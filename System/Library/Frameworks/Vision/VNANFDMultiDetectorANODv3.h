//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetectorANODv3
{
}

+ (id)knownFoodAndDrinkIdentifiers;	// IMP=0x00000000000ed474
+ (id)recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;	// IMP=0x00000000000ed444
+ (id)detectedObjectRequestKeyToRequestInfo;	// IMP=0x00000000000ed3e1
+ (id)detectedObjectClassToRequestKey;	// IMP=0x00000000000ed37e
+ (Class)detectorClass;	// IMP=0x00000000000ed36d
- (_Bool)processDetectedObject:(id)arg1 originatingRequestSpecifier:(id)arg2 objectBoundingBox:(struct CGRect)arg3 imageBuffer:(id)arg4 warningRecorder:(id)arg5 detectedObjectResults:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000eda39
- (_Bool)updateRuntimeParametersFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ed882

@end

