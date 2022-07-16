//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair : NSObject
{
    _Bool ownLF;	// 8 = 0x8
    CDStruct_79f2618e *lf;	// 16 = 0x10
    int imageSourceType;	// 24 = 0x18
    struct CGImageBlockSet *blockSet;	// 32 = 0x20
    void *releaseMe;	// 40 = 0x28
    struct __CFData *dataRef;	// 48 = 0x30
    NSArray *faces;	// 56 = 0x38
    int nRepairs;	// 64 = 0x40
    int nextRepairTag;	// 68 = 0x44
    CDStruct_8d997f87 repairs[32];	// 72 = 0x48
    int lastRepairTag;	// 12872 = 0x3248
    float lastRepairIOD;	// 12876 = 0x324c
    CDStruct_6ca1d5c6 standardTemplate;	// 12880 = 0x3250
    int iFaceIndex;	// 12896 = 0x3260
    _Bool iLeft;	// 12900 = 0x3264
    _Bool debugRedEye;	// 12901 = 0x3265
    _Bool logRepairs;	// 12902 = 0x3266
    int redEyeThresholdKind;	// 12904 = 0x3268
    _Bool renderAlpha;	// 12908 = 0x326c
    _Bool infillBackground;	// 12909 = 0x326d
    _Bool renderSpecularShine;	// 12910 = 0x326e
    float specularSize;	// 12912 = 0x3270
    float specularSoftness;	// 12916 = 0x3274
    _Bool pupilShadeAlignment;	// 12920 = 0x3278
    _Bool autoPupilTonality;	// 12921 = 0x3279
    _Bool forceLoValue;	// 12922 = 0x327a
    int loValue;	// 12924 = 0x327c
    CDStruct_c3faddef lastClickYBitmap;	// 12928 = 0x3280
    CDStruct_c3faddef lastClickCbCrBitmap;	// 12968 = 0x32a8
    int lastClickBitmapMinX;	// 13008 = 0x32d0
    int lastClickBitmapMaxX;	// 13012 = 0x32d4
    int lastClickBitmapMinY;	// 13016 = 0x32d8
    int lastClickBitmapMaxY;	// 13020 = 0x32dc
    CDStruct_c3faddef lastClickYBitmaps[3];	// 13024 = 0x32e0
    CDStruct_c3faddef lastClickCbCrBitmaps[3];	// 13144 = 0x3358
    CDStruct_5973fb4f lastClickBitmapRects[3];	// 13264 = 0x33d0
    CDStruct_c3faddef lastSearchYBitmap;	// 13312 = 0x3400
    CDStruct_c3faddef lastSearchCbCrBitmap;	// 13352 = 0x3428
    int lastSearchBitmapMinX;	// 13392 = 0x3450
    int lastSearchBitmapMaxX;	// 13396 = 0x3454
    int lastSearchBitmapMinY;	// 13400 = 0x3458
    int lastSearchBitmapMaxY;	// 13404 = 0x345c
    int nPolyPoints;	// 13408 = 0x3460
    _Bool polyClosed;	// 13412 = 0x3464
    struct CGPoint polyPoints[20];	// 13416 = 0x3468
    CDStruct_12b04d25 polyLines[20];	// 13736 = 0x35a8
    _Bool polyPointConcave[20];	// 13976 = 0x3698
    unsigned char CbCrDistanceTable[65536];	// 13996 = 0x36ac
    int nLinears;	// 79532 = 0x136ac
    int linearCoefficients[8][3];	// 79536 = 0x136b0
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00000000001e4829
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00000000001e46e8
+ (struct CGRect)supportRectangleWithPoint:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2 IOD:(float)arg3;	// IMP=0x00000000001e460b
+ (float)upperRepairDistance:(float)arg1;	// IMP=0x00000000001e454b
+ (float)upperRepairDistanceFraction:(float)arg1;	// IMP=0x00000000001e44dd
- (void)setLeft:(_Bool)arg1;	// IMP=0x00000000001ec1ed
- (void)setFaceIndex:(int)arg1;	// IMP=0x00000000001ec1e1
- (void)executeRepairArray:(id)arg1;	// IMP=0x00000000001ec169
- (void)executeRepair:(id)arg1;	// IMP=0x00000000001eb342
- (void)orientPointX:(float *)arg1 Y:(float *)arg2;	// IMP=0x00000000001eb317
- (void)orientRectangleMinX:(float *)arg1 maxX:(float *)arg2 minY:(float *)arg3 maxY:(float *)arg4;	// IMP=0x00000000001eb2d5
- (_Bool)getBool:(_Bool *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001eb292
- (_Bool)getInt:(int *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001eb24f
- (_Bool)getFloat:(float *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001eb209
- (id)repairArray;	// IMP=0x00000000001ea81b
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x00000000001e9c81
- (int)redEyeRemovalWithData:(CDStruct_1c31e7e7)arg1;	// IMP=0x00000000001e92b9
- (void)skinInit;	// IMP=0x00000000001e925e
- (void)prepareLineFunctions;	// IMP=0x00000000001e8e16
- (int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2;	// IMP=0x00000000001e8d97
- (void)autoRepairExtractAndSearchLeft:(CDStruct_a734b2e2)arg1 right:(CDStruct_a734b2e2)arg2 data:(CDStruct_935079c3 *)arg3 repairSize:(float)arg4 autoPupilTonality:(_Bool)arg5 faceIndex:(int)arg6;	// IMP=0x00000000001e8831
- (int)applyEyeRepairWithEye:(CDStruct_3edab2bb *)arg1 left:(_Bool)arg2 IOD:(float)arg3 autoPupilTonality:(_Bool)arg4 match:(CDStruct_a734b2e2 *)arg5 faceIndex:(int)arg6 whiteHopper:(CDStruct_08ff8b76 *)arg7;	// IMP=0x00000000001e85cc
- (CDStruct_3edab2bb)repairDecisionWithFaceRecord:(CDStruct_935079c3 *)arg1 left:(_Bool)arg2 redHopper:(CDStruct_08ff8b76 *)arg3 whiteHopper:(CDStruct_08ff8b76 *)arg4;	// IMP=0x00000000001e8501
- (_Bool)extractAndGatherProminencesWithRect:(CDStruct_a734b2e2)arg1 face:(CDStruct_935079c3 *)arg2 faceIndex:(int)arg3 left:(_Bool)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(CDStruct_08ff8b76 *)arg7 whiteHopper:(CDStruct_08ff8b76 *)arg8 redChannel:(CDStruct_c3faddef *)arg9 redChannelMask:(CDStruct_c3faddef *)arg10;	// IMP=0x00000000001e8192
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 altC:(CDStruct_c3faddef *)arg3 altMC:(CDStruct_c3faddef *)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(CDStruct_a734b2e2)arg7 fr:(CDStruct_935079c3 *)arg8 intoHopper:(CDStruct_08ff8b76 *)arg9 faceIndex:(int)arg10 left:(_Bool)arg11;	// IMP=0x00000000001e7e69
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(CDStruct_a734b2e2)arg5 fr:(CDStruct_935079c3 *)arg6 intoHopper:(CDStruct_08ff8b76 *)arg7 faceIndex:(int)arg8 left:(_Bool)arg9 coss:(float [10])arg10 sins:(float [10])arg11 bitmapName:(char *)arg12;	// IMP=0x00000000001e7761
- (void)insertIntoProminenceVettingHopper:(CDStruct_08ff8b76 *)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8;	// IMP=0x00000000001e75df
- (float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3;	// IMP=0x00000000001e7456
- (float)extractAverageFaceY:(CDStruct_935079c3 *)arg1 contrast:(float *)arg2 faceIndex:(int)arg3;	// IMP=0x00000000001e7155
- (void)redoLastRepair;	// IMP=0x00000000001e7124
- (int)redoRepairWithTag:(int)arg1 IOD:(float)arg2;	// IMP=0x00000000001e7059
- (CDStruct_8d997f87 *)repairWithTag:(int)arg1;	// IMP=0x00000000001e7028
- (int)redEyeRemovalWithPoint:(struct CGPoint)arg1 alignPupilShades:(_Bool)arg2 matching:(CDStruct_a734b2e2)arg3 force:(int)arg4 IOD:(float)arg5 tap:(_Bool)arg6;	// IMP=0x00000000001e59cd
- (_Bool)extractReusableAlignedBitmapsAroundPoint:(CDStruct_c3faddef *)arg1 YR:(CDStruct_a734b2e2)arg2 subYBitmap:(CDStruct_c3faddef *)arg3 subCbCrBitmap:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000001e56e7
- (_Bool)computeTrimmedBitmaps:(CDStruct_c3faddef *)arg1 newY:(CDStruct_c3faddef *)arg2 newCbCr:(CDStruct_c3faddef *)arg3 IR:(CDStruct_a734b2e2)arg4 newTrimY:(CDStruct_c3faddef *)arg5 newTrimCbCr:(CDStruct_c3faddef *)arg6 returningYR:(CDStruct_a734b2e2 *)arg7 andCbCrR:(CDStruct_a734b2e2 *)arg8;	// IMP=0x00000000001e5285
- (float)lowerRepairSize:(float)arg1;	// IMP=0x00000000001e45e6
- (float)upperRepairSize:(float)arg1;	// IMP=0x00000000001e45c1
- (float)lowerRepairSizeFraction:(float)arg1;	// IMP=0x00000000001e4499
- (float)upperRepairSizeFraction:(float)arg1;	// IMP=0x00000000001e4455
- (int)averageValueFromY:(CDStruct_c3faddef *)arg1 withinSkinMask:(CDStruct_c3faddef *)arg2 butOutsideAlpha:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001e4388
- (void)undoRepair:(int)arg1;	// IMP=0x00000000001e42c2
- (int)format;	// IMP=0x00000000001e42b2
- (int)lastRepairTag;	// IMP=0x00000000001e42a6
- (int)nRepairs;	// IMP=0x00000000001e429d
- (CDStruct_8d997f87 *)repairs;	// IMP=0x00000000001e4293
- (id)faces;	// IMP=0x00000000001e4289
- (CDStruct_a734b2e2)standardTemplate;	// IMP=0x00000000001e4275
- (void)setLoValue:(int)arg1;	// IMP=0x00000000001e4269
- (int)loValue;	// IMP=0x00000000001e425d
- (void)setForceLoValue:(_Bool)arg1;	// IMP=0x00000000001e4251
- (_Bool)forceLoValue;	// IMP=0x00000000001e4245
- (void)setAutoPupilTonality:(_Bool)arg1;	// IMP=0x00000000001e4239
- (_Bool)autoPupilTonality;	// IMP=0x00000000001e422d
- (void)setPupilShadeAlignment:(_Bool)arg1;	// IMP=0x00000000001e4221
- (_Bool)pupilShadeAlignment;	// IMP=0x00000000001e4215
- (void)setSpecularSoftness:(float)arg1;	// IMP=0x00000000001e4207
- (float)specularSoftness;	// IMP=0x00000000001e41f9
- (void)setSpecularSize:(float)arg1;	// IMP=0x00000000001e41eb
- (float)specularSize;	// IMP=0x00000000001e41dd
- (void)setRenderSpecularShine:(_Bool)arg1;	// IMP=0x00000000001e41d1
- (_Bool)renderSpecularShine;	// IMP=0x00000000001e41c5
- (void)setInfillBackground:(_Bool)arg1;	// IMP=0x00000000001e41b9
- (_Bool)infillBackground;	// IMP=0x00000000001e41ad
- (void)setRenderAlpha:(_Bool)arg1;	// IMP=0x00000000001e41a1
- (_Bool)renderAlpha;	// IMP=0x00000000001e4195
- (void)setRedEyeThresholdKind:(int)arg1;	// IMP=0x00000000001e4189
- (int)redEyeThresholdKind;	// IMP=0x00000000001e417d
- (void)setLogRepairs:(_Bool)arg1;	// IMP=0x00000000001e4171
- (_Bool)logRepairs;	// IMP=0x00000000001e4165
- (void)setDebug:(_Bool)arg1;	// IMP=0x00000000001e4159
- (_Bool)debug;	// IMP=0x00000000001e414d
- (void)dealloc;	// IMP=0x00000000001e4035
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 fullSize:(struct CGSize)arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5;	// IMP=0x00000000001e3ed0
- (id)initWithExternalBuffer:(char *)arg1 size:(struct CGSize)arg2 rowBytes:(unsigned long long)arg3;	// IMP=0x00000000001e3dd9
- (id)initWithFrameExternalBuffer:(CDStruct_79f2618e *)arg1;	// IMP=0x00000000001e3d8c
- (id)initWithDeskView:(id)arg1 andFrame:(CDStruct_79f2618e *)arg2;	// IMP=0x00000000001e3d46
- (void)initializeNonDebugVariables;	// IMP=0x00000000001e3cba
- (void)repairExternalBuffer;	// IMP=0x00000000001e3c63
- (struct CGImage *)createRepairedImage;	// IMP=0x00000000001e3aec
- (id)initWithCGImage:(struct CGImage *)arg1 cameraModel:(id)arg2;	// IMP=0x00000000001e38bc
- (void)setColorSpace:(struct CGColorSpace *)arg1;	// IMP=0x00000000001e3887
- (_Bool)getDataProviderCopyWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001e37e8
- (_Bool)getDataProviderBytePtrWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001e374c
- (_Bool)getBlockSetWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001e3588

@end

