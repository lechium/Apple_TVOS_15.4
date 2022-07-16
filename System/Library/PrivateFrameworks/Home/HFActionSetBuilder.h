//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFComparable-Protocol.h>

@class HFImageIconDescriptor, NSString;

@interface HFActionSetBuilder <HFComparable>
{
    _Bool _isFavorite;	// 8 = 0x8
    _Bool _isActionSetDeleted;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    HFImageIconDescriptor *_iconDescriptor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021615d
@property(nonatomic) _Bool isActionSetDeleted; // @synthesize isActionSetDeleted=_isActionSetDeleted;
@property(retain, nonatomic) HFImageIconDescriptor *iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000215fc8
- (id)_deleteActionSet:(id)arg1 fromHome:(id)arg2;	// IMP=0x0000000000215881
- (id)_lazilyUpdateIcon;	// IMP=0x00000000002152f1
- (id)_lazilyUpdateFavorite;	// IMP=0x0000000000214dc5
- (id)commitItem;	// IMP=0x0000000000213b8b
- (id)_performValidation;	// IMP=0x000000000021387a
- (void)updateFromActionSetBuilder:(id)arg1;	// IMP=0x0000000000213770
- (id)deleteActionSet;	// IMP=0x00000000002136ed
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;	// IMP=0x00000000002135aa
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000213511
@property(readonly) unsigned long long hash;
- (id)compareToObject:(id)arg1;	// IMP=0x000000000006f9f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

