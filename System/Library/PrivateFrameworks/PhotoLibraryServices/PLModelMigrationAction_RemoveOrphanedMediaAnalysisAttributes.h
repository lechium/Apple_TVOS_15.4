//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLModelMigrationAction-Protocol.h>

@class NSProgress, NSString;

@interface PLModelMigrationAction_RemoveOrphanedMediaAnalysisAttributes <PLModelMigrationAction>
{
}

+ (long long)actionProgressWeight;	// IMP=0x0000000000026538
- (long long)performActionWithManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000263e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSProgress *progress;
@property(readonly) Class superclass;

@end

