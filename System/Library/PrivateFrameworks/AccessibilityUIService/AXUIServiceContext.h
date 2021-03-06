//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AXUIService, NSObject><NSCopying;

@interface AXUIServiceContext : NSObject
{
    id <AXUIService> _service;	// 8 = 0x8
    id <NSObject><NSCopying> _serviceIdentifier;	// 16 = 0x10
    NSMutableArray *_clientMessengers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000dc43
@property(retain, nonatomic) NSMutableArray *clientMessengers; // @synthesize clientMessengers=_clientMessengers;
@property(copy, nonatomic) id <NSObject><NSCopying> serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) id <AXUIService> service; // @synthesize service=_service;
- (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d9f9
- (id)clientMessengerWithIdentifier:(id)arg1;	// IMP=0x000000000000d975
- (_Bool)hasClientWithIdentifier:(id)arg1;	// IMP=0x000000000000d952
- (void)removeClientWithIdentifier:(id)arg1;	// IMP=0x000000000000d874
- (unsigned long long)_indexOfClientWithIdentifier:(id)arg1;	// IMP=0x000000000000d74a
- (void)addClientWithIdentifier:(id)arg1 connection:(id)arg2;	// IMP=0x000000000000d671
@property(readonly, nonatomic) unsigned long long clientsCount;
- (id)initWithService:(id)arg1 serviceIdentifier:(id)arg2;	// IMP=0x000000000000d58f

@end

