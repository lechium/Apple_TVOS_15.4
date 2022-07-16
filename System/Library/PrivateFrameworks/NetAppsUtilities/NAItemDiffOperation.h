//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NADiffOperation-Protocol.h>

@class NSIndexPath, NSString;

@interface NAItemDiffOperation : NSObject <NADiffOperation>
{
    unsigned long long _type;	// 8 = 0x8
    id _item;	// 16 = 0x10
    NSIndexPath *_fromIndexPath;	// 24 = 0x18
    NSIndexPath *_toIndexPath;	// 32 = 0x20
}

+ (id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000001b3a9
+ (id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000001b316
+ (id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000001b2a0
+ (id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000001b22a
- (void).cxx_destruct;	// IMP=0x000000000001bc31
@property(readonly, copy, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;
@property(readonly, copy, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;	// IMP=0x000000000001b856
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b41c
- (id)initWithOperationType:(unsigned long long)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;	// IMP=0x000000000001b167

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
