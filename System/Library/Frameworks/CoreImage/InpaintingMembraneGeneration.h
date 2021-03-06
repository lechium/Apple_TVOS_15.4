//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface InpaintingMembraneGeneration
{
}

+ (id)fillSmoothMembraneForSRGBImage:(id)arg1 andMask:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002218af
+ (int)selectMembraneProcessingResolutionBasedOnImageSize:(struct CGSize)arg1;	// IMP=0x0000000000221752
+ (int)outputFormat;	// IMP=0x0000000000221743
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x0000000000221734
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x000000000022172c
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x0000000000221724
+ (_Bool)synchronizeInputs;	// IMP=0x000000000022171c
+ (_Bool)allowPartialOutputRegion;	// IMP=0x0000000000221714
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00000000002216fc
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x000000000022140e
+ (id)getMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x00000000002213a0
+ (_Bool)initializeMembraneModelForResolution:(int)arg1 error:(id *)arg2;	// IMP=0x0000000000221115

@end

