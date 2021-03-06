//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MKClipServices : NSObject
{
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000000ebf5
- (void).cxx_destruct;	// IMP=0x000000000000ef55
- (void)requestAppClip:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ef43
- (void)_validateAppClipBasedQuickLinks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000eedf
- (void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ed0c
- (void)appClipWithQuickLink:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ecfc
- (id)init;	// IMP=0x000000000000ec7a

@end

