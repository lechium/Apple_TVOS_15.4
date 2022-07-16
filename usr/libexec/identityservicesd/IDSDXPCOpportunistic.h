//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSOpportunisticCache, IDSXPCConnection, NSString;

@interface IDSDXPCOpportunistic : NSObject
{
    IDSXPCConnection *_connection;	// 8 = 0x8
    IDSOpportunisticCache *_opportunisticCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008bc40
@property(retain, nonatomic) IDSOpportunisticCache *opportunisticCache; // @synthesize opportunisticCache=_opportunisticCache;
@property(retain, nonatomic) IDSXPCConnection *connection; // @synthesize connection=_connection;
- (void)copyOpportunisticCacheWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008b7a0
- (id)initWithQueue:(id)arg1 connection:(id)arg2 opportunisticCache:(id)arg3;	// IMP=0x001000000008b680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

