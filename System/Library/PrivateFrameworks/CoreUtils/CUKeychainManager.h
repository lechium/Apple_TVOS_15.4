//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUKeychainManager : NSObject
{
}

- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 flags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000000060b7f
- (_Bool)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000060b67
- (_Bool)removeItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000060951
- (_Bool)removeItemMatchingItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006093a
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 flags:(unsigned int)arg2 logCategory:(struct LogCategory *)arg3 logLabel:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000603ce
- (_Bool)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory *)arg2 logLabel:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000603a4
- (id)addItem:(id)arg1 returnFlags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000600c5
- (_Bool)addItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005ff7c
- (_Bool)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ff65
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005f9e4
- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005f403
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005f3f1
- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000005f0c3

@end

