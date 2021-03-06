//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface HBMDataSourceConfiguration : NSObject
{
    _Bool _retailDemoMode;	// 8 = 0x8
    NSURL *_storeURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c689
@property(readonly, nonatomic, getter=isRetailDemoMode) _Bool retailDemoMode; // @synthesize retailDemoMode=_retailDemoMode;
@property(readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
- (id)initWithStoreURL:(id)arg1 retailDemoMode:(_Bool)arg2;	// IMP=0x000000000000c5f8

@end

