//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSPropertyList, NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationExtensionRecordEnumerator
{
    NSString *_extensionPointID;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    CDUnknownBlockType _filterBlock;	// 24 = 0x18
    LSPropertyList *_propertyList;	// 32 = 0x20
    struct vector<unsigned int, std::allocator<unsigned int>> _plugins;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000000e035f
- (void).cxx_destruct;	// IMP=0x00000000000e0303
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e01fa
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x00000000000e00c4
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000dfdb3
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dfcba
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000dfca4
- (_Bool)_evaluatePluginNoIO:(unsigned int)arg1 data:(const struct LSPluginData *)arg2 extensionPointID:(unsigned int)arg3 context:(struct LSContext *)arg4;	// IMP=0x00000000000e04d5
- (_Bool)_getExtensionPointID:(unsigned int *)arg1 context:(struct LSContext *)arg2 error:(id *)arg3;	// IMP=0x00000000000e040e

@end

