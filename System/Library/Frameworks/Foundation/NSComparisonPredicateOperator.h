//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSComparisonPredicateOperator
{
    unsigned long long _variant;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002dcd3
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x000000000002e12f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e065
- (unsigned long long)options;	// IMP=0x000000000002e054
- (unsigned long long)variant;	// IMP=0x000000000002e043
- (id)predicateFormat;	// IMP=0x000000000002df48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ded3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ddcd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002dcdb
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000002dca6
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;	// IMP=0x000000000002dc3f

@end
