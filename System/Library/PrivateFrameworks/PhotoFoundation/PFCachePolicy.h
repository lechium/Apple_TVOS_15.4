//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PFCachePolicy : NSObject
{
}

- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000029415
- (void)didRemoveAllCacheEntries;	// IMP=0x000000000002940f
- (void)didRemoveCacheEntry:(id)arg1;	// IMP=0x0000000000029409
- (void)didAddCacheEntry:(id)arg1;	// IMP=0x0000000000029403
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;	// IMP=0x00000000000293fb
- (void)didGetCacheEntry:(id)arg1;	// IMP=0x00000000000293f5
- (unsigned long long)capacityHint;	// IMP=0x00000000000293ed

@end

