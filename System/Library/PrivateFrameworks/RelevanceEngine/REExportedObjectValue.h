//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REExportedObjectValue
{
    id _object;	// 8 = 0x8
    _Bool _allowsEncoding;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000074d2a
- (id)exportedValueForKey:(id)arg1;	// IMP=0x0000000000074c33
- (_Bool)shouldEncodeProperty:(id)arg1;	// IMP=0x0000000000074c05
- (unsigned long long)propertyCount;	// IMP=0x0000000000074b54
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000074a01
- (unsigned long long)type;	// IMP=0x00000000000749f6
- (id)objectValue;	// IMP=0x00000000000749e1
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000074958

@end

