//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UITableViewDataSource-Protocol.h>
#import <UIKitCore/UITableViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding>
{
    NSArray *_sections;	// 8 = 0x8
}

+ (id)staticDataSourceWithSections:(id)arg1;	// IMP=0x0000000000d896ae
- (void).cxx_destruct;	// IMP=0x0000000000d89e29
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d89d14
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d89d0c
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d89d04
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d89cfc
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d89bd2
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000d89b3e
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000d89aaa
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000d89a53
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000d899fc
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000d899a5
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000d8994e
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000d8983f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000d897ca
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000d897b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d8978a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d89708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
