//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextSizeCache : NSObject
{
    struct ui_size_cache _cache;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000f0ecda
- (void).cxx_destruct;	// IMP=0x0000000000f0ecbe
- (id)description;	// IMP=0x0000000000f0ea83
- (void)removeAllSizes;	// IMP=0x0000000000f0ea75
- (void)addSize:(struct CGSize)arg1 baselineInfo:(CDStruct_a0add0ba *)arg2 forTargetSize:(struct CGSize)arg3;	// IMP=0x0000000000f0e477
- (_Bool)getSize:(struct CGSize *)arg1 baselineInfo:(CDStruct_a0add0ba *)arg2 forTargetSize:(struct CGSize)arg3 isMultiline:(_Bool)arg4;	// IMP=0x0000000000f0e2e6

@end

