//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFSpeakTextLanguagePickerParameterMigration
{
}

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;	// IMP=0x000000000024eb7c
- (id)availableLanguageCodes;	// IMP=0x000000000024f2bb
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg1;	// IMP=0x000000000024ee50
- (void)migrateWorkflow;	// IMP=0x000000000024ebd0

@end
