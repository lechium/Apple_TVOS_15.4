//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNAtomicToggle : NSObject
{
    _Atomic _Bool _state;	// 8 = 0x8
}

- (_Bool)trySetState:(_Bool)arg1;	// IMP=0x0000000000038d5a
- (unsigned long long)hash;	// IMP=0x0000000000038d45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038ce0
- (id)description;	// IMP=0x0000000000038c55
- (id)initWithState:(_Bool)arg1;	// IMP=0x0000000000038bfc
- (id)init;	// IMP=0x0000000000038be8

@end

