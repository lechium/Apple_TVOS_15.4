//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSDictionaryBackedPropertyList
{
    NSDictionary *_plist;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ca7fc
- (void).cxx_destruct;	// IMP=0x00000000000ca909
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ca82f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ca804
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x00000000000ca7b8
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x00000000000ca78f
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000ca6e9

@end

