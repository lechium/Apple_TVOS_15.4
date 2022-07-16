//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PHFetchResult;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
    NSMutableDictionary *_images;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_imagesIsolationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000311766
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imagesIsolationQueue; // @synthesize imagesIsolationQueue=_imagesIsolationQueue;
@property(retain, nonatomic) NSMutableDictionary *images; // @synthesize images=_images;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (id)nameAtIndexPath:(id)arg1;	// IMP=0x00000000003114da
- (unsigned long long)numberOfAssets;	// IMP=0x0000000000311496
- (id)imageAtIndexPath:(id)arg1;	// IMP=0x00000000003111fe
- (id)init;	// IMP=0x0000000000311106

@end
