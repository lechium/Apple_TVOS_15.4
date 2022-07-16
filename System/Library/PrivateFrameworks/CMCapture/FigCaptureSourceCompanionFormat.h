//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FigCaptureSourceCompanionFormat : NSObject
{
    int _formatIndex;	// 8 = 0x8
    CDStruct_79c71658 _fesDimensions;	// 12 = 0xc
    CDStruct_79c71658 _fesInputCropDimensions;	// 20 = 0x14
    CDStruct_79c71658 _outputCropDimensionsWhenFesIsEnabled;	// 28 = 0x1c
    CDStruct_79c71658 _sensorCropDimensions;	// 36 = 0x24
    CDStruct_79c71658 _highQualitySensorDimensions;	// 44 = 0x2c
    CDStruct_79c71658 _postGDCCropDimensions;	// 52 = 0x34
    CDStruct_79c71658 _geometricDistortionCorrectedNativeDimensions;	// 60 = 0x3c
    _Bool _sifrEnabled;	// 68 = 0x44
}

@property(readonly) CDStruct_79c71658 geometricDistortionCorrectedNativeDimensions; // @synthesize geometricDistortionCorrectedNativeDimensions=_geometricDistortionCorrectedNativeDimensions;
@property(readonly) CDStruct_79c71658 highQualitySensorDimensions; // @synthesize highQualitySensorDimensions=_highQualitySensorDimensions;
@property(readonly) _Bool sifrEnabled; // @synthesize sifrEnabled=_sifrEnabled;
@property(readonly) CDStruct_79c71658 postGDCCropDimensions; // @synthesize postGDCCropDimensions=_postGDCCropDimensions;
@property(readonly) CDStruct_79c71658 sensorCropDimensions; // @synthesize sensorCropDimensions=_sensorCropDimensions;
@property(readonly) CDStruct_79c71658 outputCropDimensionsWhenFesIsEnabled; // @synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled;
@property(readonly) CDStruct_79c71658 fesInputCropDimensions; // @synthesize fesInputCropDimensions=_fesInputCropDimensions;
@property(readonly) CDStruct_79c71658 fesDimensions; // @synthesize fesDimensions=_fesDimensions;
@property(readonly) int formatIndex; // @synthesize formatIndex=_formatIndex;
- (id)description;	// IMP=0x000000000002cee9
- (void)dealloc;	// IMP=0x000000000002ceba
- (id)initWithCompanionFormatDictionary:(id)arg1;	// IMP=0x000000000002cc1e

@end

