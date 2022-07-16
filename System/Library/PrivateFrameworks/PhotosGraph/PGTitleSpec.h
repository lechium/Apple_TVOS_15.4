//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PGTitleSpecDelegate;

@interface PGTitleSpec : NSObject
{
    _Bool _hasLineBreak;	// 8 = 0x8
    _Bool _insertNonBreakableSpace;	// 9 = 0x9
    _Bool _hasSpecArgumentHandlingLineBreakBehavior;	// 10 = 0xa
    NSString *_format;	// 16 = 0x10
    NSArray *_arguments;	// 24 = 0x18
    unsigned long long _weekdayCriteria;	// 32 = 0x20
    long long _titleCategory;	// 40 = 0x28
    id <PGTitleSpecDelegate> _delegate;	// 48 = 0x30
}

+ (long long)_weekdayForWeekdayCriteria:(unsigned long long)arg1;	// IMP=0x00000000002d0b47
+ (id)specWithFormat:(id)arg1 titleCategory:(long long)arg2;	// IMP=0x00000000002d0aeb
- (void).cxx_destruct;	// IMP=0x00000000002d0aba
@property _Bool hasSpecArgumentHandlingLineBreakBehavior; // @synthesize hasSpecArgumentHandlingLineBreakBehavior=_hasSpecArgumentHandlingLineBreakBehavior;
@property _Bool insertNonBreakableSpace; // @synthesize insertNonBreakableSpace=_insertNonBreakableSpace;
@property __weak id <PGTitleSpecDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) long long titleCategory; // @synthesize titleCategory=_titleCategory;
@property unsigned long long weekdayCriteria; // @synthesize weekdayCriteria=_weekdayCriteria;
@property _Bool hasLineBreak; // @synthesize hasLineBreak=_hasLineBreak;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly) NSString *format; // @synthesize format=_format;
- (id)description;	// IMP=0x00000000002d097c
- (_Bool)_canFulfillWeekdayCriteriaWithMomentNodes:(id)arg1;	// IMP=0x00000000002d0884
- (id)_appendArguments:(id)arg1 toFormatString:(id)arg2;	// IMP=0x00000000002d05a4
- (_Bool)_resolveRequiredInputForArgument:(id)arg1;	// IMP=0x00000000002d04e5
- (id)_titleWithResolvedArguments:(id)arg1;	// IMP=0x00000000002d039f
- (id)titleWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;	// IMP=0x00000000002d0087
- (id)titleWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;	// IMP=0x00000000002cfd8d
- (id)initWithFormat:(id)arg1 titleCategory:(long long)arg2;	// IMP=0x00000000002cfcfa

@end

