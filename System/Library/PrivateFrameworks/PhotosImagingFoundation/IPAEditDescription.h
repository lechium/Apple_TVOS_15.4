//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/IPAEditOperationOrdering-Protocol.h>
#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSString;

@interface IPAEditDescription : NSObject <IPAEditOperationOrdering, NSCopying, NSFastEnumeration>
{
    NSArray *_operations;	// 8 = 0x8
}

+ (id)sortOperations:(id)arg1 withOrdering:(id)arg2;	// IMP=0x000000000000aa88
+ (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1 inArray:(id)arg2 withOrdering:(id)arg3;	// IMP=0x000000000000a7e3
+ (_Bool)containsValidOperations:(id)arg1;	// IMP=0x000000000000b24a
+ (Class)expectedOperationClass;	// IMP=0x000000000000b20d
+ (id)presetifyAdjustmentStack:(id)arg1;	// IMP=0x000000000000b3cf
- (void).cxx_destruct;	// IMP=0x000000000000a7d3
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionWithOperationsUpToUUID:(id)arg1;	// IMP=0x000000000000a43b
- (id)descriptionByRemovingOperationsStartingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000a39f
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000000a2c0
- (id)descriptionByRemovingOperation:(id)arg1;	// IMP=0x000000000000a097
- (id)descriptionByRemovingOperationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000a006
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000009f70
- (id)descriptionByAddingOperation:(id)arg1;	// IMP=0x0000000000009eef
- (id)descriptionWithOperations:(id)arg1;	// IMP=0x0000000000009e4b
- (void)withImmutableOperationAtIndex:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009da8
- (void)forEachImmutableOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009c51
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000009c3b
- (_Bool)containsOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000009c18
- (id)operationWithUUID:(id)arg1;	// IMP=0x0000000000009bc6
- (id)operationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000009b3f
- (id)firstOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000009aed
- (unsigned long long)insertIndexForOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000009aa1
- (unsigned long long)indexOfOperationWithUUID:(id)arg1;	// IMP=0x0000000000009894
- (unsigned long long)firstIndexOfOperationWithIdentifier:(id)arg1;	// IMP=0x0000000000009687
- (id)operations;	// IMP=0x000000000000964b
- (unsigned long long)operationCount;	// IMP=0x0000000000009635
- (_Bool)isEqualToDescriptionRenderOperations:(id)arg1;	// IMP=0x0000000000009497
- (_Bool)isEqualToDescription:(id)arg1;	// IMP=0x0000000000009485
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000942c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009421
- (id)_init;	// IMP=0x00000000000093f2
- (id)init;	// IMP=0x00000000000093b0
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;	// IMP=0x000000000000b182
- (id)_debugDescriptionSuffix;	// IMP=0x000000000000b17a
- (id)_operations;	// IMP=0x000000000000b16c
- (id)_operationAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000b10e
- (id)initWithOperations:(id)arg1;	// IMP=0x000000000000b077
- (id)archivalRepresentation;	// IMP=0x000000000000b1d0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

