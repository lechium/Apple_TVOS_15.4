//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation
{
    unsigned long long _action;	// 8 = 0x8
    NSString *_itemID;	// 16 = 0x10
    WLKWatchListModificationResponse *_response;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000017228
@property(readonly, nonatomic) WLKWatchListModificationResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)processResponse;	// IMP=0x0000000000017154
- (id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4;	// IMP=0x000000000001704d
- (id)_initWithAction:(unsigned long long)arg1 identifier:(id)arg2 identifierType:(id)arg3 brandID:(id)arg4 caller:(id)arg5;	// IMP=0x0000000000016d7e
- (id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3;	// IMP=0x0000000000016d55
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3;	// IMP=0x0000000000016d2c

@end

