//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppRemovabilityManager : NSObject
{
    NSMutableDictionary *_allAppRemovability;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)stringForRemovability:(unsigned long long)arg1;	// IMP=0x0040000000061a20
+ (id)sharedInstance;	// IMP=0x0010000000061762
- (void).cxx_destruct;	// IMP=0x002000000006296e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *allAppRemovability; // @synthesize allAppRemovability=_allAppRemovability;
- (_Bool)_onQueue_writeRemovabilityWithError:(id *)arg1;	// IMP=0x00100000000624fa
- (_Bool)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 byClient:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000061e13
- (id)removabilityMetadataForAppWithBundleID:(id)arg1;	// IMP=0x0010000000061c48
@property(readonly, nonatomic) NSURL *legacyRemovabilityURL; // @dynamic legacyRemovabilityURL;
@property(readonly, nonatomic) NSURL *removabilityURL; // @dynamic removabilityURL;
- (void)_onQueue_handleStateChangeForBundleID:(id)arg1;	// IMP=0x0010000000061a5a
- (id)init;	// IMP=0x00100000000617ef

@end
