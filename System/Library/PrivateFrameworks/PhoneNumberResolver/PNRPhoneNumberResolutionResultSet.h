//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PNRPhoneNumberResolutionResultSet : NSObject
{
    NSMutableDictionary *_results;	// 8 = 0x8
    struct os_unfair_lock_s _resultsLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007f3c
- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007dc6
- (id)description;	// IMP=0x0000000000007db0
- (id)init;	// IMP=0x0000000000007d53
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;	// IMP=0x0000000000007fc3
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;	// IMP=0x0000000000007f4c

@end

