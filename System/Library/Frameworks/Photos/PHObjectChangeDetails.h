//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHObject;

@interface PHObjectChangeDetails : NSObject
{
    PHObject *_objectBeforeChanges;	// 8 = 0x8
    PHObject *_objectAfterChanges;	// 16 = 0x10
    _Bool _assetContentChanged;	// 24 = 0x18
    _Bool _assetCollectionTitlePropertiesChanged;	// 25 = 0x19
    struct os_unfair_lock_s _stateLock;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000038b0f
- (id)description;	// IMP=0x0000000000038a37
@property(readonly) _Bool objectWasDeleted;
@property(readonly, nonatomic) _Bool assetCollectionTitlePropertiesChanged;
@property(readonly) _Bool assetContentChanged;
- (void)_calculateDiffs;	// IMP=0x000000000003860b
@property(readonly) PHObject *objectAfterChanges;
@property(readonly) PHObject *objectBeforeChanges;
- (id)initWithPHObject:(id)arg1;	// IMP=0x0000000000038534

@end

