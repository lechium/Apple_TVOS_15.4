//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TRIPaths;

@interface TRINamespaceDescriptorSetStorage : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002569f
- (_Bool)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)arg1 removedCount:(unsigned int *)arg2;	// IMP=0x0000000000025341
- (id)_collectNamespaceDescriptorSets;	// IMP=0x00000000000250b7
- (_Bool)hasNamespaceDescriptorsForTreatmentWithId:(id)arg1 path:(id *)arg2;	// IMP=0x0000000000024f84
- (id)parentDirForNamespaceDescriptorSets;	// IMP=0x0000000000024f0d
- (id)pathForNamespaceDescriptorsWithTreatmentId:(id)arg1;	// IMP=0x0000000000024e3a
- (_Bool)overwriteNamespaceDescriptors:(id)arg1 forTreatmentId:(id)arg2;	// IMP=0x000000000002474d
- (id)initWithPaths:(id)arg1;	// IMP=0x00000000000246e2

@end

