//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface ATVAutounbinder : NSObject
{
    NSMapTable *_bindingsByObject;	// 8 = 0x8
    _Bool _assertOnRetainEnabled;	// 16 = 0x10
}

- (void)_assertIllegalRetain;	// IMP=0x00000000000043fd
- (void)_enableAssertOnRetain;	// IMP=0x00000000000043f3
- (id)retain;	// IMP=0x00000000000043ac
- (void)dealloc;	// IMP=0x00000000000040f9
- (void)_notifyBindingAdaptors;	// IMP=0x0000000000003eb3
- (void)removeBinding:(id)arg1 fromObject:(id)arg2;	// IMP=0x0000000000003e35
- (void)addBinding:(id)arg1 fromObject:(id)arg2;	// IMP=0x0000000000003dba
- (id)init;	// IMP=0x0000000000003d51

@end

