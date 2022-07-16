//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDCKSyncTokenStore-Protocol.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject <IMDCKSyncTokenStore>
{
}

+ (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000125ed
+ (id)tokenForKey:(id)arg1;	// IMP=0x0000000000012500
+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x0000000000012393
- (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000012367
- (id)tokenForKey:(id)arg1;	// IMP=0x0000000000012340
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x0000000000012314

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
