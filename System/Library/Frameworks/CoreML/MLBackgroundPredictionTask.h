//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLModelConfiguration, MLPredictionOptions, NSURL;

@interface MLBackgroundPredictionTask
{
    NSURL *_modelURL;	// 16 = 0x10
    MLModelConfiguration *_modelConfiguration;	// 24 = 0x18
    MLPredictionOptions *_predictionOptions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026284
+ (Class)taskRunnerClass;	// IMP=0x0000000000026273
- (void).cxx_destruct;	// IMP=0x0000000000026231
@property(copy, nonatomic) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(copy, nonatomic) MLModelConfiguration *modelConfiguration; // @synthesize modelConfiguration=_modelConfiguration;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002613d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026015
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025f5b

@end

