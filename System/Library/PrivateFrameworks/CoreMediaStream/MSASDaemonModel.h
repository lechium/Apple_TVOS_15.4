//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSASDaemonModel
{
}

+ (id)defaultModel;	// IMP=0x00000000000833fe
- (void)clearAllNextActivityDates;	// IMP=0x0000000000082c33
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;	// IMP=0x0000000000082b57
- (id)nextActivityDateByPersonID;	// IMP=0x0000000000082a40
- (id)earliestNextActivityDate;	// IMP=0x00000000000828ce
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;	// IMP=0x0000000000082653
- (id)init;	// IMP=0x00000000000825f4

@end

