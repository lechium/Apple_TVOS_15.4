//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject
{
    NSLock *_releaseLock;	// 8 = 0x8
    int _referenceCount;	// 16 = 0x10
    _Bool _calledDealloc;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000029b37
- (id)init;	// IMP=0x0000000000029ae1

@end

