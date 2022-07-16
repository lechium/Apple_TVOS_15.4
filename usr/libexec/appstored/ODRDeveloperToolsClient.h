//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODRDeveloperToolsClient : NSObject
{
}

- (void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x002000000014da86
- (void)getSimulatedBandwidthWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000014da34
- (void)registerManifest:(id)arg1 forBundleID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000014d74d
- (void)purgeTagWithName:(id)arg1 inBundleWithID:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000014d1bf
- (void)purgeAllTagsInBundleWithID:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014cd30
- (void)tagStatusForBundle:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000014c569
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000014c416
- (id)interface;	// IMP=0x001000000014c3f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
