//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ENAuthCacheEntry, NSMutableDictionary;

@interface ENAuthCache : NSObject
{
    NSMutableDictionary *_linkedCache;	// 8 = 0x8
    ENAuthCacheEntry *_businessCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002508b5
@property(retain, nonatomic) ENAuthCacheEntry *businessCache; // @synthesize businessCache=_businessCache;
@property(retain, nonatomic) NSMutableDictionary *linkedCache; // @synthesize linkedCache=_linkedCache;
- (id)authenticationResultForBusiness;	// IMP=0x00000000002507c4
- (void)setAuthenticationResultForBusiness:(id)arg1;	// IMP=0x000000000025071c
- (id)authenticationResultForLinkedNotebookGuid:(id)arg1;	// IMP=0x00000000002505ea
- (void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2;	// IMP=0x00000000002504e9
- (id)init;	// IMP=0x000000000025047e

@end
