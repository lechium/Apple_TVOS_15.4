//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PXSectionedDataSource;

@interface PXGDataSourceChange : NSObject
{
    NSArray *_changeDetails;	// 8 = 0x8
    PXSectionedDataSource *_dataSourceBeforeChanges;	// 16 = 0x10
    PXSectionedDataSource *_dataSourceAfterChanges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003b2b60
@property(readonly, nonatomic) PXSectionedDataSource *dataSourceAfterChanges; // @synthesize dataSourceAfterChanges=_dataSourceAfterChanges;
@property(readonly, nonatomic) PXSectionedDataSource *dataSourceBeforeChanges; // @synthesize dataSourceBeforeChanges=_dataSourceBeforeChanges;
@property(readonly, nonatomic) NSArray *changeDetails; // @synthesize changeDetails=_changeDetails;
- (id)initWithChangeDetails:(id)arg1 dataSourceBeforeChanges:(id)arg2 dataSourceAfterChanges:(id)arg3;	// IMP=0x00000000003b290a
- (id)init;	// IMP=0x00000000003b2890

@end

