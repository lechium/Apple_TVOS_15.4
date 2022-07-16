//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface LSPlugInQueryWithQueryDictionary
{
    NSDictionary *_queryDict;	// 16 = 0x10
    NSArray *_extensionIdentifiers;	// 24 = 0x18
    NSArray *_extensionPointIdentifiers;	// 32 = 0x20
    CDUnknownBlockType _filterBlock;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e671f
- (void).cxx_destruct;	// IMP=0x00000000000e67b3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6751
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e6727
- (unsigned long long)hash;	// IMP=0x00000000000e66cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e65a8
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e5eab
- (_Bool)matchesPlugin:(unsigned int)arg1 pluginData:(const struct LSPluginData *)arg2 withDatabase:(id)arg3;	// IMP=0x00000000000e5470
- (id)_queryDictionary;	// IMP=0x00000000000e545b
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e52ad

@end

