//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLModel, NSString;

@interface MLWrappedModel
{
    MLModel *_innerModel;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a4879
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain) MLModel *innerModel; // @synthesize innerModel=_innerModel;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4719
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a45eb
- (id)predictionsFromBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a44d7
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a43a9
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a4295
- (void)clearInnerModelWithReason:(id)arg1;	// IMP=0x00000000000a4241
- (id)initWithInnerModel:(id)arg1;	// IMP=0x00000000000a417b

@end
