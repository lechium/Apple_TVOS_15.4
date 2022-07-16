//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject
{
    UIImage *_image;	// 8 = 0x8
    long long _algorithm;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001f1f1e
@property(readonly, nonatomic) long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)_fallbackColorAnalysis;	// IMP=0x00000000001f1dcf
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f1cc0
- (id)initWithImage:(id)arg1 algorithm:(long long)arg2;	// IMP=0x00000000001f1c4c

@end

