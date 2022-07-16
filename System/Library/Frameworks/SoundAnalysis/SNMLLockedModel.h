//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNMLModel-Protocol.h>

@class MLModelDescription, NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNMLLockedModel : NSObject <SNMLModel>
{
    id <SNMLModel> _model;	// 8 = 0x8
    struct mutex _lock;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000019839
- (void).cxx_destruct;	// IMP=0x0000000000019813
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001975a
@property(readonly) MLModelDescription *modelDescription;
- (id)initWithModel:(id)arg1;	// IMP=0x0000000000019679

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
