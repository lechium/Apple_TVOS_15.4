//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVIndexManager, CKVSettings;
@protocol OS_dispatch_queue;

@interface CKVServiceFactory : NSObject
{
    CKVIndexManager *_indexManager;	// 8 = 0x8
    CKVSettings *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serviceQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c0d15
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(readonly, nonatomic) CKVSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) CKVIndexManager *indexManager; // @synthesize indexManager=_indexManager;
- (id)init;	// IMP=0x00000000000c0caf
- (id)initWithQueue:(id)arg1 indexManager:(id)arg2 settings:(id)arg3;	// IMP=0x00000000000c0ac9

@end

