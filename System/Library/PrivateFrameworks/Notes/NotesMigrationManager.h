//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NotesMigrationManager : NSObject
{
}

- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000128f2
- (_Bool)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001222e
- (_Bool)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2;	// IMP=0x000000000001218e

@end

