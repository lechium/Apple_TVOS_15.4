//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NAGroupedItemDiff : NSObject
{
    NSArray *_groupOperations;	// 8 = 0x8
    NSArray *_itemOperations;	// 16 = 0x10
    NSArray *_fromGroups;	// 24 = 0x18
    NSArray *_toGroups;	// 32 = 0x20
    CDUnknownBlockType _changeTest;	// 40 = 0x28
}

+ (id)_groupedItemDiffWithGroupOperations:(id)arg1 itemOperations:(id)arg2;	// IMP=0x0000000000018b79
+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018ae4
+ (id)diffFromGroups:(id)arg1 toGroups:(id)arg2;	// IMP=0x0000000000018acb
- (void).cxx_destruct;	// IMP=0x000000000001a70f
@property(copy, nonatomic) CDUnknownBlockType changeTest; // @synthesize changeTest=_changeTest;
@property(copy, nonatomic) NSArray *toGroups; // @synthesize toGroups=_toGroups;
@property(copy, nonatomic) NSArray *fromGroups; // @synthesize fromGroups=_fromGroups;
@property(copy, nonatomic) NSArray *itemOperations; // @synthesize itemOperations=_itemOperations;
@property(copy, nonatomic) NSArray *groupOperations; // @synthesize groupOperations=_groupOperations;
- (id)_operationDescriptionWithPrefix:(id)arg1;	// IMP=0x000000000001a53a
@property(readonly, copy, nonatomic) NSString *operationDescription;
- (id)debugDescription;	// IMP=0x000000000001a492
- (id)description;	// IMP=0x000000000001a2f4
- (id)_briefDescriptionForOperations:(id)arg1 type:(id)arg2;	// IMP=0x0000000000019e9a
- (id)_performItemDiffFromGroup:(id)arg1 atIndex:(id)arg2 toGroup:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000019697
- (void)_performDiff;	// IMP=0x0000000000018d71
@property(readonly, copy, nonatomic) NSArray *allOperations;
- (id)initWithFromGroups:(id)arg1 toGroups:(id)arg2 changeTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018c1d

@end

