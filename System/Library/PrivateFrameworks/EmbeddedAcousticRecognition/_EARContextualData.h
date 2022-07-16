//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARContextualData : NSObject
{
    struct shared_ptr<quasar::ContextualData> _contextualData;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x00000000002f1b50
- (id).cxx_construct;	// IMP=0x00000000002f2ec1
- (void).cxx_destruct;	// IMP=0x00000000002f2eb3
- (unordered_map_2a96e01d)getTemplateToDeviationCost;	// IMP=0x00000000002f2e7c
- (unordered_map_2a96e01d)getTemplateToAverageCost;	// IMP=0x00000000002f2e45
- (map_03a1181d)getWords;	// IMP=0x00000000002f2e11
- (id)metrics;	// IMP=0x00000000002f2c10
- (void)iterRankedContactSourceWithApplication:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f2a45
- (void)iterNamedEntitySourceWithApplication:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f2829
- (_Bool)addNamedEntity:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000002f1f2b
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000002f1b78

@end
