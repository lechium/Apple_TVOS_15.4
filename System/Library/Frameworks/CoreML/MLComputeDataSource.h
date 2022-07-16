//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MLComputeDataSource : NSObject
{
    NSDictionary *_dataDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007aefa
@property(readonly, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
- (id)oneHotEncodedDataFromFeatureValue:(id)arg1 withNNEngine:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a95b
- (id)dataCHWFromChanneledPixelType:(struct __CVBuffer *)arg1 channelOrderIsBGR:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000007a6c7
- (id)dataCHWFromPixelTypeGray8:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000007a561
- (id)dataCHWFromPixelBuffer:(struct __CVBuffer *)arg1 channelOrderIsBGR:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000007a466
- (id)initWithFeatureProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000797d6

@end

