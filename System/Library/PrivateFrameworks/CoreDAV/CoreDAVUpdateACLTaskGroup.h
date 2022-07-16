//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVACLTaskDelegate-Protocol.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate-Protocol.h>

@class CoreDAVPropFindTask, NSSet, NSString, NSURL;

@interface CoreDAVUpdateACLTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>
{
    int _state;	// 88 = 0x58
    NSSet *_aceItems;	// 96 = 0x60
    NSURL *_url;	// 104 = 0x68
    CoreDAVPropFindTask *_fetchTask;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000005181b
@property(retain, nonatomic) CoreDAVPropFindTask *fetchTask; // @synthesize fetchTask=_fetchTask;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroupWillCancelWithError:(id)arg1;	// IMP=0x0000000000051775
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000051388
- (void)_finishWithError:(id)arg1 state:(int)arg2;	// IMP=0x0000000000051325
- (void)startTaskGroup;	// IMP=0x0000000000051313
- (void)_startSetACLWithAccessControlEntities:(id)arg1;	// IMP=0x00000000000511ea
- (void)_startGetACL;	// IMP=0x0000000000050fc9
- (id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4;	// IMP=0x0000000000050f04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

