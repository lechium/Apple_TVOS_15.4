//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataAccess/DAAccountChangeHandlerAccountStoreUpdater-Protocol.h>

@class ACAccountStore, NSString;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater>
{
    ACAccountStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014dbe
- (void)removeAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014da3
- (void)updateAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014d8d
- (void)addAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014d77
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0000000000014d0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
