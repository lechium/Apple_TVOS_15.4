//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError, SHLSyncSessionModifyTask;

__attribute__((visibility("hidden")))
@interface SHLModifyTaskRecovery : NSObject
{
    SHLSyncSessionModifyTask *_originalTask;	// 8 = 0x8
    NSArray *_savedGroups;	// 16 = 0x10
    NSArray *_savedTracks;	// 24 = 0x18
    NSArray *_deletedIDs;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001ff58
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *deletedIDs; // @synthesize deletedIDs=_deletedIDs;
@property(retain, nonatomic) NSArray *savedTracks; // @synthesize savedTracks=_savedTracks;
@property(retain, nonatomic) NSArray *savedGroups; // @synthesize savedGroups=_savedGroups;
@property(retain, nonatomic) SHLSyncSessionModifyTask *originalTask; // @synthesize originalTask=_originalTask;
- (id)recoverTaskFromLimitExceededError;	// IMP=0x001000000001fe7a
- (id)recoverTaskFromPartialError;	// IMP=0x001000000001fa86
@property(readonly, nonatomic) NSArray *recoverableTasks;
- (id)initWithOriginalTask:(id)arg1 savedGroups:(id)arg2 savedTracks:(id)arg3 deletedIDs:(id)arg4 error:(id)arg5;	// IMP=0x001000000001f7f8

@end

