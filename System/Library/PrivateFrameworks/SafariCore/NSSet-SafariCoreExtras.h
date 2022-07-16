//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@class NSArray, NSURL;

@interface NSSet (SafariCoreExtras)
@property(readonly, copy, nonatomic) NSArray *safari_sortedArrayUsingFinderLikeSorting;
- (id)safari_setByRemovingObject:(id)arg1;	// IMP=0x000000000004be04
@property(readonly, nonatomic) NSURL *safari_shortestURL;
- (_Bool)safari_allObjectsPassTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bcc2
- (_Bool)safari_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bc8f
- (id)safari_anyObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bb39
- (id)safari_smallestObject:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b96f
- (id)safari_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b772
- (id)safari_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b588
@end

