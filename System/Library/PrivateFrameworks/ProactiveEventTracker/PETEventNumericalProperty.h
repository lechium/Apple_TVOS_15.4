//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PETEventNumericalProperty
{
    struct _NSRange _validRange;	// 16 = 0x10
    _Bool _clampValues;	// 32 = 0x20
}

- (id)longestValueString;	// IMP=0x0000000000005b06
- (unsigned long long)cardinality;	// IMP=0x0000000000005af4
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1;	// IMP=0x0000000000005a7a
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;	// IMP=0x0000000000005981
- (_Bool)isValidValue:(id)arg1;	// IMP=0x00000000000058fb
- (struct _NSRange)validRange;	// IMP=0x00000000000058e5
- (id)description;	// IMP=0x000000000000584a
- (id)initWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(_Bool)arg3;	// IMP=0x00000000000057e8

@end

