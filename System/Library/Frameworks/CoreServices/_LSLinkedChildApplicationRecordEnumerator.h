//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSLinkedChildApplicationRecordEnumerator
{
    struct vector<unsigned int, std::allocator<unsigned int>> _units;	// 8 = 0x8
    NSString *_parentBundleID;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000001d919
- (void).cxx_destruct;	// IMP=0x000000000001d8d8
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x000000000001d772
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x000000000001d5b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d504
- (id)initWithContext:(struct LSContext *)arg1 parentBundleID:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001d46c

@end
