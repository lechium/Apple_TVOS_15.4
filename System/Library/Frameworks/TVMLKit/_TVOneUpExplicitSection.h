//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/_TVOneUpSection-Protocol.h>

@class IKSectionElement;

@interface _TVOneUpExplicitSection <_TVOneUpSection>
{
    IKSectionElement *_sectionElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002be4f
- (long long)newItemIndexForOldItemIndex:(long long)arg1;	// IMP=0x000000000002bdf1
- (_Bool)itemsChangeSetContainsMovedAddedOrRemovedItems;	// IMP=0x000000000002bcff
- (void)configureItemsChangeSetWithSection:(id)arg1;	// IMP=0x000000000002bcf9
- (void)resetAutoHighlightIndex;	// IMP=0x000000000002bcd7
@property(readonly, nonatomic) long long autoHighlightIndex;
- (void)unloadIndex:(long long)arg1;	// IMP=0x000000000002bc9d
- (void)loadIndex:(long long)arg1;	// IMP=0x000000000002bc80
- (id)elementForItemAtIndex:(long long)arg1;	// IMP=0x000000000002bc63
- (long long)numberOfItems;	// IMP=0x000000000002bc46
- (unsigned long long)hash;	// IMP=0x000000000002bbac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ba60
- (id)initWithSectionElement:(id)arg1;	// IMP=0x000000000002b9f2

@end
