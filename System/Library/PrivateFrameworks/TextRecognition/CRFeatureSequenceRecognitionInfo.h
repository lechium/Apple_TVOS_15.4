//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextRecognizerFeatureInfo-Protocol.h>

@class CRTextFeature, NSString;

__attribute__((visibility("hidden")))
@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo>
{
    float _scale;	// 8 = 0x8
    CRTextFeature *_textFeature;	// 16 = 0x10
    long long _orientationAdjustment;	// 24 = 0x18
    double _orientationConfidence;	// 32 = 0x20
    struct CGRect _bounds;	// 40 = 0x28
    struct CGRect _rotatedROI;	// 72 = 0x48
}

+ (id)infoForFeature:(id)arg1 scale:(float)arg2 bounds:(struct CGRect)arg3 rotatedROI:(struct CGRect)arg4;	// IMP=0x00000000000fb8a8
- (void).cxx_destruct;	// IMP=0x00000000000fba5c
@property double orientationConfidence; // @synthesize orientationConfidence=_orientationConfidence;
@property long long orientationAdjustment; // @synthesize orientationAdjustment=_orientationAdjustment;
@property struct CGRect rotatedROI; // @synthesize rotatedROI=_rotatedROI;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property float scale; // @synthesize scale=_scale;
@property(retain) CRTextFeature *textFeature; // @synthesize textFeature=_textFeature;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

