//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    AMSThreadSafeObject *_backingSet;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000217260
@property(retain, nonatomic) AMSThreadSafeObject *backingSet; // @synthesize backingSet=_backingSet;
- (void)removeObject:(id)arg1;	// IMP=0x0000000000217154
- (void)addObject:(id)arg1;	// IMP=0x0000000000217063
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;	// IMP=0x0000000000216d76

@end

