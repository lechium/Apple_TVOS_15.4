//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _HKActivitySummaryComparisonFilter
{
}

+ (_Bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000173982
+ (_Bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017384b
+ (_Bool)isAllowedPredicateOperatorType:(unsigned long long)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000017383a
+ (id)allowedValueClassesForKeyPath:(id)arg1;	// IMP=0x0000000000173808
+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;	// IMP=0x00000000001737d6
+ (_Bool)isSupportedKeyPath:(id)arg1;	// IMP=0x00000000001737b7
- (long long)acceptsActivitySummary:(id)arg1;	// IMP=0x0000000000173a4f
- (_Bool)acceptsDataObject:(id)arg1;	// IMP=0x0000000000173a47

@end

