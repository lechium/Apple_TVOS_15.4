//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TVHKStoreItemCreditsOperation;

__attribute__((visibility("hidden")))
@interface TVHKStoreItemCreditsContext : NSObject
{
    TVHKStoreItemCreditsOperation *_operation;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006a002
@property(readonly, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) TVHKStoreItemCreditsOperation *operation; // @synthesize operation=_operation;
- (id)init;	// IMP=0x0000000000069f87

@end

