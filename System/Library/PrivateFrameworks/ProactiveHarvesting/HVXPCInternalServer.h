//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveHarvesting/HVXPCInternalServiceProtocol-Protocol.h>

@interface HVXPCInternalServer : NSObject <HVXPCInternalServiceProtocol>
{
}

- (void)harvestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000298d8
- (void)statsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002984e
- (void)deleteContentWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000297c9
- (void)donateSearchableItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029744
- (void)refillHarvestBudgetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000296c2
- (void)overrideIsConnectedToPower:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000296b0
- (void)contentAvailableFromSources:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002962b
- (void)restoreConsumptionOfDataSources:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000295a6
- (void)disableConsumptionOfDataSources:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029521
- (void)enableConsumptionOfDataSources:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002949c

@end

