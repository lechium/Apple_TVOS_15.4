//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIContext, FCRFaceDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector
{
    CIContext *context;	// 8 = 0x8
    NSMutableDictionary *featureOptions;	// 16 = 0x10
    _Bool _tracking;	// 24 = 0x18
    FCRFaceDetector *faceCoreDetector;	// 32 = 0x20
}

@property(retain) FCRFaceDetector *faceCoreDetector; // @synthesize faceCoreDetector;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;	// IMP=0x000000000013ae6b
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x0000000000139f6f
- (void)finalize;	// IMP=0x0000000000139f06
- (void)dealloc;	// IMP=0x0000000000139e8e
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x0000000000139ac0
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;	// IMP=0x000000000013b24e
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;	// IMP=0x000000000013b126
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;	// IMP=0x000000000013aec8

@end

