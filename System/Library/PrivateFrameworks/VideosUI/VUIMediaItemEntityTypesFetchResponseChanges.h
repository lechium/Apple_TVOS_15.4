//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VUICollectionChangeSet;

__attribute__((visibility("hidden")))
@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject
{
    _Bool _localMediaItemsAvailableDidChange;	// 8 = 0x8
    VUICollectionChangeSet *_mediaItemEntityTypesChangeSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d1221
@property(readonly, nonatomic) _Bool localMediaItemsAvailableDidChange; // @synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange;
@property(readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet; // @synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet;
- (id)description;	// IMP=0x00000000001d1055
- (id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(_Bool)arg2;	// IMP=0x00000000001d0fdf
- (id)init;	// IMP=0x00000000001d0f70

@end

