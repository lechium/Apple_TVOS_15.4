//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface NSUndoManagerProxy
{
    NSUndoManager *_manager;	// 8 = 0x8
    Class _targetClass;	// 16 = 0x10
}

- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000001537a5
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000153788
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000015376b
- (void)superRelease;	// IMP=0x0000000000153719
- (oneway void)release;	// IMP=0x00000000001536b4
- (_Bool)_tryRetain;	// IMP=0x0000000000153643
- (id)retain;	// IMP=0x00000000001535de
- (void)setTargetClass:(Class)arg1;	// IMP=0x00000000001535cd
- (id)initWithManager:(id)arg1;	// IMP=0x00000000001535b9

@end

