//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSSynthesizedExtensionPointRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c25f9
- (void).cxx_destruct;	// IMP=0x00000000000c276e
- (id)identifier;	// IMP=0x00000000000c2758
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2702
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c265b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c2601
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x00000000000c2501
- (id)SDKDictionary;	// IMP=0x00000000000c24f7
- (unsigned int)platform;	// IMP=0x00000000000c24ed
- (id)version;	// IMP=0x00000000000c24e0
- (id)name;	// IMP=0x00000000000c24ce
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000000c2417
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000c227c

@end

