//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject
{
    NSDictionary *_predictions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000269f1
- (id)redactedDescription;	// IMP=0x00000000000269df
- (id)description;	// IMP=0x0000000000026995
- (_Bool)matchesXPCActivityCriteria:(id)arg1;	// IMP=0x0000000000026912
- (_Bool)_oldPredictionWithKey:(const char *)arg1 inCriteria:(id)arg2 matchesPredictionWithKey:(id)arg3;	// IMP=0x000000000002687a
- (_Bool)matchesXPCActivity:(id)arg1;	// IMP=0x0000000000026834
- (void)updateXPCActivityCriteria:(id)arg1;	// IMP=0x000000000002674f
- (void)updateXPCActivity:(id)arg1;	// IMP=0x00000000000266e9
- (id)updatedPredictionWithValuesAndTypes:(id)arg1;	// IMP=0x00000000000265ce
- (id)predictedValueForType:(id)arg1;	// IMP=0x00000000000265b8
- (id)initWithPredictedValuesAndTypes:(id)arg1;	// IMP=0x000000000002655b
- (id)init;	// IMP=0x000000000002652c

@end

