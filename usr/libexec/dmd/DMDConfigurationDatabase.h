//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x0040000000026dc6
+ (id)newUserDatabase;	// IMP=0x0010000000026d6c
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x0010000000026cfb
+ (id)managedObjectModel;	// IMP=0x0010000000026a13
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x0040000000026f22
- (id)init;	// IMP=0x0010000000026ea0
- (id)description;	// IMP=0x0010000000026af6

@end

