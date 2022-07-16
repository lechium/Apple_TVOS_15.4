//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import <CalDAV/CoreDAVTaskDelegate-Protocol.h>
#import <CalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVUpdateACLTaskGroup, NSDictionary, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVAddDropBoxAttachmentsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate>
{
    _Bool _attendeesCanManageDropBox;	// 88 = 0x58
    int _state;	// 92 = 0x5c
    NSDictionary *_putFailureSizes;	// 96 = 0x60
    NSMutableDictionary *_sentAttachmentURLsToETags;	// 104 = 0x68
    NSURL *_dropboxURL;	// 112 = 0x70
    NSDictionary *_attachments;	// 120 = 0x78
    NSDictionary *_contentTypes;	// 128 = 0x80
    NSSet *_attendeePrincipalURLs;	// 136 = 0x88
    NSSet *_aceItems;	// 144 = 0x90
    CoreDAVUpdateACLTaskGroup *_updateACLTaskGroup;	// 152 = 0x98
}

+ (id)dropboxACEItemsForPrincipalURLs:(id)arg1 baseURL:(id)arg2 writable:(_Bool)arg3;	// IMP=0x000000000001eb03
- (void).cxx_destruct;	// IMP=0x000000000001f10c
@property(retain, nonatomic) CoreDAVUpdateACLTaskGroup *updateACLTaskGroup; // @synthesize updateACLTaskGroup=_updateACLTaskGroup;
@property(retain, nonatomic) NSSet *aceItems; // @synthesize aceItems=_aceItems;
@property(retain, nonatomic) NSSet *attendeePrincipalURLs; // @synthesize attendeePrincipalURLs=_attendeePrincipalURLs;
@property(retain, nonatomic) NSDictionary *contentTypes; // @synthesize contentTypes=_contentTypes;
@property(retain, nonatomic) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSURL *dropboxURL; // @synthesize dropboxURL=_dropboxURL;
@property(retain, nonatomic) NSMutableDictionary *sentAttachmentURLsToETags; // @synthesize sentAttachmentURLsToETags=_sentAttachmentURLsToETags;
@property(nonatomic) _Bool attendeesCanManageDropBox; // @synthesize attendeesCanManageDropBox=_attendeesCanManageDropBox;
@property(retain, nonatomic) NSDictionary *putFailureSizes; // @synthesize putFailureSizes=_putFailureSizes;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000001e9fc
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x000000000001e6bb
- (void)startTaskGroup;	// IMP=0x000000000001e572
- (void)_sendAttachments;	// IMP=0x000000000001e129
- (void)_makeDropBox;	// IMP=0x000000000001e037
- (void)_updateACLWithState:(int)arg1;	// IMP=0x000000000001ddf4
- (void)_finishWithError:(id)arg1 state:(int)arg2;	// IMP=0x000000000001dc6c
@property(readonly, retain, nonatomic) NSDictionary *etags;
- (id)initWithAccountInfoProvider:(id)arg1 dropboxURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 attendeePrincipalURLs:(id)arg5 attendeesCanManageDropBox:(_Bool)arg6 taskManager:(id)arg7;	// IMP=0x000000000001d8ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <CoreDAVTaskGroupDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

