//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, PKCatalogGroup;
@protocol PKGroupDelegate;

@interface PKGroup : NSObject
{
    PKCatalogGroup *_catalogGroup;	// 8 = 0x8
    NSMutableDictionary *_passesByUniqueID;	// 16 = 0x10
    _Bool _local;	// 24 = 0x18
    id <PKGroupDelegate> _delegate;	// 32 = 0x20
    unsigned long long _frontmostPassIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003bc603
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) unsigned long long frontmostPassIndex; // @synthesize frontmostPassIndex=_frontmostPassIndex;
@property(nonatomic) __weak id <PKGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removeUniqueID:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000003bc4ba
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(_Bool)arg3;	// IMP=0x00000000003bc3ac
- (void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(_Bool)arg3;	// IMP=0x00000000003bc2bc
- (void)_updatePass:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000003bc1d0
- (unsigned long long)_indexOfUniqueID:(id)arg1;	// IMP=0x00000000003bc158
- (id)passWithUniqueID:(id)arg1;	// IMP=0x00000000003bc142
- (void)enumerateUniqueIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003bc00b
- (_Bool)containsOnlyUniqueID:(id)arg1;	// IMP=0x00000000003bbf5f
- (_Bool)containsPasses;	// IMP=0x00000000003bbf13
- (void)handleUserPassDelete:(id)arg1;	// IMP=0x00000000003bbefc
- (id)copyCatalogGroup;	// IMP=0x00000000003bbee6
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 expiredSectionPasses:(id)arg3 notify:(_Bool)arg4;	// IMP=0x00000000003bba2c
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;	// IMP=0x00000000003bb717
- (id)init;	// IMP=0x00000000003bb709
- (unsigned long long)indexForPassUniqueID:(id)arg1;	// IMP=0x00000000003bb691
- (void)movePass:(id)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000003bb63a
- (id)passes;	// IMP=0x00000000003bb624
- (id)passAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003bb583
- (unsigned long long)passCount;	// IMP=0x00000000003bb53b
@property(readonly, nonatomic) NSNumber *groupID;
- (id)description;	// IMP=0x00000000003bb491

@end
