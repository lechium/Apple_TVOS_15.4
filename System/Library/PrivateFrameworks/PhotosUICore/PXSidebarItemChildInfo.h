//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHCollection, PHFetchResult;

@interface PXSidebarItemChildInfo : NSObject
{
    PHCollection *_collection;	// 8 = 0x8
    PHFetchResult *_fetchResult;	// 16 = 0x10
    long long _childIndexInFetchResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001c4119
@property(readonly, nonatomic) long long childIndexInFetchResult; // @synthesize childIndexInFetchResult=_childIndexInFetchResult;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
- (id)initWithListItem:(id)arg1 dataSection:(id)arg2 childIndex:(long long)arg3;	// IMP=0x00000000001c3f32

@end

