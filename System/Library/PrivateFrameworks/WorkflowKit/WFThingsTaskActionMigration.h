//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateFormatter;

@interface WFThingsTaskActionMigration
{
    NSDateFormatter *_dateFormatter;	// 8 = 0x8
}

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;	// IMP=0x000000000002ffe7
- (void).cxx_destruct;	// IMP=0x0000000000030582
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)migrateWorkflow;	// IMP=0x00000000000300ab

@end

