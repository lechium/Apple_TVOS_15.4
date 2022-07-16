//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLiCPLTransferProgress : NSObject
{
    unsigned long long _notUploadedPhotosCount;	// 8 = 0x8
    unsigned long long _notUploadedVideosCount;	// 16 = 0x10
    unsigned long long _notUploadedItemsCount;	// 24 = 0x18
}

@property(nonatomic) unsigned long long notUploadedItemsCount; // @synthesize notUploadedItemsCount=_notUploadedItemsCount;
@property(nonatomic) unsigned long long notUploadedVideosCount; // @synthesize notUploadedVideosCount=_notUploadedVideosCount;
@property(nonatomic) unsigned long long notUploadedPhotosCount; // @synthesize notUploadedPhotosCount=_notUploadedPhotosCount;
- (id)description;	// IMP=0x0000000000353194

@end

