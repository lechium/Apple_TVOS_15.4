//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Notes/ICSearchIndexable-Protocol.h>

@class NSSet, NSString;

@protocol ICSearchIndexableNote <ICSearchIndexable>
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *accountName;
@property(readonly, copy, nonatomic) NSString *folderNameForNoteList;
@property(readonly, copy, nonatomic) NSString *folderName;
@property(readonly, nonatomic) _Bool isUnsupported;
@property(readonly, nonatomic) _Bool isSharedReadOnly;
@property(readonly, nonatomic) _Bool isSharedViaICloudFolder;
@property(readonly, nonatomic) _Bool isSharedViaICloud;
@property(readonly, copy, nonatomic) NSString *contentInfoText;
@property(readonly, copy, nonatomic) NSString *noteAsPlainTextWithoutTitle;
@property(readonly, copy, nonatomic) NSString *trimmedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool isPasswordProtected;
@property(readonly, nonatomic) long long currentStatus;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) _Bool isDeletedOrInTrash;
@property(readonly, nonatomic) _Bool hasUnreadChanges;
@property(readonly, nonatomic) NSSet *noteCellKeyPaths;
@property(readonly, nonatomic) _Bool isModernNote;
@end

