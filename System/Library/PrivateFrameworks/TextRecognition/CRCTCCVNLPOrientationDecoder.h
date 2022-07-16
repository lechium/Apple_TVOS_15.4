//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextDecoding-Protocol.h>

@class CRTextSequenceRecognizerModel, NSOrderedSet, NSString;

@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding>
{
    CRTextSequenceRecognizerModel *_model;	// 8 = 0x8
    NSOrderedSet *_characterObservations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a00d
@property(readonly, nonatomic) NSOrderedSet *characterObservations; // @synthesize characterObservations=_characterObservations;
@property(retain) CRTextSequenceRecognizerModel *model; // @synthesize model=_model;
- (void)_decodeFeaturesWithInfo:(id)arg1 activations:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010981a
- (void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long *)arg2 outputArrays:(void *)arg3;	// IMP=0x0000000000109111
- (id)_buildActivationMatrices:(id)arg1;	// IMP=0x0000000000108e06
- (void)decodeOutput:(id)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;	// IMP=0x0000000000108d3b
- (_Bool)shouldDecodeWithLM;	// IMP=0x0000000000108d33
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000108b82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
