//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    _Bool _required;	// 32 = 0x20
}

- (_Bool)required;	// IMP=0x00000000000571c1
- (unsigned long long)index;	// IMP=0x00000000000571b0
- (unsigned long long)type;	// IMP=0x000000000005719f
- (id)name;	// IMP=0x000000000005718e
- (id)description;	// IMP=0x000000000005717a
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000056fce
- (void)dealloc;	// IMP=0x0000000000056f8c
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 required:(_Bool)arg4;	// IMP=0x0000000000056efd

@end

