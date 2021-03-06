//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface OspreyConnectionPool : NSObject
{
    NSObject<OS_dispatch_queue> *_poolQueue;	// 8 = 0x8
    NSMapTable *_connectionMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ee86
- (id)connectionForConfiguration:(id)arg1;	// IMP=0x000000000000e74e
- (id)init;	// IMP=0x000000000000e6a5

@end

