//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFItemDeletionProtocol-Protocol.h>

@class NSString;

@interface _HFDeletableTransformItem <HFItemDeletionProtocol, HFHomeObserver>
{
}

- (id)hf_deleteItem;	// IMP=0x00000000001235a9
- (_Bool)hf_canDeleteItem;	// IMP=0x000000000012352d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

