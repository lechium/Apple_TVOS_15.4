//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataHarvester-Protocol.h>

@class NSArray, NSMutableDictionary, NSPredicate, NSString, _CDInteractionStore;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester>
{
    NSMutableDictionary *_identifierToContactMap;	// 8 = 0x8
    _CDInteractionStore *_store;	// 16 = 0x10
    NSPredicate *_predicate;	// 24 = 0x18
    NSArray *_interactions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000152ca9
@property(readonly, nonatomic) NSArray *interactions; // @synthesize interactions=_interactions;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(retain, nonatomic) _CDInteractionStore *store; // @synthesize store=_store;
- (id)contactForIdentifier:(id)arg1;	// IMP=0x0000000000152c53
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001525f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

