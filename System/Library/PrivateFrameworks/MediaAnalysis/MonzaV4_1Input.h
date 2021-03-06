//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/MLFeatureProvider-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface MonzaV4_1Input : NSObject <MLFeatureProvider>
{
    struct __CVBuffer *_inputImage;	// 8 = 0x8
}

@property(nonatomic) struct __CVBuffer *inputImage; // @synthesize inputImage=_inputImage;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000002b73
@property(readonly, nonatomic) NSSet *featureNames;
- (_Bool)setInputImageWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002a57
- (_Bool)setInputImageWithCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x000000000000297a
- (id)initWithInputImageAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002857
- (id)initWithInputImageFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;	// IMP=0x0000000000002759
- (void)dealloc;	// IMP=0x000000000000271f
- (id)initWithInputImage:(struct __CVBuffer *)arg1;	// IMP=0x00000000000026d0

@end

