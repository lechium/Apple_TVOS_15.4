//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextRecognizerModelOutput-Protocol.h>

@class NSArray, NSString;

@interface CRTextRecognizerTopKModelEspressoOutput : NSObject <CRTextRecognizerModelOutput>
{
    NSArray *_textFeatureInfo;	// 8 = 0x8
    CDStruct_0a65202a _output_label_prob_map;	// 16 = 0x10
    CDStruct_0a65202a _output_topk_indices;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000000066dda
@property(nonatomic) CDStruct_0a65202a output_topk_indices; // @synthesize output_topk_indices=_output_topk_indices;
@property(nonatomic) CDStruct_0a65202a output_label_prob_map; // @synthesize output_label_prob_map=_output_label_prob_map;
@property(retain) NSArray *textFeatureInfo; // @synthesize textFeatureInfo=_textFeatureInfo;
- (void)dealloc;	// IMP=0x0000000000066cdc
- (id)initWithOutputLabelProbs:(CDStruct_0a65202a)arg1 outputTopKIndices:(CDStruct_0a65202a)arg2 featureInfo:(id)arg3;	// IMP=0x0000000000066bf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
