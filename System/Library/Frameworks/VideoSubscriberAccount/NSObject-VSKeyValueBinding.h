//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (VSKeyValueBinding)
- (void)vs_setValue:(id)arg1 forBinding:(id)arg2;	// IMP=0x000000000004f216
- (id)vs_valueForBinding:(id)arg1;	// IMP=0x000000000004f158
- (void)vs_unbind:(id)arg1;	// IMP=0x000000000004f0ab
- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;	// IMP=0x000000000004eef2
- (id)vs_unbinderCreatingIfNeeded:(_Bool)arg1;	// IMP=0x00000000000507d1
- (id)vs_binderCreatingIfNeeded:(_Bool)arg1;	// IMP=0x0000000000050720
@end

