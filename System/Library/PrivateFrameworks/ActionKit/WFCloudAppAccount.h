//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/CLAPIEngineDelegate-Protocol.h>

@class CLAPIEngine, NSString;

@interface WFCloudAppAccount <CLAPIEngineDelegate>
{
    CLAPIEngine *_engine;	// 8 = 0x8
}

+ (id)localizedServiceName;	// IMP=0x000000000036b71f
+ (id)serviceID;	// IMP=0x000000000036b712
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;	// IMP=0x000000000036b69f
- (void).cxx_destruct;	// IMP=0x000000000036b97b
- (void)requestDidFailWithError:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000036b92a
- (void)accountInformationRetrievalSucceeded:(id)arg1 connectionIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000036b8fd
- (void)refreshWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036b811
- (void)dealloc;	// IMP=0x000000000036b7a4
@property(readonly, nonatomic) CLAPIEngine *engine; // @synthesize engine=_engine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

