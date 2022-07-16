//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADObjectID, NSData, NSPredicate, NSString;

@protocol CADCalendarItemInterface
- (void)CADDatabaseFetchEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(NSArray *, int))arg3;
- (void)CADDatabaseCountEntitiesOfType:(int)arg1 withContactIdentifier:(NSString *)arg2 withReply:(void (^)(int, int))arg3;
- (void)CADDatabaseRemoveContactIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseAddContactWithIdentifier:(NSString *)arg1 forCalendarItem:(CADObjectID *)arg2 withReply:(void (^)(int))arg3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(CADObjectID *)arg1 reply:(void (^)(int, NSArray *))arg2;
- (void)CADDatabaseExportCalendarItemAsICS:(CADObjectID *)arg1 withOptions:(unsigned long long)arg2 reply:(void (^)(int, NSData *))arg3;
- (void)CADDatabaseiTIPImport:(NSData *)arg1 intoCalendarID:(CADObjectID *)arg2 reply:(void (^)(int))arg3;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(NSPredicate *)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)CADDatabaseGetAlarmWithExternalID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(NSString *)arg1 inCalendar:(CADObjectID *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCalendarItemWithUUID:(NSString *)arg1 reply:(void (^)(int, CADObjectID *))arg2;
@end

