//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface MIFreeProfileValidatedAppTracker : NSObject
{
    NSMutableSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x0040000000056109
- (void).cxx_destruct;	// IMP=0x00200000000574f2
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSMutableSet *refs; // @synthesize refs=_refs;
- (_Bool)removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000572c5
- (_Bool)_onQueue_removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000056f14
- (_Bool)addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000056c2d
- (_Bool)_onQueue_addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000056898
- (_Bool)_onQueue_discoverReferencesWithError:(id *)arg1;	// IMP=0x0010000000056700
- (_Bool)_onQueue_addAppIdentifierIfCachedOnContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x00100000000562f6
- (void)invalidateCache;	// IMP=0x001000000005626d
- (id)init;	// IMP=0x0010000000056196

@end

