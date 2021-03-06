//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSNumber, NSProgress, PLLivePhotoEditSource;

@interface PXAutoloopAnalysisOperation : NSOperation
{
    NSDictionary *_recipesByVariationType;	// 8 = 0x8
    _Bool _succeeded;	// 16 = 0x10
    PLLivePhotoEditSource *_editSource;	// 24 = 0x18
    NSProgress *_progress;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSNumber *_duration;	// 48 = 0x30
    NSDictionary *_analysisResult;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000019ab6e
@property(readonly, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) PLLivePhotoEditSource *editSource; // @synthesize editSource=_editSource;
- (void)main;	// IMP=0x000000000019ab03
- (void)cancel;	// IMP=0x000000000019aa2b
- (void)_timeout;	// IMP=0x000000000019a92d
- (id)recipeForVariationType:(long long)arg1;	// IMP=0x000000000019a8bf
- (id)initWithEditSource:(id)arg1;	// IMP=0x000000000019a766
- (id)init;	// IMP=0x000000000019a6ec

@end

