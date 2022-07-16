//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class RECondition, REConditionEvaluator;

@interface REFilteringRule <REAutomaticExportedInterface>
{
    REConditionEvaluator *_conditionEvaluator;	// 16 = 0x10
    RECondition *_condition;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b5eb1
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) RECondition *condition; // @synthesize condition=_condition;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b5e15
- (unsigned long long)hash;	// IMP=0x00000000000b5dbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b5ce9
- (id)initWithCondition:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00000000000b5c20
- (id)initWithCondition:(id)arg1;	// IMP=0x00000000000b5c0c
@property(readonly, nonatomic) REConditionEvaluator *conditionEvaluator;

@end

