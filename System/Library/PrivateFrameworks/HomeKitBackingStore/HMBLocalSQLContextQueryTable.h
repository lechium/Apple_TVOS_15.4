//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface HMBLocalSQLContextQueryTable : HMFObject
{
    NSSet *_columnNames;	// 8 = 0x8
    NSMutableDictionary *_mutableIndexes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e40b
@property(readonly, nonatomic) NSMutableDictionary *mutableIndexes; // @synthesize mutableIndexes=_mutableIndexes;
@property(readonly, nonatomic) NSSet *columnNames; // @synthesize columnNames=_columnNames;
- (id)description;	// IMP=0x000000000007e308
@property(readonly, nonatomic) NSDictionary *indexes;
- (id)initWithColumnNames:(id)arg1;	// IMP=0x000000000007e221

@end

