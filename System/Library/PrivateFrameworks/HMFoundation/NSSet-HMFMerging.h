//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

#import <HMFoundation/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface NSSet (HMFMerging) <HMFObject>
+ (id)shortDescription;	// IMP=0x0000000000048e08
- (id)hmf_commonObjectsFromSet:(id)arg1;	// IMP=0x0000000000017057
- (id)hmf_removedObjectsFromSet:(id)arg1;	// IMP=0x0000000000016fd7
- (id)hmf_addedObjectsFromSet:(id)arg1;	// IMP=0x0000000000016f78
@property(readonly, getter=hmf_isEmpty) _Bool hmf_empty;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end
