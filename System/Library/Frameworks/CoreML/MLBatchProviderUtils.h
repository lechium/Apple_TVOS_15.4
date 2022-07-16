//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLBatchProviderUtils : NSObject
{
}

+ (id)featureDescriptionsByNameForBatch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000130425
+ (id)featureValueArrayForName:(id)arg1 batch:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001302d0
+ (id)dictionaryFromBatch:(id)arg1;	// IMP=0x0000000000130250
+ (id)dictionaryFromBatch:(id)arg1 featureNames:(id)arg2;	// IMP=0x000000000012fdfc
+ (id)featureProviderArrayFromBatch:(id)arg1;	// IMP=0x000000000012fcd8
+ (id)featureNamesInBatch:(id)arg1;	// IMP=0x000000000012fba5
+ (id)batchWithSubsetOfFeaturesNamed:(id)arg1 fromBatch:(id)arg2;	// IMP=0x00000000001310cb
+ (id)batchFromConcatinatingBatches:(id)arg1;	// IMP=0x0000000000130e9e
+ (id)lazyBatchWithFeaturesInBatch:(id)arg1 addedToBatch:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000130e1f
+ (id)lazyBatchIndexIntoBatch:(id)arg1 indices:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000130da0
+ (id)lazyBatchWindowIntoBatch:(id)arg1 startIndex:(unsigned long long)arg2 windowLength:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000130d30
+ (_Bool)vectorizeFeaturesNamed:(id)arg1 fromBatch:(id)arg2 intoRowsOfDoubleMatrix:(id)arg3 error:(id *)arg4;	// IMP=0x000000000013122e

@end

