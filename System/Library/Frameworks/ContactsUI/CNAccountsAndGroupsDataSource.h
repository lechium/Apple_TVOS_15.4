//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccountsAndGroupsItem, CNContactStore, CNContactStoreFilter, NSArray;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsDataSource : NSObject
{
    CNContactStoreFilter *_filter;	// 8 = 0x8
    CNContactStoreFilter *_serverFilter;	// 16 = 0x10
    _Bool _hidesSearchableSources;	// 24 = 0x18
    CNContactStore *_store;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    CNAccountsAndGroupsItem *_rootItem;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000b0813
@property(retain, nonatomic) CNAccountsAndGroupsItem *rootItem; // @synthesize rootItem=_rootItem;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, nonatomic, getter=isTrivial) _Bool trivial;
@property(readonly, nonatomic) CNContactStoreFilter *serverFilter;
- (void)setServerFilterForItem:(id)arg1;	// IMP=0x00000000000b05cb
@property(copy, nonatomic) CNContactStoreFilter *filter;
- (void)_applyFilter;	// IMP=0x00000000000aff35
- (void)_reloadSections;	// IMP=0x00000000000ae680
- (void)reload;	// IMP=0x00000000000ae66c
- (id)initWithStore:(id)arg1;	// IMP=0x00000000000ae5cc

@end
