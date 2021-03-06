//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSArray, NSString;

@interface BMPostSiriEngagementEvent <BMStoreData>
{
    _Bool _hasTaskSuccess;	// 8 = 0x8
    _Bool _hasIsUserAbandoned;	// 9 = 0x9
    _Bool _isUserAbandoned;	// 10 = 0xa
    _Bool _hasIsUserCancelled;	// 11 = 0xb
    _Bool _isUserCancelled;	// 12 = 0xc
    int _taskSuccess;	// 16 = 0x10
    NSString *_UISessionID;	// 24 = 0x18
    NSString *_taskID;	// 32 = 0x20
    NSString *_taskType;	// 40 = 0x28
    NSString *_conversationPath;	// 48 = 0x30
    NSArray *_pseEvents;	// 56 = 0x38
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000006bdbd
- (void).cxx_destruct;	// IMP=0x000000000006c4e8
@property(readonly, nonatomic) NSArray *pseEvents; // @synthesize pseEvents=_pseEvents;
@property(readonly, nonatomic) _Bool isUserCancelled; // @synthesize isUserCancelled=_isUserCancelled;
@property(nonatomic) _Bool hasIsUserCancelled; // @synthesize hasIsUserCancelled=_hasIsUserCancelled;
@property(readonly, nonatomic) _Bool isUserAbandoned; // @synthesize isUserAbandoned=_isUserAbandoned;
@property(nonatomic) _Bool hasIsUserAbandoned; // @synthesize hasIsUserAbandoned=_hasIsUserAbandoned;
@property(readonly, nonatomic) int taskSuccess; // @synthesize taskSuccess=_taskSuccess;
@property(nonatomic) _Bool hasTaskSuccess; // @synthesize hasTaskSuccess=_hasTaskSuccess;
@property(readonly, nonatomic) NSString *conversationPath; // @synthesize conversationPath=_conversationPath;
@property(readonly, nonatomic) NSString *taskType; // @synthesize taskType=_taskType;
@property(readonly, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) NSString *UISessionID; // @synthesize UISessionID=_UISessionID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006beae
- (id)serialize;	// IMP=0x000000000006be48
@property(readonly, nonatomic) unsigned int dataVersion;
- (void)writeTo:(id)arg1;	// IMP=0x000000000006bb38
- (id)initByReadFrom:(id)arg1;	// IMP=0x000000000006b658
@property(readonly, copy) NSString *description;
- (id)initWithUISessionId:(id)arg1 domain:(id)arg2 action:(id)arg3 isPostSiriEngagement:(_Bool)arg4 pseDeltaDuration:(double)arg5 pseDeltaSinceUIStart:(double)arg6 pseDeltaSinceUIEnd:(double)arg7 pseContents:(id)arg8;	// IMP=0x000000000006b013
- (id)initWithUISessionID:(id)arg1 taskID:(id)arg2 taskType:(id)arg3 conversationPath:(id)arg4 taskSuccess:(int)arg5 isUserAbandoned:(_Bool)arg6 isUserCancelled:(_Bool)arg7 pseEvents:(id)arg8;	// IMP=0x000000000006aea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

