//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface VNDetectBarcodesRequest
{
    _Bool _useSegmentationPregating;	// 8 = 0x8
}

+ (id)availableLocateModes;	// IMP=0x0000000000100a32
+ (id)availableLocateModesRev2;	// IMP=0x0000000000100a02
+ (id)availableLocateModesRev1;	// IMP=0x00000000001009d2
+ (id)supportedSymbologies;	// IMP=0x000000000010099d
+ (id)supportedSymbologiesRev2Private;	// IMP=0x0000000000100968
+ (id)supportedSymbologiesRev2;	// IMP=0x0000000000100933
+ (id)_allBarcodeSymbologiesRev2Private;	// IMP=0x0000000000100903
+ (id)_allBarcodeSymbologiesRev2;	// IMP=0x00000000001008d3
+ (id)supportedSymbologiesRev1;	// IMP=0x000000000010089e
+ (id)_allBarcodeSymbologiesRev1;	// IMP=0x000000000010086e
+ (id)barcodeSymbologyForMRCSymbology:(struct __CFString *)arg1;	// IMP=0x0000000000100839
+ (struct __CFString *)MRCSymbologyForBarcodeSymbology:(id)arg1;	// IMP=0x000000000010080f
+ (id)barcodeSymbologyForACBSBarcodeType:(id)arg1;	// IMP=0x00000000001007da
+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1;	// IMP=0x00000000001007a5
+ (Class)configurationClass;	// IMP=0x0000000000100794
+ (void)initialize;	// IMP=0x00000000000ffd83
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;	// IMP=0x00000000000ffd68
+ (id)supportedPrivateRevisions;	// IMP=0x00000000000ffd38
+ (const CDStruct_7d93034e *)revisionAvailability;	// IMP=0x0000000000101122
@property(nonatomic) _Bool useSegmentationPregating; // @synthesize useSegmentationPregating=_useSegmentationPregating;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;	// IMP=0x00000000000ff8d2
- (void)applyConfigurationOfRequest:(id)arg1;	// IMP=0x00000000000ff7ca
@property(nonatomic) _Bool stopAtFirstPyramidWith2DCode;
@property(copy, nonatomic) NSString *locateMode;
@property(copy, nonatomic) NSArray *symbologies;
- (id)availableLocateModesAndReturnError:(id *)arg1;	// IMP=0x00000000000ff4ed
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ff29b
- (id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(struct ACBSConfig *)arg2 originatingRequestSpecifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fec8f
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(struct CGRect)arg4 originatingRequestSpecifier:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000fe6c3
- (_Bool)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(struct CGPoint *)arg2 topLeft:(struct CGPoint *)arg3 topRight:(struct CGPoint *)arg4 bottomRight:(struct CGPoint *)arg5;	// IMP=0x00000000000fe55d
- (id)_machineReadableCodesDetectedInImageBuffer:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000fd96b
- (id)newBarcodeObservationForMRCDescriptor:(struct __MRCDescriptor *)arg1 roiCroppingPixelRect:(struct CGRect)arg2 originatingRequestSpecifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fd499
- (struct __CFDictionary *)_createMRCDecoderOptionsAndReturnError:(id *)arg1;	// IMP=0x00000000000fce94
- (long long)_MRCLocateMode;	// IMP=0x00000000000fcdcf
- (struct ACBSConfig *)_createACBSConfigAndReturnError:(id *)arg1;	// IMP=0x00000000000fc99b
- (int)_ACBarcodeRecognizerLocateMode;	// IMP=0x00000000000fc8d8
- (id)_newVNBarcodeSymbologyPDF417DescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg1 error:(id *)arg2;	// IMP=0x00000000000fc6f9
- (id)_newVNBarcodeSymbologyAztecDescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg1 error:(id *)arg2;	// IMP=0x00000000000fc512
- (id)_newVNBarcodeSymbologyQRDescriptorForMRCDescriptor:(struct __MRCDescriptor *)arg1 error:(id *)arg2;	// IMP=0x00000000000fc2ee
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1;	// IMP=0x00000000000fc0a9
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1;	// IMP=0x00000000000fbe65
- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1;	// IMP=0x00000000000fbc04
- (id)supportedSymbologiesAndReturnError:(id *)arg1;	// IMP=0x00000000000fbb32
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;	// IMP=0x00000000000fba50

// Remaining properties
@property(readonly, copy) NSArray *results; // @dynamic results;

@end

