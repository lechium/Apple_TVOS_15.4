//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface ETTaskClassifier
{
    NSArray *_class_names;	// 56 = 0x38
}

@property NSArray *class_names; // @synthesize class_names=_class_names;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(_Bool)arg4;	// IMP=0x00000000004762a7
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;	// IMP=0x000000000047628f

@end

