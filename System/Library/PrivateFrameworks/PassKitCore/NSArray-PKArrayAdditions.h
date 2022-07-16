//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PKArrayAdditions)
+ (id)pk_FilteredCardErrors:(id)arg1;	// IMP=0x00000000001df956
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x00000000001df4fc
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;	// IMP=0x00000000001df10c
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00000000001df0f3
+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001df0da
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001df0c1
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x00000000001df0a8
- (id)pk_orderedSet;	// IMP=0x0000000000064488
- (id)pk_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000643af
- (_Bool)pk_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000642ec
- (id)pk_intersectArray:(id)arg1;	// IMP=0x0000000000064231
- (id)pk_groupDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063ffb
- (id)pk_indexDictionaryByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063e49
- (unsigned long long)pk_countObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063d3e
- (id)pk_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063cdf
- (id)pk_shuffledArray;	// IMP=0x0000000000063c1e
- (id)pk_arrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063c04
- (id)pk_arrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000063bea
- (id)pk_createArrayBySafelyApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000639ca
- (id)pk_createArrayByApplyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000637ae
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;	// IMP=0x0000000000063729
- (id)pk_arrayByRemovingObject:(id)arg1;	// IMP=0x00000000000636b7
@end

