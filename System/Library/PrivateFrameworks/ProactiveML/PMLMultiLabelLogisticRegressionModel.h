//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLMultiLabelClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSArray, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSArray *_models;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ffa0
- (id)serialize;	// IMP=0x000000000000ff96
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000000fd27
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000000fae1
- (id)predict:(id)arg1;	// IMP=0x000000000000f81e
- (unsigned long long)outputDimension;	// IMP=0x000000000000f808
- (id)initWithModels:(id)arg1;	// IMP=0x000000000000f79d
- (id)initWithWeightsArray:(id)arg1 andIntercept:(_Bool)arg2;	// IMP=0x000000000000f58f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

