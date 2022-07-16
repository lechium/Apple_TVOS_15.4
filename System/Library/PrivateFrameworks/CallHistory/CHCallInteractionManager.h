//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/CHCallInteractionDataSourceDelegate-Protocol.h>
#import <CallHistory/CHCallInteractionManager-Protocol.h>

@class CHDelegateController, NSString;
@protocol CHCallInteractionDataSource;

@interface CHCallInteractionManager : NSObject <CHCallInteractionDataSourceDelegate, CHCallInteractionManager>
{
    id <CHCallInteractionDataSource> _dataSource;	// 8 = 0x8
    CHDelegateController *_delegateController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c500
@property(readonly, nonatomic) CHDelegateController *delegateController; // @synthesize delegateController=_delegateController;
@property(readonly, nonatomic) id <CHCallInteractionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)callInteractionsDidChangeForDataSource:(id)arg1;	// IMP=0x000000000001c39b
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000001c329
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000001c2a3
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000001c20a
- (id)init;	// IMP=0x000000000001c1ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
