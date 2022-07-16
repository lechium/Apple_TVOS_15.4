//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray, NSString;
@protocol SiriCoreSQLiteValue;

@interface SiriCoreSQLiteQueryCriterion : NSObject <NSCopying>
{
    NSString *_columnName;	// 8 = 0x8
    long long _comparisonOperator;	// 16 = 0x10
    long long _logicalOperator;	// 24 = 0x18
    id <SiriCoreSQLiteValue> _value;	// 32 = 0x20
    NSArray *_values;	// 40 = 0x28
    NSArray *_subcriteria;	// 48 = 0x30
}

+ (id)likeQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(_Bool)arg3;	// IMP=0x0000000000011e21
+ (id)isNullQueryCriterionWithColumnName:(id)arg1 negation:(_Bool)arg2;	// IMP=0x0000000000011daf
+ (id)isQueryCriterionWithColumnName:(id)arg1 value:(id)arg2 negation:(_Bool)arg3;	// IMP=0x0000000000011d1e
+ (id)inQueryCriterionWithColumnName:(id)arg1 values:(id)arg2 negation:(_Bool)arg3;	// IMP=0x0000000000011c85
+ (id)betweenQueryCriterionWithColumnName:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 negation:(_Bool)arg4;	// IMP=0x0000000000011b70
+ (id)orQueryCriterionWithSubcriteriaProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011b11
+ (id)orQueryCriterionWithSubcriteria:(id)arg1;	// IMP=0x0000000000011ab2
+ (id)andQueryCriterionWithSubcriteriaProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011a53
+ (id)andQueryCriterionWithSubcriteria:(id)arg1;	// IMP=0x00000000000119f4
+ (id)notEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x000000000001196b
+ (id)lessThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x00000000000118e2
+ (id)lessThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000011859
+ (id)greaterThanOrEqualToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x00000000000117d0
+ (id)greaterThanQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000011747
+ (id)equalToQueryCriterionWithColumnName:(id)arg1 value:(id)arg2;	// IMP=0x00000000000116be
- (void).cxx_destruct;	// IMP=0x0000000000011680
@property(readonly, copy, nonatomic) NSArray *subcriteria; // @synthesize subcriteria=_subcriteria;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) long long logicalOperator; // @synthesize logicalOperator=_logicalOperator;
@property(readonly, nonatomic) long long comparisonOperator; // @synthesize comparisonOperator=_comparisonOperator;
@property(readonly, copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011639
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteriaProvider:(CDUnknownBlockType)arg6;	// IMP=0x0000000000011575
- (id)initWithColumnName:(id)arg1 comparisonOperator:(long long)arg2 logicalOperator:(long long)arg3 value:(id)arg4 values:(id)arg5 subcriteria:(id)arg6;	// IMP=0x0000000000011452

@end

