//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLBuiltInArgument
{
    unsigned short _builtInType;	// 64 = 0x40
    unsigned short _builtInDataType;	// 66 = 0x42
}

- (unsigned long long)builtInType;	// IMP=0x000000000002a023
- (unsigned long long)builtInDataType;	// IMP=0x000000000002a012
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(_Bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7;	// IMP=0x0000000000029fae

@end

