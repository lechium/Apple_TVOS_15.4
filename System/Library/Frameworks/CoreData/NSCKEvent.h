//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface NSCKEvent
{
}

+ (id)entityPath;	// IMP=0x0000000000098da1

// Remaining properties
@property(nonatomic) long long cloudKitEventType; // @dynamic cloudKitEventType;
@property(nonatomic) long long countAffectedObjects; // @dynamic countAffectedObjects;
@property(nonatomic) long long countFinishedObjects; // @dynamic countFinishedObjects;
@property(retain, nonatomic) NSDate *endedAt; // @dynamic endedAt;
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(retain, nonatomic) NSUUID *eventIdentifier; // @dynamic eventIdentifier;
@property(retain, nonatomic) NSDate *startedAt; // @dynamic startedAt;
@property(nonatomic) _Bool succeeded; // @dynamic succeeded;

@end

