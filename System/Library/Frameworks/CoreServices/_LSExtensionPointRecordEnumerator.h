//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSExtensionPointRecordEnumerator
{
    struct vector<unsigned int, std::allocator<unsigned int>> _extensionIDs;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000c139d
- (void).cxx_destruct;	// IMP=0x00000000000c1379
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c1305
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x00000000000c1262
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x00000000000c10bc

@end

