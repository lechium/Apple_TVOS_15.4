//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject
{
    NSMutableArray *_data;	// 8 = 0x8
    _Bool _sortable;	// 16 = 0x10
    NSArray *_header;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000af4be
@property(nonatomic) _Bool sortable; // @synthesize sortable=_sortable;
@property(retain, nonatomic) NSArray *header; // @synthesize header=_header;
- (void)addRow:(id)arg1;	// IMP=0x00000000000af47b
- (id)rowAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000af465
@property(readonly, nonatomic) unsigned long long rowsCount;
- (id)init;	// IMP=0x00000000000af3cb

@end
