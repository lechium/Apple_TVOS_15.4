//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQuickResponsesReplyModel : NSObject
{
    _Bool _dynamicLabel;	// 8 = 0x8
    unsigned long long _semanticClassIndex;	// 16 = 0x10
    NSArray *_semanticClasses;	// 24 = 0x18
    NSArray *_selectedPseudocounts;	// 32 = 0x20
    double _scoreWeight;	// 40 = 0x28
    unsigned long long _category;	// 48 = 0x30
}

+ (id)semanticClassesForArray:(id)arg1;	// IMP=0x0000000000003beb
- (void).cxx_destruct;	// IMP=0x0000000000003bc3
@property(readonly, nonatomic) _Bool dynamicLabel; // @synthesize dynamicLabel=_dynamicLabel;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) double scoreWeight; // @synthesize scoreWeight=_scoreWeight;
@property(readonly, nonatomic) NSArray *selectedPseudocounts; // @synthesize selectedPseudocounts=_selectedPseudocounts;
@property(readonly, nonatomic) NSArray *semanticClasses; // @synthesize semanticClasses=_semanticClasses;
@property(readonly, nonatomic) unsigned long long semanticClassIndex; // @synthesize semanticClassIndex=_semanticClassIndex;
- (id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000000003726

@end
