//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface PLCloudDownloadBatchDetails : NSObject
{
    _Bool _hasResourceChanges;	// 8 = 0x8
    _Bool _needsWidgetTimelineReload;	// 9 = 0x9
    long long _numberOfPhotos;	// 16 = 0x10
    long long _numberOfVideos;	// 24 = 0x18
    NSArray *_cmmUUIDsToNotify;	// 32 = 0x20
    NSSet *_confirmedResourceIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002b270f
@property(copy, nonatomic) NSSet *confirmedResourceIDs; // @synthesize confirmedResourceIDs=_confirmedResourceIDs;
@property(copy, nonatomic) NSArray *cmmUUIDsToNotify; // @synthesize cmmUUIDsToNotify=_cmmUUIDsToNotify;
@property(nonatomic) long long numberOfVideos; // @synthesize numberOfVideos=_numberOfVideos;
@property(nonatomic) long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(nonatomic) _Bool needsWidgetTimelineReload; // @synthesize needsWidgetTimelineReload=_needsWidgetTimelineReload;
@property(nonatomic) _Bool hasResourceChanges; // @synthesize hasResourceChanges=_hasResourceChanges;
- (void)unionBatchDetails:(id)arg1;	// IMP=0x00000000002b2450

@end

