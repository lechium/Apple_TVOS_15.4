//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AFThreeArgumentSafetyBlock : NSObject
{
    struct atomic_flag _hasInvoked;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    id _defaultValue1;	// 24 = 0x18
    id _defaultValue2;	// 32 = 0x20
    id _defaultValue3;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b9bd1
- (void)dealloc;	// IMP=0x00000000000b9b87
- (_Bool)invokeWithValue:(id)arg1 andValue:(id)arg2 andValue:(id)arg3;	// IMP=0x00000000000b9aea
- (id)initWithBlock:(CDUnknownBlockType)arg1 defaultValue1:(id)arg2 defaultValue2:(id)arg3 defaultValue3:(id)arg4;	// IMP=0x00000000000b9a0d
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b99f3

@end
