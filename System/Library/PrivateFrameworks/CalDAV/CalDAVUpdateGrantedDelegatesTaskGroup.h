//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVPropPatchTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CalDAVGetGrantedDelegatesTaskGroup, NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    int _state;	// 88 = 0x58
    NSSet *_addWriteURLs;	// 96 = 0x60
    NSSet *_addReadURLs;	// 104 = 0x68
    NSSet *_removeURLs;	// 112 = 0x70
    NSSet *_updatedWriteURLs;	// 120 = 0x78
    NSSet *_updatedReadURLs;	// 128 = 0x80
    CalDAVGetGrantedDelegatesTaskGroup *_getGrantedDelegatesTaskGroup;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000350b4
@property(retain, nonatomic) CalDAVGetGrantedDelegatesTaskGroup *getGrantedDelegatesTaskGroup; // @synthesize getGrantedDelegatesTaskGroup=_getGrantedDelegatesTaskGroup;
@property(retain, nonatomic) NSSet *updatedReadURLs; // @synthesize updatedReadURLs=_updatedReadURLs;
@property(retain, nonatomic) NSSet *updatedWriteURLs; // @synthesize updatedWriteURLs=_updatedWriteURLs;
@property(retain, nonatomic) NSSet *removeURLs; // @synthesize removeURLs=_removeURLs;
@property(retain, nonatomic) NSSet *addReadURLs; // @synthesize addReadURLs=_addReadURLs;
@property(retain, nonatomic) NSSet *addWriteURLs; // @synthesize addWriteURLs=_addWriteURLs;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;	// IMP=0x0000000000034e81
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000034a66
- (void)startTaskGroup;	// IMP=0x0000000000034a54
- (void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(_Bool)arg2;	// IMP=0x0000000000034891
- (void)_updateDelegatesWithAllowWrite:(_Bool)arg1;	// IMP=0x00000000000343e4
- (void)_fetchExistingGrantedDelegates;	// IMP=0x000000000003424f
- (void)_finishWithError:(id)arg1 state:(int)arg2;	// IMP=0x00000000000340c7
- (id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5;	// IMP=0x0000000000033fe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
