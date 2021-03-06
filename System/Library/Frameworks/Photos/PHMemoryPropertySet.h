//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHMemoryPropertySet-Protocol.h>

@class NSString, PHMemory;

@interface PHMemoryPropertySet : NSObject <PHMemoryPropertySet>
{
    PHMemory *_memory;	// 8 = 0x8
}

+ (id)propertiesToPrefetch;	// IMP=0x0000000000077fea
+ (_Bool)isToMany;	// IMP=0x0000000000077fe2
+ (id)keyPathToPrimaryObject;	// IMP=0x0000000000077fb0
+ (id)keyPathFromPrimaryObject;	// IMP=0x0000000000077f7e
+ (id)entityName;	// IMP=0x0000000000077f4c
+ (id)propertiesToFetch;	// IMP=0x0000000000077f1a
+ (id)propertySetName;	// IMP=0x0000000000077ee8
- (void).cxx_destruct;	// IMP=0x0000000000077eda
@property(readonly, nonatomic) __weak PHMemory *memory; // @synthesize memory=_memory;
- (id)initWithFetchDictionary:(id)arg1 memory:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x0000000000077e74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

