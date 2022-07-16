//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGConsolidatedAddress, PGGraphPublicEventNode;

@interface PGResolvablePublicEventBusinessItem : NSObject
{
    PGGraphPublicEventNode *_publicEventNode;	// 8 = 0x8
    PGConsolidatedAddress *_consolidatedAddress;	// 16 = 0x10
    unsigned long long _businessItemMuid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c947a
@property(readonly, nonatomic) unsigned long long businessItemMuid; // @synthesize businessItemMuid=_businessItemMuid;
@property(readonly, nonatomic) PGConsolidatedAddress *consolidatedAddress; // @synthesize consolidatedAddress=_consolidatedAddress;
@property(readonly, nonatomic) PGGraphPublicEventNode *publicEventNode; // @synthesize publicEventNode=_publicEventNode;
- (id)initWithPublicEventNode:(id)arg1 consolidatedAddress:(id)arg2 businessItemMuid:(unsigned long long)arg3;	// IMP=0x00000000002c93b7

@end

