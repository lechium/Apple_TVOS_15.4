//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/ETDataProvider-Protocol.h>

@class NSArray, NSString;

@interface PHADataset : NSObject <ETDataProvider>
{
    NSArray *_labeledDataSamples;	// 8 = 0x8
    NSString *_inputName;	// 16 = 0x10
    NSString *_labelName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001ccb0
@property(readonly, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(readonly, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly, nonatomic) NSArray *labeledDataSamples; // @synthesize labeledDataSamples=_labeledDataSamples;
- (unsigned long long)numberOfDataPoints;	// IMP=0x000000000001cc4e
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000001c755
- (id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3;	// IMP=0x000000000001c69e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

