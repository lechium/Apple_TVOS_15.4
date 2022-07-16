//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPropertyGroupItemDelegate-Protocol.h>
#import <ContactsUI/UITableViewDataSource-Protocol.h>
#import <ContactsUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;
@protocol CNPropertyCellDelegate;

@interface CNContactHeaderEditView <UITableViewDelegate, UITableViewDataSource, CNPropertyGroupItemDelegate>
{
    UITableView *_editingTable;	// 104 = 0x68
    NSArray *_editingGroups;	// 112 = 0x70
    id <CNPropertyCellDelegate> _namePropertyDelegate;	// 120 = 0x78
}

+ (id)contactHeaderViewWithContact:(id)arg1 editingGroups:(id)arg2;	// IMP=0x00000000000203a5
- (void).cxx_destruct;	// IMP=0x0000000000022067
@property(nonatomic) __weak id <CNPropertyCellDelegate> namePropertyDelegate; // @synthesize namePropertyDelegate=_namePropertyDelegate;
@property(retain, nonatomic) NSArray *editingGroups; // @synthesize editingGroups=_editingGroups;
- (id)_phoneticNameForValue:(id)arg1 isFamilyName:(_Bool)arg2;	// IMP=0x0000000000021fa1
- (void)propertyItem:(id)arg1 willChangeValue:(id)arg2;	// IMP=0x00000000000218ba
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000021778
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002160a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000215ed
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00000000000215e5
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000215dd
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000021347
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000002128d
- (id)selectEditingGroupAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000211eb
- (_Bool)photoIsModified;	// IMP=0x00000000000211a7
- (_Bool)hasPhoto;	// IMP=0x0000000000021163
- (void)reloadDataPreservingChanges:(_Bool)arg1;	// IMP=0x0000000000021105
- (void)updateConstraints;	// IMP=0x0000000000020bee
- (void)updateFontSizes;	// IMP=0x0000000000020b6c
- (void)setEditingGroups:(id)arg1 withUpdate:(_Bool)arg2;	// IMP=0x000000000002074d
- (id)initWithContact:(id)arg1 editingGroups:(id)arg2 frame:(struct CGRect)arg3;	// IMP=0x0000000000020507

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

