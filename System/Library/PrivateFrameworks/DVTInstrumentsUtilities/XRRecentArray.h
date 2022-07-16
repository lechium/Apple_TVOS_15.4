//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface XRRecentArray : NSObject
{
    NSMutableArray *_entries;	// 8 = 0x8
    unsigned long long _maximumRecentCount;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000014894
- (_Bool)containsEntry:(id)arg1;	// IMP=0x0000000000014831
- (id)entryAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000147c5
- (id)entries;	// IMP=0x0000000000014782
- (void)removeEntryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001472e
- (void)removeEntry:(id)arg1;	// IMP=0x00000000000146d2
- (void)addEntry:(id)arg1;	// IMP=0x000000000001463a
@property(nonatomic) unsigned long long maximumRecentCount;
- (id)initWithMaximumRecentCount:(unsigned long long)arg1;	// IMP=0x000000000001450a
- (id)init;	// IMP=0x00000000000144f3

@end
