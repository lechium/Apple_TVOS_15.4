//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCondition, NSString;

@interface HFConditionUISummary : NSObject
{
    NSString *_conditionTitle;	// 8 = 0x8
    NSString *_conditionDescription;	// 16 = 0x10
    HFCondition *_condition;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000073ae7
@property(readonly, nonatomic) HFCondition *condition; // @synthesize condition=_condition;
@property(readonly, nonatomic) NSString *conditionDescription; // @synthesize conditionDescription=_conditionDescription;
@property(readonly, nonatomic) NSString *conditionTitle; // @synthesize conditionTitle=_conditionTitle;
- (id)initWithCondition:(id)arg1 title:(id)arg2 description:(id)arg3;	// IMP=0x0000000000073a12

@end

