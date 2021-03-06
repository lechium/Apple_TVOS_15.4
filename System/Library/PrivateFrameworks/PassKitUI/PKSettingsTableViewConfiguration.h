//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDiffableDataSourceSnapshot, NSMutableDictionary;

@interface PKSettingsTableViewConfiguration : NSObject
{
    NSMutableDictionary *_rowsForIdentifier;	// 8 = 0x8
    NSMutableDictionary *_sectionsForIdentifier;	// 16 = 0x10
    NSDiffableDataSourceSnapshot *_currentSnapshot;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000007653
- (void)diff:(id)arg1 updatedIdentifiers:(id *)arg2;	// IMP=0x00000000000074a9
- (id)snapshot;	// IMP=0x000000000000749b
- (id)rowsForSection:(id)arg1;	// IMP=0x00000000000073ba
@property(readonly, nonatomic) NSArray *sections;
- (id)sectionForSectionIdentifier:(id)arg1;	// IMP=0x00000000000072d7
- (id)rowForItemIdentifier:(id)arg1;	// IMP=0x00000000000072a5
- (void)appendSection:(id)arg1 rows:(id)arg2;	// IMP=0x0000000000007083
- (id)init;	// IMP=0x000000000000700e

@end

