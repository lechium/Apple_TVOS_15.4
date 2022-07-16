//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSManagedObjectID;

@interface PXThumbnailCacheEntry : NSObject
{
    NSManagedObjectID *_objectID;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    struct PHAssetResourceTableDataSpecification _dataSpec;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000839f41
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) struct PHAssetResourceTableDataSpecification dataSpec; // @synthesize dataSpec=_dataSpec;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (id)initWithObjectID:(id)arg1 dataSpec:(const struct PHAssetResourceTableDataSpecification *)arg2 data:(id)arg3;	// IMP=0x0000000000839e64

@end

