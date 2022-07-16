//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSCKContainer;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSCKContainer *_container;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000242f8
@property(retain, nonatomic) IDSCKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000240e3
- (void)fetchObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023efa
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023bff
- (void)fetchDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000238f3
- (id)initWithContainer:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002385a

@end

