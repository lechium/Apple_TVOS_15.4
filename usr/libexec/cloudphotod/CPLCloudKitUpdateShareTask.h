//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, NSString;
@protocol CPLEngineTransportGroup;

@interface CPLCloudKitUpdateShareTask
{
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    CPLCloudKitScope *_cloudKitScope;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009d18f
- (void)runOperations;	// IMP=0x001000000009d07e
- (void)_updateCKShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009cd57
- (_Bool)_isValidListOfShareParticipants:(id)arg1;	// IMP=0x001000000009cc07
- (void)_modifyParticipantsOfCKShare:(id)arg1 newParticipants:(id)arg2;	// IMP=0x001000000009c4f0
- (_Bool)_checkNonNilUserIdentifierEquality:(id)arg1 withUserIdentifier:(id)arg2;	// IMP=0x001000000009c483
- (void)_uploadCKShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009bc87
- (void)_fetchCKShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b911
- (id)cloudKitScope;	// IMP=0x001000000009b8b8
- (id)initWithController:(id)arg1 scope:(id)arg2 transportScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009b7d1

// Remaining properties
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;

@end

