//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardModel/HBMDataSource-Protocol.h>

@class HBMStoreCollection, NSString;
@protocol HBMDataSourceDelegate;

@interface HBMLegacyFileDataSource <HBMDataSource>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HBMStoreCollection *_collection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c02f
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (_Bool)load:(id *)arg1;	// IMP=0x000000000000be07
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
@property(readonly, copy, nonatomic) HBMStoreCollection *collection; // @synthesize collection=_collection;
- (void)presentedItemDidChange;	// IMP=0x000000000000bd6f
- (id)initWithURL:(id)arg1 options:(id)arg2;	// IMP=0x000000000000bd2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HBMDataSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

