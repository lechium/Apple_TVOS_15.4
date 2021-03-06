//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersistentConnection/NSLocking-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PCDistributedLock : NSObject <NSLocking>
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011d73
- (void)unlock;	// IMP=0x0000000000011d08
- (void)lock;	// IMP=0x0000000000011cf1
- (_Bool)tryLock;	// IMP=0x0000000000011cdd
- (_Bool)_lockBlocking:(_Bool)arg1;	// IMP=0x0000000000011b7d
- (void)dealloc;	// IMP=0x0000000000011b02
- (id)initWithName:(id)arg1;	// IMP=0x0000000000011a0c
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000011992

@end

