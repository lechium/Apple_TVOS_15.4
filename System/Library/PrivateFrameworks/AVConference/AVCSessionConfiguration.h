//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSUUID;
@protocol NSCopying, OS_nw_activity;

@interface AVCSessionConfiguration : NSObject
{
    long long _sessionMode;	// 8 = 0x8
    NSObject<NSCopying> *_reportingHierarchyToken;	// 16 = 0x10
    _Bool _oneToOneModeEnabled;	// 24 = 0x18
    NSUUID *_conversationID;	// 32 = 0x20
    NSDate *_conversationTimeBase;	// 40 = 0x28
    NSDate *_conversationTimeBaseTruncated;	// 48 = 0x30
    NSObject<OS_nw_activity> *_parentNWActivity;	// 56 = 0x38
}

+ (long long)sessionModeWithClientSessionMode:(long long)arg1;	// IMP=0x0000000000358061
+ (long long)clientSessionModeWithSessionMode:(long long)arg1;	// IMP=0x0000000000358047
@property(nonatomic, setter=setParentNWActivity:) NSObject<OS_nw_activity> *parentNWActivity; // @synthesize parentNWActivity=_parentNWActivity;
@property(copy, nonatomic) NSDate *conversationTimeBaseTruncated; // @synthesize conversationTimeBaseTruncated=_conversationTimeBaseTruncated;
@property(copy, nonatomic) NSDate *conversationTimeBase; // @synthesize conversationTimeBase=_conversationTimeBase;
@property(copy, nonatomic) NSUUID *conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(copy, nonatomic) NSObject<NSCopying> *reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
- (void)cleanupNwActivity;	// IMP=0x00000000003581ff
- (id)deserializeNwActivity:(id)arg1;	// IMP=0x0000000000358141
- (id)serializeNwActivity:(id)arg1;	// IMP=0x000000000035807b
- (id)dictionary;	// IMP=0x0000000000357e48
- (void)setUpWithDictionary:(id)arg1;	// IMP=0x0000000000357c8a
@property(nonatomic) long long sessionMode;
- (void)dealloc;	// IMP=0x0000000000357b03

@end
